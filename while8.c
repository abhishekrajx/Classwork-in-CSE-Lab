// Sum of first n even numbers
#include <stdio.h>
void main () {
	int i,sum,n;
	printf("Enter the number\n ");
	scanf("%d",&n);
	i = 1;
	sum = 0;
	while(i<=n){
	if(i%2!=0)
	sum = sum + i;
	i++;
	}
	printf("Sum of n numbers %d",sum);
}
