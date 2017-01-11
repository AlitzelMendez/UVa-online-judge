//
//  main.cpp
//  UVa679
//
//  Created by Alitzel Méndez Bustillo on 26/01/16.
//  Copyright (c) 2016 Ali. All rights reserved.
//

#include<cstdio>
#include<cstring>
using namespace std;
int main()
{ int t,i,k,m,n;
    while(~scanf("%d",&t) && t>0)
        while(t--)
        { scanf("%d%d",&n,&m);
            k=1;
            for(i=1;i<n;i++)
                if(m%2==1)
                {   k=k*2;
                    m=(m+1)/2;
                }
                else
                { k=k*2+1;
                    m=m/2;  
                }  
            printf("%d\n",k);  
        }  
    
}  
