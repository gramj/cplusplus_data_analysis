#ifndef CONNECTION_HPP
#define CONNECTION_HPP

struct Connection
{
    double weight;
    double deltaWeight;
};

#endif

// The #ifndef, #define, and #endif preprocessor directives are used to avoid including the connection.hpp header file more than once.
// When you include the connection.hpp header file in another file, the preprocessor checks if the CONNECTION_HPP macro is defined.
// If it is not defined, it defines it using the #define directive, and includes the contents of the header file.
// If it is defined, it skips the contents of the header file. Finally, the #endif directive closes the #ifndef directive.


// In C++, a struct is a user-defined composite data type that groups together related data under a single name.
// It is similar to a class, but with a few key differences.
// A struct can contain data members (variables), member functions, constructors, and other member types, just like a class.
// However, the default access level for members in a struct is public, whereas the default access level for members
// in a class is private. This means that in a struct, all members can be accessed from outside the struct without the
// need for accessor functions or friend declarations.