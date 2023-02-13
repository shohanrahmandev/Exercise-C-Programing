#include <stdio.h>
#include <math.h>

int main()
{
    int n,i;

    printf("Enter the number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d + ",(i*i));
    }

    return 0;
}
