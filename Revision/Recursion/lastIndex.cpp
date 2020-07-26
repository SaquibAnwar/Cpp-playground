#include<iostream>

using namespace std;

int lastIndex2(int input[], int size, int x) {
    if(size == 0)
        return -1;

    if(input[size] == x)
        return size;
    
    int ans = lastIndex2(input, size-1, x);

    return ans;
}

int lastIndex(int input[], int size, int x) {
    if(size == 0)
        return -1;
    
    int ans = lastIndex(input+1, size-1, x);

    if(ans == -1 and input[0] == x)
        return 0;
    else if(ans == -1)
        return ans;
    else
        return ans+1;
}

int main()
{
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;
    cout << lastIndex2(input, n, x) << endl;
}