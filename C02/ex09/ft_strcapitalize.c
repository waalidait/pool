#include<unistd.h>

char	*ft_strcapitalize(char *str){
	int i;

	i = 0;
	while(str[i] != '\0'){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += 32;
		}
		if((str[0] >= 'a' && str[0] <= 'z') ||(str[i - 1] >= 0 && str[i - 1] <= 47) ||
			(str[i - 1] >= 58 && str[i - 1] <= 64) ||(str[i - 1] >= 91 && str[i - 1] <= 96)||
				(str[i - 1] >= 123))
		{
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] -=32;
		}
		i++;
	}
	return str;
}
#include<stdio.h>
int main(){
	char c[] =" salut comment tu va ? 42mots ouarante-deux: cinount+un";
	printf("%s",ft_strcapitalize(c));
}
