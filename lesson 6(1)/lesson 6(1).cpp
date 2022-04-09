#include <iostream>
#include <algorithm>
#include <cstdlib>

    int main()
    {
        int a ;
        int b;
        char c = 'y';
        while (c == 'y')
        {
            a = 1 + rand() % 100;
            std::cout << "Let's play a game. I'm thinking of a number. You have 7 tries to guess what it is?" << "\n";

            for (int i = 1; i <= 7; i++)
            {
                std::cout << "Guess #" << i << ": ";
                std::cin >> b;
                if (a > b)
                {
                    std::cout << "Your guess is too low." << std::endl;
                }
                else if (a < b)
                {
                    std::cout << "Your guess is too high." << std::endl;
                }
                else
                {
                    std::cout << "Correct! You win!" << std::endl;
                    i = 8;
                }
            }
            std::cout << "This number: " << a << std::endl;

            std::cout << "Would you like to play again y/n ?";
            std::cin >> c;

        }
        return 0;
    }

    