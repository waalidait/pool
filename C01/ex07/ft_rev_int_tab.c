#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp;

	int l = size -1;

	int i = 0;
	while( i < size / 2){

		tmp = tab[i];
		tab[i] = tab[l];
		tab[l] = tmp;
		i++;
		l--;
	}
}

