#include <iostream>

int main()
{
    char character1 {'a'};
    
    std::cout << character1 << std::endl;

    //One byte in memory : 2^8 = 256 different values (0 ~ 255)
    std::cout << std::endl;
    
    char value = 65 ;           // ASCII character code for 'A'
    std::cout << "value : " << value << std::endl;  // A
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl; // Gives the ascii value of A
    
    return 0;
}