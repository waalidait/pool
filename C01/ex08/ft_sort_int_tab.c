#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{

	int swab;

	int i;

	int r;

	int l = size - 1;

	if ( size <= 1){
		return;
	}
	i = 0;
	
	while( i < size - 1){
		
		r = 0;
		while ( r < l - i){

			if ( tab[r] > tab[r + 1])
			{
				swab = tab[r];

				tab[r] = tab[r + 1];

				tab[r + 1] = swab;

			}
		  r++;
		}
i++;
	}




	
}
