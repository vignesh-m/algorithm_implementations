//
//  eratosthenes_sieve.cpp
//  algorithm_implementations
//
//  Created by Vignesh M on 30/11/14.
//

#include "eratosthenes_sieve.h"

vector<bool> prime_sieve(int n){
    vector<bool> prime (n+1, true);
    prime[0] = prime[1] = false;
    for (int i=2; i*i<=n; ++i)
        if (prime[i])
            if (i * 1ll * i <= n)
                for (int j=i*i; j<=n; j+=i)
                    prime[j] = false;
    return prime;
}

vector<bool> block_prime_sieve(int a,int b){
    int nsqrt=(int) sqrt (b + .0);
    int s=b-a+1;
    vector<bool> isprime=prime_sieve(nsqrt);
    vector<int> primes;
    for(int i=0;i<isprime.size();i++)
        if(isprime[i])
            primes.push_back(i);
    vector<bool> block(s,true);
    int start=a;
    for(int i=0;i<primes.size();i++){
        int start_idx = (start + primes[i] - 1) / primes[i];
        int j = max(start_idx,2) * primes[i] - start;
        for (; j<s; j+=primes[i])
            block[j] = false;
    }
    return block;
}

vector<int> linear_prime_sieve(int N){
    //gries-misra sieve
    vector<int> lp(N+1,0);
    vector<int> pr;
    for (int i=2; i<=N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
        }
        int x;
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && (x=i*pr[j])<=N; ++j)
            lp[x] = pr[j];
    }
    /*for(int i=0;i<=N;i++){
        cout<<lp[i]<<" ";
    }
    cout<<endl;
    */
    return lp;
}

vector<int> all_factorisations(int n,vector<int> lp){
    //sorted list  of factors from gries-misra lp
    int i=n;
    vector<int> factors;
    while(i!=1){
        factors.push_back(lp[i]);
        i/=lp[i];
    }
    return factors;
}