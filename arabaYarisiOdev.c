#include <stdio.h>
#include <time.h>

int main(){
	int ferrari=0;
	int dogan=0;
	int rnd,i;
	srand(time(NULL));
	
	while(dogan < 100 && ferrari < 100){
		rnd = rand() % 10 +1;
		printf("Gelen sayi :%d \n",rnd);
		if(rnd < 3);
		else if(rnd == 3 || rnd == 4) ferrari += 9;
		else if(rnd==5) ferrari -= 12;	
		else if(rnd>=6 && rnd<=8) ferrari += 1;
		else if(rnd>=9) ferrari -= 2;
		if(rnd<=5) dogan += 3;
		else if(rnd==6 || rnd==7) dogan -= 6;
		else if(rnd >=8) dogan += 1;
		
		
		if(dogan<ferrari){
			for(i=0;i<=dogan;i++){
				printf(" ");
			}
			printf("D");
			for(i=0;i<=ferrari-dogan;i++){
				printf(" ");
			}
			printf("F\n");
			
		}
		else if(ferrari<dogan){
			for(i=0;i<=ferrari;i++){
				printf(" ");
			}
			printf("F");
			for(i=0;i<=dogan-ferrari;i++){
				printf(" ");
			}
			printf("D\n");
		}
	}
		if(ferrari>=100){
			printf("FERRARI  KAZANDI !!!!!!");

		}
		if(dogan>=100){
			printf("DOGAN  KAZANDI !!!!!!");
		}
return 0;
}
