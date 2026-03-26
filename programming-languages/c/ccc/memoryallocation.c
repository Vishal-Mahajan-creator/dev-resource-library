#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int i;

    ptr = (int *)malloc(5 * sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory is not allocate by malloc.\n");
        return 1;
    }
    printf("Memory allocate by malloc.\n");
    for ( i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
        printf("%d", ptr[i]);
    }
    printf("\n");


    int *ptr1 = (int *)calloc(5 , sizeof(int));
    if (ptr1 == NULL)
    {
        printf("Memory is not allocate by calloc.\n");
        return 1;
    }
    printf("Memory allocate by calloc.\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d", ptr1[i]);
    }
    printf("\n");

    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    if (ptr==NULL)
    {
        printf("Memory not reallocated by.\n");
        return 1;
    }

    printf("Memory reallocated using realloc:\n");
    for (i = 5; i < 10;i++)
    {
        ptr[i] = i + 1;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
    free(ptr1);

    printf("Memory freed successfully.\n");

    return 0;
}