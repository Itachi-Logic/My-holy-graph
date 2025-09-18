<div align="center">
  <h1>Libft (1337) - The First Step into the Deep</h1>
  <p>
    My first C library, the foundational project of the 1337/42 curriculum.
  </p>
</div>

![Grade](https://img.shields.io/badge/Grade-125%25-brightgreen)
![Language](https://img.shields.io/badge/Language-C-blue.svg)
![Author](https://img.shields.io/badge/Author-sboutaye-orange)

---

## 📜 About The Project

This project is the cornerstone of the 1337 curriculum. The goal is to build a personal library (`libft.a`) by re-implementing a set of standard C functions. This library will serve as a fundamental toolkit for all future C projects at the school.

---

## 📂 Table of Contents

1. [Implemented Functions](#-implemented-functions)  
    - [Character Functions](#-character-functions)  
    - [Memory Functions](#-memory-functions)  
    - [String Functions](#-string-functions)  
    - [Conversion Functions](#-conversion-functions)  
2. [How To Use](#-how-to-use)

---

## ✨ Implemented Functions

This is a list of the functions completed so far, categorized by their purpose.

### ➤ Character Functions

| Function     | Description                                  |
| :----------- | :------------------------------------------- |
| `ft_isalpha` | Checks for an alphabetic character.          |
| `ft_isdigit` | Checks for a digit (0-9).                    |
| `ft_isalnum` | Checks for an alphanumeric character.        |
| `ft_isascii` | Checks whether a character fits into the ASCII character set. |
| `ft_isprint` | Checks for any printable character.          |

### ➤ Memory Functions

| Function      | Description                                  |
| :------------ | :------------------------------------------- |
| `ft_memset`   | Fills a block of memory with a specific byte value. |
| `ft_bzero`    | Fills a block of memory with zero-bytes.     |
| `ft_memcpy`   | Copies a memory area (unsafe for overlap).   |
| `ft_memmove`  | Copies a memory area safely, even if it overlaps. |
| `ft_memalloc` | Allocates memory and initializes it to zero. |
| `ft_memdel`   | Frees allocated memory and sets pointer to NULL. |

### ➤ String Functions

| Function       | Description                                  |
| :------------- | :------------------------------------------- |
| `ft_strlen`    | Calculates the length of a string.           |
| `ft_strcpy`    | Copies a string (unsafe).                    |
| `ft_strncpy`   | Copies a specific number of characters from a string. |
| `ft_strcat`    | Concatenates two strings (unsafe).            |
| `ft_strncat`   | Concatenates up to n characters from a string. |
| `ft_strlcat`   | Concatenates two strings with size limit.     |
| `ft_strchr`    | Locates the first occurrence of a character in a string. |
| `ft_strrchr`   | Locates the last occurrence of a character in a string. |
| `ft_strcmp`    | Compares two strings.                        |
| `ft_strncmp`   | Compares two strings up to n characters.     |
| `ft_strstr`    | Finds the first occurrence of a substring.   |
| `ft_strnstr`   | Finds the first occurrence of a substring within n characters. |
| `ft_strnew`    | Allocates memory for a new string of specified size. |
| `ft_strdel`    | Frees a string and sets the pointer to NULL. |
| `ft_strclr`    | Sets every character of a string to '\0'.    |
| `ft_striter`   | Applies a function to each character of a string. |

### ➤ Conversion Functions

| Function  | Description                        |
| :-------- | :--------------------------------- |
| `ft_atoi` | Converts a string to an integer.   |

---

## 🚀 How To Use

### 1. Library Compilation

To create the static library file `libft.a`, run the following command in your terminal:

```bash
make
```

### 2. Using the Library in Your Project

To compile your program (e.g., `main.c`) with the `libft` library, use the following command:

```bash
# -L. tells the compiler to look for libraries in the current directory
# -lft tells the compiler to link against the libft library
gcc main.c -L. -lft -o my_program
```

### 3. Example `main.c`

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "hello world";
    
    // Using a function from your library
    ft_memset(str, '!', 5);
    // ft_memset will turn "hello world" into "!!!!! world"
    printf("%s\n", str);
    
    return (0);
}
```
