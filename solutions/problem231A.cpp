// from: https://codeforces.com/problemset/problem/231/A
#include<bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Function to solve the problem

// Const: The const keyword, when applied to a function parameter, 
// indicates that the function does not and cannot modify the object
// that the parameter refers to. This is a way to enforce immutability
// within the function, ensuring that the data passed to it remains
// unchanged throughout the function's execution. 
// In the context of const vector<tuple<int, int, int>>&, it guarantees
// that the vector, as well as the tuples contained within it, 
// will not be modified by the solve function. This is particularly
// important for maintaining data integrity, especially when passing
// data structures that should not be altered by the function.

// & (Reference): Using the ampersand (&) to pass the vector by
// reference means that the function operates on the original vector
// passed to it, rather than on a copy of the vector. 
// This is crucial for efficiency, especially with large data structures,
// as it avoids the overhead associated with copying the entire vector
// and its contents (which could be substantial). 
// However, without const, using a reference would also allow the function
// to modify the vector, potentially leading to unintended side effects.
// By combining & with const, you get the efficiency benefits of passing
// by reference while also ensuring the safety of not altering the data.

void solve(int n, const vector<tuple<int, int, int>> &problems) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        int a, b, c;
        tie(a, b, c) = problems[i];
        if(a + b + c >= 2) {
            count++;
        }
    }
    cout << count << "\n";
}

int main() {
    FAST_IO;

    int n; // Number of problems
    cin >> n; // Read the number of problems

    // Vector to store the confidence levels of Petya, Vasya, and Tonya for each problem
    vector<tuple<int, int, int>> problems;
    for(int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c; // Read the confidence levels of Petya, Vasya, and Tonya for each problem
        problems.push_back(make_tuple(a, b, c)); // Store them in the vector as a tuple
    }

    solve(n, problems); // Solve the problem with the given problems vector

    return 0;
}
