#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str[] = "Hi, I'm  9 learning 8 about strings, in C++";
    char * ptr;

    ptr = strtok(str, " ");
    
    while(ptr != NULL){
        cout << ptr << endl;
        ptr = strtok(NULL, " "); //NULL as a parameter signifies - extract string from the original strings.
    }
}