//
//  main.cpp
//  UVa10189
//
//  Created by Alitzel Méndez Bustillo on 26/05/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int a[120][120];

int main()
{
    int m, n;
    int count = 1;
    
    cout<<5;
    
    while (scanf("%d%d", &n, &m),n)
    {
        getchar();
        if (count>1) putchar('\n');
        memset(a,0,sizeof(a));
        char ch;
        
        
        for (int i = 1; i<=n; i++) {
            for (int j = 1; j<=m; j++) {
                 scanf("%c", &ch);
                if (ch=='*') {
                    a [i][j] = 11;

                    for (int ii = i-1; ii <=i+1; ii++)
                    {
                        for (int jj = j-1; jj<=j+1; jj++)
                        {
                           a[ii][jj]++;
                            
                        }
                    }
                    
                    
                }
            }
            getchar();

        }
        
        
        printf("Field #%d:\n",count);
        
        
        for (int i = 1; i<=n; i++) {
            for (int j = 1; j<=m; j++) {
                
                if (a[i][j]>10) putchar('*');
                else printf("%d", a[i][j]);
                
                }
            
            putchar('\n');
        
        }
        count++;
    }
    return 0;
}
