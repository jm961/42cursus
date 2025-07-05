# Enhanced Libft Library

This enhanced version of libft includes the original libft functions plus `ft_printf` and `get_next_line` functionality.

## Features

### Original Libft Functions

- String manipulation functions (`ft_strlen`, `ft_strchr`, `ft_strjoin`, etc.)
- Memory functions (`ft_memset`, `ft_memcpy`, `ft_memmove`, etc.)
- Character classification and conversion (`ft_isalpha`, `ft_toupper`, etc.)
- Linked list functions (`ft_lstnew`, `ft_lstadd_back`, etc.)
- File descriptor output functions (`ft_putchar_fd`, `ft_putstr_fd`, etc.)

### Added Functions

#### ft_printf

Complete printf implementation supporting:

- `%c` - Character
- `%s` - String
- `%d`/`%i` - Signed decimal integer
- `%u` - Unsigned decimal integer
- `%x`/`%X` - Hexadecimal (lowercase/uppercase)
- `%p` - Pointer address
- `%%` - Literal percent sign

#### get_next_line

Reads a file line by line:

- `char *get_next_line(int fd)` - Returns the next line from the file descriptor

## Compilation

### Building the Library

```bash
make
```

### Using in Your Projects

1. Copy `libft.a` and `libft.h` to your project directory
2. Include the header in your source files:
   ```c
   #include "libft.h"
   ```
3. Compile your project:
   ```bash
   cc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
   ```

## Example Usage

```c
#include "libft.h"
#include <fcntl.h>

int main(void)
{
    // Using ft_printf
    ft_printf("Hello, %s! Number: %d\n", "World", 42);

    // Using get_next_line
    int fd = open("file.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)) != NULL)
    {
        ft_printf("Line: %s", line);
        free(line);
    }
    close(fd);

    return (0);
}
```

## Configuration

### Buffer Size for get_next_line

The default buffer size is 1000. You can change it by defining `BUFFER_SIZE` during compilation:

```bash
cc -D BUFFER_SIZE=42 your_file.c -L. -lft -o your_program
```

## Files Structure

- `libft.h` - Main header file containing all function prototypes
- `libft.a` - Static library containing all compiled functions
- All `.c` files - Source implementations

## Notes

- All functions follow 42 coding standards
- Memory is properly managed - remember to free allocated strings from `get_next_line`
- The library is self-contained and doesn't depend on external libraries except standard system calls
