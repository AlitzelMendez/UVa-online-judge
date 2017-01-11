//
//  main.cpp
//  UVa10003
//
//  Created by Alitzel Méndez Bustillo on 17/07/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include<cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>


using namespace std;

const int MAXC = 55;
int dp[MAXC][MAXC], c[MAXC];
const int INF = 0x3f3f3f3f;

int main()
{
    int l,n,i=0,j,k,p,minim=INF;
    
    while (scanf("%d",&l),l){
        
        scanf("%d",&n);
        
        
        c[0] = 0, c[n+1]=l;
        
        for (i=1; i<=n; i++)
            scanf("%d",&c[i]);
        
        
        memset(dp,0,sizeof(dp));
        
        
        for (p=2; p<=n+1; p++)
            for (i=0; i<=n+1-p; i++) {
                j=i+p, minim=INF;
                
                for (k = i + 1; k < j; ++k)
                    minim = min(minim, dp[i][k] + dp[k][j]);
                
                dp[i][j]=minim + c[j]-c[i];
                
            }
        
        printf("The minimum cutting is %d.\n", dp[0][n + 1]);
        
    }

return 0;

}

