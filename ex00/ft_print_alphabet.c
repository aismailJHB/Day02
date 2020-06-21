#include <stdio.h>

void ft_print_alphabet(char ch) {

	ch = 'a';

	while(ch <= 'z'){

		printf("%c", ch);	
	
		ch++;

	}

}

int main()
{

	char ch;

	ft_print_alphabet(ch);

	return 0;	
}
