#include<stdio.h>
#include<math.h>
int main()
{
int marks;
printf(" Enter the number: ");
scanf("%d",&marks);
if(marks>100){
    printf("Please Enter the valid marks");
}

else{
    switch(marks/10){
    case 10:
    case 9:
        printf("Your Grade is : A");
        break;
    case 8:
        printf("Your Grade is : B+ ");
        break;
    case 7:
        printf("Your Grade is : B- ");
        break;
    case 6:
        printf("Your Grade is : C+ ");
        break;
    case 5:
        printf("Your Grade is : C ");
        break;
    case 4:
        printf("Your Grade is : D ");
        break;
    default :
        printf("This is fail");
    }

}
return (0);
}
