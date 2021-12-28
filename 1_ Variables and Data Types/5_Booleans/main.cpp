#include <iostream>

int main()
{
    bool red_light {true};
    bool green_light {false};

     if(red_light == true){                 // Condition form 1
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Go through!" << std::endl;
    }

    if(green_light){                        // Condition form 2
        std::cout << "The light is green!" << std::endl;
    }else{
        std::cout << "The light is NOT green!" << std::endl;
    }

    //sizeof()      // 1 byte
    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl;


    //Printing out a bool
    //1 -->> true
    //0 -->> false
    std::cout << std::endl;
    std::cout << "red_light : " << red_light << std::endl;      // Gives 1 or zero
    std::cout << "green_light : " << green_light << std::endl;

    std::cout << std::boolalpha;        // Make the result true or false instead of 1/0.
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;
   
    return 0;
}