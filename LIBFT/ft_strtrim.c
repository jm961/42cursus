#include <stdlib.h>
#include <string.h>

static int is_in_set(char c, const char *set)
{
    while (*set)
    {
        if (*set == c)
            return 1;
        set++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start = 0;
    size_t end;
    char *trimmed;
    size_t i;

    if (!s1 || !set)
        return NULL;

    while (s1[start] && is_in_set(s1[start], set))
        start++;

    end = strlen(s1);
    while (end > start && is_in_set(s1[end - 1], set))
        end--;

    trimmed = (char *)malloc((end - start + 1) * sizeof(char));
    if (!trimmed)
        return NULL;

    i = 0;
    while (start < end)
        trimmed[i++] = s1[start++];

    trimmed[i] = '\0';
    return trimmed;
}