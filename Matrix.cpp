#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> A
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    vector<vector<int>> ans;
    vector<int> temp;
    int row = 0, col = 0, x = 0, y = 0;
    
    int n = A.size();
    int m = A[0].size();
    
    while(x != m and col >= 0)
    {
        temp.push_back(A[row][col]);
        if(col == 0)
        {
            ans.push_back(temp);
            temp.clear();
            x+=1;
            col = x;
            row = 0;
        }
        row++;
        col--;
    }
    
    y = row = 1, col = m-1;
    while(y != n and row <= n-1)
    {
        temp.push_back(A[row][col]);
        if(row == n-1)
        {
            ans.push_back(temp);
            temp.clear();
            y+=1;
            row = y;
            col = m-1;
        }
        row++;
        col--;
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }    
        cout << endl;
    }
    
    // int B = 2;
    
    // int i, j;
    
    // int m = A[0].size();
    // int n = A.size();
    
    // if(B > A[n-1][m-1] || B < A[0][0])
    //     cout << "Not Present" << endl;
    
    // i = 0;
    // j = m-1;
    
    // //int n = A[A.size()-1][0];
    // while(i < n and j >= 0)
    // {
    //     if(A[i][j] < B)
    //         i++;
    //     else if(A[i][j] > B)
    //         j--;
    //     else if(A[i][j] == B)
    //     {
    //         cout << ((i+1)*1009 + (j+1));
    //         break;
    //     }
    // }
    // for(int i = 0; i < A.size(); i++)
    // {
    //     for(int j = i+1; j < A[i].size(); j++)
    //     {
    //         swap(A[i][j], A[j][i]);
    //     }
    // }
    
    // for(int i = 0; i < A.size(); i++)
    // {
    //     reverse(A[i].begin(), A[i].end());
    // }
    // int N = 3;
    // int M = 4;
    
    // //vector<vector<int>> matrix;
    // vector<vector<int>> ans;
    
    // vector<vector<int>> matrix;
    
    // int k = 1;
    // for(int i = 0; i < N; i++)
    // {   vector<int> temp;
    //     for(int j = 0; j < M; j++)
    //     {
    //         temp.push_back(k++);
    //     }
    //     matrix.push_back(temp);
    // }
    
    // for (int i = 0; i < matrix.size(); i++)
    // {
    //     for (int j = 0; j < matrix[i].size(); j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }    
    //     cout << endl;
    // }
    
    // cout << endl << endl;
    
    // int T = 0, B = N-1, L = 0, R = M-1;
    
    // while(T <= B and L < R)
    // {   vector<int> temp;
    //     for(int i = L; i <= R; i++)
    //     {
    //         temp.push_back(matrix[T][i]);
    //         //cout << matrix[T][i] << " ";
    //     }
    //     ans.push_back(temp);
    //     temp.clear();
    //     if(++T > B)
    //         break;
        
    //     for(int i = T; i <= B; i++)
    //     {
    //         temp.push_back(matrix[i][R]);
    //         //cout << matrix[i][R] << " ";
    //     }
    //     ans.push_back(temp);
    //     temp.clear();
    //     if(--R < L)
    //         break;
        
    //     for(int i = R; i >= L; i--)
    //     {
    //         temp.push_back(matrix[B][i]);
    //         //cout << matrix[B][i] << " ";
    //     }
    //     ans.push_back(temp);
    //     temp.clear();
    //     if(--B < T)
    //         break;
        
    //     for(int i = B; i >= T; i--)
    //     {
    //         temp.push_back(matrix[i][L]);
    //         //cout << matrix[i][L] << " ";
    //     }
    //     ans.push_back(temp);
    //     temp.clear();
    //     if(++L > R)
    //         break;
    // }
    
    
    
    
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }    
    //     cout << endl;
    // }
}