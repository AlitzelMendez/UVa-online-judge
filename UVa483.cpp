
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string x, temp;
    istringstream is;
    
    while (getline(cin, x))
    {
        is.str(x);
        while (is>>temp)
        {
            reverse(temp.begin(), temp.end());
            cout<<temp;
            if( is.eof() )
			{
				cout << endl;
			}
			else
			{
				cout << " ";
			}

            
        }
        
        is.clear();
    }
    
    return 0;
}
