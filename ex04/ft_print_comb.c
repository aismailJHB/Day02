#include <stdio.h>

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
				
					printf("%d", h);
					printf("%d", t);
					printf("%d", d);
					printf("%c", ',');

				}

				d++;
			}

			t++;
		}

		h++;
	}
}
