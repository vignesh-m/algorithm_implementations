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
using namespace std;

int main(int argc, const char * argv[])
{
    freopen("/Users/vigneshm/Documents/codespace/algorithm_implementations/input.txt", "r", stdin);
    freopen("/Users/vigneshm/Documents/codespace/algorithm_implementations/output.txt", "w", stdout);
    int a,b;
    int x,y;
    cin>>a>>b;
    cout<<extended_gcd(a, b, x, y)<<" "<<x<<" "<<y;
    return 0;
}

