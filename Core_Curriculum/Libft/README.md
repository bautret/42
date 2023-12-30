# Libft

The aim of the project is to let you create your own library.

## test.c

Very own tests to have a better understanding on the outputs from each function.
The makefile is then wrong because it includes instructions to compile the tests.

To have a look at the tests, type the follozing command lines:
1. **Make test**
2. **./test**

## Functions to check and manipulate characters

- **ft_isalpha** : alphabetic character test.
- **ft_isdigit** : decimal-digit character test.
- **ft_isalnum** : alphanumeric character test.
- **ft_isascii** : test for ASCII character.
- **ft_isprint** : printing character test.
- **ft_toupper** : lower case to upper case letter conversion.
- **ft_tolower** : upper case to lower case letter conversion.

## Functions to manipulate strings

- **ft_strlen**  : find length of string.
- **ft_strlcpy** : copy a string from one location to another.
- **ft_strlcat** : concatenate strings (s2 into s1).
- **ft_strchr**  : locate character in string (first occurrence).
- **ft_strrchr** : locate character in string (last occurence).
- **ft_strncmp** : compare ASCII value of two strings (size-bounded).
- **ft_strnstr** : locate a substring in a string (size-bounded).
- **ft_substr**  : extract substring from string.
- **ft_strjoin** : concatenate two strings into a new string (with malloc).
- **ft_strtrim** : trim beginning and end of string with the specified characters.
- **ft_split**   : find length of 2D array.
- **ft_strmapi** : create new string from modifying string with specified function.
- **ft_striteri**: applies a function f to each character of a string s, providing the index of each character as an argument.

## Functions to manipulate memory

- **ft_calloc** : used to dynamically allocate the specified number of blocks of memory. It initializes each block with a default value '0'.
- **ft_memset** : fill a block of memory with a particular value.
- **ft_bzero**  : fill the first n bytes with zero bytes.
- **ft_memcpy** : copy a block of memory from one location to another.
- **ft_memmove**: copy a block of memory from a location to another (designed to handle overlapping memory regions).
- **ft_memchr** : search for a specific byte in a block of memory.
- **ft_memcmp** : compare two blocks of memory.
- **ft_strdup** : allocates memory for a new string, copies the contents of the source string into the new memory, and returns a pointer to the newly created string.

## Functions for numbers

- **ft_atoi** : convert ASCII string to integer.
- **ft_itoa** : convert integer to ASCII string.

## Functions to write to a file descriptor

- **ft_putchar_fd** : output a character to given file.
- **ft_putstr_fd**  : output string to given file.
- **ft_putendl_fd** : output string to given file with newline.
- **ft_putnbr_fd**  : output integer to given file.