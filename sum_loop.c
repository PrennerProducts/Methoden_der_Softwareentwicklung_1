#include <stdio.h>
#include <stdlib.h>

int main(){
	int my_sum = 0;
	int x = 2;

	while (x <1000){
		my_sum += x;
		x += 8;
		//printf("x ist derzeit: %d\n",x);
	}
	printf("Die Summe ist: %d",my_sum);
	return 0;
}