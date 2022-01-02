#include <iostream>


int main(){

	constexpr int SOME_LIB_MAJOR_VERSION {1237};
	
	constexpr int eye_count {2};
	
	constexpr double PI {3.14};

    //eye_count = 4;    // error
	
	std::cout << "eye count : " << eye_count << std::endl;
	std::cout << "PI : " << PI << std::endl;


	//int leg_count {2}; // Non constexpr
	                    // leg_count is not known at compile time
	//constexpr int arm_count{leg_count}; // Error 


	constexpr int room_count{10};
	constexpr int door_count{room_count};// OK
	
	const int table_count{5};
	constexpr int chair_count{ table_count * 5};// Works

   // static_assert : is used to check the values of const values assigned at compiling time

   // static_assert( SOME_LIB_MAJOR_VERSION == 123);    //will give error bcz it's not equal to 1237
   
   // int age = 5;
   // static_assert( age == 5); // not const

    static_assert( SOME_LIB_MAJOR_VERSION == 1237);     // will work fine
    std::cout << "App doing its thing..." << std::endl;


   
    return 0;
}