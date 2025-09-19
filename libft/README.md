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

### ➤ Additional String Functions

| Function       | Description                                  |
| :------------- | :------------------------------------------- |
| `ft_strnew`    | Allocates memory for a new string of specified size. |
| `ft_strdel`    | Frees a string and sets the pointer to NULL. |
| `ft_strclr`    | Sets every character of a string to '\0'.    |
| `ft_striter`   | Applies a function to each character of a string. |
| `ft_striteri`  | Applies a function to each character of a string with index. |
| `ft_strmap`    | Creates a new string by applying a function to each character. |

### ➤ Conversion Functions

| Function  | Description                        |
| :-------- | :--------------------------------- |
| `ft_atoi` | Converts a string to an integer.   |

---

## 🚀 How To Use

### 1. Getting Started

First, clone or download this repository to your local machine:

```bash
git clone <your-repo-url>
cd libft
```

### 2. Makefile Commands

This project includes a comprehensive Makefile with the following commands:

| Command       | Description                                    |
| :------------ | :--------------------------------------------- |
| `make`        | Compiles all source files and creates `libft.a` |
| `make all`    | Same as `make` (default target)                |
| `make clean`  | Removes all object files (.o)                 |
| `make fclean` | Removes object files and the library file     |
| `make re`     | Rebuilds everything from scratch (fclean + all) |

#### Compilation Process

When you run `make`, the following happens:
1. Each `.c` file is compiled to a `.o` object file using `gcc -Wall -Wextra -Werror`
2. All object files are archived into a static library `libft.a` using the `ar` command
3. The library is ready to use in your projects

### 3. Basic Usage

#### Step 1: Compile the Library
```bash
make
```

#### Step 2: Include in Your Project
To use the library in your C program, include the header file:

```c
#include "libft.h"
```

#### Step 3: Compile Your Program
```bash
# Method 1: Link with the static library
gcc main.c -L. -lft -o my_program

# Method 2: Compile with library directly
gcc main.c libft.a -o my_program
```

### 4. Example Usage

#### Simple Example (`main.c`)
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "hello world";
    
    // Using ft_memset from your library
    ft_memset(str, '!', 5);
    printf("After ft_memset: %s\n", str);
    // Output: "!!!!! world"
    
    // Using ft_strlen
    printf("Length: %zu\n", ft_strlen(str));
    
    // Using ft_atoi
    int num = ft_atoi("42");
    printf("Number: %d\n", num);
    
    return (0);
}
```

#### Advanced Example
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Memory allocation example
    char *new_str = ft_strnew(10);
    if (new_str)
    {
        ft_strcpy(new_str, "Hello");
        printf("Created string: %s\n", new_str);
        ft_strdel(&new_str);  // Free and set to NULL
    }
    
    // String comparison
    char *str1 = "Hello";
    char *str2 = "World";
    
    if (ft_strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are different\n");
    
    // Character checking
    char c = 'A';
    if (ft_isalpha(c))
        printf("'%c' is alphabetic\n", c);
    
    return (0);
}
```

### 5. Compilation Flags

The library is compiled with strict flags for better code quality:
- `-Wall`: Enable all common warnings
- `-Wextra`: Enable extra warnings
- `-Werror`: Treat warnings as errors

### 6. Troubleshooting

#### Common Issues:

**Library not found:**
```bash
# Make sure you're in the correct directory
ls -la libft.a

# Check if library was created successfully
make re
```

**Compilation errors:**
```bash
# Clean and rebuild
make fclean
make
```

**Header file not found:**
```bash
# Make sure libft.h is in the same directory as your source files
# Or specify the path: gcc main.c -I./path/to/headers -L. -lft
```
