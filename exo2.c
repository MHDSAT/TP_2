#include <stdio.h>
#include <stdbool.h>

void cinq(int p1,int p2,int *p3,int *p4,bool *p5){
	if(p1!=0 && p2!=0){
		*p5=true;
		*p3=p1 / p2;
		*p4=p2 / p1;
	}else
		*p5=false;
}

int main(){
	int v3,v4;
	bool test;

	cinq(0,1,&v3,&v4,&test);
	printf("%d\n",test);

	cinq(1,0,&v3,&v4,&test);
	printf("%d\n",test);

	cinq(0,0,&v3,&v4,&test);
	printf("%d\n",test);

	cinq(1,1,&v3,&v4,&test);
	printf("%d\n",test);

	return 0;
}