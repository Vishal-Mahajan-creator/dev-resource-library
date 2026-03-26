#include <stdio.h>

int main() {

    FILE *fp = fopen("log.txt","a");

    fprintf(fp,"New record added\n");

    fclose(fp);

    printf("Data appended successfully");

    return 0;
}