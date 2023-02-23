#include <iostream>

/*
C++ comes chock-full of functions that are already created as part of the standard library. But how do we access this hidden hoard of helpful functions? We gain access to various functions by including headers like <cmath> or <string>.

In fact, you may already have used a couple functions without even knowing it! With the following header:

#include <cmath>
We gain the power to call sqrt() to find the square root of any number.

Wait, “call” sqrt()?

Calling a function is how we get a function to take action. To call a basic function, we just need the function name followed by a pair of parentheses like sqrt(9). For example:

std::cout << sqrt(9) << "\n";
// This would output 3
*/

/*
Declare & Define

A C++ function is comprised of two distinct parts:

Declaration: this includes the function’s name, what the return type is, and any parameters (if the function will accept input values, known as arguments).
Definition: also known as the body of the function, this contains the instructions for what the function is supposed to do.
This is the overall structure:

return_type function_name( any, parameters, you, have ) {
 
   // Code block here
 
   return output_if_there_is_any;
 
}
This is what it might look like with real code:

void make_sandwich() {
 
  std::cout << "bread\n";
  std::cout << "egg\n";
  std::cout << "cheese\n";
  std::cout << "avocado\n";
  std::cout << "bread\n";
 
}
*/

/*
Void
Let’s build a simple function with no input and no output. We can do that?

Enter the void specifier, which is added in the function declaration before the function name. A void function, also known as a subroutine, has no return value, making it ideally suited for situations where you just want to print stuff to the terminal.

For example:

void animal_chat() {
 
  std::string fav, pet;
 
  std::cout << "What's your favorite animal?\n";
  std::cin >> fav;
 
  std::cout << "Do you have a " << fav << " as a pet? y/n\n";
  std::cin >> pet;
 
  if (pet == "y") {
 
    std::cout << "How lucky you have a " << fav << " as a pet!\n";
 
  } else {
 
    std::cout << "That's too bad.\n";
 
  }
 
}
The above chat program is built to capture user responses and print to the terminal without returning any values.
*/

// Define oscar_wilde_quote() below:
void oscar_wilde_quote() {
  std::cout << "The highest, as the lowest, form of criticism is a mode of autobiography.\n";
}

int main() {
  
    // random number generator
    // This seeds the random number generator:
    srand (time(NULL));

    // Use rand() below to initialize the_amazing_random_number
    int the_amazing_random_number = rand() % 77;

    std::cout << the_amazing_random_number;

    // Call your function here:
    oscar_wilde_quote();

    

  
}