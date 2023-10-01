#include<iostream>
using namespace std;
void func(int *num){
    (*num)++;
}
int main()
{
    int x=5;
    func(&x);
    //int *num = &x
    cout<<x;
    return 0;
}