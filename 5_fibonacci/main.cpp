#include<iostream>
using namespace std;

int fibo(int n){
    int f1=0, f2=1 ;
    
    if(n<1)
        return 0;

    cout<< f1 << " ";
    for(int i ; i< n-2 ; i++)
    {
        cout<< f2<< " ";
        int next = f1 + f2;
        f1= f2;
        f2 = next;
    } 

}

int fibolimit(int n){
    int f1=0, f2=1 ;
    
    if(n<1)
        return 0;

    cout<< f1 << " ";

    for(int i ; i< n-2 ; i++)
    {
        cout<< f2<< " ";
        int next = f1 + f2;
        if(next <=limit){
        f1= f2;
        f2 = next;
        }
    } 

}

int main()
{
    int n;
    cout << "enter the no "<<endl;
    cin>>n;
    //fibo(n);


    return 0;

}