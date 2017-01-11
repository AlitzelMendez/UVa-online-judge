//
//  main.cpp
//  UVa10131
//
//  Created by Alitzel Méndez Bustillo on 17/07/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <algorithm>
#include <cstdio>

using namespace std;


const int MAXN = 1010;

struct node
{
    int weight, iq, id;
    
    
    bool operator < (const node& a) const
    {
        return weight > a.weight || (weight == a.weight && iq > a.iq);
    }
    
    
}elephant[MAXN];

int dp[MAXN], path[MAXN];


void print(int x)
{
    printf("%d\n", elephant[x].id);
    if (path[x]) print(path[x]);
    else printf("%d\n", elephant[0].id);
}

int main()
{
    int ids = 0,ans=0, i, j;
    
    while (scanf("%d%d",&elephant[ids].weight,&elephant[ids].iq))
        elephant[ids].id = ids + 1, dp[ids++] = 1;
    
    sort(elephant, elephant+ids);
    
    for (i = 1; i<ids; ++i)
        for (j = 0 ; j<i; ++j)
            if (elephant[j].iq<elephant[i].iq && dp[j]+1>dp[i])
                 path[i] = j, dp[i] = dp[j]+1;
    
    for (i = 1; i < ids; ++i)
        if (dp[ans] < dp[i])
            ans = i;
    
    
    printf("%d\n", dp[ans]);
    print(ans);
    
    return 0;
}

