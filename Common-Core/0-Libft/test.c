//ft_atoi
#include <stdio.h>
int main () {
	char arr[4] = "-42";
	printf("%d",ft_atoi (arr));
}
//ft_bzero

#include <stdio.h>

int main(){
	int arr[8]={1,34,5,67,7,8,9,1};
	size_t len = 5*sizeof(int);
	ft_bzero(arr, len);
	int i = 0;
	while(i<8)
	{
		printf("%d ",arr[i]);
		i++;
	}
	printf("\n");
}

//ft_calloc

#include <stdio.h>
int main(){
	int *ptr;
	ptr=ft_calloc(1, sizeof(int));
	printf("%d\n", *ptr);
	free(ptr);
	return 0;
}

// is 1 or 0

#include <stdio.h>
int main(){
	printf("%d %d %d %d %d",ft_isalnum('A'),ft_isalpha('A'),ft_isdigit('A'),ft_isprint('A'),ft_isascii(538));
}

//ft_itoa

#include <stdio.h>
int main(){
	printf("%s",ft_itoa(42));
}

//ft_memchr
#include <stdio.h>
int main(){
	char arr[7] = "Merhaba";
	int c = 'a';
	size_t n = sizeof(arr);
	printf("%c",*((char *)ft_memchr(arr, c, n)));
}

//ft_memcmp
#include <stdio.h>
int main(){
	char str1[] = "42A";
    char str2[] = "42B";

    printf("Result: %d\n", ft_memcmp(str1, str2, 5));
    return 0;
}

//ft_memcpy
#include<stdio.h>
int main(){
	char src[] = "Hello, World!";
	char dest[14];
	dest[13] = '\0';
	printf("%s",(char *)ft_memcpy(dest, src, 13));
}

//ft_memmove
#include <stdio.h>
int main(){
	char str[9] = "Merhaba"; // char str[7];
	printf("%s",(char*)ft_memmove(str+2,str,sizeof(str)));
}

//ft_memset
#include  <stdio.h>

int main(){
	int arr[5] = {0, 1, 2, 3, 4};
	unsigned char *ptr = (unsigned char *)&arr[1];
	ft_memset(ptr,42,1);
	printf("%d\n",arr[1]);
	unsigned char *ptr1 = (unsigned char *)&arr[2];
	ft_memset(ptr1,42,1);
	ft_memset(ptr1+1,1,1);
	printf("%d\n",arr[2]);
}

//fd_putchar_fd.c
int main(){
	ft_putchar_fd('A', 1);
    return (0);
}
//ft_putendl_fd
int main(){
	char str[14] = "Hello, World!";
	ft_putendl_fd(str, 1);
}
//ft_puntbr_fd

int main(){
	ft_putnbr_fd(-42, 1);
    return (0);
}

//ft_putstr_fd

int main(){
	char str[] = "Hello, World!";
    ft_putstr_fd(str, 1);
    return 0;
}

//ft_split

#include <stdio.h>
int main(){
	char *str = "Hello,World!";
    char **words = ft_split(str, ',');
	int i = 0;
	while(words[i] != NULL)
	{
		printf("%s\n", words[i]);
		i++;
	}
}

//ft_strchr

#include <stdio.h>
int main(){
	char str[] = "Hello, World!";
	printf("%c",*((char *)ft_strchr(str,'e')));
}

//ft_strdup

#include <stdio.h>
int main(){
    char str[7] = "Merhaba";
	str[7] = '\0';
	printf("%s", ft_strdup(str));
}

//ft_striteri 

void f(unsigned int index, char *c){
	if(index == 0)
    *c = *c - 1;
	else 
	*c = *c + 1;
}

#include <stdio.h>
int main(){
	char str[] = "bac";
	ft_striteri(str, f);
	printf("%s", str); // Outputs: "Ifmmp, Xpsme!"
	return 0;
}

//ft_strjoin

#include <stdio.h>
int main(){
	char *str1 = "Hello, ";
    char *str2 = "World!";

    printf("%s\n",ft_strjoin(str1, str2));
    return 0;
}

//ft_strmapi

char f(unsigned int n,char s)
{	
	int av = s;
	if(n >= 1 && (av >=  'a' && av <= 'z'))
	return (ft_toupper(s));
	else
	return (ft_tolower(s));
}

#include <stdio.h>
int main(){
	char *str = ft_strmapi("Hello, World!", f);
	printf("%s",str);
}
