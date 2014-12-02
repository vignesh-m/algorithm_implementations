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