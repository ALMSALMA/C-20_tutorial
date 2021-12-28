#include <iostream>
#include <iomanip>



int main(){

    //Scientific notation

    //Declare and initialize the variables
    float number1 {1.12345678901234567890f};        // Precision will be 7 and we have to put the suffix f for float
    double number2 {1.12345678901234567890};        // Precision : 15
    long double number3  {1.12345678901234567890L}; // we have to put the suffix L for long double
    
    //Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;



    //Precision
    std::cout << std::setprecision(20);                     // Control the precision from std::cout. To use this function we have to include iomanip library
    std::cout << "number1 is : " << number1 << std::endl;   // 7 digits will be correct and the rest of digits will be junk
    std::cout << "number2 is : " << number2 << std::endl;   // 15 digits will be correct and the rest of digits will be junk (15 may change in different compiler)
    std::cout << "number3 is : " << number3 << std::endl;   // 15+ digits


    //Float problems : The precision is usually too limited

    //for a lot of applications
    float number4 = 192400023.0f;               // Error : narrowing conversion. Since float just handles 7 digits, the last two digits will be junk.

    std::cout << "number4 : " << number4 << std::endl;


    //Scientific notation

    std::cout << "-------------------------" << std::endl;
    
    double number5 {192400023};         
    double number6 {1.92400023e8};          // e8 = multiply with 10 to the power of 8
    double number7 {1.924e8};      
    double number8 {0.00000000003498};
    double number9 {3.498e-11}; 
    
    std::cout << "number5 is : " << number5 << std::endl;
    std::cout << "number6 is : " << number6 << std::endl;
    std::cout << "number7 is : " << number7 << std::endl;
    std::cout << "number8 is : " << number8 << std::endl;
    std::cout << "number9 is : " << number9 << std::endl;



    //Infinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;
    
    double number10 {-5.6};
    double number11{};          //Initialized to 0
    double number12{}; 

    //Infinity
    double result { number10 / number11 };      // if 'number10' is "+" the result will be "+inf" and if it is "-" the result will be "-inf"
    
    
    std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;
    
    //NaN
    result = number11 / number12;
    
    
    std::cout << number11 << "/" << number12 << " = " << result << std::endl;
    
   
    return 0;
}