#include <iostream>

int main()
{
    int dec_No  = 15;	        // decimal
    int oct_No  = 015;	        // octal
    int hex_No  = 0x15;	        // hex
    int bin_no  = 0b00100101;	// binary (work for c++14 - c++20)

    std::cout << "dec_No: " << dec_No << std::endl;
    std::cout << "oct_No: " << oct_No << std::endl;
    std::cout << "hex_No: " <<hex_No << std::endl;
    std::cout << "bin_no: " << bin_no << std::endl;

    return 0;
}