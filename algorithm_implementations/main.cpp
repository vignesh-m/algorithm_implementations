//
//  main.cpp
//  algorithm_implementations
//
//  Created by Vignesh M on 29/11/14.
//

#include <iostream>
#include "eratosthenes_sieve.h"
#include "euler_totient.h"
#include "binary_pow.h"
#include "euclid_gcd.h"
#include "macros.cpp"
#include "factorial.h"
#include "prime.h"
#include "fourier_transform.h"
#include "bfs.h"
#include "dfs.h"
#include "lis.h"

using namespace std;

int main(int argc, const char * argv[])
{
    freopen("/Users/vigneshm/Documents/codespace/algorithm_implementations/input.txt", "r", stdin);
    freopen("/Users/vigneshm/Documents/codespace/algorithm_implementations/output.txt", "w", stdout);
    int a[] = { 1, 9, 3, 8, 11, 4, 5, 6, 4, 19, 7, 1, 7 };
    vector<int> seq(a, a+sizeof(a)/sizeof(a[0])); // seq : Input Vector
    vector<int> lis;                              // lis : Vector containing indexes of longest subsequence
    find_lis(seq, lis);
    //Printing actual output
    for (int i = 0; i < lis.size(); i++)
        printf("%d ", seq[lis[i]]);
    printf("\n");
    return 0;
}
