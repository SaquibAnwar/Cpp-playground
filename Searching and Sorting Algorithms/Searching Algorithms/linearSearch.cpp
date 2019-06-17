#include<iostream>

using namespace std;

int linearSearch(int array[], int size, int searchValue){
    for(int i = 0; i < size; i++){
        if(array[i] == searchValue)
            return i;
    }

    return -1;
}


int main(){
    int a[] = {15, 23, 7, 45, 87, 16};
    
    int userValue;

    cout << "Enter an Integer to be searched : " << endl;
    cin >> userValue;

    int size = sizeof(a)/sizeof(a[0]);

    int result = linearSearch(a, size, userValue);
    
    cout<<size<<endl;

    if(result >= 0){
        cout << "The number is present at : " << result + 1 << " position." << endl;
    }
    else{
        cout << "The number was not found";
    }

    return 0;
}