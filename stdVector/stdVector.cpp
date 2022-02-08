#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int k;
    std::cin >> k;

    std::vector<int> b;
    for (int i = 0; i < n; ++i) {
        if (a[i] < k) {
            b.push_back(a[i]);
        }
    }

    for (int i = 0; i < b.size(); ++i) {
        std::cout << b[i] << " ";
    }
}