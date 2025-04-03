#include<unistd.h>
unsigned int ft_strlcpy( char *dest , char *src ,unsigned size){
	int i = 0;
	while(src[i] != '\0' && i < size - 1){
		dest[i] = src[i];
		i++;
	}
	
		dest[i] = '\0';
		i = 0;
	while( src[i] != '\0'){
		i++;
	}
	return i;
	

}
#include <string.h>
#include <stdio.h>
int main(){
	char src[] ="abcd";
	char dest[12]="";
	printf(" %d %s",ft_strlcpy(src,dest));
}
