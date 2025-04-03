#include <unistd.h>

int	ft_str_is_alpha(char *str){

	int i = 0;
	while(str[i] != '\0'){
		if( str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'){
		       	i++;

		}
		
		else 
			return 0;
	}
	return 1;
	
}

#include <stdio.h>

int main(){
	
	printf("result %d\n",ft_str_is_alpha("abcd")); 
	printf("result %d",ft_str_is_alpha("abcWd1"));
	printf("result %d",ft_str_is_alpha(""));
	  }
