#include <iostream>

int main() {
  
  //WHILE LOOPS
  //Enter Pin Demo
  int pin = 0;
  int tries = 0;
  
  std::cout << "BANK OF CODECADEMY\n";
  
  std::cout << "Enter your PIN: ";
  std::cin >> pin;

  tries++;

  while (pin != 1234 && tries < 3) {
    
    std::cout << "Enter your PIN: ";
    std::cin >> pin;
    tries++;
    
  }
  
  if (pin == 1234) {
    
    std::cout << "PIN accepted!\n";
    std::cout << "You now have access.\n"; 
    
  }

/* The while loop looks very similar to an if statement. And just like an if statement, it executes the code inside of it if the condition is true.

However, the difference is that the while loop will continue to execute the code inside of it, over and over again, as long as the condition is true.

Here is what a while loop looks like:

while (condition) {

  statements

}
In other words, instead of executing if something is true, it executes while that thing is true.

while (guess != 8) {
 
  std::cout << "Wrong guess, try again: ";
  std::cin >> guess;
 
}
In this example, while guess is not equal to 8, the program will keep on asking the user to input a new number. It will exit the while loop once the user types in 8 and then the program will continue.
*/

// Number guessing game
    int guess;

    int tries = 0;

    std::cout << "I have a number 1-10.\n";
    std::cout << "Please guess it: ";
    std::cin >> guess;

    // In this while loop, while guess does not equal to 8 and the number of tries is less than 50, we are asking the user to type a number once again. And then we add 1 to tries using the ++ operator
    while (guess != 8 && tries < 50) {

    std::cout << "Wrong guess, try again: ";
    std::cin >> guess;

    tries++;

    }

    if (guess == 8) {

    std::cout << "You got it!\n";

    }  

    // Calculate list of squared numbers

    int i = 0;
    int square = 0;

    // Write a while loop here:

    while (i >= 0 && i <= 9) {
    square = i * i;
    std::cout << i << " " << square << "\n";
    i++;
    }

    // FOR LOOPS
    /*
    When we know exactly how many times we want to iterate (or when we are counting), we can use a for loop instead of a while loop:

    for (int i = 0; i < 20; i++) 
    {
    
    std::cout << "I will not throw paper airplanes in class.\n";
    
    }
    Let’s take a closer look at the first line:

    for (int i = 0; i < 20; i++)
    There are three separate parts to this separated by ;:

    The initialization of a counter: int i = 0
    The continue condition: i < 20
    The change in the counter (in this case an increment): i++
    So here we are creating a variable i that starts from 0. We will repeat the code inside over and over again when i is less than 20. At the end the for loop, we are adding 1 to i using the ++ operator.
   
   Incrementing for loop:

    for (int i = 0; i < 20; i++) 
    {
    // Statements
    }
    Decrementing for loop:

    for (int i = 20; i > 0; i--) 
    {
    // Statements
    }
    */

    // Write a 99bottles.cpp program that prints the verses of the “99 Bottles” song
    for (int i = 99; i > 0; i--) {
    std::cout << i << " bottles of pop on the wall.\n";
    std::cout << "Take one down and pass it around.\n";
    std::cout << i-1 << "bottles of pop on the wall.\n";
  }

}