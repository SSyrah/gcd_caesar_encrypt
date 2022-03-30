#include "syt.h"
using std::cin;
using std::cout;
using std::endl;

int menu()
{
    int option{};
    bool operand = true;
    std::cout << "Welcome! \n"
              << "You have to options: 1 = Try to guess greatest common divisor.\n"
              << "2 = Encrypt message using Ceasar's algorhytm\n"
              << "Your choise (1 / 2):";
    std::cin >> option;
    while (operand)
    {
        if (std::cin.fail())
        {
            std::cout << "Sorry, try again, not a valid option!" << std::endl;
            std::cin.clear();
            std::cin.ignore(80, '\n');
        }
        else
        {
            operand = false;
        }
    }
}

int check_option()
{
    bool operand = true;
    int temp;

    while (operand)
    {
        std::cout << "Enter quess: ";
        std::cin >> temp;
        if (std::cin.fail())
        {
            std::cout << "Sorry, try again, not a number!" << std::endl;
            std::cin.clear();
            std::cin.ignore(80, '\n');
        }
        else
        {
            operand = false;
        }
    }
    return temp;
}

int syt(int x, int y)
{
    int temp;
    while (y > 0)
    {
        temp = x;
        x = y;
        y = temp % y;
    }
    return x;
}

bool check(int result, int quess)
{
    return result == quess;
}

std::string caesar_encrypt(std::string input, int key)
{
    std::string result = "";

    for (int i = 0; i < input.length(); i++)
    {
        if (isupper(input[i]))
        {
            result += char(int(input[i] + key - 65) % 26 + 65);
        }
        else
            result += char(int(input[i] + key - 97) % 26 + 97);
    }
    return result;
}
