#include <iostream>

int main()
{
    int n = 0;

    int PRICE_1 = 15; // ticket prices are constants
    int PRICE_5 = 70;
    int PRICE_10 = 125;
    int PRICE_20 = 230;
    int PRICE_60 = 440;

    int ticket_1 = 0;
    int ticket_5 = 0;
    int ticket_10 = 0;
    int ticket_20 = 0;
    int ticket_60 = 0;

    std::cin >> n;

    ticket_60 = n / 60;
    ticket_20 = (n - 60 * ticket_60) / 20;
    ticket_10 = (n - 60 * ticket_60 - 20 * ticket_20) / 10;
    ticket_5 = (n - 60 * ticket_60 - 20 * ticket_20 - 10 * ticket_10) / 5;
    ticket_1 = (n - 60 * ticket_60 - 20 * ticket_20 - 10 * ticket_10 - 5 * ticket_5);

    if (ticket_1 * PRICE_1 + ticket_5 * PRICE_5 >= 125)
    {
        ticket_1 = 0;
        ticket_5 = 0;
        ticket_10 += 1;
    }
    if (ticket_1 * PRICE_1 + ticket_5 * PRICE_5 + ticket_10 * PRICE_10 >= 230)
    {
        ticket_1 = 0;
        ticket_5 = 0;
        ticket_10 = 0;
        ticket_20 += 1;
    }
    if (ticket_1 * PRICE_1 + ticket_5 * PRICE_5 + ticket_10 * PRICE_10 + ticket_20 * PRICE_20 >= 440)
    {
        ticket_1 = 0;
        ticket_5 = 0;
        ticket_10 = 0;
        ticket_20 = 0;
        ticket_60 += 1;
    }

    std::cout << ticket_1 << " " << ticket_5 << " " << ticket_10 << " " << ticket_20 << " " << ticket_60;
    return EXIT_SUCCESS;
}