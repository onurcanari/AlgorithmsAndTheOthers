#include <stdio.h>
int main(){
	int i,j,k;
	int a=2; // Kare matrisin büyüklüðü
	int matrisA[a][a];
	int matrisB[a][a];
	int matrisX[a][a];
	srand(time(NULL));
	
	// Matrislere ilk deðerler
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			matrisA[i][j]=rand() % 10;
			matrisB[i][j]=rand() % 10;
			matrisX[i][j] = 0;
		}
	}
	
	// Matrisleri çarpma islemi
	for(i=0;i<a;i++)
		for(j=0;j<a;j++)
			for(k=0;k<a;k++)
				matrisX[i][j] += matrisA[i][k] * matrisB[k][j];
			
	
	// Matrisleri görüntüleme	
	printf("A:\n[%d , %d] \n[%d , %d]\n",matrisA[0][0],matrisA[0][1],matrisA[1][0],matrisA[1][1]);
	printf("\nB:\n[%d , %d] \n[%d , %d]\n",matrisB[0][0],matrisB[0][1],matrisB[1][0],matrisB[1][1]);
	printf("\nC:\n[%d , %d] \n[%d , %d]\n",matrisX[0][0],matrisX[0][1],matrisX[1][0],matrisX[1][1]);

}


// x[0][0] = a[0][0] . b[0][0] + a[0][1] . b[1][0]
// x[0][1] = a[0][0] . b[0][1] + a[0][1] . b[1][1]
// x[1][0] = a[1][0] . b[0][0] + a[1][1] . b[1][0]
// x[1][1] = a[1][0] . b[0][1] + a[1][1] . b[1][1]



