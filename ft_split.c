#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char *count_len(char *s, char c, int *j)
{
  int start = *j;
  int len = 0;
  while (s[*j] && s[*j] != c)
  {
	len++;
	(*j)++;
  }
  return (ft_substr((const char *)s, (unsigned int)start, len));
}
static int count_word(char *s, char check)
{
    int size = 0;
    int i = 0;

    while (s[i] != '\0')
    {
      while (s[i] == check)
        i++;
      if (s[i])
        size++;
      while (s[i] && s[i] != check)
        i++;
    }
    return size;
}

char **ft_free(char **p, int i)
{
	while (--i >= 0)
		free(p[i]);
	free(p);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
    int i = 0;
    int j = 0;

	if (!s)
		return (NULL);
    int nword = count_word((char *)s, c);
    char **ptr;
    ptr = (char **)malloc((nword + 1) * sizeof(char *));
    if (!ptr)
        return NULL;
    while (i < nword)
    {
    	while (s[j] == c)
				j++;
		ptr[i] = count_len((char *)s, c, &j);
		if (ptr[i] == NULL)
		return (ft_free(ptr, i));
		i++;
    }
	ptr[i] = NULL;
    return ptr;
}

int main() 
{
	char s[] = "    ayoub adouay nadi manadich    !! olah ta naidi ";
	char **ptr = ft_split(s, ' ');
	int i = 0;
	//printf("==> %p\n============\n", ptr);
	while (ptr && ptr[i])
	{
		printf("==> %s\n", ptr[i]);
		i++;
	}
	return 0;
}