#include<unistd.h>
char	*ft_strlowcase(char *str){
	int i;

	i=0;
	while(str[i] != '\0'){
		if( str[i] >= 65 && str[i] <= 90){
			str[i] = str[i] + 32;
		}
		i++;
	}
	return str;
}
#include<stdio.h>
int main(){
	char c[]="ABCDE";
	printf("%s",ft_strlowcase(c));
}
