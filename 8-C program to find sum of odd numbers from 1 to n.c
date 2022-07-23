//Asad Ishteaque 222002522E

#include <stdio.h>

int main()
{
    int a, n, sum=0;

    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(a=1; a<=n; a+=2)
    {
        sum += a;
    }

    printf("Sum of odd numbers = %d", sum);

    return 0;
}
