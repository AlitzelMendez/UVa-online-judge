//
//  main.cpp
//  UVa10611
//
//  Created by Alitzel Méndez Bustillo on 30/01/16.
//  Copyright © 2016 Ali. All rights reserved.
//

#include <iostream>
#include<cstdio>
#include<cstring>


int main() {
    int A[50010];
    int n,q,playboy;
    int l,u,m=0, posibleAnswer;
    
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&A[i]);
    }
    
    scanf("%d",&q);
    
    while (q--) {
        scanf("%d",&playboy);
        l=0;
        u=n-1;
        
        while (l<=u) {
            m = l + (u-l)/2;
            
            if (A[m]<playboy) {
                l = m+1;
            }
            else if (A[m] == playboy){
               posibleAnswer = m;
                break;
            }
            
            else{
                u=m-1;
            }
            
            posibleAnswer = m;
        }
        
        if (A[m]==playboy){
            int x = m;
            
            while (m>0 && A[m]==playboy) {
                m--;
            }
            
            if (A[m]!=playboy)
                printf("%d ",A[m]);
            else printf("%c ",'X');
            
            m=x;

            while (m < n-1 && A[m]==playboy) {
                m++;
            }
            
            if (A[m]!=playboy)
                printf("%d\n",A[m]);
            else printf("%c\n",'X');
            
        }
        
        else if (A[m]<playboy){
            printf("%d ",A[m]);
            if (m<n-1) printf("%d\n",A[m+1]);
            else printf("%c\n",'X');
        }
        
        else{
            if (m>0) printf("%d ",A[m-1]);
            else printf("%c ",'X');
            
            printf("%d\n",A[m]);
        }
    }
    
    
    
    return 0;
}
