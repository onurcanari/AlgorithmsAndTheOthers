#include <stdio.h>
int x=8;
int main(){
	printf("\n%d",x);
	int x=5;
	x=6;
	yazdir();
	printf("\n%d",x);
	{
		x=7;
		printf("\n%d",x);
	}
	x=9;
	printf("\n%d",x);

return 0;
}
void yazdir(){
	printf("\n%d",x);
	int x=88;
	printf("\n%d",x);
	x=11;
	printf("\n%d",x);
}	




