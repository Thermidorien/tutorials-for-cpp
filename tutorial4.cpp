#include <iostream>
#include <string>

void input(std::string response) {

    std::cout << "You entered: \" " << response << "\". \n";

    if(response == "y") {
        std::cout << "Let's play a game then... \n";
    }

    else if(response == "n") {
        std::cout << "Then leave me alone!\n";
    }

}

int main()

{
    std::cout << "do you want to play a game? (y/n):";

    std::string response;
    std::cin >> response;

    input(response);



    for (;;)
    {
        std::cout << "You trippin for this one dawg! please enter a y or an n!";

        std::cin >> response;

        input(response);

        if (response == "y" || response == "n")
        {
            break;
        }
        
    }
    
    return 0;
    
}