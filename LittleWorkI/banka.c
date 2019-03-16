#include <stdio.h>
int bakiye = 100,secim=0,cikis=0;
int main(){
	printf("Bankamiza hosgeldiniz.Lutfen secim yapiniz");
	while(!cikis){
		printf("\n--------------------------------------");
		printf("\n\n\tBakiyeniz : %d TL\n",bakiye);
		printf("\n\t1. Para ekle\n\t2. Para Cek\n\t9. Cikis yap\n\nSeciminiz : ");
		scanf("%d",&secim);
		if(secim == 1 || secim == 2 || secim == 9){
			switch(secim){
			case 1:
				printf("Ne kadar para eklemek istersiniz : ");
				paraEkle();
				break;
			case 2:
				printf("Ne kadar para cekmek istersiniz : ");
				paraCek();
				break;
			case 9:
				cikis =1;
				printf("Bizi sectiginiz icin tesekkurler");
				break;
			}
		}
		else{
			printf("Hatali secim yaptiniz. Tekrar seciniz :\n");
		}	
	}
}
void paraEkle(){
	int _bakiye;
	scanf("%d",&_bakiye);
	bakiye += _bakiye;
}
void paraCek(){
	int _bakiye;
	scanf("%d",&_bakiye);
	if(bakiye<_bakiye)
		printf("\nEn fazla %d TL cekebilirsiniz.",bakiye);
	else
		bakiye -= _bakiye;
	
}
