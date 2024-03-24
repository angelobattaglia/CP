// https://mirror.codeforces.com/problemset/problem/263/A
#include<bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    FAST_IO;

    // const int SIZE = 5; // Assuming a square matrix for simplicity
    // std::bitset<SIZE*SIZE> bitMatrix;

    int matrix[5][5]; // Declare a 5x5 matrix

    // Read the input
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Find the position of the 1
    int row = 0, col = 0;
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            if(matrix[i][j] == 1) {
                row = i;
                col = j;
                break;
            }
        }
    }

    // Calculate the number of moves
    /**
        If the single 1 is located on the intersection 
        of the r-th row and the c-th column (1-based numeration),
        then the answer is |3 - r| + |3 - c|. Reminder that
        the numbering starts from 0, so the 1-based numeration has
        to be converted to 0-based numeration.
    */
    int moves = abs(2 - row) + abs(2 - col);
    
    cout << moves << endl;
    
    return 0;
}