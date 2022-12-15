#include <iostream>
#include <string>

void yes_or_no(char response) {

    std::cout << "You entered: \" " << response << "\". \n";

    if(response == 'y') {
        std::cout << "Let's play a game then. \n";
    }

    else if(response == 'n') {
        std::cout << "Goodbye then.\n";
    }

}



int main()

{
    std::cout << "do you want to play a game? (y/n):";

    char response = tolower(getchar());
    std::cin >> response;

    yes_or_no(response);

    for (;;)
    {
        std::cout << "Please enter a 'y' or an 'n'.";
        std::cin >> response;

        yes_or_no(response);

        if (response == 'y' || response == 'n')
        {
            break;
        }  
    }

    if(response == 'y') {

        std::cout << "What difficulty?\n0: easy;\n1: medium;\n2: hard.\n";
        int difficulty;
        std::cin >> difficulty;

        switch (difficulty)
        {
        case 0: //easy
            std::cout << "You chose easy.\n";
            break;
        case 1: //medium
            std::cout << "You chose medium.\n";
            break;
        case 2: //hard
            std::cout << "You chose hard.\n";
            break;            
        default:
            std::cout << "Something's wrong.\n";
            break;
        }        
    }
    
    return 0;
    
}