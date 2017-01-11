//
//  main.cpp
//  UVa10110
//
//  Created by Alitzel Méndez Bustillo on 16/06/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include<cmath>
#include<cstdio>
#include <iostream>

using namespace std;

int main()
{
     unsigned long bombilla = 0;
    
    long divisibles = 0;
    
    
    while(scanf("%ld",&bombilla), bombilla)
    {
        divisibles = (int) sqrt(bombilla);
        puts(divisibles * divisibles == bombilla ? "yes" : "no");
    }

    return 0;
}

