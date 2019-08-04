#include <iostream>
#include <cstring>

using namespace std;

char *mystrtok(char str[], char delim){
    static char*input = NULL;
    if(str != NULL){
        input = str;
    }
    if(input == NULL){
        return NULL;
    }

    char *output = new char[strlen(str) + 1];
    // Return a word as dynamically allocated word array from the function.
    // Read the word from input and store it in output and return till delimiter
    int i;
    for(i = 0; input[i] != '\0'; i++){
        if(input[i] != delim){
            // do some work - copy char into output array
            output[i] = input[i];
        }
        else{
            // you are now at the delimiter
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }

    }
    output[i] = '\0';
    input = NULL;
    return output;
}

int main(){
    char str[] = "Hi, I'm  9 learning 8 about strings, in C++";
    char * ptr;

    ptr = mystrtok(str, ' ');
    
        cout << ptr << endl;
        ptr = mystrtok(NULL, ' '); //NULL as a parameter signifies - extract string from the original strings.
    cout << ptr << endl;

    ptr = mystrtok(NULL, ' ');
    cout << ptr << endl;

}