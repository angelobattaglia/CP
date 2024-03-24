# The "#include<bits/stdc++.h>"

. Basic Data Structures with bits/stdc++: initializing them, filling them and searching in them

Example using vector<> of tuples<> and giving it a name and a size and filling it with datas from the stdIO

#### .. a little note ..
Use of `#include<bits/stdc++.h>`: This header is convenient but not standard C++. It's widely used in competitive programming for efficiency but might not be portable or optimal for production environments. For broader compatibility, consider including only the specific headers you need (e.g., `<iostream>`, `<vector>`, `<tuple>`).

## Initializing a data structure

```c++
    // Inserting the n from standard input
    cin >> n;

    // Vector to store tuples, each containing three integers
    vector<tuple<int, int, int>> problems(n);

    for(int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;  // Read the three numbers
        problems[i] = make_tuple(a, b, c);  // Store them in the vector as a tuple
    }
```

- The line vector<tuple<int, int, int>> problems(n); in C++ declares a vector that stores elements of type tuple<int, int, int>. Let's break it down for clarity:

- vector<>: This part declares a variable as a vector. Vectors are part of the C++ Standard Template Library (STL) and are dynamic arrays that can grow or shrink in size.

- <tuple<int, int, int>>: This specifies the type of elements that the vector will store. In this case, it's a tuple containing three int elements. A tuple is a fixed-size collection of heterogeneous values. Here, the tuple is used to store three integers, which can represent any three related values you need (like the solutions from three participants in your problem).

- problems(n): This initializes the vector named problems with n elements. Each element of the vector is a tuple initialized with default values. Since the tuple contains integers, each integer in the tuple will be initialized to zero. The value n is the number of problems (or tuples) you intend to store, which was read from the input just before.

## Cycling through a data structure

Unpacking the elements of a tuple into separate values with `std::tie`.
The `std::tie` function in C++ is a utility that creates a tuple of lvalue references to its arguments. It's commonly used to unpack the elements of a tuple into separate variables. Here's a detailed explanation of how `std::tie` works and how it's used for unpacking tuples:

### Basics of `std::tie`

- **Syntax**: `auto tie_var = std::tie(var1, var2, var3, ...);`
- **Purpose**: `std::tie` is used to create a tuple of references to variables passed to it. This is particularly useful for unpacking the values from another tuple or for tieing multiple variables together for comparison or assignment purposes.

### Unpacking a Tuple with `std::tie`

When you have a tuple, say `std::tuple<int, int, int> myTuple`, containing three integers, you can unpack the values stored in `myTuple` into separate variables `a`, `b`, and `c` like this:

```cpp
int a, b, c;
std::tie(a, b, c) = myTuple;
```

Here's what happens in this process:

1. **Creating References**: `std::tie(a, b, c)` creates a temporary tuple of references to `a`, `b`, and `c`. These references are essentially aliases to the original variables `a`, `b`, and `c`.

2. **Assignment**: The `operator=` of the tuple is then called to assign the values from `myTuple` to the temporary tuple created by `std::tie`. This operation assigns each element of `myTuple` to the corresponding reference in the temporary tuple, effectively unpacking the values into `a`, `b`, and `c`.

3. **Result**: After the assignment, `a`, `b`, and `c` hold the values that were stored in `myTuple`.

### Practical Uses

- **Unpacking**: The primary use of `std::tie` is to unpack the elements of a tuple into separate variables, as shown above. This is especially handy when functions return tuples and you want to work with individual elements.
  
- **Tieing for Comparison**: You can use `std::tie` to compare multiple variables in a single statement by creating a tuple of references to those variables. For example, `std::tie(a, b) < std::tie(x, y)` compares `a` with `x` and `b` with `y` in lexicographical order.

- **Ignoring Elements**: Sometimes, you might want to unpack only certain elements of a tuple and ignore others. C++17 introduced `std::ignore` for this purpose, allowing you to unpack selected elements while discarding others:

  ```cpp
  std::tuple<int, double, char> myTuple = std::make_tuple(1, 2.0, 'a');
  int myInt;
  char myChar;
  std::tie(myInt, std::ignore, myChar) = myTuple;  // Unpacks 1 into myInt and 'a' into myChar, ignoring the double.
  ```

### Conclusion

`std::tie` is a versatile tool in C++ for working with tuples, enabling easy unpacking of tuple elements into separate variables, facilitating comparisons, and allowing selective unpacking with the help of `std::ignore`. Its ability to create a tuple of references makes it a powerful utility for managing and manipulating grouped variables.

In the context of C++ and the use of `std::tie` for unpacking tuples, the term "reference" refers to a reference type, which is one of the fundamental types in C++. A reference serves as an alias for another variable, allowing two variable names to refer to the same memory location. Here's a more detailed explanation:



## Passing this data structure to a function


### By Reference

### By Value



## Strings

The string class is a part of the C++ Standard Library (included through the `<string>` header, which is itself included in `<bits/stdc++.h>`), and it provides a more complex and flexible way to work with text compared to the traditional C-style character arrays.

Here is a basic example of how you might use the string class in C++:

```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    string x = "hello";
    cout << x << endl; // Output: hello
    return 0;
}
```

## Algorithms
In competitive programming, the choice of sorting algorithm is often driven by efficiency and ease of implementation within the constraints of the problem. The C++ Standard Library, which is included when you use `#include<bits/stdc++.h>`, provides robust sorting functionalities that are highly optimized for general use cases. Specifically, the `std::sort` function is a highly efficient sorting algorithm that usually outperforms most manually implemented sorting algorithms in terms of both time and effort.

### std::sort

The `std::sort` function, found in the `<algorithm>` header (which is included in `<bits/stdc++.h>`), is typically a hybrid sorting algorithm. It is a combination of QuickSort, HeapSort, and InsertionSort, known as Introsort. Starting with QuickSort and switching to HeapSort when the recursion depth exceeds a level based on the number of elements being sorted, and using InsertionSort for small partitions, `std::sort` is optimized for various scenarios and generally offers excellent performance:

- **Best for most cases in competitive programming**: Because it's highly optimized and requires only a few lines of code to implement.
- **Time Complexity**: O(n log n) on average, which is sufficient for a large set of problems.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {4, 1, 3, 9, 7};
    sort(nums.begin(), nums.end()); // Ascending order

    // For descending order:
    // sort(nums.begin(), nums.end(), greater<int>());

    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

### When to Implement Your Own Sorting Algorithm

Implementing your own sorting algorithm (like QuickSort or MergeSort) is rarely necessary unless:

1. **The problem specifically requires it**: Sometimes, a problem might ask you to implement a particular sorting algorithm without using library functions.
2. **Custom sorting logic that `std::sort` cannot easily handle**: Even then, you can often use `std::sort` with a custom comparator.
3. **Educational purposes or practicing**: Implementing sorting algorithms can be a great learning exercise.

### Conclusion

For the vast majority of competitive programming problems, you should use `std::sort` for sorting needs due to its simplicity and efficiency. It is not reliant on the `<bits/stdc++.h>` module per se, but this module includes the `<algorithm>` header, which contains `std::sort`. The need to manually implement a sorting algorithm like QuickSort or BubbleSort is quite rare in competitive programming scenarios. Always consider the problem's constraints and requirements, but remember that standard library functions are your friends for most sorting tasks.
