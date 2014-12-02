//
//  factorial.cpp
//  algorithm_implementations
//
//  Created by Vignesh M on 02/12/14.
//  Copyright (c) 2014 vignesh. All rights reserved.
//

#include "factorial.h"

int factmod (int n, int p) {
    //n! mod p
	int res = 1;
	while (n > 1) {
		res = (res * ((n/p) % 2 ? p-1 : 1)) % p;
		for (int i=2; i<=n%p; ++i)
			res = (res * i) % p;
		n /= p;
	}
	return res % p;
}

int fact_pow (int n, int k) {
    //largest power of k dividing n!
    int maxp=-1;
    for (int i=2; i*i<=k; ++i)
		if (k % i == 0) {
			while (k % i == 0)
				k /= i;
			if(i>maxp) maxp=i;
		}
    if(k>1) maxp=k;
    //std::cout<<maxp;
	return fact_pow_prime(n,maxp);
}

int fact_pow_prime (int n, int k) {
    //largest power of k dividing n! for prime k
	int res = 0;
	while (n) {
		n /= k;
		res += n;
	}
	return res;
}