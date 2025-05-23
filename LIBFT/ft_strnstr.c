char *ft_strnstr(const char *haystack, const char *needle, int len)
{
    int i;
    int j;

    if (len == 0)
        return (char *)haystack;
    if (*needle == '\0')
        return (char *)haystack;
    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
        {
            if (needle[j + 1] == '\0')
                return (char *)(haystack + i);
            j++;
        }
        i++;
    }
    return 0;
}