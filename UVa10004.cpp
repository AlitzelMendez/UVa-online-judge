//
//  main.cpp
//  UVa10004
//
//  Created by Alitzel Méndez Bustillo on 17/06/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <string.h>
using namespace std;

int bicolor[210];

int main()
{
    int vertices, l, i, u,v;
    bool bicolorable = true;
    
    while (scanf("%d",&vertices),vertices) {
        
        scanf("%d", &l);
        memset(bicolor, 0, sizeof(bicolor));
        bicolorable = true;
        
        for (i=1 ; i<=l; i++) {
            scanf("%d%d",&u,&v);
            
            if (bicolor[u] == bicolor[v]) {
                if (bicolor[u]==0) {
                    bicolor[u]=1;
                    bicolor[v]=2;
                    continue;
                }
                
                else{
                    
                    bicolorable = false;
                    break;
                }
            }
            
           else if (bicolor[u]>bicolor[v])
            {
                if (bicolor[u]==1)
                {bicolor[v]=2;
                    continue;
                }
                else
                {bicolor[v]=1;
                    continue;
                }
            }
            
            else
            {
                if (bicolor[v]==1)
                {bicolor[u]=2;
                    continue;
                }
                else
                {bicolor[u]=1;}

            }
            
        }
        
        if (bicolorable)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");
    }
    

    return 0;
}

