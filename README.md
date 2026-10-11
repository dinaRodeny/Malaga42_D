
# 📚 Libft — Mandatory Functions
Libft is a project at 42 School where you create your own C library by implementing essential standard C library functions from scratch.
The main goal is to understand how these functions work internally, improve your programming skills in C, and learn how to manage memory, manipulate strings, and handle characters.

# 1. Character Checks

## 1. `ft_isalpha`

### 📚 What to study first
- Characters (`char`)
- ASCII table
- `if` statements
- Comparison operators (`>=`, `<=`, `&&`, `||`)

### 🎯 Purpose
Checks whether a character is an alphabetic letter (`A-Z` or `a-z`).

---

## 2. `ft_isdigit`

### 📚 What to study first
- Characters (`char`)
- ASCII table
- Comparison operators
- `if` statements

### 🎯 Purpose
Checks whether a character is a digit (`0-9`).

---

## 3. `ft_isalnum`

### 📚 What to study first
- `ft_isalpha`
- `ft_isdigit`
- Logical operators (`||`, `&&`)

### 🎯 Purpose
Checks whether a character is an alphabetic letter or a digit.

---

## 4. `ft_isascii`

### 📚 What to study first
- Characters (`char`)
- ASCII table
- Integer ranges
- Comparison operators

### 🎯 Purpose
Checks whether a value belongs to the ASCII range (`0-127`).

---

## 5. `ft_isprint`

### 📚 What to study first
- ASCII table
- Printable characters
- Comparison operators

### 🎯 Purpose
Checks whether a character is printable (`32-126`).

---

# 2. String Length and Memory

## 6. `ft_strlen`

### 📚 What to study first
- Strings and `'\0'`
- Pointers (`*`)
- Array indexing
- Loops (`while`)
- Counters

### 🎯 Purpose
Returns the length of a string, excluding the terminating `'\0'`.

---

## 7. `ft_memset`

### 📚 What to study first
- Pointers (`void *`)
- Type casting
- Memory addresses
- Loops
- Bytes and `sizeof`

### 🎯 Purpose
Fills a memory area with a specified byte.

---

## 8. `ft_bzero`

### 📚 What to study first
- Pointers
- Memory addresses
- Loops
- `ft_memset`

### 🎯 Purpose
Sets a specified number of bytes to zero.

---

## 9. `ft_memcpy`

### 📚 What to study first
- Pointers (`void *`)
- Type casting
- Memory addresses
- Loops
- Bytes and memory copying

### 🎯 Purpose
Copies a specified number of bytes from one memory area to another. The areas must not overlap.

---

## 10. `ft_memmove`

### 📚 What to study first
- Pointers
- Memory addresses
- Loops
- `ft_memcpy`
- Overlapping memory areas

### 🎯 Purpose
Copies bytes between memory areas, even when the areas overlap.

---

# 3. String Copy and Concatenation

## 11. `ft_strlcpy`

### 📚 What to study first
- Strings and `'\0'`
- Pointers
- Array indexing
- Loops
- Buffer sizes
- `ft_strlen`

### 🎯 Purpose
Copies a string into a destination buffer of a specified size, ensuring null termination when the size is greater than zero.

---

## 12. `ft_strlcat`

### 📚 What to study first
- Strings and `'\0'`
- Pointers
- Array indexing
- Loops
- Buffer sizes
- `ft_strlen`
- `ft_strlcpy`

### 🎯 Purpose
Appends a string to a destination string while respecting the specified buffer size.

---

# 4. Character Conversion

## 13. `ft_toupper`

### 📚 What to study first
- Characters (`char`)
- ASCII table
- Integer values of characters
- Conditional statements

### 🎯 Purpose
Converts a lowercase letter to uppercase.

---

## 14. `ft_tolower`

### 📚 What to study first
- Characters (`char`)
- ASCII table
- Integer values of characters
- Conditional statements

### 🎯 Purpose
Converts an uppercase letter to lowercase.

---

# 5. String Search and Comparison

## 15. `ft_strchr`

### 📚 What to study first
- Strings and `'\0'`
- Pointers
- Loops
- Character comparison
- `NULL`

### 🎯 Purpose
Finds the first occurrence of a character in a string.

---

## 16. `ft_strrchr`

### 📚 What to study first
- Strings and `'\0'`
- Pointers
- Loops
- Character comparison
- `ft_strchr`

### 🎯 Purpose
Finds the last occurrence of a character in a string.

---

## 17. `ft_strncmp`

### 📚 What to study first
- Strings and `'\0'`
- Pointers
- Loops
- Character comparison
- ASCII values
- Unsigned characters

### 🎯 Purpose
Compares two strings up to a specified number of characters.

---

## 18. `ft_memchr`

### 📚 What to study first
- Pointers (`void *`)
- Type casting
- Memory addresses
- Loops
- Byte comparison

### 🎯 Purpose
Finds the first occurrence of a byte in a memory area.

---

## 19. `ft_memcmp`

### 📚 What to study first
- Pointers (`void *`)
- Type casting
- Memory addresses
- Loops
- Unsigned characters
- Byte comparison

### 🎯 Purpose
Compares two memory areas byte by byte.

---

## 20. `ft_strnstr`

### 📚 What to study first
- Strings and `'\0'`
- Pointers
- Nested loops
- Substrings
- String comparison
- Buffer lengths

### 🎯 Purpose
Finds the first occurrence of a substring within a string, searching up to a specified length.

---

# 6. String to Integer

## 21. `ft_atoi`

### 📚 What to study first
- Strings and `'\0'`
- Pointers
- Loops
- ASCII values
- Character-to-digit conversion
- Integer arithmetic
- Whitespace characters
- Positive and negative numbers

### 🎯 Purpose
Converts the beginning of a string into an integer.

---

# 🧠 Recommended Learning Order

Study these concepts before implementing the functions:

1. **C Basics:** Variables, data types, operators, and `if` statements.
2. **Characters:** ASCII values and character comparisons.
3. **Loops:** `while` loops and counters.
4. **Arrays and Strings:** Indexing and the null terminator `'\0'`.
5. **Pointers:** Addresses, dereferencing, and pointer arithmetic.
6. **Memory:** `void *`, type casting, and byte manipulation.
7. **String Operations:** Copying, concatenation, searching, and comparison.
8. **Advanced Concepts:** Overlapping memory, nested loops, and integer conversion.

**Key idea:** Understand the concepts first, then implement each function from scratch.
# 22. `ft_calloc`

## 📚 What to study first
- Pointers (`*`)
- Dynamic memory allocation (`malloc`)
- `free()`
- `sizeof`
- Memory initialization
- `size_t`

## 🎯 Purpose
Allocates memory for an array and initializes all its bytes to zero.

## ⚙️ How it works
1. Calculate the total memory required.
2. Allocate memory using `malloc()`.
3. Check whether allocation failed.
4. Initialize the allocated memory to zero.
5. Return the allocated memory.

## 📊 Drawing

**Example:**

int *arr = ft_calloc(3, sizeof(int));


**Result:**

arr | v +------+------+------+ | 0 | 0 | 0 | +------+------+------+


## 🧠 Remember
- `malloc()` allocates memory but does not initialize it.
- `ft_calloc()` initializes all allocated bytes to zero.
- `nmemb` represents the number of elements.
- `size` represents the size of each element.
- Return `NULL` if allocation fails or the requested size cannot be represented safely.

**Key idea:** Allocate → Initialize to zero → Return.

---

# 23. `ft_strdup`

## 📚 What to study first
- Pointers (`*`)
- Strings and `'\0'`
- `ft_strlen`
- Dynamic memory allocation (`malloc`)
- Loops (`while`)
- Copying strings

## 🎯 Purpose
Creates a new string by duplicating the contents of an existing string.

## ⚙️ How it works
1. Calculate the original string's length.
2. Allocate enough memory for the characters and `'\0'`.
3. Check whether allocation failed.
4. Copy the original string into the new memory.
5. Return the new string.

## 📊 Drawing

**Original string:**

str | v +-----+-----+-----+------+ | 'H' | 'i' | '!' | '\0' | +-----+-----+-----+------+


**Duplicated string:**

strdup | v +-----+-----+-----+------+ | 'H' | 'i' | '!' | '\0' | +-----+-----+-----+------+

A separate memory allocation.


## 🧠 Remember
- `malloc()` allocates memory for the duplicate.
- `ft_strlen(str) + 1` accounts for the terminating `'\0'`.
- The original string remains unchanged.
- The returned string must eventually be freed using `free()`.

**Key idea:** Measure → Allocate → Copy → Return.



# 24. `ft_substr`

## 📚 What to study first
- Pointers (`*`)
- Strings and `'\0'`
- Array indexing
- `ft_strlen`
- Dynamic memory allocation (`malloc`)
- Loops (`while`)

## 🎯 Purpose
Creates a new string containing part of the original string.

## ⚙️ How it works
1. Check the starting index `start`.
2. Calculate how many characters can be copied, up to `len`.
3. Allocate memory for the substring and `'\0'`.
4. Copy the characters into the new string.
5. Return the substring.

## 📊 Drawing

**Example:**

ft_substr("Hello World", 6, 5);


**Original string:**

Index: 0 1 2 3 4 5 6 7 8 9 10 | | | | | | | | | | | String: H e l l o W o r l d ^ start


**Result:**

substring | v +-----+-----+-----+-----+------+ | 'W' | 'o' | 'r' | 'l' | '\0' | +-----+-----+-----+-----+------+


## 🧠 Remember
- `start` is the index where copying begins.
- `len` is the maximum number of characters to copy.
- Allocate one extra byte for `'\0'`.
- If `start` is beyond the end of the string, return an empty string if allocation succeeds.
- Return `NULL` if `malloc()` fails.

**Key idea:** Find the start → Allocate → Copy → Terminate → Return.

# 25. `ft_strjoin`

## 📚 What to study first
- Pointers (`*`)
- Strings and `'\0'`
- `ft_strlen`
- Dynamic memory allocation (`malloc`)
- Loops (`while`)
- String copying

## 🎯 Purpose
Creates a new string by joining `s1` and `s2`.

## ⚙️ How it works
1. Calculate the lengths of `s1` and `s2`.
2. Allocate enough memory for both strings and `'\0'`.
3. Copy `s1` into the new string.
4. Copy `s2` immediately after `s1`.
5. Return the new string.

## 📊 Drawing

**Example:**

ft_strjoin("Hello ", "World");


**Before:**

s1 s2 +------+------+ +------+------+------+ | H | i | ... | W | o | ... | +------+------+ +------+------+------+


**After:**

new_string | v +------+------+------+------+------+------+------+ | H | e | ... | W | o | ... | '\0' | +------+------+------+------+------+------+------+


**Result:**

"Hello World"


## 🧠 Remember
- `s1` is the prefix.
- `s2` is the suffix.
- Allocate `ft_strlen(s1) + ft_strlen(s2) + 1` bytes.
- The final `1` is for the terminating `'\0'`.
- Return `NULL` if `malloc()` fails.
- The original strings remain unchanged.

**Key idea:** Measure → Allocate → Copy both strings → Return.

# 26. `ft_strtrim`

## 📚 What to study first
- Pointers (`*`)
- Strings and `'\0'`
- Loops (`while`)
- Character comparison
- `ft_strlen`
- Dynamic memory allocation (`malloc`)

## 🎯 Purpose
Creates a new string by removing characters from `set` at the beginning and end of `s1`.

## ⚙️ How it works
1. Find the first character in `s1` that is not in `set`.
2. Find the last character in `s1` that is not in `set`.
3. Allocate memory for the remaining characters and `'\0'`.
4. Copy the trimmed substring into the new string.
5. Return the new string.

## 📊 Drawing

**Example:**

ft_strtrim("xxxHello Worldxxx", "x");


**Before:**

s1 | v +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+ | x | x | x | H | e | l | l | o | | W | o | r | l | d | x | x | x | +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+ ^ ^ ^ ^ ^ ^ Remove Remove


**After:**

trimmed string | v +---+---+---+---+---+---+---+---+---+---+---+---+---+ | H | e | l | l | o | | W | o | r | l | d | \0| | +---+---+---+---+---+---+---+---+---+---+---+---+---+


**Result:**

"Hello World"


## 🧠 Remember
- `s1` is the original string.
- `set` contains the characters to remove.
- Only characters at the beginning and end are removed.
- Characters inside the string remain unchanged.
- Allocate enough memory for the trimmed string and `'\0'`.
- Return `NULL` if `malloc()` fails.

**Key idea:** Find boundaries → Allocate → Copy → Return.
# 27. `ft_split`

## 📚 What to study first
- Pointers (`*` and `**`)
- Strings and `'\0'`
- Arrays of strings (`char **`)
- Loops (`while`)
- Dynamic memory allocation (`malloc`)
- Memory deallocation (`free`)
- Counting words and delimiters

## 🎯 Purpose
Splits a string into an array of strings using a delimiter character.

## ⚙️ How it works
1. Count the words separated by `c`.
2. Allocate memory for the array of string pointers, including the final `NULL`.
3. Find each word, skipping consecutive delimiters.
4. Allocate memory for each word and copy it.
5. Set the last array element to `NULL`.
6. If an allocation fails, free everything already allocated and return `NULL`.

## 📊 Drawing

**Example:**

ft_split("Hello world 42", ' ');


**Original string:**

"Hello world 42" ^ ^ space space


**Result:**

result (char ) | v +-----------+ | result[0] | -----> "Hello\0" +-----------+ | result[1] | -----> "world\0" +-----------+ | result[2] | -----> "42\0" +-----------+ | result[3] | -----> NULL +-----------+


Each word has its **own memory allocation**, and the array ends with `NULL`.

## 🧠 Remember
- `s` is the original string.
- `c` is the delimiter.
- Consecutive delimiters do not create empty words.
- `char **` represents an array of string pointers.
- Every word must be allocated independently.
- The array itself must also be allocated dynamically.
- The final pointer must be `NULL`.
- If allocation fails, free all previously allocated strings and the array.

## 🗑️ How to free the result

int i = 0;

while (result[i]) free(result[i++]); free(result);


**Key idea:** Count words → Allocate the array → Extract words → Add `NULL` → Return.

# 28. `ft_itoa`

## 📚 What to study first
- Pointers (`*`)
- Strings and `'\0'`
- Integer arithmetic
- Negative numbers
- Dynamic memory allocation (`malloc`)
- Loops (`while`)
- ASCII digits (`'0'` to `'9'`)

## 🎯 Purpose
Converts an integer into a string, including negative numbers.

## ⚙️ How it works
1. Handle the special case `0`.
2. Check whether the number is negative.
3. Count the digits to determine the required memory.
4. Allocate memory for the digits, the optional `-` sign, and `'\0'`.
5. Convert each digit into a character.
6. Add the negative sign if needed.
7. Return the resulting string.

## 📊 Drawing

**Example:**

ft_itoa(-123);


**Before:**

Integer (int) | v -123


**After:**

String (char *) | v +-----+-----+-----+-----+------+ | '-' | '1' | '2' | '3' | '\0' | +-----+-----+-----+-----+------+


**Result:**

"-123"


## 🧠 Remember
- `n` is the integer to convert.
- Negative numbers need a `'-'` character.
- Allocate enough memory for every digit, the optional sign, and `'\0'`.
- Handle `0` separately.
- Be careful with `INT_MIN`, because its positive value cannot be represented by an `int`.
- Return `NULL` if `malloc()` fails.

**Key idea:** Count digits → Allocate → Convert → Add sign → Return.

# 29. `ft_strmapi`

## 📚 What to study first
- Pointers (`*`)
- Strings and `'\0'`
- Function pointers
- Array indexing
- Loops (`while`)
- Dynamic memory allocation (`malloc`)

## 🎯 Purpose
Creates a new string by applying a function to each character, passing its index and character as arguments.

## ⚙️ How it works
1. Calculate the length of `s`.
2. Allocate memory for the new string and `'\0'`.
3. Visit each character and pass its index and value to `f`.
4. Store the returned character in the new string.
5. Add `'\0'` and return the new string.

## 📊 Drawing

**Example:** Apply a function that converts lowercase letters to uppercase.

Original string: "cat"

Index: 0 1 2 | | | v v v +---+ +---+ +---+ | c | | a | | t | +---+ +---+ +---+ | | | f(0,c) f(1,a) f(2,t) | | | v v v +---+ +---+ +---+ | C | | A | | T | +---+ +---+ +---+

Result: "CAT"


## 🧠 Remember
- `s` is the original string.
- `f` is the function applied to each character.
- The index starts at `0`.
- `f` receives the index and character, then returns a character.
- The original string remains unchanged.
- Return `NULL` if `malloc()` fails.

**Key idea:** Allocate → Apply `f` to each character → Terminate → Return.
 30. `ft_striteri`

## 📚 What to study first
- Pointers (`*`)
- Strings and `'\0'`
- Function pointers
- Array indexing
- Loops (`while`)
- Passing addresses to functions

## 🎯 Purpose
Applies a function to each character of a string, allowing the function to modify it.

## ⚙️ How it works
1. Start at index `0`.
2. Pass the index and address of the current character to `f`.
3. Move to the next character.
4. Repeat until `'\0'` is reached.

## 📊 Drawing

**Example:** Convert each character to uppercase.

Original string: "cat"

f(0, &s[0]) | v +---+---+---+ | c | a | t | \0 +---+---+---+ | v +---+---+---+ | C | a | t | \0 +---+---+---+

f(1, &s[1]) | v +---+---+---+ | C | A | t | \0 +---+---+---+

f(2, &s[2]) | v +---+---+---+ | C | A | T | \0 +---+---+---+

Result: "CAT"


## 🧠 Remember
- `s` is the original string.
- `f` is the function applied to each character.
- The index starts at `0`.
- `&s[i]` passes the character's address, allowing it to be modified.
- `ft_striteri` returns nothing (`void`).

**Key idea:** Visit → Pass index and address → Modify → Repeat.

# 31. `ft_putchar_fd`

## 📚 What to study first
- Characters (`char`)
- File descriptors (`fd`)
- Standard input and output
- The `write()` function

## 🎯 Purpose
Writes a single character to a specified file descriptor.

## ⚙️ How it works
1. Receive a character `c` and a file descriptor `fd`.
2. Use `write()` to output one byte.
3. Return nothing (`void`).

## 📊 Drawing

**Example:**

ftputcharfd('A', 1);


**Result:**

ftputcharfd('A', 1) | v +---------+ | write() | +---------+ | v Standard Output | v A


## 🧠 Remember
- `c` is the character to output.
- `fd` specifies where to write.
- `0` = standard input.
- `1` = standard output (terminal).
- `2` = standard error.
- `write(fd, &c, 1)` writes one byte.
- The function returns nothing.

**Key idea:** Character → `write()` → File descriptor.
# 32. `ft_putstr_fd`

## 📚 What to study first
- Strings and `'\0'`
- Pointers (`*`)
- File descriptors (`fd`)
- The `write()` function
- `ft_strlen`

## 🎯 Purpose
Writes a string to a specified file descriptor.

## ⚙️ How it works
1. Check that the string exists.
2. Calculate the string's length.
3. Use `write()` to output the string.
4. Return nothing (`void`).

## 📊 Drawing

**Example:**

ftputstrfd("Hello", 1);


**Result:**

s = "Hello" | v +------------+ | write() | +------------+ | v Standard Output | v Hello


## 🧠 Remember
- `s` is the string to output.
- `fd` specifies where to write.
- `0` = standard input.
- `1` = standard output (terminal).
- `2` = standard error.
- `write(fd, s, length)` writes the string.
- The function returns nothing.

**Key idea:** String → `write()` → File descriptor.


# 33. `ft_putendl_fd`

## 📚 What to study first
- Strings and `'\0'`
- Pointers (`*`)
- File descriptors (`fd`)
- The `write()` function
- Newline character (`'\n'`)

## 🎯 Purpose
Writes a string to a specified file descriptor, followed by a newline.

## ⚙️ How it works
1. Write the string `s`.
2. Write a newline character (`'\n'`).
3. Return nothing (`void`).

## 📊 Drawing

**Example:**

ftputendlfd("Hello", 1);


**Result:**

s = "Hello" | v +-------------+ | write() | +-------------+ | v Standard Output | v Hello | v Newline (\n)


**Output:**

Hello


## 🧠 Remember
- `s` is the string to output.
- `fd` specifies where to write.
- `1` = standard output (terminal).
- `2` = standard error.
- `write(fd, s, length)` writes the string.
- `write(fd, "\n", 1)` writes the newline.
- The function returns nothing.

**Key idea:** Write the string → Write `'\n'`.
# 34. `ft_putnbr_fd`

## 📚 What to study first
- Integers (`int`)
- Characters and ASCII values
- Recursion or loops (`while`)
- Negative numbers
- File descriptors (`fd`)
- The `write()` function

## 🎯 Purpose
Writes an integer to a specified file descriptor.

## ⚙️ How it works
1. Check if the number is negative.
2. Convert each digit into a character.
3. Write each character using `write()`.
4. Handle `INT_MIN` correctly.
5. Return nothing (`void`).

## 📊 Drawing

**Example:**

ftputnbrfd(-123, 1);


**Result:**

Integer: -123 | v +--------------+ | Convert digits| +--------------+ | v +--------------+ | write() | +--------------+ | v Standard Output | v -123


## 🧠 Remember
- `n` is the integer to output.
- `fd` specifies where to write.
- `1` = standard output (terminal).
- `2` = standard error.
- Each digit must be converted into a character before writing.
- Handle negative numbers, including `INT_MIN`.
- The function returns nothing.

**Key idea:** Convert digits → Write characters → Display the integer.

# 📚 Libft — Linked Lists

# 1. `ft_lstnew`(create)

## 📖 What to study first
- Pointers (`*`)
- Dynamic memory allocation (`malloc`)
- Structures (`struct`)
- Linked lists and `NULL`

## 🎯 Purpose
Creates a new node, stores the given content, and initializes `next` to `NULL`.

## ⚙️ How it works

### Step 1 — Allocate memory

newnode = malloc(sizeof(tlist));

Allocates enough memory for one node.

### Step 2 — Check allocation

if (!new_node) return (NULL);

If allocation fails, return `NULL`.

### Step 3 — Store the content

new_node->content = content;

Stores the given content pointer in the node.

### Step 4 — Initialize the next pointer

new_node->next = NULL;

The node does not point to another node yet.

### Step 5 — Return the node

return (new_node);

Returns the address of the new node.

## 📊 Drawing

**Example:**

tlist node = ft_lstnew("Hello");


**Result:**

node | v +-----------+ | content | ----> "Hello" +-----------+ | next | ----> NULL +-----------+


## 🧠 Remember
- `malloc()` allocates memory.
- `content` stores the given content pointer.
- `next = NULL` marks the end of the list.
- `return (new_node)` returns the created node.

**Key idea:** Allocate → Initialize → Return.

---

# 2. `ft_lstadd_front`(Prepend)

## 📖 What to study first
- Pointers (`*` and `&`)
- Double pointers (`**`)
- Structures (`struct`)
- Linked lists and `NULL`

## 🎯 Purpose
Adds a new node at the beginning of a linked list.

## ⚙️ How it works

### Step 1 — Check for NULL

if (!lst || !new) return;

If `lst` or `new` is `NULL`, stop the function.

### Step 2 — Connect the new node

new->next = *lst;

Makes the new node point to the current first node.

**Before:**

HEAD | v +-----+------+ +-----+------+ | A | next | --> | B | NULL | +-----+------+ +-----+------+

NEW | v +-----+------+ | N | NULL | +-----+------+


**After `new->next = *lst`:**

HEAD | v +-----+------+ +-----+------+ | A | next | --> | B | NULL | +-----+------+ +-----+------+

NEW | v +-----+------+ | N | next | ----> A +-----+------+


### Step 3 — Update the head

*lst = new;

Makes the new node the first node.

**Final result:**

HEAD | v +-----+------+ +-----+------+ +-----+------+ | N | next | --> | A | next | --> | B | NULL | +-----+------+ +-----+------+ +-----+------+


## 🧠 Remember
- `lst` is the address of the head pointer.
- `*lst` is the current first node.
- `new` is the node to insert.
- `new->next = *lst` connects the new node to the existing list.
- `*lst = new` updates the head.

# 3. `ft_lstsize`(Count)
## 📚 What to study first
- Pointers (`*`)
- Linked lists
- Loops (`while`)
- Counters (`unsigned int`)

## 🎯 Purpose
Counts the number of nodes in a linked list.

## ⚙️ How it works

1. Initialize `count` to `0`.
2. Traverse the list, incrementing `count` for each node.
3. Return the total count.

## 📊 Drawing

**Example:**

lst | v +-----+------+ +-----+------+ +-----+------+ | A | next | --> | B | next | --> | C | NULL | +-----+------+ +-----+------+ +-----+------+


**Counting:**

[A] ------> [B] ------> [C] ------> NULL 1 2 3

Total: 3 nodes


## 🧠 Remember
- `count++` increments the counter.
- `lst = lst->next` moves to the next node.
- The loop stops when `lst` becomes `NULL`.
- An empty list returns `0`.

**Key idea:** Traverse → Count → Return.

# 4. `ft_lstlast`

## 📚 What to study first
- Pointers (`*`)
- Structures (`struct`)
- Linked lists
- Loops (`while`)

## 🎯 Purpose
Returns the last node of a linked list.

## ⚙️ How it works
1. Check if the list is empty.
2. Traverse the list until `next` is `NULL`.
3. Return the last node.

## 📊 Drawing

**Example:**

lst | v +-----+------+ +-----+------+ +-----+------+ | A | next | --> | B | next | --> | C | NULL | +-----+------+ +-----+------+ +-----+------+ ^ | LAST


## 🧠 Remember
- `lst == NULL`: The list is empty.
- `lst->next == NULL`: The current node is the last node.
- `lst = lst->next`: Moves to the next node.

**Key idea:** Traverse → Find the last node → Return it.
# 5. `ft_lstadd_back`

## 📚 What to study first
- Pointers (`*` and `&`)
- Double pointers (`**`)
- Linked lists
- Loops (`while`)

## 🎯 Purpose
Adds a new node at the end of a linked list.

## ⚙️ How it works
1. If the list is empty, make `new` the first node.
2. Otherwise, traverse the list to find the last node.
3. Connect the last node to `new`.

## 📊 Drawing

**Before:**

HEAD | v +-----+------+ +-----+------+ | A | next | --> | B | NULL | +-----+------+ +-----+------+

NEW | v +-----+------+ | C | NULL | +-----+------+


**After:**

HEAD | v +-----+------+ +-----+------+ +-----+------+ | A | next | --> | B | next | --> | C | NULL | +-----+------+ +-----+------+ +-----+------+


## 🧠 Remember
- `lst`: Address of the head pointer.
- `*lst`: First node of the list.
- `new`: Node to add.
- `last->next = new`: Connects the new node to the end.

**Key idea:** Find the last node → Connect the new node.
# 6. `ft_lstdelone`

## 📚 What to study first
- Pointers (`*`)
- Structures (`struct`)
- Function pointers
- Dynamic memory management (`free`)

## 🎯 Purpose
Deletes one node by freeing its content and the node itself, without deleting the next node.

## ⚙️ How it works
1. Check if `lst` is `NULL`.
2. Use `del` to free the node's content.
3. Use `free()` to free the node itself.

## 📊 Drawing

**Before:**

HEAD | v +---------+------+ +---------+------+ | Content | next | --> | Content | NULL | +---------+------+ +---------+------+ NODE 1 NODE 2


**After `ft_lstdelone(lst, del)`:**

+---------+------+ | Content | NULL | +---------+------+ NODE 2

NODE 1: FREED


## 🧠 Remember
- `del(lst->content)` frees the content using the provided function.
- `free(lst)` frees the node itself.
- The next node is **not freed**.
- `del` is a function pointer that specifies how to delete the content.

**Key idea:** Delete the content → Free the node → Keep the next node.

# 7. `ft_lstclear`

## 📚 What to study first
- Pointers (`*` and `&`)
- Double pointers (`**`)
- Linked lists
- Function pointers
- Dynamic memory management (`free`)

## 🎯 Purpose
Deletes and frees every node in the list, then sets the head pointer to `NULL`.

## ⚙️ How it works
1. Check if the list exists.
2. Save the next node.
3. Delete the current node's content using `del` and free the node.
4. Move to the next node and repeat.
5. Set `*lst` to `NULL`.

## 📊 Drawing

**Before:**

HEAD | v +---------+------+ +---------+------+ +---------+------+ | Content | next | --> | Content | next | --> | Content | NULL | +---------+------+ +---------+------+ +---------+------+


**After `ft_lstclear(&head, del)`:**

HEAD | v NULL

All nodes and their contents have been freed.


## 🧠 Remember
- `del` frees each node's content.
- `free()` frees each node.
- Save `next` before freeing the current node.
- `*lst = NULL` resets the head pointer.

**Key idea:** Save next → Delete current → Repeat → Set head to `NULL`.

# 8. `ft_lstiter`

## 📚 What to study first
- Pointers (`*`)
- Structures (`struct`)
- Linked lists
- Function pointers
- Loops (`while`)

## 🎯 Purpose
Applies a function to the content of every node in a linked list.

## ⚙️ How it works
1. Check if the list exists.
2. Apply `f` to the current node's content.
3. Move to the next node.
4. Repeat until the end of the list.

## 📊 Drawing

**Before:**

HEAD | v +---------+------+ +---------+------+ +---------+------+ | "hello" | next | --> | "world" | next | --> | "42" | NULL | +---------+------+ +---------+------+ +---------+------+


**After applying `f` (example: converting content to uppercase):**

HEAD | v +---------+------+ +---------+------+ +---------+------+ | "HELLO" | next | --> | "WORLD" | next | --> | "42" | NULL | +---------+------+ +---------+------+ +---------+------+


## 🧠 Remember
- `f(lst->content)` applies the function to the current node's content.
- `lst = lst->next` moves to the next node.
- The loop stops when `lst` becomes `NULL`.
- `ft_lstiter` does not create or delete nodes.

**Key idea:** Apply the function → Move to the next node → Repeat.
# 9. `ft_lstmap`

## 📚 What to study first
- Pointers (`*`)
- Function pointers
- Linked lists
- Dynamic memory allocation (`malloc`)
- Memory deallocation (`free`)

## 🎯 Purpose
Creates a new list by applying a function to each node's content, leaving the original list unchanged.

## ⚙️ How it works
1. Traverse the original list.
2. Apply `f` to the current node's content.
3. Create a new node with the transformed content.
4. Add the new node to the new list.
5. If allocation fails, use `del` to free the necessary content and nodes.
6. Return the new list.

## 📊 Drawing

**Original list:**

HEAD | v +-----+------+ +-----+------+ +-----+------+ | 1 | next | --> | 2 | next | --> | 3 | NULL | +-----+------+ +-----+------+ +-----+------+


**After applying `f` (example: multiplying each number by 2):**

NEW LIST | v +-----+------+ +-----+------+ +-----+------+ | 2 | next | --> | 4 | next | --> | 6 | NULL | +-----+------+ +-----+------+ +-----+------+


The original list remains unchanged.

## 🧠 Remember
- `f` transforms each node's content.
- `malloc()` allocates memory for new nodes.
- `del` frees content when necessary, especially if an allocation fails.
- The new list is separate from the original list.
- Returns the head of the new list, or `NULL` if allocation fails.

**Key idea:** Transform → Create → Connect → Return.


**Key idea:** Connect → Update the head.
