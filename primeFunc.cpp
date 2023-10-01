#include<iostream>
using namespace std;
int isPrime(int n){
    int var=0 ;
    for(int i=1; i<=n; i++){
        if(n%i == 0)
        var++ ;
    }

        if(n == 0 || n == 1){
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
}

int main()
{   
    int num;
    cout<<"enter the number = ";
    cin>>num;
    isPrime(num); 
    cout<<"\n above program is done successfully";
    return 0;
}