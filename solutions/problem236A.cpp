#include<bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Function to solve the problem
void solve(string username) {
}

int main() {
    FAST_IO;

    /*
        I get the username from the CLI
    */
    string username;
    cin >> username;


    if (!username.empty()) {
        auto it = t.begin(); // Get iterator to the first character
        char element = *it; // Extract the first character

        result = element; // Initialize result with the uppercase character
        result += t; // Append the rest of the original string
    } else {
        result = t; // If the string is empty, result is also empty
    }

    while(t--) {
        solve();
    }

    return 0;
}