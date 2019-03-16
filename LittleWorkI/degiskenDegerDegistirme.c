#include <stdio.h>
int main(){

int x=8;
int y=3;

printf("Ilk degerler\nx : %d\ny : %d\n",x,y);

x = x+y;  // x = 11
y = x-y;  // y = 8
x = x-y;  // x = 3

printf("Son degerler\nx : %d\ny : %d",x,y);

return 0;
}

