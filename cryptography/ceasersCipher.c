#include <stdio.h>
#include <conio.h>
void shift(char *kelime, int anahtar){
     char c = kelime[0];
     int i = 0;
     while(c!='\0'){
       if(c>=65&&c<=90){
            kelime[i]=(kelime[i]+anahtar);
                if(kelime[i]>90)
                    kelime[i]= (kelime[i]%90)+65;
       }
       if(c>=97&&c<=122){
            kelime[i]=(kelime[i]+anahtar);
                if(kelime[i]>122)
                    kelime[i]= (kelime[i]%122)+97;
       }
       i++;
       c=kelime[i];
     }
}
int main(){
    printf
    char kelime[100]="ali baba ve kirk haramiler";
    shift(kelime,2);
    printf("nsifreli :%s",kelime);
    shift(kelime,-2);
    printf("nacilmis :%s",kelime);
    getch();
}