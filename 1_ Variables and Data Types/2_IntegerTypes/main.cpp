#include <iostream>

int main()
{
    int elephant_count;	    // may contain random garbage value. gives WARN
    int lion_count {};	    // initialize to 0
    int dog_count {10};	    // initialize to 10
    int cat_count {15};	    // initialize to 15
    int group_of_animals {dog_count + cat_count};	    // initialize to 15
    
    //  int test (3.9);     // will compile but the value will be 3
    //  int test {3.9};     // will give compiling error
    //  int test = 3.9;     // will compile but the value will be 3


    std::cout << "elephant_count: "     << elephant_count   << std::endl;
    std::cout << "lion_count: "         << lion_count       << std::endl;
    std::cout << "dog_count: "          << dog_count        << std::endl;
    std::cout << "cat_count: "          << cat_count        << std::endl;
    std::cout << "group_of_animals: "   << group_of_animals << std::endl;
    std::cout << "size of int: "        << sizeof(int)      << std::endl;

    return 0;
}

/* ------------- Notes ------------- */

/*  
int example {10};	// Braced initialization
int example (10);	// Functional initialization
int example = 10;	// Assignment initialization
*/