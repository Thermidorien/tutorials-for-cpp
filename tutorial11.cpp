#include <iostream>
#include <string>

int main()

{

    std::cout << "Let's play a game\n";
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
    



    return 0;
    
}