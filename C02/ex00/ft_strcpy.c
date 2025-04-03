#include <unistd.h>
char	*ft_strcpy( char *dest , char *src){
	int i = 0;
	while(src[i] != 0){
		dest[i] = src[i];
		i++;
	}
	
	return dest;
}
#include <string.h>
int main(){
	char arr[] = "hello";
	char dest[10]="world";
	

#include <stdio.h>
	
	printf("%s",ft_strcpy(dest,arr));
}
