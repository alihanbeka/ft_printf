*This project has been created as part of the 42 curriculum by ebeka.*

# ft_printf

## Description

The goal of this project is to recreate a simplified version of the standard C `printf()` function.

The project introduces variadic functions in C and focuses on handling a variable number of arguments using `va_list`, `va_start`, `va_arg`, and `va_end`.

The implemented function has the following prototype:

```c
int	ft_printf(const char *format, ...);
```

The mandatory conversions implemented are:

- `%c` - prints a single character
- `%s` - prints a string
- `%p` - prints a pointer address in hexadecimal format
- `%d` - prints a signed decimal integer
- `%i` - prints a signed decimal integer
- `%u` - prints an unsigned decimal integer
- `%x` - prints a hexadecimal number using lowercase letters
- `%X` - prints a hexadecimal number using uppercase letters
- `%%` - prints a percent sign

The function returns the total number of characters written.

## Implementation

The format string is processed character by character.

When a normal character is found, it is written directly to the standard output.

When a `%` character is found, the next character determines which conversion must be performed.

Arguments are retrieved from the variadic argument list using `va_arg`.

Numbers are printed using recursive functions. For decimal numbers, division and modulo operations with base 10 are used. For hexadecimal numbers, the same approach is used with base 16.

Pointer addresses are converted to `unsigned long` and printed in lowercase hexadecimal format with the `0x` prefix.

Each helper function returns the number of characters it writes. These values are accumulated by `ft_printf()` so that the final return value matches the behavior of the standard `printf()` function.

## Compilation

Compile the project using:

```bash
make
```

This creates:

```text
libftprintf.a
```

The available Makefile rules are:

```bash
make
make all
make clean
make fclean
make re
```

To compile a test program using the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o test
```

Then run:

```bash
./test
```

## Example

```c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hello %s!\n", "42");
	ft_printf("Number: %d\n", -42);
	ft_printf("Hex: %x\n", 255);
	return (0);
}
```

Example output:

```text
Hello 42!
Number: -42
Hex: ff
```

## Resources

Resources used while working on the project include:

- The official 42 ft_printf subject
- C documentation for variadic functions
- Documentation for `stdarg.h`
- Documentation for the `write()` system call
- The C standard library `printf()` function for behavioral comparison

AI tools were used as a learning aid to explain variadic functions, recursion, hexadecimal conversion, pointer formatting, edge cases, Makefile structure, and to review the implementation during development.

The implementation itself was developed incrementally while testing each conversion and comparing its behavior with the standard `printf()` function.