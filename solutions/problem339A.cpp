#include<bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    FAST_IO;

    string t;
    cin >> t;
    int current_number;
    vector<int> numbers;

    for (char c : t) {
        if (isdigit(c)) {
            numbers.push_back(c - '0'); // Convert char to int
        } 
    }

    // Sorting the numbers
    sort(numbers.begin(), numbers.end());

    string answer = ""; // pre-allocating the result string

    int flag = 0;
    
    // Building the string
    for (int i = 0; i < numbers.size(); i++){
        if(numbers.size() == 1){
            answer += to_string(numbers[0]);
        }
        else{
            answer += to_string(numbers[i]);
            answer += '+'; 
            flag = 1;
            // cout << numbers[i] << endl; // just a little debugging test
        }
    }

    if(flag == 1)
        answer.pop_back(); // popping the '+' at the end of the string
    std::cout << answer << std::endl;

    return 0;
}
