// A square is kept inside a circle. It keeps expanding untill all four of its vertices touch the circumfernce of the circle. Another smaller circle is kept inside the square now and it keeps expanding untill its circumference touches all four sides of the square. The outer and the inner circle form a ring. Find the area of this ring.

// Input
// Input consists of multiple test cases. 
// Each test case contains one integer a denoting the side-length of the square between the two circles.

// Output
// Print the area of the ring.

// Sample Input 0

// 3
// 3
// 4
// 5
// Sample Output 0

// 7.068583
// 12.566371
// 19.634954

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;


int main() {
    vector<int> ar;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        ar.push_back(t);
    }
    
    double r,R,area;
    for(int i=0;i<n;i++)
    {
        r = (double)ar[i]/2;
        R = (double)ar[i]/sqrt(2);
        
        area = (double)acos(-1) * (pow(R, 2) - pow(r, 2));
        
        printf("%.6f", area);
        cout<<endl;
    }

    return 0;
}