#include <iostream>
#include <string>

int main()

{
    std::cout << "do you want to play a game? (y/n):";

    char response = tolower(getchar());

    std::cout << "You entered: " << response << std::endl;

    if(response == 'y') {
        std::cout << "Let's play a game then... \n";
        std::cout << "What difficulty? (easy/medium/hard) \n";
        std::string difficulty;
        std::cin >> difficulty;

        if(difficulty == "easy") {
            std::cout << "Game settings set to " << difficulty << std::endl;
        }
        else if(difficulty == "medium") {
            std::cout << "Game settings set to " << difficulty << std::endl;
        }
        else if(difficulty == "hard") {
            std::cout << "Game settings set to " << difficulty << std::endl;
        }
    }
    
    return 0;
    
}