#include <stdio.h>
/*leap year logic 

year is divisible by 400
year is divisible by 4 and not divisible by 100
*/
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    if (n %400 ==0)
    {
        printf("%d is leap year",n);
    }
    else if(n %4 ==0 && n%100 !=0){
        printf("%d is leap year",n);
    }
    else{
        printf("%d is not leap year",n);
    }
    return 0;
}