#include <stdio.h>
void figure(int recc,int base){
	for(int i=0;i<recc;i++){
		for(int j=1;j<=base;j++){
			for(int k=0;k<j;k++)
				printf("*");
			printf("\n");
		}
	}
}
int main(){
	figure(3,4);
	return 0;
}