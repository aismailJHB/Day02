/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:13:04 by aismail           #+#    #+#             */
/*   Updated: 2020/06/24 10:13:11 by aismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
