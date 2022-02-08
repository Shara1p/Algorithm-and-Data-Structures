#include <iostream>
#include <algorithm>

int main()
{
    std::string word;
    std::cout << "Write down main word" << std::endl;
    std::cin >>  word;
    std::cout << "Write down amount of 'anagrams'" << std::endl;
    int n = 0;
    std::cin >> n;
    std::cout << "Write down 'anagrams'" << std::endl;

    std::string* Annagrams = new std::string[n];
    int* AnnagramsHash = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> Annagrams[i];
        AnnagramsHash[i] = std::hash<std::string>{}(Annagrams[i]);
    }


    int fact = 1;
    for (int i = 1; i <= word.length(); i++) {
        fact *= i;
    }

    int* Wordhash = new int[fact];
    
    for (int i = 0; i < fact; i++) {
        std::next_permutation(begin(word), end(word));
        //std::cout << word << std::endl;
        Wordhash[i] = std::hash<std::string>{}(word);
    }
    
    for (int i = 0; i < fact; i++) {
        for (int j = 0; j < n; j++) {
            if (Wordhash[i] == AnnagramsHash[j]) {
                std::cout << "Anagram: " << Annagrams[j];
                exit(0);
            }
        }
        
    }
    
    
}
