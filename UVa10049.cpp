//
//  main.cpp
//  UVa10049
//
//  Created by Alitzel Méndez Bustillo on 12/06/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include<cstdio>

using namespace std;

int main()
{
    int x;
    int it=0, y=0;
    int actualNum = 1;
    
    scanf("%d",&x);
    
    while (x!=0) {
        it=0, y=0,actualNum = 1;
        
        while (y<x) {
            for (int i = 0; i<actualNum; i++)
            {
                y+=actualNum;
                it++;
                
                if (y>=x) {
                    break;
                }
            }
            
            actualNum++;
            
        }
        
        printf("%d\n",it);
        scanf("%d",&x);
    }
    
    
    
    return 0;
}

