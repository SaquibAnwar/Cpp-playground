// Prime numbers are an essential part of cryptography. Some cryptographic algorithms such as RSA critically depend on the fact that prime factorization of large numbers takes a long time. Therefore, it is important to identify large prime numbers. One such algorithm, which can identify if a given number is prime, is Miller–Rabin primality test.

// Your task is to implement this primality test and check if a number is prime.

// Input format

// The first line contains the number of test cases, T.
// Next T lines contain a number.

// Output Format

// In each of T lines for each prime numbers, print “Yes” if the number is prime and “No” otherwise.

// Sample Input 0

// 3
// 32416190071 
// 15487469
// 15487473
// Sample Output 0

// Yes
// Yes
// No

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,m=0;
    cin>>a;
    long long int b[a];
    for(long long int i=0;i<a;i++){
        cin>>b[i];
    }
    for(long long int i=0;i<a;i++){
        m=0;
        for(long long int j=1;j<=sqrt(b[i]);j++){
            if(b[i]%j==0)
                m++;
        }
        if(m==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}