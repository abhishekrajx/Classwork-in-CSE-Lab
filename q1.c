#include <stdio.h>
int main () {
int n,i,j,sum1=0,sum2=0;
printf("Enter the order of matrix ");
scanf("%d",&n);

int mat[n][n];
printf("Enter elements of the matrix\n");
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	scanf(" %d ",&mat[i][j]);
	}

}
//primary diagonals
for(i=0;i<n;i++){
	for(j=0;j<n ;j++){
	if(i==j){
	sum1 = sum1 + mat[i][j];
	}
	}
}
printf("sum of primary diagonals : %d ",sum1);

//secondry diagonals
for(i=0;i<n;i++){
	for(j=0;j<n ;j++){
	if(i + j == n - 1){
	sum2 = sum2 + mat[i][j];
	}
	}
}
printf("sum of secondary diagonals : %d ",sum2);
return 0;
}
