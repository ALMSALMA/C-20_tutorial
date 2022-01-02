#include <iostream>
#include <bitset>

int main()
{
//  we need to include bitset and then std::bitset<NO_of_bits>(data)
 unsigned short int data {15};

    std::cout << "data (dec) : " <<std::showbase << std::dec << data << std::endl;
    std::cout << "data (oct) : " <<std::showbase << std::oct << data << std::endl;
    std::cout << "data (hex) : " <<std::showbase << std::hex << data << std::endl;
    std::cout << "data (bin) : " <<std::showbase << std::bitset<16>(data) << std::endl;
    return 0;
}