#include <iostream>

int main()
{
    int ans_system = 0;
    int ans_student = 0;
    std::cin >> ans_system;
    std::cin >> ans_student;

    if ((ans_student != 1) && (ans_system == 1))
    {
        std::cout << "NO";
    }
    else if ((ans_student == 1) && (ans_system != 1))
    {
        std::cout << "NO";
    }
    else
    {
        std::cout << "YES";
    }
    return EXIT_SUCCESS;
}