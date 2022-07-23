//Asad Ishteaque 222002522E
#include <stdio.h>

int main()
{
    int a, n;

    printf("Print odd numbers till: ");
    scanf("%d", &n);

    printf("All odd numbers from 1 to %d are: \n", n);

    for(a=1; a<=n; a++)
    {
        if(a%2!=0)
        {
            printf("%d\n", a);
        }
    }

    return 0;
}
