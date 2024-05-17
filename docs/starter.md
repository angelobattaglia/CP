---
title: Starting point
---

# Starting out

- [e-maxx.ru](http://e-maxx.ru/index.php)
- [cp-algorithms](https://github.com/cp-algorithms/cp-algorithms)
- [Competitive Programmer's Handbook](https://cses.fi/book/book.pdf)
- [USACO guide](https://usaco.guide/general/intro-cp?lang=cpp)
- [C++ reference](https://cplusplus.com/)

## Basic template for CP

This is a starting template

```c++
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
```

## CLI flags for the compiler

Testing Locally: It's a good practice to test your code locally with the -std=c++17 flag to ensure it's compatible with C++17 standards.

Testing your code locally before submitting it to an online judge like Codeforces is an essential practice in competitive programming. It helps ensure that your solution behaves as expected, both in terms of correctness and performance, under different conditions. Local testing can simulate the judge's environment to some extent, catching potential issues early. Here's a brief overview focusing on the use of G++ and its flags for local testing.

### Why Test Locally?

1. **Immediate Feedback:** Testing locally provides instant feedback on errors, allowing for quicker iterations and debugging.
2. **Environment Control:** You have full control over the testing environment, including the compiler, flags, and input/output redirection.
3. **Stress Testing:** You can automate testing against large or random datasets to ensure the robustness and efficiency of your solution.
4. **Understanding Limits:** Local testing helps you understand how your solution behaves under time and memory constraints.

### Using G++ Flags for Local Testing

When compiling your C++ code with G++, you can specify various flags to control the compilation process. Here are some common flags relevant to competitive programming:

- **`-std=c++17` (or another version):** Specifies the C++ standard to use. Adjust this based on the standard you're targeting (e.g., `-std=c++11`, `-std=c++14`, `-std=c++17`).
- **`-Wall`**: Enables all the warnings about constructions that some users consider questionable, and that are easy to avoid.
- **`-Wextra`**: Enables additional warnings not covered by `-Wall`.
- **`-O2`**: Optimizes the code for more speed. This is useful to ensure your code runs fast enough but be aware it can make debugging harder.
- **`-g`**: Generates debug information in your executable, which is helpful for debugging with tools like GDB.
- **`-DLOCAL`**: Defines a preprocessor macro `LOCAL` that can be used to enable sections of code only when testing locally. Useful for debug prints or to read inputs from files.

### Example of Local Compilation and Testing

To compile your program with C++17 support, optimizations, and all warnings enabled, you could use a command like:

```sh
g++ -std=c++17 -Wall -Wextra -O2 your_program.cpp -o your_program
```

Then, to run your program with an input file `input.txt` and output the result to `output.txt`, you could use:

```sh
./your_program < input.txt > output.txt
```

For debugging or development purposes, you might compile with:

```sh
g++ -std=c++17 -Wall -Wextra -g -DLOCAL your_program.cpp -o your_program
```

This setup allows you to include debugging information and conditionally compile sections of your code meant only for local testing, such as:

```cpp
#ifdef LOCAL
std::cerr << "Debug information";
#endif
```

Local testing, combined with the strategic use of G++ flags, is a powerful approach to developing, debugging, and refining your competitive programming solutions. It'd be great also to use a Makefile to manage the build of the script.
