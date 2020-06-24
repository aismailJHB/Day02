/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:13:04 by aismail           #+#    #+#             */
/*   Updated: 2020/06/24 10:22:57 by aismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(ch){

	write(1, &ch, 1);
}

void ft_print_alphabet(char ch) {

	ch = 'a';

	while(ch <= 'z'){

		ft_putchar(ch);	
	
		ch++;

	}

}

int main()
{

	char ch;

	ft_print_alphabet(ch);

	return 0;	
}
