#include <iostream>
using namespace std;

#include <stdio.h>
#include <string.h>


int main()
{
	
    int anterior = 0;
    int actual = 0;
    int arr [451];
    int number;
    int sum = 0;
	int residuo = 0;
    int inicial=0;
    int t = 10;
    
    bool unhappy = true;
	
    
    while (scanf("%d",&number),t--)
    {
        memset(arr,0 , sizeof(arr));
        
        //cin>> number;
        while(unhappy)
        {
            anterior = number;
            inicial = number;
            sum= 0;
            
            while(number)
            {
                residuo = number%10;
                sum = (int) sum+(residuo*residuo);
                number /= 10;
            }
            
            actual = sum;
            
            if(actual == 1)
            {
                unhappy = false;
                cout<<"happy " << anterior;
            }
            
            if(arr[actual]>0)
            {
                cout << "unhappy " << anterior;
                unhappy = false;
            }
            arr[inicial]++;
            number = actual;
        }
        
    
    }
    
    
    
   
}


