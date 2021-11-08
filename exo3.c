#include <stdio.h>

int somme(int n){
	return n*(n+1)/2;
}

int main(){
	printf("%d\n",somme(5));
	return 0;
}