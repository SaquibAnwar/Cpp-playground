#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int value(char c)
{
    return c-'0';

}

int main()
{
    string a;
    cin>>a;
    int sum = 0;
    int value1 = 0;
    for(int i=0; i < a.length();i++)
    {
        
        if(isdigit(a[i]))
        {
            value1 = value1*10 + value(a[i]);
        }
        else{
            sum += value1;
            value1 = 0;
        }
        
        if(i == a.length()-1){
            sum += value1;
        }       
    }
    
    cout << sum << endl;
    return 0;
}
