#include<iostream>

using namespace std;

int binarySearch(int array[], int size, int searchValue){
    int low = 0;
    int high = size-1;

    while(low <= high)
    {
        int mid = (low + high)/2;

        if(searchValue == array[mid]){
            return mid;
        }
        else if (searchValue > array[mid])
        {
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return -1;

}

int main(){
    int a[] = {12, 22, 34, 47, 55, 67, 82, 98};
    
    int userValue;

    cout << "Enter an Integer to be searched : " << endl;
    cin >> userValue;

    int size = sizeof(a)/sizeof(a[0]);

    int result = binarySearch(a, size, userValue);
    
    cout<<size<<endl;

    if(result >= 0){
        cout << "The number is present at : " << result + 1 << " position." << endl;
    }
    else{
        cout << "The number was not found";
    }

    return 0;
}