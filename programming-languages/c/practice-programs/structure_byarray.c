#include<stdio.h>
struct Books{
    int book_id;
    char title[50];
    char author[50];
    char subject[100];
};
int main(){
struct Books b1[2] = {
    {101, "The warrer", "Vishal mahajan", "Fantacy"},
    {102, "The end", "Vishal mahajan", "Horrer"}};

for(int i = 0; i < 2;i++){
    printf("ID is=%d\n",b1[i].book_id);
    printf("Tital is=%s\n",b1[i].title);
    printf("Author is=%s\n",b1[i].author);
    printf("Subject is=%s\n\n",b1[i].subject);
}

 return 0;
}
