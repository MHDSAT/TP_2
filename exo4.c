#include <stdio.h>

int left(int n){
	if(n<10){
		printf("%d\n",n);
		return 0;
	}
	int r=0,m=1;
	while(n>10){
		r = (n%10)*m +r;
		n = n/10;
		m = m*10;
	}
	printf("%d\n",n);
	return r;
}

int main(){
	int n=987654;
	while(n>0)
		n=left(n);
	return 0;
}