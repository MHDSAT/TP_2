#include <stdio.h>

void estPrmier1(int n,int *etat){
	int i;
	if(n<=1)
		*etat = 0;
	else{
		i = 2; *etat = 1;
		while((i<=n/2) && (*etat==1)){
			if(n%i==0)
				*etat = 0;
			i++;
		}
	}
}

int estPrmier2(int n){
	int i;
	if(n<=1)
		return 0;
	else{
		i = 2;
		while(i<=n/2){
			if(n%i==0)
				return 0;
			i++;
		}
		return 1;
	}
}

int main(){
	int test;
	estPrmier1(1,&test);
	printf("%d\n",test);
	estPrmier1(2,&test);
	printf("%d\n",test);
	estPrmier1(7,&test);
	printf("%d\n",test);
	estPrmier1(8,&test);
	printf("%d\n",test);
	estPrmier1(11,&test);
	printf("%d\n",test);
	printf("--------\n");
	printf("%d\n",estPrmier2(1));
	printf("%d\n",estPrmier2(2));
	printf("%d\n",estPrmier2(7));
	printf("%d\n",estPrmier2(8));
	printf("%d\n",estPrmier2(11));
	return 0;
}