#include <iostream>
#include <vector>

// A vector is a sequence of elements that you can access by index.

/*
The std::vector lives in the <vector> header. So first, we need to add this line of code at the top of the program:

#include <vector>
For review, #include is a preprocessor directive that tells the compiler to include whatever library that follows. In our case that is the standard vector library.

And the syntax to create a vector looks like:

std::vector<type> name;
So to define a vector of ints called calories_today:

std::vector<int> calories_today;
Inside the angle brackets is the data type of the vector. After the angle brackets is the name of the vector.

Note: The type of the vector (i.e., what data type is stored inside) cannot be changed after the declaration.

we can also initialize a vector, giving it values, as we are creating it in the same line...

We can create and initialize location with specific values:

std::vector<double> location = {42.651443, -73.749302};

Another way we can initialize our vector is by presizing, or setting the size.

Suppose we want to create and initialize a vector with two elements. However, we don’t know what values we want to add yet:

std::vector<double> location(2);
Here, we are creating a double vector and setting the initial size to two using parentheses. Because 0.0 is the default value for double.
*/

/*
Index

An index refers to an element’s position within an ordered list. Vectors are 0-indexed, meaning the first element has index 0, the second index 1, and so on.

For example, suppose we have a char vector with all the vowels:

std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
It should look something like this:

vowels

The character at index 0 is 'a'.
The character at index 1 is 'e'.
The character at index 2 is 'i'.
The character at index 3 is 'o'.
The character at index 4 is 'u'.
To output each of the elements, we can do:

std::cout << vowels[0] << "\n";
std::cout << vowels[1] << "\n";
std::cout << vowels[2] << "\n";
std::cout << vowels[3] << "\n";
std::cout << vowels[4] << "\n";
Using the notation vector[index] with square brackets after the vector name and the element’s index number inside.

This will output:

a
e
i
o
u
*/

/*
Often, we start with a vector that’s either empty or a certain length. As we read or compute data we want, we can grow the vector as needed.

.push_back()
To add a new element to the “back”, or end of the vector, we can use the .push_back() function.

For example, suppose we have a vector called dna with three letter codes of nucleotides:

std::vector<std::string> dna = {"ATG", "ACG"};
It would look like:

1

We can add elements using .push_back():

dna.push_back("GTG");
dna.push_back("CTG");
So now dna would look like:

2

.pop_back()
You can also remove elements from the “back” of the vector using .pop_back().

dna.pop_back();
Notice how nothing goes inside the parentheses.

The vector would now look like:

3

because CTG is removed!

Note: If you have programmed in other languages, be aware that .pop_back() has no return value in C++.
*/

/*
.size()

The .size() function returns the number of elements in the vector.

For example, suppose we have a std::string vector with Sonny’s grocery list:

std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
It should look something like this:

https://content.codecademy.com/courses/learn-cpp/vectors/size1.png

The string at index 0 is "Hot Pepper Jam".
The string at index 1 is "Dragon Fruit".
The string at index 2 is "Brussel Sprouts".
std::cout << grocery.size() << "\n";
will return

3
*/

/*
Operations

So what happens when you want to change each of the values within a vector?

You can use a for loop!

For example, suppose we have an int vector that looks like this:

1

You can write a for loop that iterates from 0 to vector.size(). And here’s the cool part: you can use the counter of the for loop as the index! Woah.

for (int i = 0; i < vector.size(); i++) {
 
  vector[i] = vector[i] + 10;
 
}
This will change the vector to:

2

Here, we incremented i from 0 to vector.size(), which is 3. During each iteration, we are adding 10 to the element at position i:

When i = 0, we added 10 to vector[0]
When i = 1, we added 10 to vector[1]
When i = 2, we added 10 to vector[2]
*/


int main() {
   
    // std::vector<double> subway_adult;
    // std::vector<double> subway_child;

    // Give the adult and child vectors some values

    std::vector<double> subway_adult = {800, 1200, 1500};
    std::vector<double> subway_child = {400, 600, 750};

    // What number at index 2 of subway_child?
    std::cout << subway_child[2] << "\n";

    // .push_back()
    std::vector<std::string> last_jedi;

    last_jedi.push_back("kylo");
    last_jedi.push_back("rey");
    last_jedi.push_back("luke");
    last_jedi.push_back("finn");

    std::cout << last_jedi[0] << " ";
    std::cout << last_jedi[1] << " ";
    std::cout << last_jedi[2] << " ";
    std::cout << last_jedi[3] << " ";

    // .size()
    std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};

    // Add more 
    grocery.push_back("Lemons");
    grocery.push_back("Coffee");
    grocery.push_back("Baked beans");

    std::cout << grocery.size() << "\n";
    // prints 6

    // Delivery order challenge
    std::vector<double> delivery_order;

    delivery_order.push_back(8.99);
    delivery_order.push_back(3.75);
    delivery_order.push_back(0.99);
    delivery_order.push_back(5.99);

    // Calculate the total using a for loop:

    double total = 0.0;

    for (int i = 0; i < delivery_order.size(); i++) {

    total = total + delivery_order[i];

    std::cout << "Total: " << total << "\n";
    /*
    Total: 8.99
    Total: 12.74
    Total: 13.73
    Total: 19.72
    */

   // Review challenge - sum of even numbers and product of odd in a vector
    int sum_even = 0;
    int product_odd = 1;
    // initialized product_odd to 1 first. That is because we are multiplying things to it. If it’s intialized to 0, then 0 multiplied by any other number is 0

    std::vector<int> numbers = {2, 4, 3, 6, 1, 9};

    for (int i = 0; i < numbers.size(); i++) {

    if (numbers[i] % 2 == 0) {
      sum_even = sum_even + numbers[i];
    } else {
      product_odd = product_odd * numbers[i];
    }

    }

    std::cout << "Sum of even numbers is: " << sum_even << "\n";
    std::cout << "Product of odd numbers is: " << product_odd;


}