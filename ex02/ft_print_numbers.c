/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:23:57 by aismail           #+#    #+#             */
/*   Updated: 2020/06/24 10:25:15 by aismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(int i){

	write(1, &i, 1);
}

void ft_print_numbers(int i){
	i = 0;

	while(i <=9){
	
		ft_putchar(i);
		i++;
	}
}

int main(){

	int i;
	ft_print_numbers(i);
	return 0;
}
