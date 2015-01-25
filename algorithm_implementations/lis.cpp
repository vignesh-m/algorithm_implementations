//
//  lis.cpp
//  algorithm_implementations
//
//  Created by Vignesh M on 10/12/14.
//  Copyright (c) 2014 vignesh. All rights reserved.
//

#include "lis.h"

void find_lis(vector<int> &a, vector<int> &b)
{
    vector<int> p(a.size());
    int u, v;
    b.push_back(0);
    for (int i = 1; i < a.size(); i++) {
        if (a[b.back()] < a[i]) {
            p[i] = b.back();
            b.push_back(i);
            continue;
        }
        for (u = 0, v = b.size()-1; u < v;) {
            int c = (u + v) / 2;
            if (a[b[c]] < a[i]) u=c+1; else v=c;
        }
        if (a[i] < a[b[u]]) {
            if (u > 0) p[i] = b[u-1];
            b[u] = i;
        }
    }
    for (u = b.size(), v = b.back(); u--; v = p[v]) b[u] = v;
}

struct node{
    int l;
    int b;
    bool operator<(const node& x) const
    {
        if(l<x.l && b<x.b) return true;
        return false;
    }
};
node zero={0,0};
void find_lis_node(vector<node> &a, vector<int> &b)
{
    vector<int> p(a.size());
    int u, v;
    b.push_back(0);
    for (int i = 1; i < a.size(); i++) {
        if (a[b.back()] < a[i]) {
            p[i] = b.back();
            b.push_back(i);
            continue;
        }
        for (u = 0, v = b.size()-1; u < v;) {
            int c = (u + v) / 2;
            if (a[b[c]] < a[i]) u=c+1; else v=c;
        }
        if (a[i] < a[b[u]]) {
            if (u > 0) p[i] = b[u-1];
            b[u] = i;
        }
    }
    for (u = b.size(), v = b.back(); u--; v = p[v]) b[u] = v;
}