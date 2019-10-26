# Pacman Progress Bar

This is a simple Progress Bar that I wrote that you can use in your C++ software that runs in the terminal.  It's extremely easy to use.

1. Clone this repo
2. Take the header and implementation file and put it wherever you like in your software
3. `#include "ProgressBar.h`
4. Call the ProgressBar function inside of your program
5. There are only two parameters that both hold a `uint32_t`

The first parameter is the index. Most likely you will be putting this in a loop and so your `i` variable will be the index in your for loop.  The second parameter is the total number of iterations.  So if you are iterating through an array, it would be the total length of the array.

Example:
```cpp
#include <iostream>
#include <array>
#include "ProgressBar.h"

int main() {
    std::array<int> myArray[200000];

    for (size_t i{0}; i < myArray.size(); ++i) {
        myArray[i] = i;
        ProgressBar(i, myArray.size());
    }
}
```

That's it.  Really simple and basic.  You can obviously use this in more complex applications and may find uses for it other than a loop.