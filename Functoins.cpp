#include <iostream>
#include <vector>

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

/*
Return Types
When you do in fact want your function to return something and pass information back to the rest of your program, C++ has you covered. Just like there are many variable types, there are many different return types for functions.

A function can return most data types we’ve covered, including double, int, bool, char, std::string, and std::vector.

std::string always_blue() {
 
  return "blue!\n";
 
}
Note: The return statement is the last line of code that a function will execute. For example:

std::string always_blue() {
 
  return "blue!\n";
 
  std::cout << "Returned blue!";
 
}
The final line will not execute because a value has already been returned. So "Returned blue!" won’t be printed to the terminal.

When functions have a return type other than void, the function has two new requirements:

There must be a value returned from the function.
The return value must be the same type as the function’s return type.
But where does the return value get returned to?

It gets returned to the place where the function is called. For example, if you have the following function:

std::string feed_the_cat() {
 
  return "Cat is fed!";
 
}
And then print the function call inside of main():

int main() {
 
  std::string cat_message = feed_the_cat();
  std::cout << cat_message;
 
}
The return value of the function is what gets printed to the terminal.
*/

/*
Parameters and arguments

 Parameters (sometimes called formal parameters) are variables used in a function’s definition. They act as placeholders for the input values you’ll use during your function call.

In the function below, price is the function’s parameter and it’s a double. It is declared between the parentheses and then used in the body of the function.

double get_tip(double price) {
 
  return price * 0.2;
 
}
Then, when you’re ready to use your function, the value you pass to the function is called an argument (also known as an actual parameter). In this case, 15.75 is the argument that is passed to the function:

double tip = get_tip(15.75);
// tip would be 3.15
*/

/*
Tackling multiple arguments

You can add as many parameters or arguments as you like, but you will have to remember their order when you call the function.

double get_tip(double price, double tip, bool total_included) {
 
  if (total_included) {
 
    return price * tip + price;
 
  } else {
 
    return price * tip;
 
  }
 
}
So here we have three parameters:

double price
double tip
bool total_included
When calling get_tip(), it’s important to call it with price first, tip second, and return_total last:

get_tip(0.25, true, 45.50);
// this code will not work
get_tip(45.50, 0.25, true);
// this code results in 56.875, which you could round up to 56.88
*/

// Define oscar_wilde_quote() below:
void oscar_wilde_quote() {
  std::cout << "The highest, as the lowest, form of criticism is a mode of autobiography.\n";
}

// Define needs_it_support() to return support
bool needs_it_support() {
  
  bool support;
  
  std::cout << "Hello. IT. Have you tried turning it off and on again? Enter 1 for yes, 0 for no.\n";
  std::cin >> support;
  return support;
  
}

// Define get_emergency_number() below:
void get_emergency_number(std::string emergency_number) {
  std::cout << "Dial " << emergency_number;
}

// Define name_x_times() below:
void name_x_times(std::string name, int x) {
  while (x > 0) {
    std::cout << name << "\n";
    x--;
  }
}

// CHALLENGE FUNCTIONS
void introduction(std::string first_name, std::string last_name) {
  std::cout << last_name << ", " << first_name << " " << last_name;
}

double average(double num1, double num2) {
  double average = (num1 + num2) / 2;
  return average;
}

int tenth_power(int num){
  num = num * num * num * num * num * num * num * num * num * num;
  return num;
}

// attempt1
std::vector<int> first_three_multiples(int num) {
  std::vector<int> num_list;
  int num1 = num * 1;
  int num2 = num * 2;
  int num3 = num * 3;
  num_list.push_back(num1);
  num_list.push_back(num2);
  num_list.push_back(num3);
  return num_list;
}

// attempt2
std::vector<int> first_three_multiples(int num) {
  std::vector<int> num_list;
  num_list.push_back(num * 1);
  num_list.push_back(num * 2);
  num_list.push_back(num * 3);
  return num_list;
}

// attempt3
std::vector<int> first_three_multiples(int num) {
  std::vector<int> num_list = {(num * 1), (num * 2), (num * 3)};
  return num_list;
}

std::string needs_water(int days, bool is_succulent) {
  if (days > 3 && !is_succulent) {
    return "Time to water the plant.";
  } else if (is_succulent && days <= 12) {
    return "Dont water the plant!";
  } else if (is_succulent && days >= 13) {
    return "Go ahead and give the plant a little water.";
  } else {
    return "Don't water the plant!";
  }
}

// palindrome 1
bool is_palindrome(std::string text) {
  
  std::string reverse_text;

  for (int i = text.length() - 1; i >= 0; i--) {
    reverse_text.push_back(text[i]);
  }
  
  if (text == reverse_text) {
    return true;
  } else {
    return false;
  }
}

// palindrome 2
std::string is_palindrome2(std::string text) {
  
  std::string reverse_text;

  for (int i = text.length() - 1 ; i >= 0; i--) {
    reverse_text.push_back(text[i]);
  }

  std::cout << text << " <--> " << reverse_text << "\n";
  
  if (text == reverse_text) {
    return "This is a plaindrome";
  } else {
    return "This is not a palindrome";
  }
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

    // print out needs_it_support()
    std::cout << needs_it_support();

     // Original emergency services number 
    std::string old_emergency_number = "999";

    // For nicer ambulances, faster response times
    // and better-looking drivers
    std::string new_emergency_number = "0118 999 881 999 119 725 3";

    // Call get_emergency_number() below with
    // the number you want!
    get_emergency_number(new_emergency_number);

    std::string my_name = "Lauren";
    int some_number = 5; // Change this if you like!
    // Call name_x_times() below with my_name and some_number
    name_x_times(my_name, some_number);

    //CHALLENGE main
    introduction("Beyonce", "Knowles");

    std::cout << average(42.0, 24.0) << "\n";
    std::cout << average(1.0, 2.0) << "\n";

    std::cout << tenth_power(0) << "\n";
    std::cout << tenth_power(1) << "\n";
    std::cout << tenth_power(2) << "\n";

    // attempt 1, 2 & 3
    for (int element : first_three_multiples(8)) {
        std::cout << element << "\n";
    }

    std::cout << needs_water(10, false) << "\n";

    // palindrome 1 && 2
    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";

}