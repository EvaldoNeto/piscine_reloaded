#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ptr;
	int i;

	i = min;
	if (min >= max)
		return ((int *)NULL);
	ptr = (int *)malloc(sizeof(int) * (unsigned int)(max - min) + sizeof(int));
	else
	{
		while (i < max && ptr != (int *)NULL)
		{
			*(ptr + (unsigned int)(i - min)) = i;
			i++;
		}
		return (ptr);
	}
}
