//
//  main.cpp
//  UVa10018
//
//  Created by Alitzel Méndez Bustillo on 12/06/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include<cstdio>
using namespace std;


long int Invertir(long int n, long int t)
{
    return n == 0 ? t : Invertir(n / 10, t * 10 + n % 10);
}

int main()
{
    int cases;
    int iteraciones=0;
    long int x, y;
    
    scanf("%d", &cases);
    
    while (cases--) {
        
        scanf("%ld", &x);
        
        y = Invertir(x, 0);
        
        while (x!=y && x <= 4294967295) {
            x +=y;
            iteraciones++;
            y = Invertir(x, 0);
        }
        
        if (x!=y)
        {
            y=0;
            iteraciones = 0;
            
        }
        
        printf("%d %ld\n",iteraciones,y );
        iteraciones = 0;
    }

    return 0;
}



