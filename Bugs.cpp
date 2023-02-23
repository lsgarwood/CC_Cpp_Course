/*
In C++, there are many different ways of classifying errors, but they can be boiled down to four categories:

Compile-time errors: Errors found by the compiler.
Link-time errors: Errors found by the linker when it is trying to combine object files into an executable program.
Run-time errors: Errors found by checks in a running program.
Logic errors: Errors found by the programmer looking for the causes of erroneous results.
*/

/*
Compile Time Errors
There are two types of compile-time errors:

Syntax errors: Errors that occur when we violate the rules of C++ syntax.
Type errors: Errors that occur when there are mismatch between the types we declared.
Some common syntax errors are:

Missing semicolon ;
Missing closing parenthesis ), square bracket ], or curly brace }
Some common type errors are:

Forgetting to declare a variable
Storing a value into the wrong type
*/

/*
Link Time Errors

Sometimes the code compiles fine, but there is still a message because the program needs some function or library that it can’t find. This is known as a link-time error.

As our program gets bigger, it is good practice to divide the program into separate files. After compiling them, the linker takes those separate object files and combines them into a single executable file. Link-time errors are found by the linker when it is trying to combine object files into an executable file.

Some common link-time errors:

Using a function that was never defined (more on this later)
Writing Main() instead of main()
Here’s an example of a link-time error message:

/usr/lib/gcc/x86_64-linux-gnua/7/../../../x86_64-linux

These errors are more hard to find, but remember, Google is your friend! Here, a good Google search would be: “C++ undefined reference to main”.
*/

/*
Run Time Error

If our program has no compile-time errors and no link-time errors, it’ll run. This is where the fun really starts.

Errors which happen during program execution (run-time) after successful compilation are called run-time errors. Run-time errors occur when a program with no compile-time errors and link-time errors asks the computer to do something that the computer is unable to reliably do.

It happens after we give the ./ execute command:

./a.out
Some common run-time errors:

Division by zero also known as division error. These types of error are hard to find as the compiler doesn’t point to the line at which the error occurs.
Trying to open a file that doesn’t exist
There is no way for the compiler to know about these kinds of errors when the program is compiled.

Here’s an example of a run-time error message:

Floating point exception (core dumped)
*/

/*
Logical Errors
Logical errors solely depend on the logical thinking of the programmer. Your job now is to figure out why the program didn’t do what you wanted it to do.

Some common logic errors:

Program logic is flawed
Some “silly” mistake in an if statement or a for/while loop
Note: Logic errors don’t have error messages. Sometimes, programmers use a process called test-driven development (TDD), a way to give logic errors error messages and save yourself a lot of headaches!
*/

// Fortune Cookie debug exercise....

#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() { // capital M 
    
  srand (time(NULL));
  int	fortune = rand() % 10;
  
  if (fortune == 0) { // only one = 

    std::cout << "Flattery will go far tonight.\n";
  
  } else if (fortune == 1) {
    
    std::cout << "Don't behave with cold manners.\n"; // ; missing
  
  } else if (fortune == 2) {
    
    std::cout << "May you someday be carbon neutral\n";
    
  } else if (fortune == 3) {
    
    std::cout << "You have rice in your teeth.\n";
    
  } else if (fortune == 4) {
    
    std::cout << "A conclusion is simply the place where you got tired of thinking.\n";
    
  } else if (fortune == 5) { // number 5 missing
    
    std::cout << "No snowflake feels responsible in an avalanche.\n";
    
  } else if (fortune == 6) {
    
    std::cout << "He who laughs last is laughing at you.\n";
    
  } else if (fortune == 7) {
    
    std::cout << "If you look back, you'll soon be going that way.\n";
    
  } else if (fortune == 8) {
    
    std::cout << "You will die alone and poorly dressed.\n";
      
  } else if (fortune == 9) { // { missing
    
    std::cout << "The fortune you seek is in another cookie.\n";
      
  }
  
}