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
#include "bfs.h"
#include "dfs.h"

using namespace std;

int main(int argc, const char * argv[])
{
    freopen("/Users/vigneshm/Documents/codespace/algorithm_implementations/input.txt", "r", stdin);
    freopen("/Users/vigneshm/Documents/codespace/algorithm_implementations/output.txt", "w", stdout);
    int n;
    vector<vector<int> > graph;
    cin>>n;
    graph.assign(n,vector<int>());
    int edgenum,x,y;
    cin>>edgenum;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        graph[x].pb(y);
        graph[y].pb(x);
    }
    predfs(0,n,graph);
    return 0;
}

