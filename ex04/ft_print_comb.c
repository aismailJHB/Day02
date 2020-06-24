/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:30:05 by aismail           #+#    #+#             */
/*   Updated: 2020/06/24 15:15:27 by aismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(int h, int t, int d){

char ch = h + '0', ct = t + '0', cd = d + '0', comma = ',';

	write(1, &ch, 1);
	write(1, &ct, 1);
	write(1, &cd, 1);
	write(1, &comma, 1);
}

int main(){

	int h;
	int t;
	int d;

	h = 0;

	while(h <=7){
		
	t = h+1;

		while(t <= 8){
		
		d = t+1;

			while(d <=9){
			
				if(h != t && t != d && d != h){
				
					ft_putchar(h, t, d);
					
				}

				d++;
			}

			t++;
		}

		h++;
	}
}
