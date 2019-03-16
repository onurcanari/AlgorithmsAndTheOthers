#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TRUE 1
#define FALSE 0
#define metinU 90


typedef enum yonler{
	KUZEY, // 0
	DOGU, // 1
	GUNEY, // 2
	BATI // 3
}yonler;

typedef struct Mekanlar{
	char metin[metinU];
	int komsular[4];
}Mekanlar;

Mekanlar mekanlar[10];
char komut[10];


int main(){
	setlocale(LC_ALL, "Turkish"); 
	int bulunanMekan=0;

	
	mekanlariAyarla();
    while(1){	
    
		harita(bulunanMekan);
    	printf("%s\n --> ",mekanlar[bulunanMekan]);
    	scanf("%s",komut);
    	system("cls");
    	strcpy(komut,strlwr(komut));
    	
    	
    	if(strcmp(komut,"kuzey")==0 || strcmp(komut,"k")==0){
    		if(mekanlar[bulunanMekan].komsular[KUZEY]==-1)
    			printf("Bu tarafta bakmaya deðer bir þey yok.\n");
    		else
    			bulunanMekan = mekanlar[bulunanMekan].komsular[KUZEY];
		}
		else if(strcmp(komut,"dogu")==0 || strcmp(komut,"d")==0){
    		if(mekanlar[bulunanMekan].komsular[DOGU]==-1)
    			printf("Bu tarafta bakmaya deðer bir þey yok.\n");
    		else
    			bulunanMekan = mekanlar[bulunanMekan].komsular[DOGU];
		}
		else if(strcmp(komut,"guney")==0 || strcmp(komut,"g")==0){
    		if(mekanlar[bulunanMekan].komsular[GUNEY]==-1)
    			printf("Bu tarafta bakmaya deðer bir þey yok.\n");
    		bulunanMekan = mekanlar[bulunanMekan].komsular[GUNEY];
		}
		else if(strcmp(komut,"bati")==0 || strcmp(komut,"b")==0){
    		if(mekanlar[bulunanMekan].komsular[BATI]==-1)
    			printf("Bu tarafta bakmaya deðer bir þey yok.\n");
    		bulunanMekan = mekanlar[bulunanMekan].komsular[BATI];
		}
		else if(strcmp(komut,"help")==0 || strcmp(komut,"yardim")==0){
    		if(mekanlar[bulunanMekan].komsular[BATI]==-1)
    			printf("Bu tarafta bakmaya deðer bir þey yok.\n");
		}
		else if(strcmp(komut,"cikis")==0){
			break;
		}
		else{
			printf("%s diye bir komut bilmiyorum.\n",komut); 
		}	
			
	}

return 0;
}

void harita(const int x){
	char yerTutucu[]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
	yerTutucu[x] = 'X';
	printf("\n       +---+\n");
	printf("       | %c |\n",yerTutucu[8]);
	printf("   +-----------+           KUZEY\n");
	printf("   | %c | %c | %c |             ^\n",yerTutucu[10],yerTutucu[7],yerTutucu[5]);
	printf("   +---------------+         |\n");
	printf("   | %c |---| %c | %c |   BATI<--->DOÐU\n",yerTutucu[9],yerTutucu[4],yerTutucu[6]);
	printf("   +---------------+         |\n");
	printf("   | %c | %c | %c |             v\n",yerTutucu[2],yerTutucu[1],yerTutucu[3]);
	printf("   +-----------+           GUNEY\n");
	printf("       | %c |\n",yerTutucu[0]);
	printf("       +---+\n\n\n");
	yerTutucu[x] = ' ';
}

void mekanlariAyarla(){
	strncpy(mekanlar[0].metin, "oda 0",80);
	mekanlar[0].komsular[KUZEY] = 1; mekanlar[0].komsular[DOGU] = -1; mekanlar[0].komsular[GUNEY] = -1; mekanlar[0].komsular[BATI] = -1;	
	strncpy(mekanlar[1].metin, "oda 1",80);
	mekanlar[1].komsular[KUZEY] = -1; mekanlar[1].komsular[DOGU] = 3; mekanlar[1].komsular[GUNEY] = 0; mekanlar[1].komsular[BATI] = 2;
	strncpy(mekanlar[2].metin, "oda 2",80);
	mekanlar[2].komsular[KUZEY] = 9; mekanlar[2].komsular[DOGU] = 1; mekanlar[2].komsular[GUNEY] = -1; mekanlar[2].komsular[BATI] = -1;	
	strncpy(mekanlar[3].metin, "oda 3",80);
	mekanlar[3].komsular[KUZEY] = 4; mekanlar[3].komsular[DOGU] = -1; mekanlar[3].komsular[GUNEY] = -1; mekanlar[3].komsular[BATI] = 1;	
	strncpy(mekanlar[4].metin, "oda 4",80);
	mekanlar[4].komsular[KUZEY] = 5; mekanlar[4].komsular[DOGU] = 6; mekanlar[4].komsular[GUNEY] = 3; mekanlar[4].komsular[BATI] = -1;	
	strncpy(mekanlar[5].metin, "oda 5",80);
	mekanlar[5].komsular[KUZEY] = -1; mekanlar[5].komsular[DOGU] = -1; mekanlar[5].komsular[GUNEY] = 4; mekanlar[5].komsular[BATI] = 7;	
	strncpy(mekanlar[6].metin, "oda 6",80);
	mekanlar[6].komsular[KUZEY] = -1; mekanlar[6].komsular[DOGU] = -1; mekanlar[6].komsular[GUNEY] = -1; mekanlar[6].komsular[BATI] = 4;	
	strncpy(mekanlar[7].metin, "oda 7",80);
	mekanlar[7].komsular[KUZEY] = 8; mekanlar[7].komsular[DOGU] = 5; mekanlar[7].komsular[GUNEY] = -1; mekanlar[7].komsular[BATI] = 10;	
	strncpy(mekanlar[8].metin, "oda 8",80);
	mekanlar[8].komsular[KUZEY] = -1; mekanlar[8].komsular[DOGU] = -1; mekanlar[8].komsular[GUNEY] = 7; mekanlar[8].komsular[BATI] = -1;	
	strncpy(mekanlar[9].metin, "oda 9",80);
	mekanlar[9].komsular[KUZEY] = 10; mekanlar[9].komsular[DOGU] = -1; mekanlar[9].komsular[GUNEY] = 2; mekanlar[9].komsular[BATI] = -1;		
	strncpy(mekanlar[10].metin, "oda 10",80);
	mekanlar[10].komsular[KUZEY] = -1; mekanlar[10].komsular[DOGU] = 7; mekanlar[10].komsular[GUNEY] = 9; mekanlar[10].komsular[BATI] = -1;
}

//Onurcan Ari
