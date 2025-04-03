#include <unistd.h>

int	ft_str_is_uppercase(char *str){
	int i;
	i = 0;
	while(str[i] != '\0'){
		if(str[i] < 'A'|| str[i] > 'Z'){ 
			return 0;
		}
		i++;
	}
	return 1;
}

#include <stdio.h>
int main(){
	printf("%d\n",ft_str_is_uppercase("ASEDF"));
	printf("%d\n",ft_str_is_uppercase("ASEDFax"));
	printf("%d\n",ft_str_is_uppercase("ASED1F"));
}
