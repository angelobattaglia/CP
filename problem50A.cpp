// https://mirror.codeforces.com/problemset/problem/50/A
// I use this command to compile the code:  g++ -std=c++17 -Wall -Wextra -O2
#include<bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Function to solve the problem
// void solve(int n) {
// }

int main() {
    FAST_IO;

    /**
        We have to calculate the total number of single squares on the board. 
        Then, we have to divide it by a number that is the number that can be covered by a domino piece. 
        If the reminder is 1 then a square will remain uncovered.
    */

    // Number of test cases
    int m, n;
    cin >> m >> n;

    cout << (m * n) / 2 << endl;

    return 0;
}