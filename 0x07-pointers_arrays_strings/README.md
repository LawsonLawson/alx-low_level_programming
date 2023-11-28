# Project Overview: 0x07-pointers_arrays_strings

This project consists of C programs and functions focused on pointers, arrays, and string manipulation. Each file serves a specific purpose, contributing to your understanding of low-level programming concepts.

## Files and Functions:

1. **0-memset.c**
   - Fills memory with a constant byte.
   - Prototype: `char *_memset(char *s, char b, unsigned int n)`
   - Returns a pointer to the memory area `s`.

2. **1-memcpy.c**
   - Copies memory area.
   - Prototype: `char *_memcpy(char *dest, char *src, unsigned int n)`
   - Returns a pointer to `dest`.

3. **2-strchr.c**
   - Locates a character in a string.
   - Prototype: `char *_strchr(char *s, char c)`
   - Returns a pointer to the first occurrence of character `c` in string `s` or NULL if not found.

4. **3-strspn.c**
   - Gets the length of a prefix substring.
   - Prototype: `unsigned int _strspn(char *s, char *accept)`
   - Returns the number of bytes in the initial segment of `s` consisting only of bytes from `accept`.

5. **4-strpbrk.c**
   - Searches a string for any of a set of bytes.
   - Prototype: `char *_strpbrk(char *s, char *accept)`
   - Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or NULL if not found.

6. **5-strstr.c**
   - Locates a substring.
   - Prototype: `char *_strstr(char *haystack, char *needle)`
   - Returns a pointer to the beginning of the located substring, or NULL if not found.

7. **7-print_chessboard.c**
   - Prints the chessboard.
   - Prototype: `void print_chessboard(char (*a)[8])`

8. **8-print_diagsums.c**
   - Prints the sum of the two diagonals of a square matrix of integers.
   - Prototype: `void print_diagsums(int *a, int size)`

9. **100-set_string.c** (Advanced)
   - Sets the value of a pointer to a char.
   - Prototype: `void set_string(char **s, char *to)`

## Usage:
Details and usage information for each function can be found within the respective code files.

## GitHub Repository:
For a more in-depth exploration and access to the source code, visit the associated GitHub repository:

[GitHub repository: alx-low_level_programming](https://github.com/LawsonLawson/alx-low_level_programming)

## Directory:
Find these files in the directory: `0x07-pointers_arrays_strings`

