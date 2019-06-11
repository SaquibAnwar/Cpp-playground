#include <iostream>

using namespace std;

int main(){
    int n, i, k = 5;
    n = 10;
//     for(int i = 0; i < n; i++){
//     for(; i < n; i++){
//         cout << i << endl;
//     }
// }
 for(int i = 0; i < n; i++){
     for(int j = 1 ; j < k; j++){
        cout << (i + j ) << endl;
      }
  }
}