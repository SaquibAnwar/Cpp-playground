// Determine if a 9x9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

// 1.Each row must contain the digits 1-9 without repetition.
// 2.Each column must contain the digits 1-9 without repetition.
// 3.Each of the 9 3x3 sub-boxes of the grid must contain the digits 1-9 without repetition.
// Valid Sudoku
// A partially filled sudoku which is valid.
// The Sudoku board could be partially filled, where empty cells are filled with the character '.'

// Input Format
// 81 space separated integers representing the values of Sudoku board.

// Constraints
// Note:

// A Sudoku board (partially filled) could be valid but is not necessarily solvable.
// Only the filled cells need to be validated according to the mentioned rules.
// The given board contain only digits 1-9 and the character '.'
// The given board size is always 9x9
// Output Format
// Return a boolean value, true or false.

// Sample Input
// 5 3 . . 7 . . . .
// 6 . . 1 9 5 . . .
// . 9 8 . . . . 6 .
// 8 . . . 6 . . . 3
// 4 . . 8 . 3 . . 1
// 7 . . . 2 . . . 6
// . 6 . . . . 2 8 .
// . . . 4 1 9 . . 5
// . . . . 8 . . 7 9
// Sample Output
// true

#include<bits/stdc++.h>

using namespace std;

bool isValidSudoku(vector<vector<char>> v)
{
    map<int, map<int, int>> r;
    map<int, map<int, int>> c;
    map<int, map<int, int>> b;

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(v[i][j] != '.')
            {
                int num = v[i][j] - '0';
                int boxNum = (i/3)*3 + (j/3);
                
                if(r[i][num] == 1 || c[j][num] == 1 || b[boxNum][num] == 1)
                    return false;

                r[i][num] = 1;
                c[j][num] = 1;
                b[boxNum][num] = 1;

            }
        }
    }
    return true;
}

int main()
{
    vector<vector<char>> board;
    for(int i = 0; i < 9; i++)
    {
        vector<char> temp;
        for(int j = 0; j < 9; j++)
        {
            cin >> temp[j];
        }
        board.push_back(temp);
    }

    if(isValidSudoku(board))
        cout << "true\n";
    else
        cout << "false\n";

}