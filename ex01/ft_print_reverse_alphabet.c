#include <stdio.h>


void ft_print_reverse_alphabet(char ch) {

	ch = 'z';

	while(ch >= 'a'){

		printf("%c", ch);	
	
		ch--;

	}

}

int main()
{

	char ch;

	ft_print_reverse_alphabet(ch);

	return 0;	
}
