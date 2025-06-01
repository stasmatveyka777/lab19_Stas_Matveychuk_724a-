#include <iostream>

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

    double a = 5.3, b = 1.1, c = 9.9;
    std::cout << "Before sorting: " << a << ", " << b << ", " << c << std::endl;
    sortThree(a, b, c);
    std::cout << "After sorting: " << a << ", " << b << ", " << c << std::endl;

    std::string s1 = "banana", s2 = "apple", s3 = "cherry";
    std::cout << "Before sorting: " << s1 << ", " << s2 << ", " << s3 << std::endl;
    sortThree(s1, s2, s3);
    std::cout << "After sorting: " << s1 << ", " << s2 << ", " << s3 << std::endl;

    return 0;
}
