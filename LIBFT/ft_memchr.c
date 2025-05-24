void *ft_memchr(const void *s, int c, int n)
{
    unsigned char *ptr;
    unsigned char uc;

    ptr = (unsigned char *)s;
    uc = (unsigned char)c;
    while (n--)
    {
        if (*ptr == uc)
            return (ptr);
        ptr++;
    }
    return 0;
}

// int main (void)
// {
//     char str[] = "Hello, World!";
//     char *result;

//     result = ft_memchr(str, 'W', 13);
//     if (result)
//         printf("Found: %s\n", result);
//     else
//         printf("Not found\n");

//     return 0;
// }