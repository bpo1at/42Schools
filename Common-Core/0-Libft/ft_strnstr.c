#include "libft.h"

char *ft_strnstr(const char *hs, const char *nd, int len)
{
    int i, j;

    if (nd[0] == '\0')
        return (char *)hs;

    i = 0;
    while (hs[i] != '\0' && i < len) {
        j = 0;

        while (hs[i + j] != '\0' && nd[j] != '\0' && hs[i + j] == nd[j] && (i + j) < len) 
        {
            j++;
        }

        if (nd[j] == '\0') {
            return (char *)&hs[i];
        }

        i++;
    }

    return NULL;  
}
