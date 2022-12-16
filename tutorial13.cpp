#include <iostream>
#include <string>

void yes_or_no(int response) {

    std::cout << "You entered: \""<<response<<"\". \n";

    if(response == 1) {
        std::cout << "Let's play a game then. \n";
    }

    else if(response == 0) {
        std::cout << "Goodbye then.\n";
    }

}

bool victory(bool result) {

    if (result)
    {
        std::cout << "VICTORY!\n";
    }

    else
    {
        std::cout << "YOU LOSE!\n Try again next time. \n";
    }
    

}

void difficulty_settings(int difficulty) {

    bool result;

    switch (difficulty)
    {
    case 0: //easy
        std::cout << "You chose easy.\n";
        result = play_game(10);
        victory(result);
        break;
    case 1: //medium
        std::cout << "You chose medium.\n";
        result = play_game(5);
        victory(result);
        break;
    case 2: //hard
        std::cout << "You chose hard.\n";
        result = play_game(3);
        victory(result);
        break;            
    default:
        std::cout << "Something's wrong.\n";
        break;
    }        
}

bool play_game(int guesses) {
    
    int correct = 42;
    std::cout << "Playing game.\n";
    std::cout << "Guess a number.\n";
    std::cout << "You get " << guesses << "guesses. \n";

    int guess;

    for (int i = 0; i < guesses; i++)
    {
        std::cin >> guess;

        if (guess == correct) 
        {
            return true;
        }
    }
    
    return false;
    
}

int main()
{

    std::cout << "do you want to play a game? Type 0 for no and 1 for yes : \n";

    int response;
    std::cin >> response;

    yes_or_no(response);

    if (response != 0 && response != 1)
    {
        for (;;)
        {
            std::cout << "Please enter 0 for no and 1 for yes.\n";
            std::cin >> response;

            yes_or_no(response);

            if (response == 0 || response == 1)
            {
                break;
            }  
        }
    }

    if(response == 1) { // HE WANTS TO PLAY THE GAME!

        std::cout << "Select difficulty.\n";
        std::cout << "Have you beaten the game? \n0: no;\n1: yes\n";

        bool beat_game;
        std::cin >> beat_game;

        if (beat_game != 0 && beat_game != 1)
        {
            for (;;)
            {
                std::cout << "Please enter 0 for no and 1 for yes.\n";
                std::cin >> response;                  

                if (beat_game == 0 || beat_game == 1)
                {
                    break;
                }  
            }
        }

        bool impossible = 0;
        
        if (beat_game == 1)
        {
            std::cout << "Do you want to play on impossible difficulty? \n0: no;\n1: yes\n";
        
            std::cin >> impossible;

            if (impossible != 0 && impossible != 1)
            {
                for (;;)
                {
                    std::cout << "Please enter 0 for no and 1 for yes.\n";
                    std::cin >> response;                  

                    if (impossible == 0 || impossible == 1)
                    {
                        break;
                    }  
                }
            }

            if (impossible == 1)
            {
                std::cout << "Good luck then...\n";
                bool result = play_game(1);
                victory(result);
            }
            

        }  

        else if (beat_game == 0 || impossible == 0) 
        {

            std::cout << "What difficulty?\n0: easy;\n1: medium;\n2: hard.\n";
            int difficulty;
            std::cin >> difficulty;

            difficulty_settings(difficulty);

            if (difficulty != 0 && difficulty != 1 && difficulty != 2)
            {
                for (;;)
                {
                    std::cout << "Please enter 0 for easy, 1 for medium and 2 for hard.\n";
                    std::cin >> difficulty;

                    difficulty_settings(difficulty);

                    if (difficulty == 0 || difficulty == 1 || difficulty == 2)
                    {
                        break;
                    }  
                }
            }


            
        }

    }
    
    return 0;
    
}