//
//  euclid_gcd.h
//  algorithm_implementations
//
//  Created by Vignesh M on 30/11/14.
//  Copyright (c) 2014 e-maxx. All rights reserved.
//

#ifndef __algorithm_implementations__euclid_gcd__
#define __algorithm_implementations__euclid_gcd__

#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int gcd(int a,int b);
ll lgcd(ll a,ll b);
ll llcm(ll a,ll b);
int extended_gcd (int , int , int &, int & );
ll extended_lgcd (ll , ll , ll & , ll & );
ll modular_inverse(ll ,ll );
vector<int> all_inverses(int );
#endif /* defined(__algorithm_implementations__euclid_gcd__) */
