#include <iostream>
#include <string>

int main()

{
    std::cout << "What is your name? \n";

    std::string name;
    std::cin >> name;
    std::cout << "Your name is " << name << "\n";

    system("pause");
    return 0;
}

