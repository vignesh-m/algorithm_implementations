//
//  bfs.cpp
//  algorithm_implementations
//
//  Created by Vignesh M on 02/12/14.
//  Copyright (c) 2014 vignesh. All rights reserved.
//

#include "bfs.h"



void bfs(int root,int n,vector<vector<int> > graph){
    int s=root;
    queue<int> q;
    q.push (s);
    vector<bool> used (n);
    vector<int> d (n), p (n);
    used[s] = true;
    p[s] = -1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (size_t i=0; i<graph[v].size(); ++i) {
            int to = graph[v][i];
            if (!used[to]) {
                used[to] = true;
                q.push (to);
                d[to] = d[v] + 1;
                p[to] = v;
            }
        }
    }
    for(int to=0;to<n;to++)
    if (!used[to])
        cout << "No path!";
    else {
        vector<int> path;
        for (int v=to; v!=-1; v=p[v])
            path.push_back (v);
        reverse (path.begin(), path.end());
        cout << "Path: ";
        for (size_t i=0; i<path.size(); ++i)
            cout << path[i]  << " ";
    }
}