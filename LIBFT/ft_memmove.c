
void *ft_memmove(void *dst, const void *src, int len)
{
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;

    if (d == s || len == 0)
        return dst;

    if (d < s)
    {
        while (len > 0)
        {
            *d = *s;
            d++;
            s++;
            len--;
        }
    }
    else
    {
        d += len;
        s += len;
        while (len > 0)
        {
            d--;
            s--;
            *d = *s;
            len--;
        }
    }

    return dst;
}