//Asad Ishteaque 222002522E

#include <stdio.h>

int main()
{
    int i, start, end;

    printf("Enter starting value: ");
    scanf("%d", &start);
    printf("Enter end value: ");
    scanf("%d", &end);

    printf("Natural numbers from %d to %d : \n", start, end);

    for(i=start; i<=end; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
