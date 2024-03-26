// https://codeforces.com/problemset/problem/112/A
#include<bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Function to solve the problem
void solve(int n) {
}

int main() {
    FAST_IO;

    /*
        Number of test cases
    */
    int t;
    cin >> t;

    /*
        The loop uses the condition t--, which is a post-decrement operation. This means the loop checks t to see if it's 
        greater than 0, thereby entering the loop if it is. Inside the loop, after checking the condition, it decrements 
        t by 1. The loop will continue to execute as long as t is greater than 0. Like a countdown.
    */
    while(t--) {
        solve();
    }

    return 0;
}
