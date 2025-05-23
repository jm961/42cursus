char *ft_strncmp(const char *s1, const char *s2, int n)
{
    int i;

    i = 0;
    while (i < n && s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return ((char *)s1 + i);
        i++;
    }
    if (i < n)
        return ((char *)s1 + i);
    return 0;
}