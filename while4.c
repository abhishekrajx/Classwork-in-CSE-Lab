// Even Number between 1 and 100
#include <stdio.h>
void main (){
	int i;
	i = 1;
	printf("Even number between 1 and 100\n");
	while(i<=100){
	if(i%2==0)
	printf("%d\n",i);
	++i;
	}
}
