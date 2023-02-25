/*
Bjarne Stroustrup developed C++ because he wanted to add a feature known as “classes” to the C language. A C++ class is a user-defined type.

The class serves as a blueprint for objects, which are instances of the class (just like age is an instance of int). An object gets characteristics and behaviors from its class.

We can create an empty C++ class like this in a header file:

class City {
 
}; // <-- notice this semicolon!
Fun fact: C++’s original name was “C with Classes.”
*/

/*
Class members

An empty class is pretty useless. Classes are designed to bring together related information and functionality — time to add stuff inside!

Components of a class are called class members. Just like you can get a string’s length using .length(), you can access class members using the dot operator (object.class_member).

There are two types of class members:

Attributes, also known as member data, consist of information about an instance of the class.
Methods, also known as member functions, are functions that you can use with an instance of the class. We use a . before method names to distinguish them from regular functions.
We encapsulate — or enclose for simpler user access — attributes and methods in a class like this:

class City {
 
  // attribute
  int population;
 
// we'll explain 'public' later
public:
  // method
  void add_resident() {
    population++;
  }
 
};
Unless we have a mostly empty class, it’s common to split function declarations from definitions. We declare methods inside the class (in a header), then define the methods outside the class (in a .cpp file of the same name).

How can we define methods outside a class? We can do this using ClassName:: before the method name to indicate its class like this:

int City::get_population() {
  return population;
}
Unlike with regular functions, we need to include the header file in the .cpp file where we define the methods.

Note: We must declare a method inside the class if we want to define it outside.
*/

/*
Creating Objects

To create (or instantiate) an object, we can do this:

City accra;
We can give the object’s attributes values like this (note that these must be attributes you defined in the class):

accra.population = 2270000;
Later, we can access this information using the method we added to the City class (if it’s in a public part of the class):

accra.get_population();
*/

/*
Access Control: Private and public

By default, everything in a class is private, meaning class members are limited to the scope of the class. This makes it easier to keep data from mistakenly being altered, and abstracts away all the nitty gritty details. If you try to access a private class member, you’ll get an error:

error: 'population' is a private member of 'City'
But sometimes you need access to class members, and for that, there is public. You can use it to make everything below accessible outside the class:

class City {
 
  int population; 
 
public: // stuff below is public
  void add_resident() { 
    population++;
  }
 
};
There is also a private access modifier for when you want something below public to be private to the class:

class City {
 
  int population; 
 
public:
  void add_resident() { 
    population++;
  }
 
private: // this stuff is private
  bool is_capital;
 
};
*/

/*
Constructors

A constructor is a special kind of method that lets you decide how the objects of a class get created. It has the same name as the class and no return type. Constructors really shine when you want to instantiate an object with specific attributes.

If we want to make sure each City is created with a name and a population, we can use parameters and a member initializer list to initialize attributes to values passed in:

// city.hpp
#include "city.hpp"
 
class City {
 
  std::string name;
  int population;
 
public:
  City(std::string new_name, int new_pop);
 
};
 
// city.cpp
City::City(std::string new_name, int new_pop)
  // members get initialized to values passed in 
  : name(new_name), population(new_pop) {}
You could also write the definition like this:

City::City(std::string new_name, int new_pop) {
  name = new_name;
  population = new_pop;
}
However, a member initialization list allows you to directly initialize each member when it gets created.

To instantiate an object with attributes, you can do:

// inside main()
City ankara("Ankara", 5445000);
Now we have a City called ankara with the following attributes:

ankara.name set to "Ankara".
ankara.population set to 5445000.
*/

/*
Destructors

object destruction is really about tidying up and preventing memory leaks. A destructor is a special method that handles object destruction. Like a constructor, it has the same name as the class and no return type, but is preceded by a ~ operator and takes no parameters:

// city.hpp
class City {
 
  std::string name;
  int population;
 
public:
  City(std::string new_name, int new_pop);
  ~City();
};
 
// city.cpp
City::~City() {
 
  // any final cleanup
 
}
Inside, you add any housekeeping that needs to happen before the object is destroyed. You generally won’t need to call a destructor; the destructor will be called automatically in any of the following scenarios:

The object moves out of scope.
The object is explicitly deleted.
When the program ends.
*/

//main
#include <iostream>
// #include "song.hpp"

int main() {
    Song electric_relaxation;

    electric_relaxation.add_title("Electric Relaxation");
    std::cout << electric_relaxation.get_title();

    electric_relaxation.add_artist("A Tribe Called Quest");
    std::cout << electric_relaxation.get_artist();

    /*
    using constructor
    Song back_to_black("Back to Black", "Amy Winehouse");

    std::cout << back_to_black.get_title();
    std::cout << back_to_black.get_artist();
    */
}

// song.hpp
#include <string>

// add the Song class here:
class Song {
  
  std::string title;
  std::string artist;

  public:

    void add_title(std::string new_title);
    std::string get_title();
    void add_artist(std::string new_artist);
    std::string get_artist();

    /*
    using constructor

    Song(std::string new_title, std::string new_artist);
  
    std::string get_title();
    std::string get_artist();
    */

   // destructor
   // ~Song();

};

//song.cpp
// #include "song.hpp"
// #include <iostream> - for destructor to work

// add Song method definitions here:
void Song::add_title(std::string new_title) {
  title = new_title;
}

std::string Song::get_title() {
  return title;
}

void Song::add_artist(std::string new_artist) {

  artist = new_artist;

}

std::string Song::get_artist() {

  return artist;

}

/*
using constructor

Song::Song(std::string new_title, std::string new_artist) 
  : title(new_title), artist(new_artist) {}

std::string Song::get_title() {

  return title;

}

std::string Song::get_artist() {

  return artist;

}
*/

/*
destructor
Song::~Song() {
  std::cout << "Goodbye " << title << "!\n";
}
*/