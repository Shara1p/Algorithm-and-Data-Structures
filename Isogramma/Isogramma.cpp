#include <iostream>

bool isogramm(std::string word , int length) {
    int check = 0;
    for (int i = 0; i < length; i++) {
        if (std::isupper(word[i])) {
            word[i] = std::tolower(word[i]);
        }
    }
    for (int i = 0; i < length; i++) {
        if (!isalpha(word[i])) {
            continue;
        }
        for (int j = 0; j < length; j++) {
            if (word[i] == word[j]) {
               check++;
            }
        }
        if (check == 1) {
            check = 0;
        }
        else {
            return false;
        }
    }
    return true;
}

int main()
{
    std::string word = "Dialogued";
    int length = word.length();
 
    std::cout << isogramm(word, length);
}
