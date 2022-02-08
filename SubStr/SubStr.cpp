#include <iostream>

void sub(std::string string, int n) {
    std::string Substr;
    for (int i = 0; i < string.length(); i++) {
        Substr = string.substr(i, n);
        if (Substr.length() == n) {
            std::cout << Substr << " ";
        }
    }
}

int main()
{
    std::string string;
    std::cin >> string;
    int n = 0;
    std::cin >> n;
    sub(string, n);
}