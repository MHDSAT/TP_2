#include <stdio.h>
#include <ctype.h>
#include <string.h>
void transfo_en_maj(char minus[],char maj[]){
	strcpy(maj,minus);
	for(int i=0;i<strlen(minus);i++)
		maj[i]=toupper(maj[i]);
}
int main(){
	char v1[10],v2[10];
	scanf("%s",v1);
	transfo_en_maj(v1,v2);
	printf("%s - %s\n",v1,v2 );
}