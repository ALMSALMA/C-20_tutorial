#include <iostream>

int main()
{
    //		. The compiler applies implicit conversions
	// 			when types are different in 
	//			an expression
	//		. Conversions are always done from the smallest
	//			to the largest type in this case int is 
	//			transformed to double before the expression
	//			is evaluated.Unless we are doing an assignment
	
	double price { 45.6 };
    int units {10};
    
    auto total_price = price * units; // units will be implicitly converted to double
	
	std::cout << "Total price : " << total_price << std::endl;
	std::cout << "sizeof total_price : " << sizeof(total_price) << std::endl;



/*
	//Implicit conversions in assignments
	// The assignment operation is going to cause an implicit
	// narrowing conversion , y is converted to int before assignment
	int x;
    double y {45.44};
    x = y; // double to int
	std::cout << "The value of x is : " << x << std::endl; // 45
	std::cout << "sizeof x : " << sizeof(x) << std::endl;// 
*/

    //Implicit cast will add up the doubles,
	//then turn result into int for assignment
	double x { 12.5 };
    double y { 34.6};
    
    int sum = x + y; 
    
    std::cout << "The sum  is : " << sum << std::endl;


	//Explicity cast : cast then sum up
	sum = static_cast<int>(x) + static_cast<int>(y) ;
    std::cout << "The sum  is : " << sum << std::endl;

	//Explicit cast : sum up then cast, same thing as implicit cast
	sum =  static_cast<int> (x + y);
	std::cout << "Sum up then cast, result : " << sum << std::endl;


	
	double PI {3.14};
	
	//int int_pi = (int)(PI);   //Old style C-cast
    
    int int_pi = static_cast<int>(PI);
	std::cout << "PI : " << PI << std::endl;
    std::cout << "int_pi : " << int_pi << std::endl;
    return 0;
}