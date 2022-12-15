#include <iostream>
#include <string>

int main()

{
    std::cout << "do you want to play a game? (y/n):";

    std::string response;
    std::cin >> response;

    if(tolower(response[0]) == 'y') {
        std::cout << "Let's play a game then... \n";
    }
    
    return 0;
    
}