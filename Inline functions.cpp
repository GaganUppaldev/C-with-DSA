#include <iostream>

// Inline function to find the maximum of two integers
inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10;
    int y = 20;

    // Using the inline function to find the maximum of x and y
    int maxVal = max(x, y);

    std::cout << "Max of " << x << " and " << y << " is " << maxVal << std::endl;

    return 0;
}
