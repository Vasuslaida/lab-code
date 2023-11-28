#include<stdio.h>
#include<math.h>
int main()
{
    int number, originalnumber,remainder,result=0,n=0;
    printf("enter an integer:");
    scanf("%d",&number);
    originalnumber = number;
    while (originalnumber !=0){
        originalnumber /=10;
        ++n;
    }
    originalnumber = number;
    while(originalnumber !=0){
        remainder = originalnumber % 10;
        result += pow(remainder,n);
        originalnumber /=10;
    }
    if ( result == number){
        printf("%d is an armstrong number.\n",number);
    }
    else
    {
        printf("%d is not an armstrong number.\n",number);
    }
    return 0;
}
