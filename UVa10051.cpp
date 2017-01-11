//
//  main.cpp
//  UVa10051
//
//  Created by Alitzel Méndez Bustillo on 17/06/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string.h>

using namespace std;

struct node
{
    int color[10], h[10], point[10][2];
    
}box[510];


int cc[105], v [9][505], ck[105];


int main()
{
    int i,j,p,k,q,ret,cubos = 0, ans[3], f[510][2],x,y,x1,y1,t;
    
    while (scanf("%d",&cubos),cubos) {
        ans[0]=1; ans[1]=1; ans[2]=1;
        memset(cc, 0, sizeof(cc));
        memset(v, 0, sizeof(v));
        
        for (i = 1; i<=cubos; i++) {
            for (j=1; j<=6; j++) {
                scanf("%d", & box[i].color[j]);
                box[i].h[j] = 1;
            }
        }
        
        for (i = cubos-1; i>=1; i--) {
            for (p=1; p<=6; p++) {
                
                if (p&1) k=box[i].color[p+1];
                else  k=box[i].color[p-1];
                
                ret=0;

                for (j=i+1; j<=cubos; j++) {
                    for (q=1; q<=6; q++) {
                        if (box[j].color[q]==k) {
                            if (box[j].h[q]>ret) {
                                ret = box[j].h[q];
                                box[i].point[p][0]=j;
                                box[i].point[p][1]=q;
                                
                            }
                        }
                        
                       
                    }
                    
                }
                
                box[i].h[p] += ret;
                
                if(box[i].h[p]>ans[0])
                {  ans[0]=box[i].h[p];
                    ans[1]=i;
                    ans[2]=p;
                }
                


            }
      
            
        }
        
        x=ans[1];y=ans[2];
        for(i=1;i<=ans[0];i++)
        { f[i][0]=x;
            f[i][1]=y;
            x1=box[x].point[y][0];
            y1=box[x].point[y][1];
            x=x1;y=y1;
        }
        if(t!=0)
            printf("\n");
        printf("Case #%d\n",++t);
        printf("%d\n",ans[0]);
        for(i=1;i<=ans[0];i++)
        { printf("%d ",f[i][0]);
            if(f[i][1]==1)
                printf("front\n");
            else if(f[i][1]==2)
                printf("back\n");
            else if(f[i][1]==3)
                printf("left\n");
            else if(f[i][1]==4)
                printf("right\n");
            else if(f[i][1]==5)  
                printf("top\n");  
            else if(f[i][1]==6)  
                printf("bottom\n");  
        }  
    }  
}