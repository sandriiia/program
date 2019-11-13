#include<stdio.h> 
#include<string.h> 
#include <stdlib.h> 
int main(void) { 
	int versh,rebr,cnt,i,j,a; 
	char a1,b1; 
	FILE *f; 
	f=fopen("graph.gv","w"); 
	fputs("graph G {\n",f); 
	printf("vvedite versh:\n"); 
	scanf("%d", &versh); 
	int arr[versh][versh]; 
	printf("Vvedite:\n\t0:net rebra\n\t1: rebro na meste\n\n"); 
	for( j=0; j<versh; j++){ 
		a1='A'; 
		b1='A'; 
		a1=a1+j; 
		for(i=0; i<versh; i++){ 
			printf("%d vershina v %d vershina: ", j+1,i+1); 
			scanf("%d", &a); 
			if (arr[j][i]!=1){ 
				if (a==1){ 
					arr[j][i] =arr[i][j]= 1; 
					fprintf(f,"%c--%c;\n",a1,b1); 
				} 
			if (a==0){ 
				arr[j][i]=0; 
			}} 
			b1++; 
		} 
	} 
	for( j=0; j<versh; j++){ 
		a1='A'; 
		b1='A'; 
		a1=a1+j; 
		cnt=0; 
		for(i=0; i<versh; i++){ 
			if (arr[j][i]==0) 
			cnt++; 
			if (cnt==versh) { 
				fprintf(f,"%c\n",b1); 
			} 
			b1++; 
		} 
	} 
	printf("\n\tMatritsa smejnosti:\n"); 
	for( i=0; i<versh; i++){ 
		printf("\t"); 
		for( j=0; j<versh; j++){ 
			printf("%2d ", arr[j][i]); 
		} 
		printf("\n"); 
	} 
fputs("}",f); 
fclose(f); 
return 0; 
}
