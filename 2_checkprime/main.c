#include <stdio.h>
int isprime(int n);
int checkprime(int n);


int main()
{
    int n; 
    printf("enter number");
    scanf("%d",&n);
    //checkprime(n);
    isprime(n);
    return 0;
}

int checkprime(int n)
{
    int count =0 ;
    if(n<= 1)
    {
        printf("not prime\n");
    }
    for(int i=2; i<=n/2; i++)
    {
        if(n % i ==0)
        {
              count++;
        }
    }
    if(count==0)
    {
        printf("%d is prime",n);
    }
    else{
    printf("%d is not prime",n);
    }
}

int isprime(int n)
{
    int temp=0;
    if(n<= 1)
    {
        printf("not prime\n");
    }
    for(int i=2; i*i<=n; i++)
    {
        if(n % i == 0){
           temp++ ;
        }
    }
    if(temp!=0){
        printf("%d is not prime",n);
    }
    else{
        printf("%d is prime",n);
    }
    
}