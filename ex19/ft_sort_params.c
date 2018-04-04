int		ft_putchar(char c);

static void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

static int ft_strcmp(const char *s1, const char *s2)
{
  int i;

  i = 0;
  while(s1[i] == s2[i])
    {
      i++;
      if(s1[i] == '\0' && s2[i] == '\0')
	return 0;
    }
  return ((int)(unsigned char)s1[i] - (int)(unsigned char)s2[i]);
}

static void	ft_swapstr(char **str1, char **str2)
{
	char *temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 2;
	while (i < argc)
	{
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swapstr(&argv[i], &argv[j]);
			j++;
		}
		i++;
		j = i + 1;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
