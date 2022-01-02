
/*  
    Assignment 1:

    There's a medical treatment that is only applicable if your age is 
    between 21 and 39 inclusive (21 and 39 are included in the range) . 
    Your task as a C++ developer is to write a program that checks whether 
    the user is eligible for the treatment. 

    Assignment 2:

    You'll write a C++ console program that lets the user type in a day 
    [1 : Monday,..., 7 : Sunday]. If the day is valid (between 1 and 7) 
    we say which day it is, otherwise we print an error message saying 
    the day is invalid and terminate the program.

    Assignment 3:

    You'll write a program that lets the user type in the current day 
    [1 : Monday,..., 7 : Sunday], and a day difference. Your program will 
    then go that day difference in the past and say which day of the week 
    we hit.

    Assignment 4:

    You'll write a C++ program that prompts the user to enter their 
    location point (x, y) .The program will check whether the point is 
    within the rectangle centered at (0, 0) with width of 20 and height 10.

*/

#include <iostream>

int main()
{   
    //  Assignment 1 solution

    std::cout << std::endl << " ------------ Assignment 1 ------------ " << std::endl;
    
    std::cout << "Please type your age: " << std::endl;
    int age;
    std::cin >> age;

    if (age >= 21){
        if (age > 39){
            std::cout << "Sorry, you are too old for the treatment!" << std::endl;
        }else{
            std::cout << "You are eligible for the treatment!" << std::endl;
        }
    }else{
        std::cout << "Sorry, you are too young for the treatment!" << std::endl;
    }


    //  Assignment 2 solution

    std::cout << std::endl << " ------------ Assignment 2 ------------ " << std::endl;

    std::cout << "Which day is today [1 : Monday,..., 7 : Sunday] : " << std::endl;
    int day;
    std::cin >> day;

    switch (day)
    {
    case 1:
        std::cout << "Today is Monday. Let's have some fun.";
        break;
    
    case 2:
        std::cout << "Today is Tuesday. Let's have some fun.";
        break;
    
    case 3:
        std::cout << "Today is Wednesday. Let's have some fun.";
        break;
    
    case 4:
        std::cout << "Today is Thursday. Let's have some fun.";
        break;
    
    case 5:
        std::cout << "Today is Friday. Let's have some fun.";
        break;
    
    case 6:
        std::cout << "Today is Saturday. Let's have some fun.";
        break;
    
    case 7:
        std::cout << "Today is Sunday. Let's have some fun.";
        break;
    
    default:
        std::cout << day << " is not a valid day. Bye!";
        break;
    }

    std::cout << std::endl;


    //  Assignment 3 solution

    std::cout << std::endl << " ------------ Assignment 3 ------------ " << std::endl;


    std::cout << "Which day is today [1 : Monday,..., 7 : Sunday] : " << std::endl;
    
    int current_day;

    std::cin >> current_day;

    if (current_day < 1 || current_day > 7){

        std::cout << current_day << " is not a valid day. Bye!";

    }else{

        std::cout << "How many days have passed up to today : " << std::endl;
        
        int day_diff;
        std::cin >> day_diff;

        switch (current_day)
        {
        case 1:
            std::cout << "Today is Monday. " << std::endl;
            break;
        
        case 2:
            std::cout << "Today is Tuesday. " << std::endl;
            break;
        
        case 3:
            std::cout << "Today is Wednesday. " << std::endl;
            break;
        
        case 4:
            std::cout << "Today is Thursday. " << std::endl;
            break;
        
        case 5:
            std::cout << "Today is Friday. " << std::endl;
            break;
        
        case 6:
            std::cout << "Today is Saturday. " << std::endl;
            break;
        
        case 7:
            std::cout << "Today is Sunday. " << std::endl;
            break;
        }

        int day_in_past {current_day - (day_diff % 7)};

        switch (day_in_past)
        {
        case 1:
            std::cout << "If we went " << day_diff << " days in the past we would hit a Monday. ";
            break;
        
        case 2:
            std::cout << "If we went " << day_diff << " days in the past we would hit a Tuesday. ";
            break;
        
        case 3:
            std::cout << "If we went " << day_diff << " days in the past we would hit a Wednesday. ";
            break;
        
        case 4:
            std::cout << "If we went " << day_diff << " days in the past we would hit a Thursday. ";
            break;
        
        case 5:
            std::cout << "If we went " << day_diff << " days in the past we would hit a Friday. ";
            break;
        
        case 6:
            std::cout << "If we went " << day_diff << " days in the past we would hit a Saturday. ";
            break;
        
        default:
            std::cout << "If we went " << day_diff << " days in the past we would hit a Sunday. ";
            break;
        }
    }

    std::cout << std::endl;


    //  Assignment 4 solution

    std::cout << std::endl << " ------------ Assignment 4 ------------ " << std::endl;
    
    std::cout << "Welcome to territory control. Please type in your x and y positions." << std::endl;
    
    std::cout << "Type in your x location:" << std::endl;
    double x;
    std::cin >> x;

     std::cout << "Type in your y location:" << std::endl;
    double y;
    std::cin >> y;

    if ( (x > -10) && (x < 10) && (y > -5) && (y < 5) ){
        std::cout << "you are completely surrounded. Don't move!";
    }else{
        std::cout << "you are out of reach!";
    }

    return 0;
}