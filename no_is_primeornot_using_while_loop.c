#include<stdio.h>
int main()
{
    int num, prime=1;
    printf("enter the number");
    scanf("%d",&num);

    if(num<=1)
    {
        printf("it's not prime");
    }
    else
    {
        int i=2;
        while (i<num)
        {
            if(num % i ==0){
                prime =0;
                break;
            }
            i++;
        }
        if ( prime){
            printf("its prime");
        }
        else{
            printf("its not prime");
        }

    }
    return 0;
}
