//
//  binary_pow.cpp
//  algorithm_implementations
//
//  Created by Vignesh M on 30/11/14.
//

#include "binary_pow.h"

//O(log(n))
int binpow (int a, int n) {
	int res = 1;
	while (n) {
		if (n & 1)
			res *= a;
		a *= a;
		n >>= 1;
	}
	return res;
}

int modular_binpow(int a,int n,int mod){
    int res = 1;
    a=a%mod;
	while (n) {
		if (n & 1)
			res = (res*a)%mod;
		a = (a*a)%mod;
		n >>= 1;
	}
	return res;
}

ll lbinpow (ll a, ll n) {
	ll res = 1;
	while (n) {
		if (n & 1)
			res *= a;
		a *= a;
		n >>= 1;
	}
	return res;
}

ll modular_lbinpow(ll a,ll n,ll mod){
    ll res = 1;
    a=a%mod;
	while (n) {
		if (n & 1)
			res = (res*a)%mod;
		a = (a*a)%mod;
		n >>= 1;
	}
	return res;
}