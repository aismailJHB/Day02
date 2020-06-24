/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:14:31 by aismail           #+#    #+#             */
/*   Updated: 2020/06/24 10:17:54 by aismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char ch){

	write(1, &ch, 1);
}

void ft_print_reverse_alphabet(char ch) {

	ch = 'z';

	while(ch >= 'a'){

		ft_putchar(ch);	
	
		ch--;

	}

}

int main()
{

	char ch;

	ft_print_reverse_alphabet(ch);

	return 0;	
}
