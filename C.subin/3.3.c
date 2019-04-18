#include <stdio.h>
int main()
{
    int n;
    n=10;

    if (n < 0){
        printf("The number is negative.\n");
    }
    else if(n > 0){
        printf("The number is possitive.\n");
    }
    else if(n==0){
        printf("The number is Zero!\n");

    }
    return 0;
}
