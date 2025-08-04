#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int len1;
    int len2;
    char *result;

    if (!s1 || !s2)
        return 0;

    len1 = 0;
    len2 = 0;
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
    if (!result)
        return 0;

    i = 0;
    while (i < len1)
    {
        result[i] = s1[i];
        i++;
    }

    j = 0;
    while (j < len2)
    {
        result[i + j] = s2[j];
        j++;
    }

    result[i + j] = '\0';
    return result;
}