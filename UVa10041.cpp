//
//  main.cpp
//  UVa10041
//
//  Created by Alitzel Méndez Bustillo on 10/06/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
#include<algorithm>
using namespace std;
int r [505];

int main()
{
    int cases,familiares,suma, mitad;

    scanf("%d" ,&cases);
    while (cases--) {
        scanf("%d",&familiares);
        
        for (int i = 0; i<familiares; i++)
        {
            scanf("%d", &r[i]);
        }
        
        sort(r, r+familiares);
        suma = 0;
        
        mitad = ceil(familiares/2.0);

        for (int i = mitad; i<familiares; ++i)
        {
            suma+= r[i] - r[familiares-i-1];
        }
        
        printf("%d\n", suma);
    }
    return 0;
}

