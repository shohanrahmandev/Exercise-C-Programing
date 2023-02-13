#include <stdio.h>
#include <math.h>

int main()
{
    int a[9]={10,20,50,40,50,10,2,3,6};
    int i ;
    for(i=0;i<9;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=9;i>0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}
