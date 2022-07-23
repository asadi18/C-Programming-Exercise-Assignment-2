#include <stdio.h>

int main()
{
    int x, y;

    printf("Print all even numbers till: ");
    scanf("%d", &y);

    printf("Even numbers from 1 to %d are: \n", y);


    for(x=1; x<=y; x++)
    {
        if(x%2 == 0)
        {
            printf("%d\n", x);
        }
    }

    return 0;
}
