#include <iostream>

int main()
{
    int max{};
    
    int a{35};
    int b{200};

    bool init_with_ternary { (b > a)? true : false };
	
    std::cout << std::endl;
	std::cout << "using regular if " << std::endl;
	
    /*
    if(a >  b){
        max = a;
    }else{
        max = b;
    }
    */

    max = (a > b)? a : b; // Ternary operator
	
    std::cout << "max : " << max << std::endl;
    std::cout << "init_with_ternary : " << std::boolalpha << init_with_ternary << std::endl;
    return 0;
}