#include<iostream>
using namespace std;

int main()
{   int t=0, num1[3] = {2,4,6}, num2[2] = {1,3};
    
    for (int i=0; i<2; i++){
        num1[i+3] = num2[i];
    }
    cout<<"unsorted array :"<<endl;
    for (int i=0; i<5; i++){
        cout<<num1[i]<<endl;
    }
    // insertion sorting..
    for(int i=0; i<4; i++){
        for (int j=i+1; j<5; j++){
            if(num1[j] < num1[i]){
                int t = num1[j];
                num1[j] = num1[i];
                num1[i] = t;
            }
        }
    }
    cout<<"sorted array :"<<endl;
    for (int i=0; i<5; i++){
        cout<<num1[i]<<endl;
    }
    return 0;
}