#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static  int set_size_of_string(int n)
{
    int counter;
    counter = 0;
    if (n < 0)
    {
        n = n * -1;
        counter = 1;
    }
    else if(n == 0)
      counter++;
    while (n > 0)
    {
        n = n / 10;
        counter++;
    }
    return counter;
}
static  int  set_string(int n, char *str)
{
    char res;
    long num;
    num = n;
    int index = 0;
    if (num < 0)
        num = num * -1;
    while (num > 0)
    {
        res = (num % 10) + 48;
        *str = res;
        str++;
        index++;
        num = num / 10;
    }
    index--;
    return index;
}
char *ft_itoa(int n)
{
    int len = set_size_of_string(n);
    char str[12];
    char *origin;
    int pos;
    int i = 0;
    
    origin = malloc((len + 1) * sizeof(char));
    if(!origin)
        return NULL;
    pos = set_string(n, str);
    //set position of string !
    if(n < 0)
    {
        origin[i] = '-';
        i++;
    }
    if(n == 0)
    {
      origin[i] = '0';
      i++;
    }
    else
    {
      while (pos >= 0)
      {
        origin[i] = str[pos];
        pos--;
        i++;
      }
    }
    origin[i] = '\0';
    return origin;
}