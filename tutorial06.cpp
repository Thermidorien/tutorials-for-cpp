#include <iostream>
#include <string>

int main()

{
    std::cout << "do you want to play a game? (y/n):";

    int response;
    response = getchar();

    char r = static_cast<char>(response);

    std::cout << "You entered: " << r << std::endl;

    if(tolower(tolower(response)) == 'y') {
        std::cout << "Let's play a game then... \n";
    }
    
    return 0;
    
}