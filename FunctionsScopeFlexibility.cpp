#include <iostream>
#include <cmath>

/*
Scope
Take a look at the program below. We have a void function named favorite_animal() and main() with a few statements inside.

#include <iostream>
 
std::string sea_animal = "manatee";
 
void favorite_animal(std::string best_animal) {
 
  std::string animal = best_animal;
  std::cout << "Best animal: " << animal << "\n";
 
}
 
int main() {
 
  favorite_animal("jaguar");
 
  std::cout << sea_animal << "\n";
  std::cout << animal << "\n";
 
}
When this program is compiled and executed, sea_animal will print, but animal won’t. Why do you think that’s the case?

Scope is the region of code that can access or view a given element.

Variables defined in global scope are accessible throughout the program.
Variables defined in a function have local scope and are only accessible inside the function.
sea_animal was defined in global scope at the top of the program, outside of main(). So sea_animal is defined everywhere in the program.

Because animal was only defined within favorite_animal() and not returned, it is not accessible to the rest of the program.
*/

/*
Multi File Programmes

Programs can grow quickly. With a few functions, you can declare the function above main() and then you can define the function below main() like this:

#include <iostream>
 
// Declaration at the top:
void eat();
 
int main() {
 
  eat();
 
}
 
// Definition at the bottom:
void eat() {
 
  std::cout << "nom nom nom\n";
 
}
But this isn’t ideal when your code gets longer; it’s common to use the same function in more than one .cpp file.

To make your code cleaner and more modular, you can move the function definitions over to another specialized .cpp file (e.g., my_functions.cpp), leaving a list of declarations above main().

But files, like functions, have scope. So, how does the main() program know about the function definitions?

Before your program even compiles, it links together any files you list in your compilation statement into a single executable:

g++ main.cpp my_functions.cpp
And voila! Your program knows the function definitions.
*/

/*
Header files

If your program keeps growing, you may have to scroll through many declarations before you see main(). That doesn’t seem like the best way to do things. Plus you don’t want to keep declaring the same functions over and over for different files — making changes would be incredibly tiresome!

Well, you can take those function declarations and move them all over to a header file, another file — usually with the same name as the file with all of the function definitions — with the extension .hpp or .h. For example, if your function definitions are in my_functions.cpp, the corresponding header file would be my_functions.hpp or my_functions.h.

So how do you bring everything from a header file into scope for another file? Do you just link the header in the compilation statement like you did with the second .cpp file?

As it turns out, with headers, you can just add #include "my_functions.hpp" to the very top of main.cpp:

#include "my_functions.hpp"
Boom! This line pastes in everything from my_functions.hpp. Now you have access to all of the function declarations you stowed away in your header.
*/

/*
Function Inline

An inline function is a function definition, usually in a header file, qualified by inline like this:

inline 
void eat() {
 
  std::cout << "nom nom\n";
 
}
Using inline advises the compiler to insert the function’s body where the function call is, which sometimes helps with execution speed (and sometimes hinders execution speed). If you do use it, we recommend testing how it affects the execution speed of your program. The bottom line is inline is something you’ll probably encounter, but may never use.

However, you will sometimes also hear about “inline functions” that are just member functions (i.e. functions inside of classes — we’ll explain classes later) which have been defined and declared in a single line in a header file because the function body is so short:

// cookie_functions.hpp
 
// eat() belongs to the Cookie class:
void Cookie::eat() {std::cout << "nom nom\n";} 
Please note that you should ALWAYS add the inline keyword if you are inlining functions in a header (unless you are dealing with member functions, which are automatically inlined for you).
*/

/*
Default arguments

To make your code more flexible for situations like this, you can add default arguments to your function declarations. Default arguments are values assigned to parameters when the function is declared and defined:

// Declaration
void intro(std::string name, std::string lang = "C++");
 
// Definition
void intro(std::string name, std::string lang) {
  std::cout << "Hi, my name is "
            << name
            << " and I'm learning "
            << lang
            << ".\n";
}
Then, if you leave the argument blank in your function call, instead of an error, your function will run with the default value. Meanwhile, if you DO have an argument to add when you call the function, that argument will replace the default argument when your code executes.

Either of these will work for the function we defined:

intro("Mariel")
// "Hi, my name is Mariel and I'm learning C++."
intro("Mariel", "Python")
// "Hi, my name is Mariel and I'm learning Python."
Important: Your computer cannot read your mind; it determines which argument corresponds with which parameter based on order.

Parameters without default arguments come first. This will work for add_nums(3); because the computer knows 3 corresponds to num1:

int add_nums(int num1, int num2 = 0);
But the following does NOT work for add_num(3); the computer assumes that 3 still corresponds to num1:

int add_nums(int num1 = 0, int num2);
Similarly, when a function has two default arguments, you still need to call with both arguments — if BOTH of the following are true:

The first argument IS the default value.
The second argument is NOT the default value.
*/

/*
Function Overload

In a process known as function overloading, you can give multiple C++ functions the same name. Just make sure at least one of these conditions is true:

Each has different type parameters.
Each has a different number of parameters.
Overloading enables you to change the way a function behaves depending on what is passed in as an argument:

void print_cat_ears(char let) {
  std::cout << " " << let << "   " << let << " " << "\n";
  std::cout << let << let << let << " " << let << let << let << "\n";
}
 
void print_cat_ears(int num) {
  std::cout << " " << num << "   " << num << " " << "\n";
  std::cout << num << num << num << " " << num << num << num << "\n";
}
Given the above functions, you could call the functions like so and C++ will know what to do:

print_cat_ears('A');
print_cat_ears(4);
Output:

 A   A 
AAA AAA
 
 4   4
444 444
*/

/*
Function Templates

Unlike regular functions, templates are entirely created in header files.

Templates let us choose the type implementation right when you call the function. The type we choose may apply to the return type, a parameter type, or both.

Here’s how we could build a template for print_cat_ears() so that the parameter type is flexible:

template <typename T>
void print_cat_ears(T item) {
 
  std::cout << " " << item << "   " << item << " " << "\n";
  std::cout << item << item << item << " " << item << item << item << "\n";
 
}
We can call the function for int, char, std::string, or double:

print_cat_ears(2);
 
// the output:
//  2   2
// 222 222
Now we can use print_cat_ears() with a parameter of any type we want, as long as the type can be used with the methods expected. For example, we couldn’t pass an std::vector into the current print_cat_ears() because << won’t work with std::vector.

Note: Using templates will slow down the program’s compile time, but speed up the execution time.
*/



/* fns.cpp.cpp file takes the function definitions which will be read from main
#include <iostream>
#include <cmath>
*/
double average(double num1, double num2) {
  return (num1 + num2) / 2;
}

int tenth_power(int num) {
  return pow(num, 10);
}

bool is_palindrome(std::string text) {
  std::string reversed_text = "";
  
  for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text += text[i];
  }
  
  if (reversed_text == text) {
    return true;
  }
  
  return false;
}

// Declarations of functions in header file....fns.hpp
double average(double num1, double num2);
int tenth_power(int num);
bool is_palindrome(std::string text);

// template
template <typename T>
T get_smallest(T num1, T num2) {
  
  return num2 < num1? num2 : num1;
  
}


/* And libraries, headers and main in main.cpp
#include <iostream>
#include "fns.hpp"
*/

int main() {
  
  std::cout << is_palindrome("racecar") << "\n";
  std::cout << tenth_power(3) << "\n";
  std::cout << average(8.0, 19.0) << "\n";
  
  // template
  std::cout << get_smallest(100, 60) << "\n";
  std::cout << get_smallest(2543.2, 3254.3) << "\n";
  
}
