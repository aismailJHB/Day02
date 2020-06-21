#include <stdio.h>

void ft_print_numbers(int i){
	i = 0;

	while(i <=9){
	
		printf("%i", i);
		i++;
	}
}

int main(){

	int i;
	ft_print_numbers(i);
	return 0;
}
