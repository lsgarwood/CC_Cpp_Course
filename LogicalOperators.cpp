// Logical operators

/*
and - &&

a	    b	    a && b
false	false	false
false	true	false
true	false	false
true	true	true

For instance:

( 1 < 2 && 2 < 3 ) returns true
( 1 < 2 && 2 > 3 ) returns false
Note: The keyword and can also be used in the place of &&.
*/

/*
or - ||

a	    b	    a || b
false	false	false
false	true	true
true	false	true
true	true	true

For instance:

( 1 < 2 || 2 > 3 ) returns true
( 1 > 2 || 2 > 3 ) returns false
Note: The keyword or can be used in the place of ||.
*/

/*
not - !

a	    !a
false	true
true	false

For instance:

( !true ) returns false
( !false ) returns true
( !(10 < 11) ) returns false
Note: The keyword not can be used in the place of !.
*/

#include <iostream>

int main() {
  
    // and - &&
    int hunger = true;
    int anger = true;

    // if hunger and angry are true then print hangry
    if (hunger && anger) {
    std::cout << "Hangry\n";
    }

    // or - ||
    int day = 6;

    // if day equals 6 or 7 print Weekend
    if (day == 6 || day == 7) {
    std::cout << "Weekend\n";
    }

    // not - !
    bool logged_in = false;
  
    // if user not logged in print Try again
    if (!logged_in) {
    std::cout << "Try again\n";
    }

    // Leap Year challenge
    int year = 0;

    // take year as input
    std::cout << "Please enter a year:\n";
    std::cin >> year;

    // checks to see if year is a four digit number
    if (year < 1000 && year > 9999){
    std::cout << "Invalid entry\n";
    }
    else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    std::cout << year << " falls on a leap year.\n";
    }
    else {
    std::cout << year << " is not a leap year.\n";
    }
  
}

