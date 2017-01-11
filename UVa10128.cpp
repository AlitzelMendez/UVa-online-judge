//
//  main.cpp
//  UVa10131
//
//  Created by Alitzel Méndez Bustillo on 17/07/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <cstdio>

int dp[18][18][18];

void calc()
{
    dp[1][1][1] = 1;
    
    for (int i = 2; i<=13; i++)
        for (int j=1; j<=i; j++)
            for (int k =1 ; k<=i; k++)
            {
                dp[i][j][k] = dp[i-1][j-1][k] + dp[i-1][j][k-1] + (i-2)*dp[i-1][j][k];
            }
}


int main()
{
    int t;
    calc();
    int x,y,z;
    
    scanf("%d",&t);
    
    while (t--) {
        scanf("%d%d%d",&x,&y,&z);
        printf("%d\n",dp[x][y][z]);
    }
    

    
    return 0;
}