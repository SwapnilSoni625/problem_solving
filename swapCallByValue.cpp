#include<iostream>
using namespace std;
void swap(int, int);
int main()
{
    int a,b;
    cout<<"enter number 1 = ";
    cin>>a;
    cout<<"enter number 2 = ";
    cin>>b;
    cout<<"before swapping numbers num1 = "<<a<< " num2 = "<<b<<endl;
    swap(a,b);
    cout<<"after swapping numbers num1 = "<<a<< " num2 = "<<b<<"in the main function"<<endl;
    return 0;
}
void swap(int a, int b){
    int v=0;
    v=a;
    a=b;
    b=v;
    cout<<"after swapping numbers num1 = "<<a<< " num2 = "<<b<<"in the swap function"<<endl;
   
}