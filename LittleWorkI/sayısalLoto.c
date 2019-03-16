#include <stdio.h>
int sayilar[6];

int main(){
	int i,a;
	char kolonlar[20] = "ABCDEFGH";
	srand(time(NULL));
	printf("====================\n");
	for(a=0;a<8;a++){
		for(i=0;i<6;i++) 
			sayilar[i]= 1+rand() % 49;
		diziyiSirala();
		printf("%c ",kolonlar[a]);
		for(i=0;i<6;i++)
			printf("%d ",sayilar[i]);
		printf("\n");
	}
	printf("====================");
}
// diziyi siralama
diziyiSirala(){
	int j,k;
	for(j=0;j<6;j++){
		for(k=0;k<6;k++){
			if(sayilar[k]>sayilar[j]){
				int t = sayilar[j];
				sayilar[j] = sayilar[k];
				sayilar[k] = t;
			}
		}
	}
}
