#include<stdio.h>
int main()
{

    int n,row,col;
    printf("Enter N =");
    scanf("%d",&n);

    for(row=1; row<=n;row++);{
        for(col=1; col<=row);{
            printf("%c",col+64);
        }
        printf("\n");
    }

    for(row=n-1; row>=1;row--);{
        for(col=1; col<=row);{
            printf("%c",col+64);
        }
        printf("\n");
    }


}
