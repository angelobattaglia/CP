// https://codeforces.com/problemset/problem/158/A
#include<bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Function to solve the problem
int solve(int n, int k, const vector<int> &integers) {

    /*
        Sorting a container like std::vector<int> by using the sort function std::sort, in descenting order.
        Although I put "const" before the vector<int>, so I have to copy it to sort it, because the sort function 
        modifies the container, and const means that the container cannot be modified.
    */
    vector<int> modifiableIntegers = integers;

    /*
        integers.begin() returns an iterator to the first element of the container
        integers.end() returns an iterator to the last element of the container
        greater<int>() is a function object that represents the greater than operator for integers
    */

    sort(modifiableIntegers.begin(), modifiableIntegers.end(), greater<int>());

    // I will use a variable to store the number of participants that will advance to the next round
    int count = 0;
    for(int i = 0; i < n; ++i) {
        // k-1 because the position of the k-th participant is 1-based, so I subtract one to make it 0-based
        if(modifiableIntegers[i] >= modifiableIntegers[k - 1] && modifiableIntegers[i] > 0) {
            count++;
        }
    }

    return count;
    
}

int main() {
    FAST_IO;

    // input of the number of participants and the position of the k-th participant
    int n, k;
    cin >> n >> k;

    // I will use a vector to store the integers
    vector<int> integers;

    for(int i = 0; i < n; ++i) {
        int temp;
        cin >> temp; // Read each integer
        integers.push_back(temp);
    }

    cout << solve(n, k, integers) << endl;

    return 0;
}