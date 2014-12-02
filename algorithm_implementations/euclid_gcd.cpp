//
//  euclid_gcd.cpp
//  algorithm_implementations
//
//  Created by Vignesh M on 30/11/14.
//

#include "euclid_gcd.h"

int gcd(int a,int b){
        while (b) {
            a %= b;
            int temp=a;
            a=b;
            b=temp;
        }
        return a;
}

ll lgcd(ll a,ll b){
    while (b) {
        a %= b;
        ll temp=a;
        a=b;
        b=temp;
    }
    return a;
}

ll llcm(ll a,ll b){
    return a/lgcd(a,b)*b;
}

int extended_gcd (int a, int b, int & x, int & y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	int x1, y1;
	int d = extended_gcd (b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}

ll extended_lgcd (ll a, ll b, ll & x, ll & y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	ll x1, y1;
	ll d = extended_lgcd (b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}

ll modular_inverse(ll n,ll mod){
    ll x,y;
    ll g=extended_lgcd(n, mod, x, y);
    if(g!=1) return -1;
    return (x+mod)%mod;
}

vector<int> all_inverses(int m){
    vector<int> r(m,0);
    r[0]=-1;
    r[1]=1;
    for(int i=2;i<m;i++){
        r[i]=(m - (m/i) * r[m%i] % m) % m;
    }
    return r;
}
