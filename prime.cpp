// to show if an entered number is PRIME or NOT.....
#include<iostream>
using namespace std;
int main()
{
    int num, var = 0;
    cout<<"enter the number = ";
    cin>>num;
    for(int i=1; i<=num; i++){
        if(num%i == 0)
        var++ ;
    }
    if(num == 0 || num == 1){
        cout<<"Number is neither PRIME nor COMPOSITE";
    }
    else if (var == 2)
    {
       cout<<"Number is  PRIME ";
    }
    else
    {
       cout<<"Number is  COMPOSITE ";
    }
    return 0;
}