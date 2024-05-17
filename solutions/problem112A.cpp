// https://codeforces.com/problemset/problem/112/A
// https://en.wikipedia.org/wiki/Lexicographic_order
#include<bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Function to solve the problem
void solve(string t, string s) {
    /* 
    We want a case-insensitive comparison.
    The compare() method performs a lexicographical
    comparison using the exact characters of the strings, including their case. 
    This means that "aaaa" is considered lexicographically greater than "aaaA" because
    lowercase letters have higher ASCII values than uppercase letters
    */

    string::transform(t.begin(), t.end(), t.begin(), ::tolower);
    string::transform(s.begin(), s.end(), s.begin(), ::tolower);

    if (t.compare(s) == 0){
        // The strings are the same
        cout<<0;
    }
    else if(t.compare(s) < 0){
        // The first string is less than the second one
        cout<<-1;
    }
    else if(t.compare(s) > 0){
        // The second string is less than the first one
        cout<<1;
    }
}

int main() {
    FAST_IO;

    std::string t, s;
    cin >> t >> s;
    solve(t, s);

    return 0;
}
