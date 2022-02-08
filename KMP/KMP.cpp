#include <iostream>
using namespace std;

int KMPSearch(char* string, char* substring) {
    int  sl, ssl;
    int res = -1; // Результат
    sl = strlen(string); // Длина строки
    ssl = strlen(substring); // Длина подстроки
    if (sl == 0)
        cout << "Неверно задана строка\n";
    else if (ssl == 0)
        cout << "Неверно задана подстрока\n";
    else {
        int  i, j = 0, k = -1;
        int* d = new int[1000];
        d[0] = -1;
        while (j < ssl - 1) {
            while (k >= 0 && substring[j] != substring[k])
                k = d[k];
            j++;
            k++;
            if (substring[j] == substring[k])
                d[j] = d[k];
            else
                d[j] = k;
        }
        i = 0;
        j = 0;
        while (j < ssl && i < sl) {
            while (j >= 0 && string[i] != substring[j])
                j = d[j];
            i++;
            j++;
        }
        delete[] d;

        if (j == ssl) {
            res = i - ssl;
        }
        else {
            res = -1;
        }
    }
    return res;
}
int main()
{
    char String[] = "abcabeabcabcabd";
    char Sub[] = "abcabd";
    std::cout << KMPSearch(String, Sub);
}

