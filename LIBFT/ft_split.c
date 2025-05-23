#include "libft.h"
#include <stdlib.h>

static size_t ft_count_words(char const *s, char c)
{
    size_t count;
    int in_word;

    count = 0;
    in_word = 0;
    while (*s)
    {
        if (*s == c)
            in_word = 0;
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        s++;
    }
    return (count);
}

static char *ft_word_dup(const char *str, int start, int finish)
{
    char *word;
    int i;

    i = 0;
    word = malloc((finish - start + 1) * sizeof(char));
    if (!word)
        return (NULL);
    while (start < finish)
        word[i++] = str[start++];
    word[i] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    char **result;
    int index;
    int word_count;
    int i;
    int j;

    if (!s)
        return (NULL);
    word_count = ft_count_words(s, c);
    result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result)
        return (NULL);
    i = 0;
    index = 0;
    while (s[i] && index < word_count)
    {
        while (s[i] == c)
            i++;
        j = i;
        while (s[i] && s[i] != c)
            i++;
        result[index++] = ft_word_dup(s, j, i);
    }
    result[index] = NULL;
    return (result);
}