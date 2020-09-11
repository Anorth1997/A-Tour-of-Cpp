# The Basics

## Programs
* C++ is a compiled language.
* Its source text get processed by a **compiler**, producing **object files** which are combined by a **linker** yielding an **executable program**.
* The source code files are called **source files**
* The executable program is not portable (Windows to Mac), but the source code is.

#### ISO C++ defined entities
* *Core language features*: built-in types and loops
* *Standard-library components*: containers and I/O operations


C++ is a *statically typed langauge*. Meaning the type of every entity must be known to the compiler at its point to use.

## Types, Variables, and Arithmetic
A *declaration* is a statement that introduces a name into the program.
* A *type* defines a set of possible values and a set of operations
* An *object* is osme memory that holes a value of some type.
* A *value* is a set of bits interpreted according to a type.
* A *variable* is a named object.

Fundamental types and their memory usage:
* bool: 1
* char: 1
* int: 4
* double: 8

We can use the keyword **auto** to not specify the type for variable initialization.

## Scope and Lifetime
Four levels of scope:
* *Local scope*: A name declared in a function or lambda is called a *local name*.
* *Class scope*: A name is called a *member name* if its defined in a class.
* *Namespace scope*: A name is called a *namespace member name* if its defined in a namespace.
* *Global scope*: A name that's not declared inside any other construct is called a *global name*.

An object must be constructed (initalized) before it's used and will be destroyed at the end of its scope. The destruction of a namespace object happens at the end of the program. The destruction of a member object is determined by the destruction of its higher-level object.

## Constants
C++ supports two notions of immutability:
* **const**: The value won't be modified afterwards, evaluated at run time.
* **constexpr**: A constant expression that's evaluated at compile time.


## Pointers, Arrays and References
In C++, prefix unary * means "contents of" and prefix unary & means "address of".