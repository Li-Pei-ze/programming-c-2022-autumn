#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;

    std::cin >> n;

    if ((n % 10) == 0 && (n % 100) == 0)
    {
        switch (n / 100)
        {
        case 1:
            std::cout << "Сто бананов";
            break;

        case 2:
            std::cout << "Двести бананов";
            break;

        case 3:
            std::cout << "Триста бананов";
            break;

        case 4:
            std::cout << "Четыреста бананов";
            break;

        case 5:
            std::cout << "Пятьсот бананов";
            break;

        case 6:
            std::cout << "Шестьсот бананов";
            break;

        case 7:
            std::cout << "Семьсот бананов";
            break;

        case 8:
            std::cout << "Восемьсот бананов";
            break;

        case 9:
            std::cout << "Девятьсот бананов";
            break;
        default:
            break;
        }
        exit(0);
    }

    switch (n / 100)
    {
    case 1:
        std::cout << "Сто ";
        break;

    case 2:
        std::cout << "Двести ";
        break;

    case 3:
        std::cout << "Триста ";
        break;

    case 4:
        std::cout << "Четыреста ";
        break;

    case 5:
        std::cout << "Пятьсот ";
        break;

    case 6:
        std::cout << "Шестьсот ";
        break;

    case 7:
        std::cout << "Семьсот ";
        break;

    case 8:
        std::cout << "Восемьсот ";
        break;

    case 9:
        std::cout << "Девятьсот ";
        break;
    default:
        break;
    }

    if (((n % 100) >= 10) && ((n % 100) < 20))
    {
        switch (n % 100)
        {
        case 10:
            std::cout << "десять бананов";
            break;

        case 11:
            std::cout << "одиннадцать бананов";
            break;

        case 12:
            std::cout << "двенадцать бананов";
            break;

        case 13:
            std::cout << "тренадцать бананов";
            break;

        case 14:
            std::cout << "четырнадцать бананов";
            break;

        case 15:
            std::cout << "пятнадцать бананов";
            break;

        case 16:
            std::cout << "шестнадцать бананов";
            break;

        case 17:
            std::cout << "семьнадцать бананов";
            break;

        case 18:
            std::cout << "восемнадцать бананов";
            break;

        case 19:
            std::cout << "девятнадцать бананов";
            break;

        default:
            break;
        }
    }
    else
    {
        if ((n % 10) == 0)
        {
            switch ((n % 100) / 10)
            {
            case 2:
                std::cout << "двадцать бананов";
                break;
            case 3:
                std::cout << "тридцать бананов";
                break;
            case 4:
                std::cout << "сорок бананов";
                break;
            case 5:
                std::cout << "пятьдесят бананов";
                break;
            case 6:
                std::cout << "шестьдесят бананрв";
                break;
            case 7:
                std::cout << "семьдесят бананов";
                break;
            case 8:
                std::cout << "восемьдесят бананов";
                break;
            case 9:
                std::cout << "девяносто бананов";
                break;
            default:
                break;
            }
            exit(0);
        }
        switch ((n % 100) / 10)
        {
        case 2:
            std::cout << "двадцать ";
            break;
        case 3:
            std::cout << "тридцать ";
            break;
        case 4:
            std::cout << "сорок ";
            break;
        case 5:
            std::cout << "пятьдесят ";
            break;
        case 6:
            std::cout << "шестьдесят ";
            break;
        case 7:
            std::cout << "семьдесят ";
            break;
        case 8:
            std::cout << "восемьдесят ";
            break;
        case 9:
            std::cout << "девяносто ";
            break;
        default:
            break;
        }
        switch (n % 10)
        {
        case 1:
            std::cout << "один банан";
            break;
        case 2:
            std::cout << "два банана";
            break;
        case 3:
            std::cout << "три банана";
            break;
        case 4:
            std::cout << "четыре банана";
            break;
        case 5:
            std::cout << "пять бананов";
            break;
        case 6:
            std::cout << "шесть бананов";
            break;
        case 7:
            std::cout << "семь бананов";
            break;
        case 8:
            std::cout << "восемь бананов";
            break;
        case 9:
            std::cout << "девять бананов";
            break;
        default:
            break;
        }
    }

    return EXIT_SUCCESS;
}