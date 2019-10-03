#include <stdio.h>
#include<conio.h>
 
int main() {
	int size=0, index=0, index1=0, i;
	printf("ukazite razmer mnozestva:\n");
    scanf("%d",&size);
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
    size--;
    for (i = index; i < size; i++) {
        a[i] = a[i+1];
    }
    for (i = 0; i < size; i++) {
        printf("(%d)=%d ", i, a[i]);
    }
        printf("\n ukazite elemnt dlya prilenia ");
        scanf("%d", &index1);
        a[size++]=index1;
    for (i = 0; i < size++; i++) {
        printf("(%d)=%d ", i, a[i]);
    }
    
     for(i = 0; i < size; i++)
    {
        printf("%d\n ", a[i]);
    }
    
    getchar();

}
 

