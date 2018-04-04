#include <stdlib.h>

char *ft_strdup(const char *s)
{
  char *str;
  int i;

  i = 0;
  while(s[i] != '\0')
    i++;

  if(!(str = (char *)malloc(sizeof(char) * (i + 1))))
    return (char *)str;
  str[i] = '\0';
  i--;
  while(i >= 0)
    {
      str[i] = s[i];
      i--;
    }
  return (char *)str;
}
