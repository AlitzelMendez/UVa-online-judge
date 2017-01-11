#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char a[500];
    
    int total = 0;
    
    string x;
    
    getline(cin,x);
    
    vector<int> finalResults;
    
    while (x[0]!='#') {
        
        while (x[0]!='e')
        {
            for (int i=0;i<17;i=i+4)
            {
                switch (x[i]) {
                    case 'r':
                        a[(total*5)+1] = x[i+2];
                        break;
                        
                    case 'o':
                        a[(total*5)+2] = x[i+2];
                        break;
                        
                    case 'y':
                        a[(total*5)+3] = x[i+2];
                        break;
                        
                    case 'g':
                        a[(total*5)+4] = x[i+2];
                        break;
                        
                    case 'b':
                        a[(total*5)+5] = x[i+2];
                        break;
                        
                    default:
                        break;
                }
            }
            total++;
            getline(cin, x);
        }
        
        
        vector<int> mejor;
       
        for (int i = 0; i<total;i++)
        {
            mejor.push_back(0);
        }
       
        
        for (int i = 0; i<total;i++)
        {
            for (int j = 1; j<=5;j++)
            {
                for (int k = 0; k<5; k++)
                {
                    if (a[(i*5)+j] == a[(k*5)+j])
                    {
                        mejor[i] = mejor[i] +1;
                    }
                }
            }
        }
        
        int max=0;
       
        for (int i = 0; i<total; i++)
        {
            if (mejor[i]>mejor[max])
            {
                max = i;
            }
        }
        max++;
        
        finalResults.push_back(max);
        
        total=0;
        
        getline(cin, x);

    }
    
    for(int i = 0; i<finalResults.size();i++)
    {
        cout<<finalResults[i]<<"\n";
    }
  
    return 0;
}