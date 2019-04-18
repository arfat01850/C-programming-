#include <stdio.h>
int main()
{
    int num1, num2, value;
    char sign;
    printf("Please Enter the a numer: ");
    scanf("%d", &num1);
    printf("Please Enter the another number");
    scanf("%d", &num2);

    value = num1 + num2;
    sign = '+';
    printf("%d %c %d = %d\n", num1, num2, sign, value);

    value = num1 - num2;
    sign = '-';
    printf("%d %c %d = %d\n", num1, num2, sign, value);

    value = num1 * num2;
    sign = '*';
    printf("%d %c %d = %d\n", num1, num2, sign, value);

    value = num1 / num2;
    sign =  '/';
    printf("%d %c %d = %d\n", num1, mun2, sign, value);

    return 0;
}
