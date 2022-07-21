#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int	*ft_map(int *tab, int length, int (*f)(int));

int	fc(int a)
{
	if (a > 10)
	{
		return (1);
	}
	return (0);
}

int	main()
{
	int *a;
	int	i;
	

	i = 0;
int	tab[] = {3, 0, -25};
	a = ft_map(tab, 3, &fc);
	while (i < 3)
	{
		printf("%d\n", a[i++]);
	}
	return (0);
}
