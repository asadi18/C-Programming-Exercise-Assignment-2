//Asad Ishteaque 222002522E

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value: ");
    scanf("%d", &b);

    printf("Natural numbers from 1 to %d : \n", b);


    for(a=1; a<=b; a++)
    {
        printf("%d\n", a);
    }

    return 0;
}
