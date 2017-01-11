//
//  main.cpp
//  UVa299
//
//  Created by Alitzel Méndez Bustillo on 08/01/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(int argc, const char * argv[])
{
    int totalSwaps, swap, max= 0;
    
    int x;
    int temporal=0;
    
    vector<int> array;
    cin>>x;  array.push_back(x);
    for (int i=array[0]; i>0; i--)
    {
        cin>>x; array.push_back(x);
        
        int f = array.back();

        for (int j =0; j<f; j++)
        {
            cin>>x;
            array.push_back(x);
        }
    }
    
    int inicio = 2;
    int final = 2+(array[1]);
   
    for (int i = 0; i<array[0]; i++)
    {
        totalSwaps = 0;
        
        do{
            max = inicio;
            swap = totalSwaps;
            for (int j=inicio+1; j<final; j++)
            {
                if (array[max] > array[j])
                {
                    if (temporal!= array[j])
                    {
                        temporal = array[j];
                        array[j] = array[max];
                        array[max] = temporal;
                        
                        max++;
                        totalSwaps++;
                    }
                    
                    else temporal =0;
                }
                
                else max=j;
            }
        }while(totalSwaps>swap);
        
        for (int i = 2; i<array.size(); i++)
        {
            cout<<array[i];
        }
        
      
        inicio = final+1;
        final = inicio + array[final+1];
        cout <<"Optimal train swapping takes "<<totalSwaps<<" swaps.\n";
    }

    return 0;
}

