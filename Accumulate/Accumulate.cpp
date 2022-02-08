#include <iostream>
#include <numeric>

typedef int MyArr[5];


int sum(MyArr &a) {
    int r = std::accumulate(std::begin(a), std::end(a), 0);
    return r;
}

int halfSum(MyArr &a) {
    int r = std::accumulate(std::begin(a), std::end(a) - (sizeof(a) / sizeof(a[0])) / 2, 0);
    return r;
}

int multiply(MyArr &a) {
    int r = std::accumulate(std::begin(a), std::end(a), 1, [](int a, int b)
        {
            return a * b;
        });
    return r;
}

int main()
{
    MyArr a = { 1, 2, 3, 4, 5 };
    std::cout << "Sum: " << sum(a) << std::endl;
    std::cout << "Multiply: " << multiply(a) << std::endl;
    std::cout << "Halfsum: " << halfSum(a);
}

