#include<stdio.h>
struct Books{
    int book_id;
    char title[50];
    char author[50];
    char subject[100];
};
void printbook(struct Books *b2);
int main(){
   
    struct Books b1 = {101, "The warrer", "Vishal mahajan", "Fantacy"};
    printbook(&b1);
    return 0;
}
void printbook(struct Books *b2){
    printf("ID is=%d\n",b2->book_id);
    printf("Tital is=%s\n",b2->title);
    printf("Author is=%s\n",b2->author);
    printf("Subject is=%s\n",b2->subject);
    
}