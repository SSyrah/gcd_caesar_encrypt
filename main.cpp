#include "syt.h"

int main()
{

    int result{}, quess{}, num1{}, num2{}, count = 4, choose{};
    bool option = true;
    std::string text;
    Random randonmumber;
    choose = menu();
    switch (choose)
    {
    case 1:
        while (option)
        {
            num1 = randonmumber.random_integer(rand() % 100 + 1, rand() % 100 + 1);
            num2 = randonmumber.random_integer(rand() % 100 + 1, rand() % 100 + 1);
            result = syt(num1, num2);
            while (count >= 1)
            {
                std::cout << "Here are the random numbers:\nNumber 1: " << num1 << "\nNumber 2: " << num2 << "\n";
                quess = check_option();
                std::cout << "quess was: " << quess << std::endl;
                std::cout << "Let's see is that greatest common divisor: \n\n";

                if (check(result, quess))
                {
                    std::cout << "Hooray! You got the rigt answer, indeed the result was: " << result << std::endl;
                    option = false;
                    count = 0;
                }
                else
                {
                    count--;
                    std::cout << "Sorry not the right one! You have " << count << " quesses left\n";
                }
            }
            if (count == 0 && result != quess)
            {
                option = false;
                std::cout << "Sorry, you are out of quesses, better luck next time!\n";
            }
        }
        std::cout << "Thank you for using this app!\n";
        break;
    case 2:
        int key{};
        std::cout << "Enter your text to be encrypted:";
        std::cin >> text;
        std::cout << "Enter key for encryption:";
        std::cin >> key;
        text = caesar_encrypt(text, key);
        std::cout << "Encrypted text is: " << text << std::endl;
        break;
    case 3:
        std::cout << "Ending program\n";

    default:
        std::cout << "Wrong input\n";
        break;

    return 0;
}