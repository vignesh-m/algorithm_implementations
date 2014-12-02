//
//  dfs.cpp
//  algorithm_implementations
//
//  Created by Vignesh M on 02/12/14.
//  Copyright (c) 2014 vignesh. All rights reserved.
//

#include "dfs.h"

vector<vector<int> > dfs_graph;
vector <int> time_in, time_out;
vector <int> color;
int dfs_timer = 0;

void dfs (int v) {
	time_in [v] = dfs_timer ++;
	color [v] = 1;
	for (vector <int> :: iterator i = dfs_graph [v] .begin (); i != dfs_graph[v].end(); ++ i){
		if (color [*i] == 0)
			dfs (*i);
    }
	color [v] = 2;
	time_out [v] = dfs_timer ++;
}

void predfs(int root,int n,vector<vector<int> > graph){
    dfs_graph.assign(graph.begin(),graph.end());
    color.assign(n,0);
    time_in.resize(n);
    time_out.resize(n);
    dfs(root);
}

