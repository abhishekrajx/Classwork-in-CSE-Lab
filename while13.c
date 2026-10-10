//Swap the first and last digit of the number
#include <stdio.h>
void main () {
	int num,temp,ld,fd,swap_num,multiplier;
	num=467892;
	multiplier = 1;

	ld=num%10;
	temp=num;
	while(temp>=10){
	temp = temp/10;
	multiplier = multiplier*10;
	}
	fd = temp;

	swap_num = ld * multiplier;
	swap_num = swap_num + (num % multiplier);
	swap_num = swap_num - ld;
	swap_num = swap_num + fd;
	printf("Swapped Number  %d",swap_num);
}
