#include <stdio.h> 
#include <stdlib.h> 

void ft_is_negative(int n){

	printf("%d\n", n);

	if(n < 0){
	
		putchar('N');

	}
	else {
		putchar('Y');
	}
}

int main()

{
	int n;

	n = rand()%100 -50;
	ft_is_negative(n);

	return 0;
}
