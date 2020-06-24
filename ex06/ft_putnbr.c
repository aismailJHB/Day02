/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 15:20:56 by aismail           #+#    #+#             */
/*   Updated: 2020/06/24 15:20:58 by aismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
	
	write(1, &c, 1);
}

void ft_putnbr(int nb){

	if(nb<0){
		
		ft_putchar('-');
		nb = nb * -1;
	}
	
		if((nb/10)>0)
		ft_putnbr(nb/10);

		ft_putchar(nb % 10 + 48);

}

int main(){
	
	ft_putnbr(30);
	return(0);
}
