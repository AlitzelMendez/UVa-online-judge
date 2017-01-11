//
//  main.cpp
//  UVa10158
//
//  Created by Alitzel Méndez Bustillo on 07/07/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include<cstring>


int war [10010][10010];
int people, i = 0,j = 0;

int check[10010];

void searchFriends(int x, int y);
void searchEnemies(int x, int y);


void setFriends(int x, int y)
{
    if (war[x][y]==0 || war[x][y]==1 ){
        war[x][y]=1; war[y][x] =1;
        
        if (check[x]==0) {
            check[x] = check[y] = 1;
            searchFriends(x, y);
        
        }
       
    }
    
    else printf("-1\n");
}

void setEnemies(int x, int y)
{
    if (war[x][y]==0 || war[x][y]==2){
        war[x][y]=2; war[y][x] =2;
        
        if (check[x]==0) {
            check[x] = check[y] = 1;
            searchEnemies(x, y);
        }
        
    }
    
    else printf("-1\n");
}

void searchFriends(int x, int y)
{
    for (i=0; i<people; i++) {
        if (war[x][i] == 1) {
            setFriends(y, i);
        }
        
        else if (war[x][i] == 2)
        {
            setEnemies(y, i);
        }
    }
    
}

void searchEnemies(int x, int y)
{
    for (j=0; j<people; j++) {
        if (war[x][j] == 2) {
            setFriends(y, j);
        }
        
        else if (war[x][j] == 1 && x!=j)
        {
            setEnemies(y, j);
        }
    }

    
}



void areFriends(int x, int y)
{
    if (war[x][y]==1 || x==y) printf("1\n");
    else printf("0\n");
    
  
}

void areEnemies(int x, int y)
{
    if (war[x][y]==2) printf("1\n");
    else printf("0\n");
}


int main()
{
    scanf("%d", &people);
    int c=0, x=0,y=0;
    memset(war, 0, sizeof(war));
    
    while (scanf("%d%d%d",&c,&x,&y),c) {
        
        memset(check, 0, sizeof(check));
        
        switch (c) {
            case 1:
                setFriends(x,y);
                break;
             
            case 2:
                setEnemies(x,y);
                break;
                
            case 3:
                areFriends(x, y);
                break;
                
            case 4:
                areEnemies(x, y);
                break;
            default:
                break;
        }
        
    }
 
    

   
    return 0;
}

