# Libft

## Libc functions
&nbsp;

This project is a re-code of a set of the libc functions, listed below, as defined in their man. All functions present the same prototype and behaviors as the originals. All functions’ names are prefixed by “ft_”.

```
memset							bzero
memcpy							memccpy
memmove							memchr
memcmp							strlen
strlcpy							strlcat
strchr							strrchr
strnstr							strncmp
atoi							isalpha
isdigit							isalnum
isascii							isprint
toupper							tolower
calloc							strdup
abs								isspace
```
&nbsp;

## Additional functions

&nbsp;

In this project we've also a set of functions that are either not included in the libc, or included in a different form.

----

#### **ft_substr** 

```C
char *ft_substr(char const *s, unsigned int start, size_t len);
```

*Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.*

----

#### **ft_strjoin** 

```C
char *ft_strjoin(char const *s1, char const *s2);
```

*Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.*

----

#### **ft_strtrim** 

```C
char *ft_strtrim(char const *s1, char const *set);
```

*Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.*

----

#### **ft_split** 

```C
char **ft_split(char const *s, char c);
```

*Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter.  The array must be
ended by a NULL pointer.*

----

#### **ft_itoa** 

```C
char *ft_itoa(int n);
```

*Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.*

----

#### **ft_strmapi**

```C
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

*Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.*

----

#### **ft_putchar_fd**

```C
void ft_putchar_fd(char c, int fd);
```

*Outputs the character ’c’ to the given file descriptor.*

----

#### **ft_putstr_fd**

```C
void ft_putstr_fd(char *s, int fd);
```

*Outputs the string ’s’ to the given file descriptor.*

----

#### **ft_putendl_fd**

```C
void ft_putendl_fd(char *s, int fd);
```

*Outputs the string ’s’ to the given file descriptor, followed by a newline.*

----

#### **ft_putnbr_fd**

```C
void ft_putnbr_fd(int n, int fd);
```

*Outputs the integer ’n’ to the given file descriptor.*

----

#### **ft_isnegative**

```C
int	ft_isnegative(int num);
```

*Outputs ’1’ if the given number is negative, otherwise '0'.*

----

#### **ft_max**

```C
int	ft_max(int a, int b);
```

*Outputs the max 'n' between two numbers.*

----

#### **ft_min**

```C
int	ft_min(int a, int b);
```

*Outputs the max 'n' between two numbers.*

----

#### **ft_memdel**

```C
int	ft_memdel(void **ptr);
```

*Free a pointer and outputs '1' if the operation has succeeded, otherwise '0'.*

----

#### **ft_strrev**

```C
void ft_strrev(char *str);
```

*Reverse all elements of an array.*


----

#### **get_next_line**

```C
int	get_next_line(int fd, char **line);
```

*Calling get_next_line in a loop will then allow you to read the text available on a file descriptor one line at a time until the EOF.*

&nbsp;

## Lists functions

&nbsp;

Finally, below there's a set of functions to manipulate lists.

----

#### **ft_lstnew** 

```C
t_list *ft_lstnew(void *content);
```

*Allocates (with malloc(3)) and returns a new element.  The variable ’content’ is initialized with the value of the parameter ’content’.  The variable ’next’ is initialized to NULL.*

----

#### **ft_lstadd_front** 

```C
void ft_lstadd_front(t_list **lst, t_list *new);
```

*Adds the element ’new’ at the beginning of the list.*

----

#### **ft_lstsize** 

```C
int ft_lstsize(t_list *lst);
```

*Counts the number of elements in a list.*

----

#### **ft_lstlast** 

```C
t_list *ft_lstlast(t_list *lst);
```

*Returns the last element of the list.*

----

#### **ft_lstadd_back** 

```C
void ft_lstadd_back(t_list **lst, t_list *new);
```

*Adds the element ’new’ at the end of the list.*

----

#### **ft_lstdelone**

```C
void ft_lstdelone(t_list *lst, void (*del)(void*));
```

*Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed.*

----

#### **ft_lstclear**

```C
void ft_lstclear(t_list **lst, void (*del)(void*));
```

*Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.*

----

#### **ft_lstiter**

```C
void ft_lstiter(t_list *lst, void (*f)(void *));
```

*Iterates the list ’lst’ and applies the function ’f’ to the content of each element.*

----

#### **ft_lstmap**

```C
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

*Iterates the list ’lst’ and applies the function ’f’ to the content of each element.  Creates a new list resulting of the successive applications of the function ’f’.  The ’del’ function is used to delete the content of an element if needed.*
