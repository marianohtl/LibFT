# Libft - 42-SP
![Libft - 42-SP](https://raw.githubusercontent.com/marianohtl/LibFT/main/img/libft.png)
<br> 
Your very first own library

**Summary:**  
This project is about coding a C library.  
It will contain a lot of general purpose functions your programs will rely upon.

##### Mandatory part

<br>

| Program name      | Description |
| ----------------- | ----------- |
| Program name |a libft.a |
| Turn in files | Makefile, libft.h, ft_*.c |
| Makefile | NAME, all, clean, fclean, re |
| External functs. | Detailed below |
| Libft authorized | n/a |
| Description | *Write your own library:* <br> a collection of functions that will be a useful tool for your cursus. |

<br>
<br>

### III.1 Technical considerations

* Declaring global variables is forbidden.
* If you need helper functions to split a more complex function, define them as static functions. This way, their scope will be limited to the appropriate file.
* Place all your files at the root of your repository.
* Turning in unused files is forbidden.
* Every .c files must compile with the flags -Wall -Wextra -Werror.
* You must use the command ar to create your library. Using the libtool command is forbidden.
* Your libft.a has to be created at the root of your repository.

### III.2 Part 1 - Libc functions

To begin, you must redo a set of functions from the libc. Your functions will have the same prototypes and implement the same behaviors as the originals. They must comply with the way they are defined in their man. The only difference will be their names. They will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.

Some of the functions’ prototypes you have to redo use the ’restrict’ qualifier. This keyword is part of the c99 standard. It is therefore forbidden to include it in your own prototypes and to compile your code with the -std=c99 flag.

You must write your own function implementing the following original ones. They do not require any external functions:

* isalpha
* isdigit
* isalnum
* isascii
* isprint
* strlen
* memset
* bzero
* memcpy
* memmove
* strlcpy
* strlcat
* toupper
* tolower
* strchr
* strrchr
* strncmp
* memchr
* memcmp
* strnstr
* atoi

In order to implement the two following functions, you will use malloc():

* calloc
* strdup

### III. 3 Part 2 - Additional functions

In this second part, you must develop a set of functions that are either not in the libc, or that are part of it but in a different form.

Some of the following functions can be useful for writing the functions of Part 1.


| Function name | ft_substr |
| ----------- | ----------- |
| Prototype | char *ft_substr(char const *s, unsigned int start, size_t len);
| Turn in files | -
| Parameters | s: The string from which to create the substring. start: The start index of the substring in the string ’s’. <br>  len: The maximum length of the substring.
| Return value | The substring. NULL if the allocation fails. External functs. malloc
| External functs. | malloc
| Description | Allocates (with malloc(3)) and returns a substring from the string ’s’. <br>The substring begins at index ’start’ and is of maximum size ’len’.

<br>
<br>

| Function name | ft_strjoin |
| ----------- | ----------- |
| Prototype | char *ft_strjoin(char const *s1, char const *s2); |
| Turn in files | - |
| Parameters | s1: The prefix string. <br> s2: The suffix string. |
| Return value | The new string. <br> NULL if the allocation fails. External functs. malloc 
| External functs. | malloc
| Description | Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.

<br>
<br>

| Function name | ft_strtrim |
| ----------- | ----------- |
| Prototype | char *ft_strtrim(char const *s1, char const *set);
| Turn in files | -
| Parameters | s1: The string to be trimmed. <br> set: The reference set of characters to trim.
| Return value | The trimmed string. NULL if the allocation fails.
| External functs. | malloc
| Description | Allocates (with malloc(3)) and returns a copy of’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

<br>
<br>

| Function name | ft_split |
| ----------- | ----------- |
| Prototype | char **ft_split(char const *s, char c);
| Turn in files | -
| Parameters | s: The string to be split. <br> c: The delimiter character.
| Return value | The array of new strings resulting from the split. NULL if the allocation fails.
| External functs. | malloc, free
| Description | Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.


<br>
<br>

| Function name | ft_itoa |
| ----------- | ----------- |
| Prototype | char *ft_itoa(int n);|
| Turn in files | - |
| Parameters | n: the integer to convert. |
| Return value | The string representing the integer. NULL if the allocation fails. |
| External functs. | malloc | 
| Description | Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled. |

<br>
<br>

| Function name | ft_strmapi |
| ----------- | ----------- |
| Prototype | char *ft_strmapi(char const *s, char (*f)(unsignedint, char)); |
| Turn in files | -
| Parameters | s: The string on which to iterate. <br> f: The function to apply to each character.
| Return value | The string created from the successive applications of ’f’. Returns NULL if the allocation fails |
| External functs. | malloc |
| Description | Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’. |

<br>
<br>

| Function name | ft_striteri |
| ----------- | ----------- |
| Prototype | void ft_striteri(char *s, void (*f)(unsigned int, char*)); |
| Turn in files | - |
| Parameters | s: The string on which to iterate. <br> f: The function to apply to each character. |
| Return value | None |
| External functs. | None |
| Description | Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary. |

<br>
<br>

| Function name | ft_putchar_fd |
| ----------- | ----------- |
| Prototype | void ft_putchar_fd(char c, int fd); |
| Turn in files | - |
| Parameters | c: The character to output. <br> fd: The file descriptor on which to write. |
| Return value | None |
| External functs. | write |
| Description | Outputs the character ’c’ to the given file descriptor. |

<br>
<br>

| Function name | ft_putstr_fd |
| ----------- | ----------- |
| Prototype | void ft_putstr_fd(char *s, int fd); |
| Turn in files | - |
| Parameters | s: The string to output. <br> fd: The file descriptor on which to write. |
| Return value | None |
| External functs. | write |
| Description | Outputs the string ’s’ to the given file descriptor. |

<br>
<br>

| Function name | ft_putendl_fd |
| ----------- | ----------- |
| Prototype | void ft_putendl_fd(char *s, int fd); |
| Turn in files | - |
| Parameters | s: The string to output. <br> fd: The file descriptor on which to write. |
| Return value | None |
| External functs. | write |
| Description | Outputs the string ’s’ to the given file descriptor followed by a newline. |

<br>
<br>

| Function name | ft_putnbr_fd |
| ----------- | ----------- |
| Prototype | void ft_putnbr_fd(int n, int fd); |
| Turn in files | - |
| Parameters | n: The integer to output. <br >fd: The file descriptor on which to write. |
| Return value | None |
| External functs. | write |
| Description | Outputs the integer ’n’ to the given file descriptor. |


<br>
<br>


## Bonus part

If you completed the mandatory part, do not hesitate to go further by doing this extra one. It will bring bonus points if passed successfully. <br>
Functions to manipulate memory and strings is very useful. But you will soon discover that manipulating lists is even more useful. <br>
You have to use the following structure to represent a node of your list. Add its declaration to your libft.h file:

<br> 

```typedef struct s_list
{
  void *content;
  struct s_list *next;
} t_list;
```

<br> 

The members of the t_list struct are:
* content: The data contained in the node.
void /* allows to store any kind of data.

* next: The address of the next node, or NULL if the next node is the last one.

In your Makefile, add a make bonus rule to add the bonus functions to your libft.a.

<br> 

The bonus part will only be assessed if the mandatory part is PERFECT. Perfect means the mandatory part has been integrally done and works without malfunctioning. If you have not passed ALL the mandatory requirements, your bonus part will not be evaluated at all.

Implement the following functions in order to easily use your lists.

<br> 

| Function name | ft_lstnew |
| ----------- | ----------- |
| Prototype | t_list *ft_lstnew(void *content); |
| Turn in files | - |
| Parameters | content: The content to create the node with. |
| Return value | The new code |
| External functs. | malloc |
| Description | Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL. |


<br> 

| Function name | ft_lstadd_front |
| ----------- | ----------- |
| Prototype | void ft_lstadd_front(t_list **lst, t_list *new); |
| Turn in files | - |
| Parameters | lst: The address of a pointer to the first link of a list. <br> new: The address of a pointer to the node to be added to the list. |
| Return value | None |
| External functs. | None |
| Description | Adds the node ’new’ at the beginning of the list. |

<br> 

| Function name | ft_lstsize |
| ----------- | ----------- |
| Prototype | int ft_lstsize(t_list *lst); |
| Turn in files | - |
| Parameters | lst: The beginning of the list. |
| Return value | The length of the list |
| External functs. | None |
| Description | Counts the number of nodes in a list. |

<br> 

| Function name | ft_lstlast |
| ----------- | ----------- |
| Prototype | t_list *ft_lstlast(t_list *lst); |
| Turn in files | - |
| Parameters | lst: The beginning of the list. |
| Return value | Last node of the list |
| External functs. | None |
| Description | Returns the last node of the list. |

<br> 

| Function name | ft_lstadd_back |
| ----------- | ----------- |
| Prototype | void ft_lstadd_back(t_list **lst, t_list *new); |
| Turn in files | - |
| Parameters | lst: The address of a pointer to the first link of a list. <br> new: The address of a pointer to the node to be added to the list. |
| Return value | None |
| External functs. | None |
| Description | Adds the node ’new’ at the end of the list. |


<br> 

| Function name | ft_lstdelone |
| ----------- | ----------- |
| Prototype | void ft_lstdelone(t_list *lst, void (*del)(void*)); |
| Turn in files | - |
| Parameters | lst: The node to free. <br> del: The address of the function used to delete
the content. |
| Return value | None |
| External functs. | free |
| Description | Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed. |


<br> 

| Function name | ft_lstclear |
| ----------- | ----------- |
| Prototype | void ft_lstclear(t_list **lst, void (*del)(void *)); |
| Turn in files | - |
| Parameters | lst: The address of a pointer to a node. <br> del: The address of the function used to delete the content of the node. |
| Return value | None |
| External functs. | free |
| Description | Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL. |


<br> 

| Function name | ft_lstiter |
| ----------- | ----------- |
| Prototype | void ft_lstiter(t_list *lst, void (*f)(void *)); |
| Turn in files | - |
| Parameters | lst: The address of a pointer to a node. <br> f: The address of the function used to iterate on the list. |
| Return value | None |
| External functs. | None |
| Description | Iterates the list ’lst’ and applies the function ’f’ on the content of each node. |


<br> 

| Function name | ft_lstmap |
| ----------- | ----------- |
| Prototype | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)); |
| Turn in files | - |
| Parameters | lst: The address of a pointer to a node. <br> f: The address of the function used to iterate on the list. <br> del: The address of the function used to delete the content of a node if needed. |
| Return value | The new list. <br> NULL if the allocation fails. |
| External functs. | malloc, free |
| Description | Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed. |

<br>

### Submission and peer-evaluation

Turn in your assignment in your Git repository as usual. Only the work inside your repository will be evaluated during the defense. Don’t hesitate to double check the names of your files to ensure they are correct. 
<br> Place all your files at the root of your repository.
