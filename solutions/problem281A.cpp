#include <bits/stdc++.h>
using namespace std;


// FAST I/O
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO;

    // Inserting the string
    string t;
    cin >> t;

    // initializing the result
    string result = "";

    // If the string ain't empty, we droppin' the first element
    if (!t.empty()) {
        auto it = t.begin(); // Get iterator to the first character
        char element = *it; // Extract the first character
        t.erase(t.begin()); // Remove the first character from the string
        element = toupper(element); // Convert the character to uppercase
        result = element; // Initialize result with the uppercase character
        result += t; // Append the rest of the original string
    } else {
        result = t; // If the string is empty, result is also empty
    }

    cout << result << endl;
}
