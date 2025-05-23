
int ft_strlcpy(char *dst, const char *src, int size)
{
    int i;
    int src_len;

    i = 0;
    src_len = 0;

    while (src[src_len] != '\0')
        src_len++;

    if (size == 0)
        return src_len;

    while (src[i] != '\0' && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return src_len;
}