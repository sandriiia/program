#include <stdio.h>
#include<conio.h>
 
int main() {
	int size=0, index=0, index1=0, i;
	printf("ukazite razmer mnozestva:\n");
    size=getchar();
    int a[size];
    for(i = 0; i <= size; i++)
    {
	  printf("vvedite element mnozestva %d\n", i);
      scanf("%d", &a[i]);
	  printf("\n");
    }
    
    while (1) {
        printf("\n ukazite elemnt dlya udalenia ");
        scanf("%d", &index);
        if (index > 0 && index < size) {
            break;
        }
    }
    for (i = index; i < size-1; i++) {
        a[i] = a[i+1];
    }
    for (i = 0; i < size-1; i++) {
        printf("(%d)=%d ", i, a[i]);
    }
   
    while (2) {
        printf("\n ukazite elemnt dlya prilenia ");
        scanf("%d", &index1);
        if (index1 > 0 && index1 < size) {
            break;
        }
    }
    a[size]=index1;
    for (i = 0; i < size-1; i++) {
        printf("(%d)=%d ", i, a[i]);
    }
    
     for(i = 0; i < size; i++)
    {
        printf("%d\n ", a[i]);
    }
    
    getchar();

}
 

