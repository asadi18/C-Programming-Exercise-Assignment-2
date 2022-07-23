#include <stdio.h>

int main()
{
    int x, num;

    printf("Enter number to print table: ");
    scanf("%d", &num);

    for(x=1; x<=10; x++)
    {
        printf("%d * %d = %d\n", num, x, (num*x));
    }

    return 0;
}

