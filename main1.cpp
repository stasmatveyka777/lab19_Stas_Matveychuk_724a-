#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void sortThree(T& a, T& b, T& c) {
    if (a > b) std::swap(a, b);
    if (b > c) std::swap(b, c);
    if (a > b) std::swap(a, b);
}

int main() {
    int x = 42, y = 7, z = 19;
    std::cout << "Before sorting: " << x << ", " << y << ", " << z << std::endl;
    sortThree(x, y, z);
    std::cout << "After sorting: " << x << ", " << y << ", " << z << std::endl;

    std::vector<int> values = {x, y, z};
    std::cout << "Vector contents: ";
    for (const auto& val : values) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::string a = "banana", b = "apple", c = "cherry";
    std::cout << "Before sorting: " << a << ", " << b << ", " << c << std::endl;
    sortThree(a, b, c);
    std::cout << "After sorting: " << a << ", " << b << ", " << c << std::endl;

    return 0;
}
