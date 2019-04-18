#include <stdio.h>
int main()
{
    int number, reminder;
    number = 5;
    reminder = number % 2;
    if(reminder == 0){
        printf("The number is even \n");
    }
    else{
        printf("the number is odd \n");
    }
    return 0;
}
