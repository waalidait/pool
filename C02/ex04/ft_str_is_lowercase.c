#include <unistd.h>
int	ft_str_is_lowercase(char *str){
	int i =0;
	while(str[i] !='\0'){
		if (str[i] <'a' || str[i] > 'z'){
			return 0;
		}
		i++;
	}
	return 1;
}

#include <stdio.h>
int main(){
	printf("resulte %d\n",ft_str_is_lowercase("asd"));
	printf("resulte %d",ft_str_is_lowercase("asd1E"));
}
