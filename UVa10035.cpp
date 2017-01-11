//
//  main.cpp
//  UVa10035
//
//  Created by Alitzel Méndez Bustillo on 12/06/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    long int x,y;
    int arrastre = 0, totalArrastres = 0;
    
    
    while (scanf("%ld%ld",&x,&y), x+y) {
        
        totalArrastres  = arrastre = 0;
        
        while (x||y) {
            
            arrastre = ((x%10) + (y%10) + arrastre)>9?1:0;

            x = x/10;

            y = y/10;
            
            totalArrastres += arrastre;
            
    }
        
        if (totalArrastres<=0) printf("No carry operation.\n");
        else if (totalArrastres==1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n", totalArrastres);
        
    }
    return 0;
}

