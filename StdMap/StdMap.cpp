#include <iostream>
#include <string>
#include <map>

int main()
{
    int n;
    std::cin >> n;

    std::map<std::string, std::string> map;

    //std::string *word = new std::string[n];
    //std::string *def = new std::string[n];
    std::string word;
    std::string key;
    
    for (int i = 1; i <= n; ++i){
        std::cin >> key;
        std::cin >> word;
        map.emplace(key,  word );
    }
    std::string s;
    while (std::cin >> s) {
        while (map.find(s) == map.end()) {
            std::cout << "wrong key write again!" << std::endl;
            std::cin >> s;
        }
        std::cout << map[s] << std::endl;
    }
    //delete[] word;
    //delete[] def;

}
