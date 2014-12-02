//
//  prime.cpp
//  algorithm_implementations
//
//  Created by Vignesh M on 02/12/14.
//  Copyright (c) 2014 vignesh. All rights reserved.
//

#include "prime.h"

ll modular_binpow(ll a,ll n,ll mod){
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

int miller_rabin(const int bases[],int base_len,int n){
    int u=n-1;
    int t=0,j;
    while(u%2==0) {
        t++;
        u>>=1;
    }
    for(j=0;j<base_len;j++){
        int a=bases[j],x;
        int i;
        if(a>n) a=a%n;
        if(a==0) continue;
        x=modular_binpow(a, u, n);
        if (x == 1 || x == n-1) continue;
        for (i=1; i<t; i++) {
			x=(((ll)x)*x)%n;
			if (x == 1)   return 0;
			if (x == n-1) break;
		}
        if (i == t) return 0;
    }
    return 1;
}