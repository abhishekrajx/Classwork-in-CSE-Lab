#include <stdio.h>
#include <string.h>
void display (char a[]){
int n = strlen(a);
for(int i = n-2 ; i>=0; i--){
printf("%c",a[i]);
}
}
int main () {
	char c[50];
	printf("Enter String : ");
	fgets(c,sizeof(c),stdin);
	printf("Reverse String : ");
	display (c);
return 0;
}
