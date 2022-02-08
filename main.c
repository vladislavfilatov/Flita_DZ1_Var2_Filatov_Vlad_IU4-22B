#include <stdio.h>
#define N 20
int main() {
    int x = 0;
    int i = 0;
    int M[N];
    int bin[N];
    char c;
    while ((c = getchar()) != '\n') {
        if(c != ' '){
            x = x*10 + (c - '0');
        }
        if(c == ' '){
            M[i] = x;
            int a = 0;
            int b = 1;
            while(x){
                a = a+((x%2)*b);
                b = b * 10;
                x = x/2;
            }
            bin[i] = a;

            i = i + 1;
            x = 0;
        }
    }
    M[i] = x;
    int a = 0;
    int b = 1;
    while(x){
        a = a+((x%2)*b);
        b = b * 10;
        x = x/2;
    }
    bin[i] = a;

    for(int j=0; j<=(i); j++)
    {
        printf("%d ",M[j]);
        printf(" ");
     printf("\n");
    }
    for(int j=0; j<=(i); j++)
    {
        printf("%d",bin[j]);
        printf(" ");
    }
    return 0;
}

