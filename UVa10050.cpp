//
//  main.cpp
//  UVa10050
//
//  Created by Alitzel Méndez Bustillo on 01/06/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include<cstdio>
#include<cstring>


using namespace std;

int days [3650];
int simulationDays = 0;
int partidos;


int main()
{

    int cases = 0;
    int value= 0;
    int notWorkingD = 0;
    
    scanf("%d",&cases);
    
    while (cases>0) {
        
        notWorkingD = 0;
        memset(days, 0, sizeof(days));
        
        scanf("%d%d", &simulationDays, &partidos);
        
        for (int i = partidos; i>0; i--)
        {
            scanf("%d", &value);
            int temp = value;
            
            while (temp<=simulationDays)
            {
                
                if (temp%7 && (temp+1)%7&& days[temp]==0)
                {
                    days[temp] = 1;
                    notWorkingD++;
                }
                
                temp+=value;
            }
            
            
        }
        
        cases--;
        printf("%d\n",notWorkingD);
    }
    
    return 0;
}

