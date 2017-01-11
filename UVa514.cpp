//
//  main.cpp
//  UVa514
//
//  Created by Alitzel Méndez Bustillo on 08/01/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> coaches;
    int x;
    int number;
    
    cin>>number;
    cin>>x;

    
    while (x!=0)
    {
        while (x>0)
        {
            coaches.push(x);
            for (int i = 1; i<number;i++)
            {
                cin>>x;
                
                if (coaches.top()<=x)
                {
                    coaches.push(x);
                }
                
                else
                {
                    coaches.pop();
                    coaches.push(x);
                }
            }
            
            if (coaches.size() == number || coaches.empty())
            {
                cout<<"YES";
            }
            
            else
                cout<<"NO";
            
            cin>>x;
        }
        
        cin>>x;
        if (x==0)
            break;
        cin>>number;
    }
    
    

    return 0;
}

