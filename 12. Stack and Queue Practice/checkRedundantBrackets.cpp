// Check redundant brackets
// Send Feedback
// Given a string mathematical expression, return true if redundant brackets are present in the expression. Brackets are redundant if there is nothing inside the bracket or more than one pair of brackets are present.
// Assume the given string expression is balanced and contains only one type of bracket i.e. ().
// Note: You will not get partial score for this problem. You will get marks only if all test cases are passed.
// Input Format :
// String s (Expression)
// Output Format :
// true or false
// Sample Input 1:
// ((a + b)) 
// Sample Output 1:
// true
// Sample Input 2:
// (a+b) 
// Sample Output 2:
// false

#include <iostream>
using namespace std;
//#include "solution.h"
bool checkRedundantBrackets(char *input) {
	// Write your code here

}


int main() {
    char input[1000000];
    cin.getline(input, 1000000);

    if(checkRedundantBrackets(input)) {
	    cout << "true" << endl;
    }
    else {
	    cout << "false" << endl;
    }

}
