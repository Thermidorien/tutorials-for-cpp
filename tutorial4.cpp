#include <iostream>
#include <string>


int main()

{
    std::cout << "do you want to play a game? (y/n):";

    char response = tolower(getchar());

    std::cout << "You entered: \" "<< response << "\". \n";

    if(response == 'y') {
        std::cout << "Let's play a game then... \n";
    }

    else if(response == 'n') {
        std::cout << "Then leave me alone!\n";
    }

    

    if(response != 'y' && response != 'n') {

        for (;;)
        {
            std::cout << "You trippin for this one dawg! please enter a y or an n!";

            std::cin >> response;

            std::cout << "You entered: \" "<< response << "\". \n";

            if(response == 'y') {
                std::cout << "Let's play a game then... \n";
            }

            else if(response == 'n') {
                std::cout << "Then leave me alone!\n";
            }

            if (response == 'y' || response == 'n')
            {
                break;
            }
        
        }
    }
    return 0;
    
}