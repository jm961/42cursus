int ft_memcmp(const void *s1, const void *s2, int n)
{
    unsigned char *ptr1;
    unsigned char *ptr2;

    ptr1 = (unsigned char *)s1;
    ptr2 = (unsigned char *)s2;
    while (n > 0)
    {
        if (*ptr1 != *ptr2)
            return (*ptr1 - *ptr2);
        ptr1++;
        ptr2++;
        n--;
    }
    return 0;
}

// int main(void)
// {
//     char str1[] = "Hello";
//     char str2[] = "Hello";
//     int result;
//
//     result = ft_memcmp(str1, str2, 5);
//
//     if (result == 0)
//         printf("The strings are equal.\n");
//     else if (result < 0)
//         printf("str1 is less than str2.\n");
    // else
    //     printf("str1 is greater than str2.\n");
//     return 0;
// }
// }