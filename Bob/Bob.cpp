#include <iostream>
#include <string>

void Bob(std::string phrase) {
    bool upper = false;
    bool question = false;
    bool empty = false;

    for (int i = 0; i < phrase.length(); i++) {
        if (phrase[i] == ' ') {
            empty = true;
        }
        if (!isalpha(phrase[i])) {
            continue;
        }
        else if (std::isupper(phrase[i])) {
            upper = true;
            empty = false;
        }
        else {
            upper = false;
            empty = false;
        }
    }

    if (phrase[phrase.length() - 1] == '?') {
        question = true;
    }
    if ((upper) and (question)) {
        std::cout << "Calm down, I know what I'm doing!" << std::endl;
    }
    else if (upper) {
        std::cout << "Whoa, chill out!" << std::endl;
    }
    else if (question) {
        std::cout << "Sure" << std::endl;
    }
    else if (empty) {
        std::cout << "Fine. Be that way!" << std::endl;
    }
    else std::cout << "Whatever" << std::endl;
}

int main()
{
    std::string phrase;
    getline(std::cin, phrase);
    Bob(phrase);
}
