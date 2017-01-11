//
//  main.cpp
//  UVa100
//
//  Created by Alitzel Méndez Bustillo on 07/01/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

int a[120][120];

#include <cstdio>
#include <algorithm>

using namespace std;
int main()
{
    int i, j;
    while (scanf("%d%d", &i, &j)!= EOF)
    {
        int temp_i = i;
        int temp_j = j ;
        

        
        
        if (i>j) swap(i, j);
        
        int maxCycle = 0;
        int cycle;
        
        while (i<=j)
        {
            unsigned int n = i;
            cycle = 1;
            
            while (n!=1)
            {
                if (n%2 !=0)
                {
                    n=3*n+1;
                    n = n/2;
                    cycle ++;
                }
                
                else
                {
                    n = n/2;
                }
                
                cycle++;
            }
            
            if (cycle>maxCycle)
            {
                maxCycle = cycle;
            }
            
            i++;

        }
        printf ("%d %d %d\n", temp_i, temp_j, maxCycle);

    }
    
    
    return  0;
    
}

