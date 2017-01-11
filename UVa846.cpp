//
//  main.cpp
//  UVa846
//
//  Created by Alitzel Méndez Bustillo on 10/06/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int distancia = 0;
    int cases=0;
    int x = 0;
    int y = 0;
    int pasoAnterior;
    int pasosTotales;
    
    scanf("%d", &cases);
    
    while (cases>0) {
        
        scanf("%d%d", &x,&y);
        cout<<"hi";

        distancia = y-x;

        cout<<"distancia"<<distancia;

        pasosTotales = 0;
        
        
        if (distancia>=2)
        {
            distancia-=2;
            pasosTotales+=2;
        }
        
        else{
            pasosTotales = distancia;
            distancia = 0;
        }
        
        pasoAnterior = 1;
        
        
        while (distancia>0) {
            if (distancia - (2*(pasoAnterior+1)) >= 0 && distancia - (2*(pasoAnterior+1)) >= pasoAnterior-1)
            {
                cout<<"a";
                pasoAnterior++;
                distancia-= (2 * pasoAnterior);
                pasosTotales+=2;

            }
            
            else if (distancia- (2*pasoAnterior)>=0)
            {
                cout<<"b";

                distancia-= (2*pasoAnterior);
                pasosTotales+=2;
            }
            
            else if (distancia - (2* (pasoAnterior-1))>=0 && (pasoAnterior-1)>0)
            {
                cout<<"c";
                pasoAnterior--;
                distancia-= (2*pasoAnterior);
                pasosTotales+=2;
            }
            
            else if (distancia - ((pasoAnterior+1)) >= 0 && distancia - (pasoAnterior+1) >= pasoAnterior-1 )
            {
                cout<<"d";

                pasoAnterior++;
                distancia-= ( pasoAnterior);
                pasosTotales++;
                
            }
            
            else if (distancia- (pasoAnterior)>=0)
            {
                
                cout<<"e";

                distancia-= (pasoAnterior);
                pasosTotales++;
            }
            
            else if (distancia - ((pasoAnterior-1))>=0 && (pasoAnterior-1)>0)
            {
                cout<<"f";

                pasoAnterior--;
                distancia-= (pasoAnterior);
                pasosTotales++;
            }
            cout<<"\npaso anterior"<<pasoAnterior;
        }
        
        printf("%d\n",pasosTotales);
        
        
        cases--;
    }
    return 0;
}

