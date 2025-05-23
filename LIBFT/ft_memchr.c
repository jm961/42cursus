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