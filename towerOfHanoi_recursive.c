#include<stdio.h>

//recursive solution of tower of hanoi

void towerOfhanoi(int n, char from_rod, char to_rod, char aux_rod){
	if(n==1){
		printf("\nMove disk 1 from rod %c to rod %c",from_rod,to_rod);
		return;
	}
	towerOfhanoi(n-1,from_rod,aux_rod,to_rod);
	printf("\nMove disk %d from rod %c to rod %c",n,from_rod,to_rod);
	towerOfhanoi(n-1,aux_rod,to_rod,from_rod);
}

int main()
{
	int n=3;
	towerOfhanoi(n,'A','C','B');
	return 0;
}
