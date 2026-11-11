ft_printf

Description

ft_printf is a 42 School project that aims to recreate the behavior of the standard C printf() function.

The main goal of this project is to understand variadic functions in C, learn how to handle a variable number of arguments, and implement formatted output using the write() system call.

The function parses a format string, identifies conversion specifiers, retrieves the corresponding arguments, and prints them in the appropriate format.

Features

The mandatory part supports the following conversions:

Specifier	Description
%c	Prints a single character.
%s	Prints a string.
%p	Prints a pointer address in hexadecimal format.
%d	Prints a signed decimal integer.
%i	Prints a signed integer in decimal format.
%u	Prints an unsigned decimal integer.
%x	Prints an unsigned integer in lowercase hexadecimal.
%X	Prints an unsigned integer in uppercase hexadecimal.
%%	Prints a percent sign.

Implementation

The project is implemented in C and follows a modular structure, separating the different conversion operations into dedicated functions.

Variadic Functions

The project uses the following macros from <stdarg.h>:

* va_list: Declares a variable argument list.
* va_start: Initializes the argument list.
* va_arg: Retrieves the next argument with the specified type.
* va_end: Cleans up the argument list.

Conversion Logic

Each conversion specifier is handled according to its expected argument type.

* Characters and strings: Printed character by character using write().
* Signed integers: Converted and printed in decimal format.
* Unsigned integers: Printed without a sign.
* Hexadecimal: Converted using recursive base conversion.
* Pointers: The address is converted to hexadecimal and printed with the appropriate prefix.

Return Value

Like the original printf(), ft_printf() returns the total number of characters successfully printed.

If a write operation fails, the function returns -1.

Project Structure

ft_printf/
│
├── ft_printf.h
├── ft_printf.c
│
├── ft_putchar.c
├── ft_print_str.c
├── ft_print_nb.c
├── ft_print_hex.c
├── ft_print_ptr.c
│
├── Makefile
└── README.md

Source Files

File	Responsibility
ft_printf.c	Main function and format string parsing.
ft_putchar.c	Character output.
ft_print_str.c	String output.
ft_print_nb.c	Signed and unsigned integer output.
ft_print_hex.c	Hexadecimal conversion and output.
ft_print_ptr.c	Pointer address conversion and output.
ft_printf.h	Function prototypes and required headers.

Compilation

The project includes a Makefile to compile the source files and generate the static library libftprintf.a.

Clone the repository:

git clone <repository-url>
cd ft_printf

Compile the library:

make

Available Makefile commands:

Command	Description
make	Compiles the project and generates libftprintf.a.
make clean	Removes object files.
make fclean	Removes object files and the library.
make re	Recompiles the project from scratch.

Usage

To use ft_printf() in another C project:

1. Include the project header.
2. Link the compiled static library during compilation.

Example:

#include "ft_printf.h"
int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "World", 42);
    return (0);
}

Compile:

cc main.c -I. -L. -lftprintf -o test

Run:

./test

Output:

Hello World! Number: 42

Allowed Functions

The implementation uses the functions and macros permitted by the project subject, including:

* write()
* malloc()
* free()
* va_start()
* va_arg()
* va_copy()
* va_end()

Author

42 School Project — ft_printf