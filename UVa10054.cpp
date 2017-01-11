//
//  main.cpp
//  UVa10054
//
//  Created by Alitzel Méndez Bustillo on 06/07/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string.h>




int colors[55][55];
int numbersColors[55];
int n =0;

void dfs (int x)
{
    for (int i = 1; i<=50; i++) {
        if (colors[x][i]>0) {
            colors[x][i]--;colors[i][x]--;
            dfs(i);
            printf("%d %d\n", i, x);
        }
    }
}


int main()
{

    int t = 0, a=0, b=0, i = 1, cas = 1;
    
    scanf("%d",&t);
    
    while (t--) {

        scanf("%d", &n);

        memset(colors, 0, sizeof(colors));
        memset(numbersColors, 0, sizeof(numbersColors));
        
        
        for (i=1; i<=n; i++) {
            scanf("%d%d",&a,&b);
            colors[a][b]++;colors[b][a]++;
            numbersColors[a]++; numbersColors[b]++;
        }
        
        int maxc = 0, maxp = 0, flag=1;

        for (i=1; i<=50; i++) {
            
            if (numbersColors[i]&1) {
                flag = 0; break;
                
            }else if (numbersColors[i]>maxc) {
                    maxc = numbersColors[i];
                    maxp = i;
                }
        }
        
        printf("Case #%d\n", cas++);
        if(flag)dfs(maxp);
        else printf("some beads may be lost\n");
   
		if(t>0) printf("\n");
    }
}

