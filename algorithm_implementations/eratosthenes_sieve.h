//
//  eratosthenes_sieve.h
//  algorithm_implementations
//
//  Created by Vignesh M on 30/11/14.
//  Copyright (c) 2014 e-maxx. All rights reserved.
//

#ifndef __algorithm_implementations__eratosthenes_sieve__
#define __algorithm_implementations__eratosthenes_sieve__

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<bool> prime_sieve(int);
vector<bool> block_prime_sieve(int ,int );
vector<int> linear_prime_sieve(int );
vector<int> all_factorisations(int ,vector<int> );
#endif /* defined(__algorithm_implementations__eratosthenes_sieve__) */
