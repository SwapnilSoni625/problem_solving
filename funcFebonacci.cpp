#include<iostream>
using namespace std;
int febo(int limit){
    int  check=2, n1=0; n2=1, var=0;
    cout<<"series is : "<<endl<<n1<<endl<<n2<<endl;
    if(limit>=check){
       return (n1+n2);
        var= n1;
        n1=n2;
        n2=var;
      check++;
    }
}
int main()
{
    int num;
    cout<"enter = ";
    cin>>num;
    int r= febo(num);
    cout<<r;
    return 0;
}
