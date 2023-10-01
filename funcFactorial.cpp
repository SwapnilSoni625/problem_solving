#include<iostream>
using namespace std;

int fact(int n){
    
        if(n>1){
        return n*fact(n-1);
        }
        
        else if (n==1 || n==0)
        {
            return 1;
        }
        // how to implement a string showing "INVALID INPUT";
        else
        {
            return 0;
        }
   
}
int main()
{
    int num;
    cout<<"enter number = ";
    cin>>num;
    int result = fact(num);
    cout<<"factorial of "<<num<<" is = "<<result;
    return 0;
}