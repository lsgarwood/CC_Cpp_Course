#include <iostream>

/*
References
In C++, a reference variable is an alias for something else, that is, another name for an already existing variable.

So suppose we make Sonny a reference to someone named Songqiao. You can refer to the person as either Sonny or Songqiao.

Let’s take a look at how we can do this with code. Suppose we have an int variable already called songqiao, we can create an alias to it by using the & sign in the declaration:

int &sonny = songqiao;
So here, we made sonny a reference to songqiao.

Now when we make changes to sonny (add 1, subtract 2, etc), songqiao also changes.

Two things to note about references:

Anything we do to the reference also happens to the original.
Aliases cannot be changed to alias something else.
*/

/*
Pass-By-Reference

Previously, when we passed parameters to a function, we used normal variables and that’s known as pass-by-value. But because the variables passed into the function are out of scope, we can’t actually modify the value of the arguments.

Pass-by-reference refers to passing parameters to a function by using references. When called, the function can modify the value of the arguments by using the reference passed in.

This allows us to:

Modify the value of the function arguments.
Avoid making copies of a variable/object for performance reasons.
The following code shows an example of pass-by-reference. The reference parameters are initialized with the actual arguments when the function is called:

void swap_num(int &i, int &j) {
 
  int temp = i;
  i = j;
  j = temp;
 
}
 
int main() {
 
  int a = 100;
  int b = 200;
 
  swap_num(a, b);
 
  std::cout << "A is " << a << "\n";
  std::cout << "B is " << b << "\n";
 
}
Notice that the int &i and int &j are the parameters of the function swap_num().

When swap_num() is called, the values of the variables a and b will be modified because they are passed by reference. The output will be:

A is 200
B is 100
Suppose we didn’t pass-by-reference here and have the parameters as simply int i and int j in the swap_num() function, then i and j would swap, but a and b wouldn’t be modified.

And the output will then be:

A is 100
B is 200
To reiterate, using references as parameters allows us to modify the arguments’ values. This can be very useful in a lot cases.
*/

/*
Pass-By-Reference with Const


*/

int triple(int &i) {

  i = i * 3;
  
  return i;

}

int main() {
  
  int soda = 99;
  int &pop = soda;
  
  pop = pop + 1;

  std::cout << pop << "\n";
  std::cout << soda << "\n";

  // pass by reference
  int num = 1;
  
  std::cout << triple(num) << "\n";
  std::cout << triple(num) << "\n";
  // prints 3 and 9


}