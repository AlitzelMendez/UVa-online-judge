//
//  main.cpp
//  UVa10082
//
//  Created by Alitzel Méndez Bustillo on 02/06/15.
//  Copyright (c) 2015 Ali. All rights reserved.
//

#include <iostream>
#include <map>
#include <stdio.h>


using namespace std;

int main()
{
    string oracion;
    string oracionFinal;
    
    map <char, char> strMap = {
        {'2', '1'}, {'3', '2'}, {'4', '3'}, {'5', '4'}, {'6', '5'}, {'7', '6'}, {'8', '7'}, {'9', '8'}, {'0', '9'},
        {'-', '0'}, {'=', '-'}, {' ',' '},

    {'W', 'Q'}, {'E', 'W'}, {'R', 'E'}, {'T', 'R'}, {'Y', 'T'}, {'U', 'Y'}, {'I', 'U'}, {'O', 'I'}, {'P', 'O'},
      //  {'[', 'P'}, {']', '['}, {'\', ']'},
            
    {'S', 'A'}, {'D', 'S'}, {'F', 'D'}, {'G', 'F'}, {'H', 'G'}, {'J', 'H'}, {'K', 'J'}, {'L', 'K'},
       // {';', 'L'}, {''', ";"},
        
    {'X', 'Z'}, {'C', 'X'}, {'V', 'C'}, {'B', 'V'}, {'N', 'B'}, {'M', 'N'}, {',', 'M'}, {'.', ','}, {'/', '.'}
    };
    
    
    cin>>oracionFinal;
    
    
    for(int i=0 ; i<oracion.size();i++)
    {
        cout<<strMap[oracionFinal[i]];
    }
}

