#include <iostream>
#include <string>
int main()
{
    std::string napis = "Ala ma kota";
    std::string nowynapis = napis.substr(4,7);
    std::cout << nowynapis << std::endl << napis;
    return 0;
}
