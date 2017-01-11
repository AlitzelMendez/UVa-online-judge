//
//  main.cpp
//  UVa10099
//
//  Created by Alitzel Méndez Bustillo on 17/06/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include<algorithm>
#include <cstdio>
#include<cstring>

using namespace std;
int n,r,dis[110][110];



int main()
{
    int i,k,j, c1,c2,p, t,h, ans;
    
    
    
    while (scanf("%d%d", &n,&r),n) {
        
        for (i=1; i<=r; i++) {
            
            scanf("%d%d%d", &c1,&c2,&p);
            dis[c1][c2] = dis[c2][c1] = p;
        }
        
        
        for(k=1;k<=n;k++)
            for(i=1;i<=n;i++)
                for(j=1;j<=n;j++)
                    dis[i][j]=max(dis[i][j],min(dis[i][k],dis[k][j]));
    
        
        scanf("%d%d%d",&c1,&c2,&p);
        h=dis[c1][c2]-1;
        ans=(p+h-1)/h;
        
        printf("Scenario #%d\nMinimum Number of Trips = %d\n\n",++t,ans);
        
        
    }
   
    
    
    return 0;
}

