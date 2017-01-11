//
//  main.cpp
//  UVa594
//
//  Created by Alitzel Méndez Bustillo on 11/02/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>


using namespace std;


union x
{   int i;
    char b[4];
}data;

int main()
{
    
    while (scanf("%d", &data.i) != EOF)
    {
        printf("%d converts", data.i);
        swap(data.b[0], data.b[3]);
        swap(data.b[1], data.b[2]);
        
        printf(" to %d\n",data.i);
    }
    
    return 0;
}

