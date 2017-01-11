//
//  main.cpp
//  UVa441
//
//  Created by Alitzel Méndez Bustillo on 24/01/16.
//  Copyright (c) 2016 Ali. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>

int main()
{
    int z;
    int A [13];
    bool fc = false;

    while (scanf("%d",&z)&&z>0) {

    for (int i=0; i<z; i++) {
        scanf("%d",&A[i]);
    }
        
        if (!fc) {
            fc=true;
        } else{
            printf("\n");

        }

    for (int i= 0; z-i>5; i++) {
        for (int j= i+1; z-j>4; j++) {
            for (int k= j+1; z-k>3; k++) {
                for (int l= k+1; z-l>2; l++) {
                    for (int m= l+1; z-m>1; m++) {
                        for (int n= m+1; z-n>0; n++) {
                            printf("%d %d %d %d %d %d\n",A[i],A[j],A[k],A[l],A[m],A[n]);
                        }
                    }
                }
            }
        }
    }
    }
    return 0;
}

