📚 Libft — Mandatory Functions
Libft is a project at 42 School where you create your own C library by implementing essential standard C library functions from scratch. The main goal is to understand how these functions work internally, improve your programming skills in C, and learn how to manage memory, manipulate strings, and handle characters.. Character Checks

📚 What to study first

    Pointers (*)
    Dynamic memory allocation (malloc)
    free()📚 Libft — Mandatory Functions
    sizeof
    Memory initialization📚 Libft — Mandatory Functions
    size_t

🎯 Purpose

Allocates memory for an array and initializes all its bytes to zero.📚 Libft — Mandatory Functions
⚙️ How it works

    Calculate the total memory required.
    Allocate memory using malloc().
    Check whether allocation failed.📚 Libft — Mandatory Functions
    Initialize the allocated memory to zero.
    Return the allocated memory.

📊 Drawing# 📚 Libft — 42 School Project

## 🎯 About the Project

Libft is a project at 42 School where you recreate essential C standard
library functions and implement additional utility functions.

The goal is to understand how C works internally, improve programming
skills, and learn about memory management, strings, pointers, and linked lists.

## 📖 Table of Contents

- [Recommended Learning Order](#-recommended-learning-order)
- [1. Character Checks](#1--character-checks)
- [2. String Length and Memory](#2--string-length-and-memory)
- [3. String Copying and Concatenation](#3--string-copying-and-concatenation)
- [4. Character Conversion](#4--character-conversion)
- [5. String Searching and Comparison](#5--string-searching-and-comparison)
- [6. String to Integer](#6--string-to-integer)
- [7. Dynamic Memory Allocation](#7--dynamic-memory-allocation)
- [8. String Manipulation](#8--string-manipulation)
- [9. Integer to String](#9--integer-to-string)
- [10. Function-Based String Manipulation](#10--function-based-string-manipulation)
- [11. Output Functions](#11--output-functions)
- [12. Linked Lists](#12--linked-lists)
- [13. Compilation and Makefile](#13--compilation-and-makefile)
- [14. Testing](#14--testing)
- [Final Study Strategy](#-final-study-strategy)

# 🗺️ Recommended Learning Order

Before implementing the functions, study these concepts in order:

1. **C Basics:** Variables, data types, operators, conditions, and loops.
2. **Characters:** ASCII values and character comparisons.
3. **Arrays and Strings:** Array indexing and the null terminator `'\0'`.
4. **Pointers:** Addresses, dereferencing, pointer arithmetic, and `NULL`.
5. **Memory:** `void *`, type casting, bytes, and memory copying.
6. **Dynamic Memory:** `malloc()`, `free()`, and allocation sizes.
7. **String Operations:** Searching, copying, concatenation, and splitting.
8. **Function Pointers:** Passing functions as arguments.
9. **Structures:** `struct`, `typedef`, and the `->` operator.
10. **Linked Lists:** Double pointers, node management, and memory ownership.
11. **Compilation:** Header files, object files, static libraries, and Makefiles.

---

# 1. 🔤 Character Checks

These functions check whether a character belongs to a particular category.

## 1.1 `ft_isalpha`

**Purpose:** Checks whether a character is an alphabetic letter (A-Z or a-z).

### 📚 What to Study First
- `char` and `int` data types.
- ASCII values.
- Comparison operators (`>=`, `<=`).
- Logical operators (`&&`, `||`).
- `if` statements.
- Function return values.

**Key idea:** Check whether the character belongs to the uppercase or lowercase alphabet.

## 1.2 `ft_isdigit`

**Purpose:** Checks whether a character is a digit (0-9).

### 📚 What to Study First
- ASCII values of digits.
- Character comparisons.
- Relational operators.
- Conditional statements.
- Integer return values.

**Key idea:** A digit character has an ASCII value between `'0'` and `'9'`.

## 1.3 `ft_isalnum`

**Purpose:** Checks whether a character is alphabetic or numeric.

### 📚 What to Study First
- `ft_isalpha()`.
- `ft_isdigit()`.
- Function calls.
- Logical OR (`||`).
- Conditional statements.

**Key idea:** A character is alphanumeric if it is a letter or a digit.

## 1.4 `ft_isascii`

**Purpose:** Checks whether a value belongs to the ASCII range (0-127).

### 📚 What to Study First
- Integer ranges.
- ASCII representation.
- Comparison operators.
- Signed and unsigned integers.
- Boolean conditions.

**Key idea:** Check whether the value is between 0 and 127, inclusive.

## 1.5 `ft_isprint`

**Purpose:** Checks whether a character is printable.

### 📚 What to Study First
- ASCII values.
- Printable characters.
- Character comparisons.
- Integer ranges.
- Conditional statements.

**Key idea:** Printable ASCII characters have values from 32 to 126, inclusive.

---

# 2. 🧵 String Length and Memory

## 2.1 `ft_strlen`

**Purpose:** Returns the length of a string, excluding the terminating `'\0'`.

### 📚 What to Study First
- Strings and `'\0'`.
- Pointers (`*`).
- Array indexing.
- `while` loops.
- Counters.
- The `size_t` type.

**Key idea:** Count characters until the null terminator is reached.

## 2.2 `ft_memset`

**Purpose:** Fills a memory area with a specified byte.

### 📚 What to Study First
- Pointers (`void *`).
- Type casting.
- Memory addresses.
- Bytes and `sizeof`.
- `unsigned char`.
- Array indexing and loops.

**Key idea:** Fill the requested number of bytes with the specified value.

## 2.3 `ft_bzero`

**Purpose:** Sets a specified number of bytes to zero.

### 📚 What to Study First
- Pointers.
- Memory addresses.
- Bytes.
- Loops.
- `ft_memset()`.
- Memory initialization.

**Key idea:** Set each of the specified bytes to zero.

## 2.4 `ft_memcpy`

**Purpose:** Copies a specified number of bytes between memory areas.
The memory areas must not overlap.

### 📚 What to Study First
- Pointers (`void *`).
- Type casting.
- Memory addresses.
- `unsigned char`.
- Byte-by-byte copying.
- `size_t`.

**Key idea:** Copy bytes from the source to the destination without modifying the source.

## 2.5 `ft_memmove`

**Purpose:** Copies bytes between memory areas, even when they overlap.

### 📚 What to Study First
- Everything covered in `ft_memcpy()`.
- Memory overlap.
- Pointer comparisons.
- Forward and backward copying.
- Source and destination addresses.

**Key idea:** Choose a safe copying direction when the source and destination overlap.

## 2.6 `ft_memchr`

**Purpose:** Finds the first occurrence of a byte in a memory area.

### 📚 What to Study First
- Pointers (`void *`).
- Type casting.
- `unsigned char`.
- Memory addresses.
- Loops.
- Byte comparisons.

**Key idea:** Examine bytes until the requested value is found or the specified length is exhausted.

## 2.7 `ft_memcmp`

**Purpose:** Compares two memory areas byte by byte.

### 📚 What to Study First
- Pointers.
- `unsigned char`.
- Memory representation.
- Byte comparisons.
- Loops.
- Signed versus unsigned characters.
- Return values.

**Key idea:** Compare corresponding bytes and return their difference at the first mismatch.

---

# 3. 📝 String Copying and Concatenation

## 3.1 `ft_strlcpy`

**Purpose:** Copies a string into a destination buffer while respecting its size.

### 📚 What to Study First
- Strings and `'\0'`.
- Pointers.
- Array indexing.
- Loops.
- Buffer sizes.
- `ft_strlen()`.
- Null termination.
- `size_t`.

**Key idea:** Copy at most `dstsize - 1` characters and terminate the destination when `dstsize > 0`.

## 3.2 `ft_strlcat`

**Purpose:** Appends a source string to a destination string while respecting the buffer size.

### 📚 What to Study First
- Strings and `'\0'`.
- Pointers.
- Array indexing.
- Buffer sizes.
- `ft_strlen()`.
- `ft_strlcpy()`.
- Destination string length.
- `size_t`.

**Key idea:** Find the existing destination length, then append as much of the source as the buffer allows.

## 3.3 `ft_strdup`

**Purpose:** Creates a dynamically allocated copy of a string.

### 📚 What to Study First
- Pointers.
- Strings and `'\0'`.
- `ft_strlen()`.
- Dynamic memory allocation (`malloc()`).
- Loops.
- String copying.
- Allocation failure handling.
- `free()`.

**Key idea:** Measure the string, allocate enough memory for its characters and terminator, and copy it.

## 3.4 `ft_substr`

**Purpose:** Creates a new string containing part of an existing string.

### 📚 What to Study First
- Pointers.
- Strings and `'\0'`.
- Array indexing.
- `ft_strlen()`.
- Dynamic memory allocation.
- Loops.
- `size_t`.
- Allocation failure handling.

**Key idea:** Start at the requested index, copy up to the maximum length, and terminate the new string.

If `start` is beyond the end of the original string, return an allocated empty string if allocation succeeds.

## 3.5 `ft_strjoin`

**Purpose:** Creates a new string by joining two strings.

### 📚 What to Study First
- Pointers.
- Strings and `'\0'`.
- `ft_strlen()`.
- Dynamic memory allocation.
- String copying.
- Array indexing.
- Allocation sizes.
- Integer overflow considerations.

**Key idea:** Allocate enough memory for both strings and the terminator, then copy them into the new buffer.

## 3.6 `ft_strtrim`

**Purpose:** Removes characters belonging to a specified set from the beginning and end of a string.

### 📚 What to Study First
- Pointers.
- Strings and `'\0'`.
- Loops.
- Character comparisons.
- `ft_strlen()`.
- Dynamic memory allocation.
- Array indexing.
- Searching for characters in a string.

**Key idea:** Find the first and last characters that are not in the specified set, then copy the remaining substring.

Characters inside the string are not removed just because they belong to the set.

## 3.7 `ft_split`

**Purpose:** Splits a string into an array of strings using a delimiter character.

### 📚 What to Study First
- Pointers (`*` and `**`).
- Strings and `'\0'`.
- Arrays of strings (`char **`).
- Loops.
- Dynamic memory allocation.
- `free()`.
- Counting words.
- Delimiter handling.
- Helper functions.
- Cleaning up allocated memory.

**Key idea:** Count the words, allocate an array of pointers, allocate each word separately, and terminate the array with `NULL`.

Consecutive delimiters should not create empty words. If allocation fails, free previously allocated memory before returning `NULL`.

---

# 4. 🔠 Character Conversion

## 4.1 `ft_toupper`

**Purpose:** Converts a lowercase letter to uppercase.

### 📚 What to Study First
- Characters and ASCII values.
- Integer values of characters.
- Character ranges.
- Conditional statements.
- Arithmetic on character codes.

**Key idea:** Convert a lowercase ASCII letter to its uppercase equivalent.

## 4.2 `ft_tolower`

**Purpose:** Converts an uppercase letter to lowercase.

### 📚 What to Study First
- Characters and ASCII values.
- Integer values of characters.
- Character ranges.
- Conditional statements.
- Arithmetic on character codes.

**Key idea:** Convert an uppercase ASCII letter to its lowercase equivalent.

---

# 5. 🔎 String Searching and Comparison

## 5.1 `ft_strchr`

**Purpose:** Finds the first occurrence of a character in a string.

### 📚 What to Study First
- Strings and `'\0'`.
- Pointers.
- Loops.
- Character comparisons.
- `NULL`.
- Pointer arithmetic.

**Key idea:** Search from the beginning and return a pointer to the first match.

Remember that searching for `'\0'` should return a pointer to the string terminator.

## 5.2 `ft_strrchr`

**Purpose:** Finds the last occurrence of a character in a string.

### 📚 What to Study First
- Strings and `'\0'`.
- Pointers.
- Loops.
- Character comparisons.
- `ft_strchr()`.
- Pointer arithmetic.
- Remembering the last match.

**Key idea:** Find the final occurrence of the requested character.

## 5.3 `ft_strncmp`

**Purpose:** Compares two strings up to a specified number of characters.

### 📚 What to Study First
- Strings and `'\0'`.
- Pointers.
- Loops.
- Character comparisons.
- ASCII values.
- `unsigned char`.
- `size_t`.
- Return values.

**Key idea:** Compare corresponding characters as unsigned characters until they differ, a terminator is reached, or `n` characters have been examined.

## 5.4 `ft_strnstr`

**Purpose:** Finds the first occurrence of a substring within a string, searching within a specified length.

### 📚 What to Study First
- Strings and `'\0'`.
- Pointers.
- Nested loops.
- Substrings.
- String comparison.
- Buffer lengths.
- `ft_strlen()`.
- `ft_strncmp()`.
- Pointer arithmetic.

**Key idea:** Search for the substring without examining characters beyond the permitted search length.

An empty substring matches at the beginning of the string.

---

# 6. 🔢 String to Integer

## 6.1 `ft_atoi`

**Purpose:** Converts the beginning of a string into an integer.

### 📚 What to Study First
- Strings and `'\0'`.
- Pointers.
- Loops.
- ASCII values.
- Character-to-digit conversion.
- Integer arithmetic.
- Whitespace characters.
- Positive and negative numbers.
- Signed integers.
- Integer overflow considerations.

**Key idea:** Skip leading whitespace, process an optional sign, and convert consecutive decimal digits into an integer.

Follow the behavior required by your Libft specification for out-of-range inputs.

---

# 7. 💾 Dynamic Memory Allocation

## 7.1 `ft_calloc`

**Purpose:** Allocates memory for an array and initializes all allocated bytes to zero.

### 📚 What to Study First
- Pointers.
- Dynamic memory allocation (`malloc()`).
- `free()`.
- `sizeof`.
- Memory initialization.
- `size_t`.
- Multiplication overflow.
- Allocation failure handling.

**Key idea:** Calculate the requested size safely, allocate memory, initialize it to zero, and return the pointer.

Remember:
- `nmemb` is the number of elements.
- `size` is the size of each element.
- The requested size is `nmemb * size` bytes.
- Return `NULL` if allocation fails or the size calculation cannot be represented safely.

---

# 8. 🔄 Integer to String

## 8.1 `ft_itoa`

**Purpose:** Converts an integer into a string, including negative numbers.

### 📚 What to Study First
- Pointers.
- Strings and `'\0'`.
- Integer arithmetic.
- Negative numbers.
- Dynamic memory allocation.
- Loops.
- ASCII digits.
- Counting digits.
- Signed integer limits.
- `INT_MIN` and `INT_MAX`.

**Key idea:** Count the required characters, allocate enough memory, convert the digits, and add a minus sign when necessary.

Be careful with `INT_MIN`, whose positive magnitude cannot be represented by an ordinary `int` on common systems.

---

# 9. ✂️ Function-Based String Manipulation

## 9.1 `ft_strmapi`

**Purpose:** Creates a new string by applying a function to each character.

### 📚 What to Study First
- Pointers.
- Strings and `'\0'`.
- Function pointers.
- Array indexing.
- Loops.
- Dynamic memory allocation.
- Passing arguments to functions.
- Character transformation.

**Key idea:** Allocate a new string and apply the supplied function to each character, passing its index and value.

The original string remains unchanged.

## 9.2 `ft_striteri`

**Purpose:** Applies a function to each character of a string, allowing the function to modify it.

### 📚 What to Study First
- Pointers.
- Strings and `'\0'`.
- Function pointers.
- Array indexing.
- Loops.
- Passing addresses to functions.
- Pointer dereferencing.
- The difference between `char` and `char *`.

**Key idea:** Pass the index and address of each character to the supplied function.

Unlike `ft_strmapi()`, this function modifies the original string and returns nothing.

---

# 10. 🖨️ Output Functions

## 10.1 `ft_putchar_fd`

**Purpose:** Writes a single character to a specified file descriptor.

### 📚 What to Study First
- Characters (`char`).
- File descriptors (`fd`).
- Standard input and output.
- The `write()` function.
- Pointers.
- The address-of operator (`&`).

**Key idea:** Use `write()` to write one byte to the specified file descriptor.

Common file descriptors:
- `0`: Standard input.
- `1`: Standard output.
- `2`: Standard error.

## 10.2 `ft_putstr_fd`

**Purpose:** Writes a string to a specified file descriptor.

### 📚 What to Study First
- Strings and `'\0'`.
- Pointers.
- File descriptors.
- The `write()` function.
- `ft_strlen()`.
- `NULL` checks.

**Key idea:** Use `write()` to send the string's characters to the requested file descriptor.

## 10.3 `ft_putendl_fd`

**Purpose:** Writes a string followed by a newline to a specified file descriptor.

### 📚 What to Study First
- Strings and `'\0'`.
- Pointers.
- File descriptors.
- The `write()` function.
- The newline character (`'\n'`).
- String lengths.

**Key idea:** Write the string, then write the newline character.

## 10.4 `ft_putnbr_fd`

**Purpose:** Writes an integer to a specified file descriptor.

### 📚 What to Study First
- Integers (`int`).
- Characters and ASCII values.
- Recursion or loops.
- Negative numbers.
- File descriptors.
- The `write()` function.
- Digit extraction using `%` and `/`.
- `INT_MIN`.

**Key idea:** Convert each digit into a character and write the characters in the correct order.

Remember to handle negative values and `INT_MIN` correctly.

---

# 11. 🔗 Linked Lists

Before implementing these functions, understand the node structure used in Libft:

typedef struct slist { void content; struct slist next; } t_list;


### 📚 General Linked-List Concepts to Study

- Structures (`struct`).
- The `typedef` keyword.
- Pointers to structures.
- The arrow operator (`->`).
- Dynamic memory allocation (`malloc()`).
- Memory deallocation (`free()`).
- `NULL` pointers.
- Singly linked lists.
- Head pointers.
- Double pointers (`**`).
- Function pointers.
- Traversing nodes using loops.

## 11.1 `ft_lstnew`

**Purpose:** Creates a new node, stores the supplied content pointer, and initializes `next` to `NULL`.

### 📚 What to Study First
- Pointers.
- Dynamic memory allocation.
- Structures.
- `typedef`.
- The arrow operator (`->`).
- `sizeof`.
- `NULL`.
- Allocation failure handling.

**Key idea:** Allocate memory for one node, initialize its fields, and return the node's address.

## 11.2 `ft_lstadd_front`

**Purpose:** Adds a new node at the beginning of a linked list.

### 📚 What to Study First
- Pointers (`*` and `&`).
- Double pointers (`**`).
- Structures.
- The arrow operator (`->`).
- Linked-list traversal.
- Head pointers.
- `NULL`.

**Key idea:** Make the new node point to the current first node, then update the head pointer.

Understand the difference between `lst`, `*lst`, and `new`.

## 11.3 `ft_lstsize`

**Purpose:** Counts the number of nodes in a linked list.

### 📚 What to Study First
- Pointers.
- Structures.
- Linked lists.
- `while` loops.
- Counters.
- Traversing nodes.

**Key idea:** Count every node until the pointer becomes `NULL`.

## 11.4 `ft_lstlast`

**Purpose:** Returns the last node of a linked list.

### 📚 What to Study First
- Pointers.
- Structures.
- The arrow operator (`->`).
- Linked lists.
- `while` loops.
- `NULL` checks.

**Key idea:** Follow the `next` pointer until the current node's `next` field is `NULL`.

If the list is empty, return `NULL`.

## 11.5 `ft_lstadd_back`

**Purpose:** Adds a new node at the end of a linked list.

### 📚 What to Study First
- Pointers (`*` and `&`).
- Double pointers (`**`).
- Structures.
- Linked lists.
- Loops.
- `ft_lstlast()`.
- Head pointers.
- `NULL`.

**Key idea:** If the list is empty, make the new node the head. Otherwise, connect it to the last node.

## 11.6 `ft_lstdelone`

**Purpose:** Deletes one node by freeing its content using a supplied function and then freeing the node itself.

### 📚 What to Study First
- Pointers.
- Structures.
- Function pointers.
- Dynamic memory management (`free()`).
- Memory ownership.
- `NULL` checks.

**Key idea:** Call the supplied deletion function on the node's content, then free the node itself.

Do not free the following node.

## 11.7 `ft_lstclear`

**Purpose:** Deletes every node in a linked list and sets the head pointer to `NULL`.

### 📚 What to Study First
- Pointers (`*` and `&`).
- Double pointers (`**`).
- Linked lists.
- Function pointers.
- Dynamic memory management.
- `free()`.
- Traversal.
- Saving pointers before freeing memory.

**Key idea:** Save the next node, delete the current node, and continue until the list is empty. Finally, set the head pointer to `NULL`.

Save the next pointer before freeing the current node to avoid accessing freed memory.

## 11.8 `ft_lstiter`

**Purpose:** Applies a function to the content of every node in a linked list.

### 📚 What to Study First
- Pointers.
- Structures.
- Linked lists.
- Function pointers.
- `while` loops.
- The arrow operator (`->`).
- Traversing nodes.
- `void` functions.

**Key idea:** Apply the supplied function to the current node's content, move to the next node, and repeat.

This function does not create or delete nodes.

## 11.9 `ft_lstmap`

**Purpose:** Creates a new linked list by applying a function to each node's content while preserving the original list.

### 📚 What to Study First
- Pointers.
- Function pointers.
- Structures.
- Linked lists.
- Dynamic memory allocation.
- Memory deallocation.
- `ft_lstnew()`.
- `ft_lstadd_back()`.
- `ft_lstclear()`.
- Error handling.
- Memory ownership.

**Key idea:** Transform each node's content, create a new node for the transformed content, and append it to the new list.

If allocation fails, clean up the partially constructed list and handle the transformed content according to the required ownership rules.

---

# 12. 🛠️ Compilation and Makefile

A Makefile automates the compilation of your library.

### 📚 What to Study First

- What a compiler does.
- The `cc` compiler.
- Compilation flags (`-Wall`, `-Wextra`, `-Werror`).
- Source files (`.c`).
- Header files (`.h`).
- Object files (`.o`).
- Static libraries (`.a`).
- The `ar` command.
- Makefile targets and dependencies.
- Pattern rules.
- Tabs versus spaces in recipes.
- Phony targets.

### 🧠 Key Idea

Your Makefile compiles source files into object files and combines those files into `libft.a`.

Common commands:

make


Build the library.

make clean


Remove object files.

make fclean


Remove object files and the compiled library.

make re


Clean and rebuild the library.

---

# 13. 🧪 Testing

After implementing your functions, test them against the expected behavior.

### 📚 What to Study First

- Function prototypes.
- Header files.
- Compiling multiple source files.
- Linking a static library.
- Assertions.
- Edge cases.
- Segmentation faults.
- Memory leaks.
- Compiler warnings.
- Test-driven development.

### Example: Testing `ft_strlen()`

#include <stdio.h> #include "libft.h"

int main(void) { printf("%zu\n", ftstrlen("Hello")); printf("%zu\n", ftstrlen("")); return (0); }


Expected output:

5 0


Compile and link your test program against your library:

cc -Wall -Wextra -Werror main.c -L. -lft -o test


Run it:

./test


Test normal inputs, empty strings, boundary values, and allocation failures where applicable.

---


int *arr = ft_calloc(3, sizeof(int));

Result:

arr | v +------+------+------+ | 0 | 0 | 0 | +------+------+------+
🧠 Remember

    malloc() allocates memory but does not initialize it.
    ft_calloc() initializes all allocated bytes to zero.
    nmemb represents the number of elements.
    size represents the size of each element.
    Return NULL if allocation fails or the requested size cannot be represented safely.

Key idea: Allocate → Initialize to zero → Return.
23. ft_strdup
📚 What to study first

    Pointers (*)
    Strings and '\0'
    ft_strlen
    Dynamic memory allocation (malloc)
    Loops (while)
    Copying strings

🎯 Purpose

Creates a new string by duplicating the contents of an existing string.
⚙️ How it works

    Calculate the original string's length.
    Allocate enough memory for the characters and '\0'.
    Check whether allocation failed.
    Copy the original string into the new memory.
    Return the new string.

📊 Drawing

Original string:

str | v +-----+-----+-----+------+ | 'H' | 'i' | '!' | '\0' | +-----+-----+-----+------+

Duplicated string:

strdup | v +-----+-----+-----+------+ | 'H' | 'i' | '!' | '\0' | +-----+-----+-----+------+

A separate memory allocation.
🧠 Remember

    malloc() allocates memory for the duplicate.
    ft_strlen(str) + 1 accounts for the terminating '\0'.
    The original string remains unchanged.
    The returned string must eventually be freed using free().

Key idea: Measure → Allocate → Copy → Return.
24. ft_substr
📚 What to study first

    Pointers (*)
    Strings and '\0'
    Array indexing
    ft_strlen
    Dynamic memory allocation (malloc)
    Loops (while)

🎯 Purpose

Creates a new string containing part of the original string.
⚙️ How it works

    Check the starting index start.
    Calculate how many characters can be copied, up to len.
    Allocate memory for the substring and '\0'.
    Copy the characters into the new string.
    Return the substring.

📊 Drawing

Example:

ft_substr("Hello World", 6, 5);

Original string:

Index: 0 1 2 3 4 5 6 7 8 9 10 | | | | | | | | | | | String: H e l l o W o r l d ^ start

Result:

substring | v +-----+-----+-----+-----+------+ | 'W' | 'o' | 'r' | 'l' | '\0' | +-----+-----+-----+-----+------+
🧠 Remember

    start is the index where copying begins.
    len is the maximum number of characters to copy.
    Allocate one extra byte for '\0'.
    If start is beyond the end of the string, return an empty string if allocation succeeds.
    Return NULL if malloc() fails.

Key idea: Find the start → Allocate → Copy → Terminate → Return.
25. ft_strjoin
📚 What to study first

    Pointers (*)
    Strings and '\0'
    ft_strlen
    Dynamic memory allocation (malloc)
    Loops (while)
    String copying

🎯 Purpose

Creates a new string by joining s1 and s2.
⚙️ How it works

    Calculate the lengths of s1 and s2.
    Allocate enough memory for both strings and '\0'.
    Copy s1 into the new string.
    Copy s2 immediately after s1.
    Return the new string.

📊 Drawing

Example:

ft_strjoin("Hello ", "World");

Before:

s1 s2 +------+------+ +------+------+------+ | H | i | ... | W | o | ... | +------+------+ +------+------+------+

After:

new_string | v +------+------+------+------+------+------+------+ | H | e | ... | W | o | ... | '\0' | +------+------+------+------+------+------+------+

Result:

"Hello World"
🧠 Remember

    s1 is the prefix.
    s2 is the suffix.
    Allocate ft_strlen(s1) + ft_strlen(s2) + 1 bytes.
    The final 1 is for the terminating '\0'.
    Return NULL if malloc() fails.
    The original strings remain unchanged.

Key idea: Measure → Allocate → Copy both strings → Return.
26. ft_strtrim
📚 What to study first

    Pointers (*)
    Strings and '\0'
    Loops (while)
    Character comparison
    ft_strlen
    Dynamic memory allocation (malloc)

🎯 Purpose

Creates a new string by removing characters from set at the beginning and end of s1.
⚙️ How it works

    Find the first character in s1 that is not in set.
    Find the last character in s1 that is not in set.
    Allocate memory for the remaining characters and '\0'.
    Copy the trimmed substring into the new string.
    Return the new string.

📊 Drawing

Example:

ft_strtrim("xxxHello Worldxxx", "x");

Before:

s1 | v +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+ | x | x | x | H | e | l | l | o | | W | o | r | l | d | x | x | x | +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+ ^ ^ ^ ^ ^ ^ Remove Remove

After:

trimmed string | v +---+---+---+---+---+---+---+---+---+---+---+---+---+ | H | e | l | l | o | | W | o | r | l | d | \0| | +---+---+---+---+---+---+---+---+---+---+---+---+---+

Result:

"Hello World"
🧠 Remember

    s1 is the original string.
    set contains the characters to remove.
    Only characters at the beginning and end are removed.
    Characters inside the string remain unchanged.
    Allocate enough memory for the trimmed string and '\0'.
    Return NULL if malloc() fails.

Key idea: Find boundaries → Allocate → Copy → Return.
27. ft_split
📚 What to study first

    Pointers (* and **)
    Strings and '\0'
    Arrays of strings (char **)
    Loops (while)
    Dynamic memory allocation (malloc)
    Memory deallocation (free)
    Counting words and delimiters

🎯 Purpose

Splits a string into an array of strings using a delimiter character.
⚙️ How it works

    Count the words separated by c.
    Allocate memory for the array of string pointers, including the final NULL.
    Find each word, skipping consecutive delimiters.
    Allocate memory for each word and copy it.
    Set the last array element to NULL.
    If an allocation fails, free everything already allocated and return NULL.

📊 Drawing

Example:

ft_split("Hello world 42", ' ');

Original string:

"Hello world 42" ^ ^ space space

Result:

result (char ) | v +-----------+ | result[0] | -----> "Hello\0" +-----------+ | result[1] | -----> "world\0" +-----------+ | result[2] | -----> "42\0" +-----------+ | result[3] | -----> NULL +-----------+

Each word has its own memory allocation, and the array ends with NULL.
🧠 Remember

    s is the original string.
    c is the delimiter.
    Consecutive delimiters do not create empty words.
    char ** represents an array of string pointers.
    Every word must be allocated independently.
    The array itself must also be allocated dynamically.
    The final pointer must be NULL.
    If allocation fails, free all previously allocated strings and the array.

🗑️ How to free the result

int i = 0;

while (result[i]) free(result[i++]); free(result);

Key idea: Count words → Allocate the array → Extract words → Add NULL → Return.
28. ft_itoa
📚 What to study first

    Pointers (*)
    Strings and '\0'
    Integer arithmetic
    Negative numbers
    Dynamic memory allocation (malloc)
    Loops (while)
    ASCII digits ('0' to '9')

🎯 Purpose

Converts an integer into a string, including negative numbers.
⚙️ How it works

    Handle the special case 0.
    Check whether the number is negative.
    Count the digits to determine the required memory.
    Allocate memory for the digits, the optional - sign, and '\0'.
    Convert each digit into a character.
    Add the negative sign if needed.
    Return the resulting string.

📊 Drawing

Example:

ft_itoa(-123);

Before:

Integer (int) | v -123

After:

String (char *) | v +-----+-----+-----+-----+------+ | '-' | '1' | '2' | '3' | '\0' | +-----+-----+-----+-----+------+

Result:

"-123"
🧠 Remember

    n is the integer to convert.
    Negative numbers need a '-' character.
    Allocate enough memory for every digit, the optional sign, and '\0'.
    Handle 0 separately.
    Be careful with INT_MIN, because its positive value cannot be represented by an int.
    Return NULL if malloc() fails.

Key idea: Count digits → Allocate → Convert → Add sign → Return.
29. ft_strmapi
📚 What to study first

    Pointers (*)
    Strings and '\0'
    Function pointers
    Array indexing
    Loops (while)
    Dynamic memory allocation (malloc)

🎯 Purpose

Creates a new string by applying a function to each character, passing its index and character as arguments.
⚙️ How it works

    Calculate the length of s.
    Allocate memory for the new string and '\0'.
    Visit each character and pass its index and value to f.
    Store the returned character in the new string.
    Add '\0' and return the new string.

📊 Drawing

Example: Apply a function that converts lowercase letters to uppercase.

Original string: "cat"

Index: 0 1 2 | | | v v v +---+ +---+ +---+ | c | | a | | t | +---+ +---+ +---+ | | | f(0,c) f(1,a) f(2,t) | | | v v v +---+ +---+ +---+ | C | | A | | T | +---+ +---+ +---+

Result: "CAT"
🧠 Remember

    s is the original string.
    f is the function applied to each character.
    The index starts at 0.
    f receives the index and character, then returns a character.
    The original string remains unchanged.
    Return NULL if malloc() fails.

Key idea: Allocate → Apply f to each character → Terminate → Return. 30. ft_striteri
📚 What to study first

    Pointers (*)
    Strings and '\0'
    Function pointers
    Array indexing
    Loops (while)
    Passing addresses to functions

🎯 Purpose

Applies a function to each character of a string, allowing the function to modify it.
⚙️ How it works

    Start at index 0.
    Pass the index and address of the current character to f.
    Move to the next character.
    Repeat until '\0' is reached.

📊 Drawing

Example: Convert each character to uppercase.

Original string: "cat"

f(0, &s[0]) | v +---+---+---+ | c | a | t | \0 +---+---+---+ | v +---+---+---+ | C | a | t | \0 +---+---+---+

f(1, &s[1]) | v +---+---+---+ | C | A | t | \0 +---+---+---+

f(2, &s[2]) | v +---+---+---+ | C | A | T | \0 +---+---+---+

Result: "CAT"
🧠 Remember

    s is the original string.
    f is the function applied to each character.
    The index starts at 0.
    &s[i] passes the character's address, allowing it to be modified.
    ft_striteri returns nothing (void).

Key idea: Visit → Pass index and address → Modify → Repeat.
31. ft_putchar_fd
📚 What to study first

    Characters (char)
    File descriptors (fd)
    Standard input and output
    The write() function

🎯 Purpose

Writes a single character to a specified file descriptor.
⚙️ How it works

    Receive a character c and a file descriptor fd.
    Use write() to output one byte.
    Return nothing (void).

📊 Drawing

Example:

ftputcharfd('A', 1);

Result:

ftputcharfd('A', 1) | v +---------+ | write() | +---------+ | v Standard Output | v A
🧠 Remember

    c is the character to output.
    fd specifies where to write.
    0 = standard input.
    1 = standard output (terminal).
    2 = standard error.
    write(fd, &c, 1) writes one byte.
    The function returns nothing.

Key idea: Character → write() → File descriptor.
32. ft_putstr_fd
📚 What to study first

    Strings and '\0'
    Pointers (*)
    File descriptors (fd)
    The write() function
    ft_strlen

🎯 Purpose

Writes a string to a specified file descriptor.
⚙️ How it works

    Check that the string exists.
    Calculate the string's length.
    Use write() to output the string.
    Return nothing (void).

📊 Drawing

Example:

ftputstrfd("Hello", 1);

Result:

s = "Hello" | v +------------+ | write() | +------------+ | v Standard Output | v Hello
🧠 Remember

    s is the string to output.
    fd specifies where to write.
    0 = standard input.
    1 = standard output (terminal).
    2 = standard error.
    write(fd, s, length) writes the string.
    The function returns nothing.

Key idea: String → write() → File descriptor.
33. ft_putendl_fd
📚 What to study first

    Strings and '\0'
    Pointers (*)
    File descriptors (fd)
    The write() function
    Newline character ('\n')

🎯 Purpose

Writes a string to a specified file descriptor, followed by a newline.
⚙️ How it works

    Write the string s.
    Write a newline character ('\n').
    Return nothing (void).

📊 Drawing

Example:

ftputendlfd("Hello", 1);

Result:

s = "Hello" | v +-------------+ | write() | +-------------+ | v Standard Output | v Hello | v Newline (\n)

Output:

Hello
🧠 Remember

    s is the string to output.
    fd specifies where to write.
    1 = standard output (terminal).
    2 = standard error.
    write(fd, s, length) writes the string.
    write(fd, "\n", 1) writes the newline.
    The function returns nothing.

Key idea: Write the string → Write '\n'.
34. ft_putnbr_fd
📚 What to study first

    Integers (int)
    Characters and ASCII values
    Recursion or loops (while)
    Negative numbers
    File descriptors (fd)
    The write() function

🎯 Purpose

Writes an integer to a specified file descriptor.
⚙️ How it works

    Check if the number is negative.
    Convert each digit into a character.
    Write each character using write().
    Handle INT_MIN correctly.
    Return nothing (void).

📊 Drawing

Example:

ftputnbrfd(-123, 1);

Result:

Integer: -123 | v +--------------+ | Convert digits| +--------------+ | v +--------------+ | write() | +--------------+ | v Standard Output | v -123
🧠 Remember

    n is the integer to output.
    fd specifies where to write.
    1 = standard output (terminal).
    2 = standard error.
    Each digit must be converted into a character before writing.
    Handle negative numbers, including INT_MIN.
    The function returns nothing.

Key idea: Convert digits → Write characters → Display the integer.
📚 Libft — Linked Lists
1. ft_lstnew(create)
📖 What to study first

    Pointers (*)
    Dynamic memory allocation (malloc)
    Structures (struct)
    Linked lists and NULL

🎯 Purpose

Creates a new node, stores the given content, and initializes next to NULL.
⚙️ How it works
Step 1 — Allocate memory

newnode = malloc(sizeof(tlist));

Allocates enough memory for one node.
Step 2 — Check allocation

if (!new_node) return (NULL);

If allocation fails, return NULL.
Step 3 — Store the content

new_node->content = content;

Stores the given content pointer in the node.
Step 4 — Initialize the next pointer

new_node->next = NULL;

The node does not point to another node yet.
Step 5 — Return the node

return (new_node);

Returns the address of the new node.
📊 Drawing

Example:

tlist node = ft_lstnew("Hello");

Result:

node | v +-----------+ | content | ----> "Hello" +-----------+ | next | ----> NULL +-----------+
🧠 Remember

    malloc() allocates memory.
    content stores the given content pointer.
    next = NULL marks the end of the list.
    return (new_node) returns the created node.

Key idea: Allocate → Initialize → Return.
2. ft_lstadd_front(Prepend)
📖 What to study first

    Pointers (* and &)
    Double pointers (**)
    Structures (struct)
    Linked lists and NULL

🎯 Purpose

Adds a new node at the beginning of a linked list.
⚙️ How it works
Step 1 — Check for NULL

if (!lst || !new) return;

If lst or new is NULL, stop the function.
Step 2 — Connect the new node

new->next = *lst;

Makes the new node point to the current first node.

Before:

HEAD | v +-----+------+ +-----+------+ | A | next | --> | B | NULL | +-----+------+ +-----+------+

NEW | v +-----+------+ | N | NULL | +-----+------+

After new->next = *lst:

HEAD | v +-----+------+ +-----+------+ | A | next | --> | B | NULL | +-----+------+ +-----+------+

NEW | v +-----+------+ | N | next | ----> A +-----+------+
Step 3 — Update the head

*lst = new;

Makes the new node the first node.

Final result:

HEAD | v +-----+------+ +-----+------+ +-----+------+ | N | next | --> | A | next | --> | B | NULL | +-----+------+ +-----+------+ +-----+------+
🧠 Remember

    lst is the address of the head pointer.
    *lst is the current first node.
    new is the node to insert.
    new->next = *lst connects the new node to the existing list.
    *lst = new updates the head.

3. ft_lstsize(Count)
📚 What to study first

    Pointers (*)
    Linked lists
    Loops (while)
    Counters (unsigned int)

🎯 Purpose

Counts the number of nodes in a linked list.
⚙️ How it works

    Initialize count to 0.
    Traverse the list, incrementing count for each node.
    Return the total count.

📊 Drawing

Example:

lst | v +-----+------+ +-----+------+ +-----+------+ | A | next | --> | B | next | --> | C | NULL | +-----+------+ +-----+------+ +-----+------+

Counting:

[A] ------> [B] ------> [C] ------> NULL 1 2 3

Total: 3 nodes
🧠 Remember

    count++ increments the counter.
    lst = lst->next moves to the next node.
    The loop stops when lst becomes NULL.
    An empty list returns 0.

Key idea: Traverse → Count → Return.
4. ft_lstlast
📚 What to study first

    Pointers (*)
    Structures (struct)
    Linked lists
    Loops (while)

🎯 Purpose

Returns the last node of a linked list.
⚙️ How it works

    Check if the list is empty.
    Traverse the list until next is NULL.
    Return the last node.

📊 Drawing

Example:

lst | v +-----+------+ +-----+------+ +-----+------+ | A | next | --> | B | next | --> | C | NULL | +-----+------+ +-----+------+ +-----+------+ ^ | LAST
🧠 Remember

    lst == NULL: The list is empty.
    lst->next == NULL: The current node is the last node.
    lst = lst->next: Moves to the next node.

Key idea: Traverse → Find the last node → Return it.
5. ft_lstadd_back
📚 What to study first

    Pointers (* and &)
    Double pointers (**)
    Linked lists
    Loops (while)

🎯 Purpose

Adds a new node at the end of a linked list.
⚙️ How it works

    If the list is empty, make new the first node.
    Otherwise, traverse the list to find the last node.
    Connect the last node to new.

📊 Drawing

Before:

HEAD | v +-----+------+ +-----+------+ | A | next | --> | B | NULL | +-----+------+ +-----+------+

NEW | v +-----+------+ | C | NULL | +-----+------+

After:

HEAD | v +-----+------+ +-----+------+ +-----+------+ | A | next | --> | B | next | --> | C | NULL | +-----+------+ +-----+------+ +-----+------+
🧠 Remember

    lst: Address of the head pointer.
    *lst: First node of the list.
    new: Node to add.
    last->next = new: Connects the new node to the end.

Key idea: Find the last node → Connect the new node.
6. ft_lstdelone
📚 What to study first

    Pointers (*)
    Structures (struct)
    Function pointers
    Dynamic memory management (free)

🎯 Purpose

Deletes one node by freeing its content and the node itself, without deleting the next node.
⚙️ How it works

    Check if lst is NULL.
    Use del to free the node's content.
    Use free() to free the node itself.

📊 Drawing

Before:

HEAD | v +---------+------+ +---------+------+ | Content | next | --> | Content | NULL | +---------+------+ +---------+------+ NODE 1 NODE 2

After ft_lstdelone(lst, del):

+---------+------+ | Content | NULL | +---------+------+ NODE 2

NODE 1: FREED
🧠 Remember

    del(lst->content) frees the content using the provided function.
    free(lst) frees the node itself.
    The next node is not freed.
    del is a function pointer that specifies how to delete the content.

Key idea: Delete the content → Free the node → Keep the next node.
7. ft_lstclear
📚 What to study first

    Pointers (* and &)
    Double pointers (**)
    Linked lists
    Function pointers
    Dynamic memory management (free)

🎯 Purpose

Deletes and frees every node in the list, then sets the head pointer to NULL.
⚙️ How it works

    Check if the list exists.
    Save the next node.
    Delete the current node's content using del and free the node.
    Move to the next node and repeat.
    Set *lst to NULL.

📊 Drawing

Before:

HEAD | v +---------+------+ +---------+------+ +---------+------+ | Content | next | --> | Content | next | --> | Content | NULL | +---------+------+ +---------+------+ +---------+------+

After ft_lstclear(&head, del):

HEAD | v NULL

All nodes and their contents have been freed.
🧠 Remember

    del frees each node's content.
    free() frees each node.
    Save next before freeing the current node.
    *lst = NULL resets the head pointer.

Key idea: Save next → Delete current → Repeat → Set head to NULL.
8. ft_lstiter
📚 What to study first

    Pointers (*)
    Structures (struct)
    Linked lists
    Function pointers
    Loops (while)

🎯 Purpose

Applies a function to the content of every node in a linked list.
⚙️ How it works

    Check if the list exists.
    Apply f to the current node's content.
    Move to the next node.
    Repeat until the end of the list.

📊 Drawing

Before:

HEAD | v +---------+------+ +---------+------+ +---------+------+ | "hello" | next | --> | "world" | next | --> | "42" | NULL | +---------+------+ +---------+------+ +---------+------+

After applying f (example: converting content to uppercase):

HEAD | v +---------+------+ +---------+------+ +---------+------+ | "HELLO" | next | --> | "WORLD" | next | --> | "42" | NULL | +---------+------+ +---------+------+ +---------+------+
🧠 Remember

    f(lst->content) applies the function to the current node's content.
    lst = lst->next moves to the next node.
    The loop stops when lst becomes NULL.
    ft_lstiter does not create or delete nodes.

Key idea: Apply the function → Move to the next node → Repeat.
9. ft_lstmap
📚 What to study first

    Pointers (*)
    Function pointers
    Linked lists
    Dynamic memory allocation (malloc)
    Memory deallocation (free)

🎯 Purpose

Creates a new list by applying a function to each node's content, leaving the original list unchanged.
⚙️ How it works

    Traverse the original list.
    Apply f to the current node's content.
    Create a new node with the transformed content.
    Add the new node to the new list.
    If allocation fails, use del to free the necessary content and nodes.
    Return the new list.

📊 Drawing

Original list:

HEAD | v +-----+------+ +-----+------+ +-----+------+ | 1 | next | --> | 2 | next | --> | 3 | NULL | +-----+------+ +-----+------+ +-----+------+

After applying f (example: multiplying each number by 2):

NEW LIST | v +-----+------+ +-----+------+ +-----+------+ | 2 | next | --> | 4 | next | --> | 6 | NULL | +-----+------+ +-----+------+ +-----+------+

The original list remains unchanged.
🧠 Remember

    f transforms each node's content.
    malloc() allocates memory for new nodes.
    del frees content when necessary, especially if an allocation fails.
    The new list is separate from the original list.
    Returns the head of the new list, or NULL if allocation fails.
    

Key idea: Transform → Create → Connect → Return.

# 🎯 Final Study Strategy

Stage	Functions	Main concepts
1	ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint	ASCII, conditions, operators
2	ft_strlen, ft_toupper, ft_tolower	Strings, loops, characters
3	ft_memset, ft_bzero, ft_memcpy, ft_memmove	Pointers, bytes, memory
4	ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp	String traversal and comparison
5	ft_memchr, ft_memcmp, ft_strnstr	Memory searching and nested loops
6	ft_atoi	Parsing and integer arithmetic
7	ft_calloc, ft_strdup	Dynamic memory allocation
8	ft_substr, ft_strjoin, ft_strtrim	Allocating and manipulating strings
9	ft_split	Arrays of pointers and memory management
10	ft_itoa	Integer conversion and edge cases
11	ft_strmapi, ft_striteri	Function pointers
12	ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd	File descriptors and write()
13	ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast	Structures and linked lists
14	ft_lstadd_back, ft_lstdelone, ft_lstclear	Linked-list manipulation and memory ownership
15	ft_lstiter, ft_lstmap	Function pointers and linked-list traversal

Example:

Key idea: Connect → Update the head. orgized it
