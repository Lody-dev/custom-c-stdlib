# Custom Implementation of the C Standard Library

A lightweight reimplementation of essential functions from the C standard library .
The project focuses on understanding how fundamental operations — such as string handling, memory management, and character processing — work under the hood in C.

## Features

The library includes the following custom implementations of standard C functions:

### 1. **Character Checks and Manipulations**
- `ft_isalpha` - Checks if a character is an alphabetic letter.
- `ft_isdigit` - Checks if a character is a digit (0-9).
- `ft_isalnum` - Checks if a character is alphanumeric (letter or digit).
- `ft_isascii` - Checks if a character is part of the ASCII set.
- `ft_isprint` - Checks if a character is printable.
- `ft_toupper` - Converts a lowercase letter to uppercase.
- `ft_tolower` - Converts an uppercase letter to lowercase.

### 2. **String Operations**
- `ft_strlen` - Calculates the length of a string.
- `ft_strlcpy` - Copies a string with size limitation to prevent overflow.
- `ft_strlcat` - Concatenates two strings with size limitation to prevent overflow.
- `ft_strchr` - Locates the first occurrence of a character in a string.
- `ft_strrchr` - Locates the last occurrence of a character in a string.
- `ft_strncmp` - Compares two strings up to a given number of characters.
- `ft_strnstr` - Locates a substring in a string, up to a given number of characters.
- `ft_strdup` - Duplicates a string by allocating memory and copying the content.

### 3. **Memory Operations**
- `ft_memset` - Fills memory with a constant byte.
- `ft_bzero` - Zeros out a block of memory.
- `ft_memcpy` - Copies a block of memory.
- `ft_memmove` - Copies a block of memory, handling overlapping regions safely.
- `ft_memchr` - Locates the first occurrence of a byte in memory.
- `ft_memcmp` - Compares two blocks of memory.
- `ft_calloc` - Allocates memory for an array and initializes it to zero.

### 4. **Conversion Functions**
- `ft_atoi` - Converts a string to an integer.
