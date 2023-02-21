#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {

// Coin flip demo
  
  // Create a number that's 0 or 1
  
  srand (time(NULL));
  int	coin = rand() % 2;
  
  // If number is 0: Heads
  // If it is not 0: Tails
  
  if (coin == 0) {
  
    std::cout << "Heads\n";
  
  }
	else {
	
    std::cout << "Tails\n";
  
  }
  
// if statement simplest form
// if (condition) {
// some code
// }

/*
The if keyword is followed by a set of parentheses (). Inside the parentheses (), a condition is provided that evaluates to true or false:

If the condition evaluates to true, the code inside the curly braces {} executes.
If the condition evaluates to false, the code won’t execute.
*/

// Relational Operators

/*
When writing conditional statements, sometimes we need to use different types of operators to compare values. These operators are called relational operators.

To have a condition, we need relational operators:

== equal to
!= not equal to
> greater than
< less than
>= greater than or equal to
<= less than or equal to
Relational operators compare the value on the left with the value on the right.
*/

// if (condition) {
//   do something
// } else if (condition) {
//   some code
// } else {
//   do something else
// }

// Else if example
int grade = 11;

if (grade == 9) {
 
  std::cout << "Freshman\n";
 
} 
else if (grade == 10) {
 
  std::cout << "Sophomore\n";
 
}
else if (grade == 11) {
 
  std::cout << "Junior\n";
 
} 
else if (grade == 12) {
 
  std::cout << "Senior\n";
 
}
else {
 
  std::cout << "Super Senior\n";
 
}

// Else if challenge
double ph = 4.6;
  
if (ph > 7) {
std::cout << "Basic\n";
} else if (ph < 7) {
std::cout << "Acidic\n";
} else {
std::cout << "Neutral\n";
}

// Switch Statement
/*
A switch statement provides an alternative syntax that is easier to read and write. However, you are going to find these less frequently than if, else if, else in the wild.

switch (grade) {
 
  case 9:
    std::cout << "Freshman\n";
    break;
  case 10:
    std::cout << "Sophomore\n";
    break;
  case 11:
    std::cout << "Junior\n";
    break;
  case 12:
    std::cout << "Senior\n";
    break;
  default:
    std::cout << "Invalid\n";
    break;
 
}

- The switch keyword initiates the statement and is followed by (), which contains the value that each case will compare. In the example, the value or expression of the switch statement is grade. One restriction on this expression is that it must evaluate to an integral type (int, char, short, long, long long, or enum).
- Inside the block, {}, there are multiple cases.
- The case keyword checks if the expression matches the specified value that comes after it. The value following the first case is 9. If the value of grade is equal to 9, then the code that follows the : would run.
- The break keyword tells the computer to exit the block and not execute any more code or check any other cases inside the code block.
- At the end of each switch statement, there is a default statement. If none of the cases are true, then the code in the default statement will run. It’s essentially the else part.
- In the code above, suppose grade is equal to 10, then the output would be “Sophomore”.

Note: Without the break keyword at the end of each case, the program would execute the code for the first matching case and all subsequent cases, including the default code. This behavior is different from if / else conditional statements which execute only one block of code.
*/

int number = 9;
  
  switch(number) {
    
    case 1 :
      std::cout << "Bulbusaur\n";
      break;
    case 2 :
      std::cout << "Ivysaur\n";
      break;
    case 3 :
      std::cout << "Venusaur\n";
      break;
    case 4 :
      std::cout << "Charmander\n";
      break;
    case 5 :
      std::cout << "Charmeleon\n";
      break;
    case 6 :
      std::cout << "Charizard\n";
      break;
    case 7 :
      std::cout << "Squirtle\n";
      break;
    case 8 :
      std::cout << "Wartortle\n";
      break;
    case 9 :
      std::cout << "Blastoise\n";
      break;
    default :
      std::cout << "Unknown\n";
      break;
  }
  // prints Blastoise

// Review Space Boxer Challenge
double weight;
int x;

std::cout << "Please enter your Earth Weight:\n";
std::cin >> weight;

std::cout << "\nPlease select which planet you will be fighting on:\n"; 
std::cout << "   1. Venus   2. Mars    3. Jupiter\n";
std::cout << "   4. Saturn  5. Uranus  6. Neptune\n\n";

std::cout << "Which planet are you visiting? ";
std::cin >> x;

if (x == 1) {
weight = weight * 0.38;
} else if (x == 2) {
weight = weight * 0.91;
} else if (x == 3) {
weight = weight * 0.38;
} else if (x == 4) {
weight = weight * 2.34;
} else if (x == 5) {
weight = weight * 1.06;
} else if (x == 6) {
weight = weight * 0.92;
} else {
weight = weight * 1.19;
}

std::cout << "\nYour weight: " << weight << "\n";

}