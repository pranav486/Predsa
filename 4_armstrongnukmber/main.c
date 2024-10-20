#include <stdio.h>

int digitno(int num);

int power(int base, int expo)
{
    int p =1 ;
    for(int i =0 ; i<expo ; i++){
    p *= base;
    }
    return p;
}
int armstrong(int num)
{
    int a = digitno(num);
    int sum=0,dig, temp = num;
    while(temp)
    {
        dig = temp%10;
        sum = sum + power(dig , a);// sum += ppwer(dig,a)
        temp = temp/10;
    }
    
    if(sum == num){
        printf("%d is Armstrong no\n ",num);
    }
    else{
         printf("%d is not Armstrong no\n ",num);
    }
    return 0;
}
int digitno(int num)
{
    int n=0;
    while(num)
    {
        num= num/10;
        n++;
    }
    return n;
}
int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    // int digits = digitno( num);
    // printf("digit = %d ",digits);
    armstrong(num);
    // printf("result = %d ", result);
    return 0;
}