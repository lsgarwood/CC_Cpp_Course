// When you program in C++, you mainly go through 4 phases during development:

// Code — writing the program
// Save — saving the program
// Compile — compiling via the terminal
// Execute — executing via the terminal
// And repeat (debug the errors if needed).

// To compile a file, you need to type g++ followed by the file name in the terminal and press enter
// g++ hello.cpp

// The compiler will then translate the C++ program hello.cpp and create a machine code file called a.out.

// To execute the new machine code file, all you need to do is type ./ and the machine code file name in the terminal and press enter. In this case, our compiled file name is a.out. Putting it all together, we end up with the following::

// ./a.out

// Sometimes when we compile, we want to give the output executable file a specific name. To do so, the compile command is slightly different. We still need to write g++ and the file name in the terminal. After that, there should be -o and then the name that you want to give to the executable file:

// g++ hello.cpp -o hello
// The compiler will then translate the C++ program hello.cpp and create a machine code file called hello.

// Execute: To execute the new machine code file, all you need to do is type ./ and the machine code file name in the terminal:

// ./hello

// Comments

#include <iostream>

int main() {

    // Prints "hi!" to the terminal
    std::cout << "hi!";

    std::cout << "hi!";  // Prints "hi!"

    /* This is all commented in a multiline comment
    std::cout << "hi!";
    None of this is going to run! */

}