#include <unistd.h>
void ft_putchar(char c){
	write( 1, &c, 1);

}
void ft_print_comb2(void)
{
	int s1 = 0;

	int s2 ;

            while( s1 <= 98){
	    
	           s2 = s1 + 1;
		   while( s2 <= 99){
		       ft_putchar( s1/10 + '0');
		       ft_putchar( s1%10 + '0');
		       ft_putchar(' ');
		       ft_putchar( s2/10 + '0');
		       ft_putchar( s2%10 + '0');

		   if (s1 != 98 ){
			   ft_putchar(',');
		            ft_putchar(' ');}
		   s2++;
		   }
	    s1++;
	    }



}
