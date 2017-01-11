//
//  main.cpp
//  UVa10183
//
//  Created by Alitzel Méndez Bustillo on 13/08/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;


int main() {
    
    long int a, b,i,j,temp;
    int count = 0;
    
    while (scanf("%ld%ld",&a,&b),a+b>0) {
        
        i=1;
        j=0;
        count = 0;
        
        while (j<=b) {
            
          
            temp=i;
            i = i+j;
            j = temp;
            
            if (j>=a && j<=b) {
                count++;
            }
            
           
        }
        
        if(a<=1&&b>=1)count--;
        printf("%d\n",count);
    }

    return 0;
}

