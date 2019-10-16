#include "stdio.h" 
#include "stdlib.h" 
#include "locale.h" 
#include "string.h" 

#define N 10 
#define MAX 100 

int find(char*, char**); 
void null(char*); 

int find(char* tmp, char** abc) 
{ 
	int i = 0; 
	int j = 0; 
	while((abc[i] != 0) && (j < N)) { 
			while(abc[i][j] == tmp[j]) { 
				j++; 
				if(abc[j] == 0) 
				return i; 
			} 
			j = 0; 
			i++; 
		} 
	return -1; 
} 
void null(char* tmp) { 
	int i; 
	for(i = 0; i < MAX; i++) 
	tmp[i] = 0; 
	} 
int main() { 
	char a = 0; 
	char* abc1[N] = {0}; 
	char* abc2[N] = {0}; 
	int i1 = 0; 
	abc1[0] = calloc(MAX, sizeof(char)); 
	int j = 0; 
	int x=-1; 
	printf("vvedite element 1 mnozestva\n"); 
	while('\n' != (a = getchar())) 
		{ 
		if((a == ' ')) 
			{ 
			i1++; 
			abc1[i1] = calloc(MAX, sizeof(char)); 
			j = 0; 
			} 
		else 
			{ 
			abc1[i1][j] = a; 
			j++; 
			} 

		} 
	int i2 = 0; 
	abc2[0] = calloc(MAX, sizeof(char)); 
	j = 0; 
	printf("vvedite 2 element mnozestva\n"); 
	while('\n' != (a = getchar())) 
		{ 
		if((a == ' ')) 
			{ 
			i2++; 
			abc2[i2] = calloc(MAX, sizeof(char)); 
			j = 0; 
			} 
		else 
			{ 
			abc2[i2][j] = a; 
			j++; 
			} 
		} 
	while(1){ 
		printf("MENU:\n0 - ukazite elemnt dlya prilenia\n1 - ukazite elemnt dlya udalenia\n2 - vivedite vse elementi\n"); 
		scanf("%d", &x); 
		getchar();
		if (x==0){ 
			printf("Enter new elements of 1 array\n"); 
			j = 0; 
			i1++; 
			abc1[i1] = calloc(MAX, sizeof(char)); 
			while('\n' != (a = getchar())) 
				{ 
				if(a == ' ') 
					{ 
					i1++; 
					abc1[i1] = calloc(MAX, sizeof(char)); 
					j = 0; 
					} 
			else 
				{ 
				abc1[i1][j] = a; 
				j++; 
				} 
		} 
	printf("vvedite nov element"); 
	j = 0; 
	i2++; 
	abc2[i2] = calloc(MAX, sizeof(char)); 
	while('\n' != (a = getchar())) 
		{ 
		if((a == '\n') || (a == ' ')) { 
			i2++; 
			abc2[i2] = calloc(MAX, sizeof(char)); 
			j = 0; 
			} 
		else { 
			abc2[i2][j] = a; 
			j++; 
			} 
		} 
	} 
	else if (x==1) { 
		printf("vvedite element dlya udalenia\n"); 
		int i11 = 0; 
		j = 0; 
		char* tmp = calloc(MAX, sizeof(char)); 
		null(tmp); 
		while(a = getchar()) { 
			if((a == ' ') || (a == '\n')) { 
				i11 = find(tmp, abc1); 
				if(i11 == -1) 
					printf("%s element ne naiden\n", tmp); 
				else { 
					free(abc1[i11]); 
					abc1[i11] = abc1[i1]; 
					abc1[i1] = 0; 
					i1--; 
					null(tmp); 
					j = 0; 
				} 
				if(a == '\n') 
				break; 
			} 
			else { 
				tmp[j] = a; 
				j++; 
			} 
		} 
		printf("vvedite element dlya udalenia\n"); 
		int i22 = 0; 
		j = 0; 
		tmp = calloc(MAX, sizeof(char)); 
		null(tmp); 
		while(a = getchar()) { 
			if((a == ' ') || (a == '\n')) { 
				i22 = find(tmp, abc2); 
				if(i22 == -1) 
				printf("%s element ne naiden\n", tmp); 
				else { 
					free(abc2[i22]); 
					abc2[i22] = abc2[i2]; 
					abc2[i2] = 0; 
					i2--; 
					null(tmp); 
					j = 0; 
				} 
				if(a == '\n') 
				break; 
			} 
			else { 
				tmp[j] = a; 
				j++; 
			} 
		} 
	} 
	else if(x==2){ 
		int k = 0; 
		j = 0; 
		for(j = 0; j <= i1; j++) { 
			printf("%s ", abc1[j]); 
		} 
		printf("\n"); 
		for(j = 0; j <= i2; j++) { 
			printf("%s ", abc2[j]); 
		} 
	printf("\n"); 
	} 
}}
