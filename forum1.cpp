#include <iostream>
#include <limits>
int main()
{
    float a;
    bool prawda;
    do
    {
        std::cout << "Podaj liczbe: ";
        std::cin >> a;
        prawda = std::cin.good();
        std::cin.clear();
        std::cin.ignore( 1000, '\n' );
        if(a == 0)
        {
            std::cout << "Koniec programu";
            return 0;
        }
    } while(prawda == 0);
    std::cout << "Podana liczba to " << a << std::endl;
    return 0;
}
