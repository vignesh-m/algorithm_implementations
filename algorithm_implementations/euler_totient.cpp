//
//  euler_totient.cpp
//  algorithm_implementations
//
//  Created by Vignesh M on 29/11/14.
//
#include "euler_totient.h"
/**
*   if n=p1^a1 * p2^a2 * .... pn^an
*   phi(n)=n*(1-1/p1)*(1-1/p2)*....(1-1/pn)
*   Fermat-Euler Theorem : a^(phi(n))=1(mod n)
**/

//O(sqrt(n))

int euler_phi (int n) {
	int result = n;
	for (int i=2; i*i<=n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	return result;
}

long long euler_lphi (long long n) {
	long long result = n;
	for (int i=2; i*i<=n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	return result;
}

 