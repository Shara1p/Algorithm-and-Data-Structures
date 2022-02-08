#include <iostream>
#include<string>

void crypt(std::string phrase) {
    std::string phraseFormat;
    for (int i = 0; i < phrase.length(); i++) {
        if ((phrase[i] != ' ') and (phrase[i] != '.') and (phrase[i] != ',') and (phrase[i] != ';')) {
            phraseFormat += phrase[i];
        }
    }

    for (int i = 0; i < phraseFormat.length(); i++)
    {
        if (isupper(phraseFormat[i])) {
            phraseFormat[i] += 32;
        }
    }
    int c = 1;
    int r = 0;
    int square = 0;
    while (square < phraseFormat.length()) {
        if ((c - r <= 1) and (c >= r)) {
            c++;
            r++;
            square = c * r;
        }
    }

    for (int i = 0; i < phraseFormat.length(); i++) {
        if (i % (c + 1) == 0) {
            phraseFormat.insert(i, "\n");
        }
    }
    std::string cryptoPhrase;
    
    int j = 0;
    for (int i = 0; i < c; i++) {
        j = i;
        j++;
        for (j; j < phraseFormat.length(); j += c + 1) {
            cryptoPhrase += phraseFormat[j];
        }
        cryptoPhrase += ' ';
    }
    
   
    std::cout << cryptoPhrase;
}

int main()
{
    std::string phrase;
    getline(std::cin, phrase);
    crypt(phrase);
}

//If man was meant to stay on the ground, god would have given us roots.