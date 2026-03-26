#include<stdio.h>
    int main(){
        char a[]="vishal";
        int b=1;
        float c = 1.0;
        double d=9925271;
        char e = 'a';
        float f = 92.84;
        char g = '%';
        
        //data type
        printf("character is=%s\n",a);
        printf("number is=%d\n",b);
        printf("float is=%f\n\n",c);

        //character for single character
        printf("For single character=%c\n", e);
        //For multipal character
        printf("For multipal character=%s\n\n",a);


        //memory size
        printf("memory size=%lu\n", sizeof(a));
        printf("memory size=%lu\n", sizeof(b));
        printf("memory size=%lu\n", sizeof(c));
        printf("memory size=%lu\n\n", sizeof(d));

        //Decimal perpection
        printf("Decimal perpection=%.1f%c\n", f,g);
        printf("Decimal perpection=%.2f%c\n", f,g);
        printf("Decimal perpection=%.3f%c\n", f,g);
        printf("Decimal perpection=%.4f%c\n", f,g);
        printf("Decimal perpection=%.5f%c\n\n", f,g);

        return 0;
    }
