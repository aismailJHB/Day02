/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:26:15 by aismail           #+#    #+#             */
/*   Updated: 2020/06/24 10:29:02 by aismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>

void ft_putchar(char ch){
	
	write(1, &ch, 1);
}

void ft_is_negative(int n){

	char ch;

	if(n < 0){
	
		ch = 'N';
		ft_putchar(ch);
	}
	else {
		ch = 'Y';
		ft_putchar(ch);
	}
}

int main()

{
	int n;

	n = rand()%100 -50;
	ft_is_negative(n);

	return 0;
}
