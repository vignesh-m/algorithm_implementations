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

using namespace std;

int main(int argc, const char * argv[])
{
    freopen("/Users/vigneshm/Documents/codespace/algorithm_implementations/input.txt", "r", stdin);
    freopen("/Users/vigneshm/Documents/codespace/algorithm_implementations/output.txt", "w", stdout);
    int a,b;
    int x,y;
    vector<int> p,q,res;
    p.pb(1);p.pb(2);p.pb(1);
    q.pb(1);q.pb(2);q.pb(1);
    //cin>>a>>b;
    poly_multiply(p, q, res);
    cout<<res;
    return 0;
}

