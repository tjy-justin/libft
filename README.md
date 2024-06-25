# Libft

![](ascii.png)

String functions use `char`
Binary functions use `unsigned char`
Integers use `int` or `size_t`, depends on parameters

## Libc Functions

- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_strlen
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_strlcpy
- ft_strlcat
- ft_toupper
- ft_tolower
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_memchr
- ft_memcmp
- ft_strnstr
- ft_atoi
- ft_calloc
- ft_strdup

### Docs

- https://youtu.be/Fc9htmvVZ9U
- https://youtu.be/XISnO2YhnsY
- https://www.geeksforgeeks.org/size_t-data-type-c-language/
- https://www.geeksforgeeks.org/c-typecasting/
- https://www.learncpp.com/cpp-tutorial/void-pointers/
- https://cs50.stackexchange.com/questions/14615/memory-overlap-in-c
- https://opensource.apple.com/source/Libc/Libc-997.1.1/string/strlcat.c.auto.html
- https://opensource.apple.com/source/xnu/xnu-4570.1.46/osfmk/arm/strlcpy.c.auto.html
- https://opensource.apple.com/source/Libc/Libc-1158.30.7/string/FreeBSD/strnstr.c.auto.html
- https://stackoverflow.com/questions/1296843/what-is-the-difference-between-null-0-and-0
- https://medium.com/a-42-journey/how-to-create-your-own-malloc-library-b86fedd39b96

## Additional Functions

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

### Docs

- https://cplusplus.com/reference/cstring/strncpy/
- https://www.computerhope.com/jargon/f/file-descriptor.htm
- https://www.tutorialspoint.com/static-functions-in-c
- https://www.educative.io/answers/splitting-a-string-using-strtok-in-c
- https://users.cs.utah.edu/~germain/PPS/Topics/recursion.html

## Bonus Functions

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

### Docs

Node: A unit in a linked list containing data and a pointer to the next node.
Linked List: A series of nodes where each node points to the next.
Head: The first node in the linked list.
NULL: Indicates the end of the linked list.

![alt text](image.png)

- https://youtu.be/E4lb2gkyXr8
- https://youtu.be/0euvEdPwQnQ?t=1833
- https://youtu.be/R9PTBwOzceo&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=31

## Headers, Makefiles

- https://pulgamecanica.herokuapp.com/posts/makefiles
- https://github.com/Nuno-Jesus/Make-A-Make
- https://youtu.be/8KyZedtkEhk
- https://makefiletutorial.com/
- https://noahloomans.com/tutorials/makefile/

## Testers

- https://github.com/Tripouille/libftTester
- https://github.com/alelievr/libft-unit-test
- https://github.com/jtoty/Libftest

`libftTester`:

Clone into libft.

```
sudo apt install valgrind
make m, b, a, calloc
```

`libft-unit-test`:

Clone as sibling.

```
sudo apt install libbsd-dev libncurses-dev
make f
```

```
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(SRCB)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJSB)
.PHONY: so
```

`Libftest`:

Clone as sibling. Specify libft path in `my_config.sh`.

```
bash grademe.sh ft_calloc
```