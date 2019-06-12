#include<iostream>

using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = * a;
    *a = *b;
    *b = temp;
}

void permute(int *a, int l, int r){
    if(l == r)
        cout<<*a<<endl;
    else{
        for(int i = l; i <= r; i++){
            swap((a+l), (a+i));
            permute(a, l+1, r);
            swap((a+l), (a+i));
        }
    }
}

int main(){
    int size;
    cin >> size;
    int *input = new int[size+1];

    for(int i=0;i<size;i++)
		cin>>input[i];

    permute(input, 0, size-1);
    return 0;
}