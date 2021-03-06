// A. There Are Two Types Of Burgers
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// There are two types of burgers in your restaurant — hamburgers and chicken burgers! To assemble a hamburger you need two buns and a beef patty. To assemble a chicken burger you need two buns and a chicken cutlet.

// You have b buns, p beef patties and f chicken cutlets in your restaurant. You can sell one hamburger for h dollars and one chicken burger for c dollars. Calculate the maximum profit you can achieve.

// You have to answer t independent queries.

// Input
// The first line contains one integer t (1≤t≤100) – the number of queries.

// The first line of each query contains three integers b, p and f (1≤b, p, f≤100) — the number of buns, beef patties and chicken cutlets in your restaurant.

// The second line of each query contains two integers h and c (1≤h, c≤100) — the hamburger and chicken burger prices in your restaurant.

// Output
// For each query print one integer — the maximum profit you can achieve.

// Example
// inputCopy
// 3
// 15 2 3
// 5 10
// 7 5 2
// 10 12
// 1 100 100
// 100 100
// outputCopy
// 40
// 34
// 0
// Note
// In first query you have to sell two hamburgers and three chicken burgers. Your income is 2⋅5+3⋅10=40.

// In second query you have to ell one hamburgers and two chicken burgers. Your income is 1⋅10+2⋅12=34.

// In third query you can not create any type of burgers because because you have only one bun. So your income is zero.




#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t>0){
        int b, p, f;
        cin >> b >> p >> f;

        int h, c;
        cin >> h >> c;

        int profit = 0;
        if(b >= 2*f){
            profit = c*f;
        }

        if(profit != 0){
            int remaining = 0;
            remaining = b - 2*f;
            remaining /= 2;

            if(remaining >= p){
                profit += p*h;
            }
            else{
                profit += remaining*h;
            }
        }

        cout << profit << endl;
        t--;
    }
}
// 7
// 1 1 1
// 1 1
// 100 100 100
// 100 100
// 1 100 100
// 100 100
// 100 1 1
// 100 100
// 100 50 50
// 100 99
// 100 51 51
// 100 99
// 99 51 51
// 100 99