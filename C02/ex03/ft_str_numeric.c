#include <unistd.h>
 
int	ft_str_is_numeric(char *str){

	int i = 0;
	while(str[i] != '\0'){
		if ( str[i] < '0' || str[i] > '9'){
	
			
			return 0;
		}
		 i++;
		 
	}
	return 1;
	
}

#include <stdio.h>

int main(){
	printf("resulte %d\n", ft_str_is_numeric("123"));
	printf("resulte %d", ft_str_is_numeric("123w"));
}
