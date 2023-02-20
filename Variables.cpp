/* 
A variable is simply a name that represents a particular piece of your computer’s memory that has been set aside for you to store, retrieve, and use data.

In this lesson, we will learn about some of the basic data types:

int: integer numbers
double: floating-point numbers
char: individual characters
string: a sequence of characters
bool: true/false values 
*/

/*
Arithmetic Operators

+ addition
- subtraction
* multiplication
/ division
% modulo (divides and gives the remainder)

The order of operations can be specified using parentheses. For example, the use of parentheses in score = 5 * (4 + 3) sets score equal to 5 * 7 rather than 20 + 3.
*/

/*
Chaining

int age = 28;
 
std::cout << "Hello, I am ";
std::cout << age;
std::cout << " years old\n";
It will output:

Hello, I am 28 years old
Notice how we use quotes around the characters in "Hello, I am " but not in age.

We use quotes when we want a literal string.
We don’t use quotes when we refer to the value of something with a name (like a variable).
So now, is it possible to write the cout statements within a single line?

Yep! You can use multiple << operators to chain the things you want to output.

For the same code above you can also do:

int age = 28;
 
std::cout << "Hello, I am " << age << " years old\n";
This is called chaining.
*/

/*
Input

We have cout for output, and there is something called cin that’s used for input!

std::cout << "Enter your password: ";
std::cin >> password;

The name cin refers to the standard input stream (pronounced “see-in”, for character input). The second operand of the >> operator (“get from”) specifies where that input goes.
*/

#include <iostream>

int main() 
{

    // Declare a variable
    int year;

    // initialise a variable
    // the = means assign not equal to
    year = 2019;

    // We can actually combine these two lines into a single line of code:
    int year = 2019;

    std::cout << year << "\n";
    // Notice how when we want to output a variable, we don’t add double quotes around its name.

    //chaining
    std::cout << "The year is " << year << "\n";

    //input
    int dob = 1986;
    std::cout << "Enter your D.O.B: ";
    std::cin >> year;
    std::cout << "You were born in " << year << "\n";
     

    // Challenge 1 - using set value
    //declare and intiialize temp in f
    double tempf = 50;

    double tempc = (tempf - 32)/1.8;
    
    std::cout << "The temp is " << tempc << " degrees Celsius.\n";

    // Challenge 2 - with input
    // declare variables
    double tempf;
    double tempc;
    
    // Ask the user
    std::cout << "Enter the temperature in Farenheit: ";
    std::cin >> tempf;
    
    // Caluclate temp c
    tempc = (tempf - 32) / 1.8;
    
    std::cout << "The temp is " << tempc << " degrees Celsius.\n";

    //Challenge 3 - miles to kms
    // declare weight variable
    double miles;
    double kms;

    std::cout << "Enter your distance in Miles: ";
    std::cin >> miles;

    //calculate kms
    kms = miles * 1.609344;

    std::cout << miles << " miles in kilometers is: " << kms << " km\n";
}