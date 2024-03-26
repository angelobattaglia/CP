// from: https://codeforces.com/problemset/problem/1/A
#include<bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Function to solve the problem
int solve(int n, const vector<string> &statements) {

    int x = 0;  // Initialize the variable to store the value of x

    for(int i = 0; i < n; i++) {
        if(statements[i] == "++X" || statements[i] == "X++") {
            x++;
        } else if(statements[i] == "--X" || statements[i] == "X--"){
            x--;
        }
        else{
            cout << "Invalid statement" << endl;
            return -1;
        }
    }

    return x;
}

int main() {
    FAST_IO;

    // Number of statements in the programme
    int n;
    cin >> n;

    // I will use a vector to store the statements
    vector<string> statements;
    for(int i = 0; i < n; ++i) {
        string s;
        cin >> s; // Read the statement
        statements.push_back(s); // Store them in the vector as a string
    }

    // Solve the problem with the given statements vector
    cout << solve(n, statements) << endl; 

    return 0;
}
