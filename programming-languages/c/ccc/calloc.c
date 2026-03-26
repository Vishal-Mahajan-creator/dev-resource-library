#include<stdio.h>
#include<stdlib.h>

int main(){
int *ptr;
int i;
ptr = (int *)calloc(5, sizeof(int));
    if(ptr==NULL)
    {
        printf("Memmory is not allocate by calloc.\n");
        return 1;
    }

    printf("Vallue after calloc : -");
    for (i = 0; i < 5; i++)
    {
        printf(" %d ",ptr[i]);
    }
    printf("\n");

    printf("updated value:-");
    for (i = 0; i < 5; i++)
    {
        ptr[i] = i + 10;
    }
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", ptr[i]);
    }
    free(ptr);
    return 0;
    }