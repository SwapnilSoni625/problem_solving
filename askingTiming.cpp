#include <iostream>
using namespace std;
void  inputTime(int t){
    if(t<12)
        cout<<"Can we extend it to 12 pm, please ?";
    else 
        cout<<"okay, waiting, i have already sent you the list of the topics.";
}

void  achhaTheeke(){
    cout<<"accha theeke.. abhi monday ka bhi holiday hain * _ *";
}
int main() {
     int time;
    cout << "Hey there, coding guru!\n Finally SUNDAY is here" << endl;
    cout << "I'm excited about our virtual class. Can you please tell me the time?" << endl;
    cout<<endl;
    cout<<"If you are taking class tomorrow? type \'TRUE\' ...or...\'FALSE\' ";
    string ask;
    cin>>ask;
    if (ask == "true")
    {   
        cout<<"So, what will be the timings :) enter time in hour here:";
        cin>>time;
        inputTime(time);
    }
    else
    {
        achhaTheeke();
    }
    
    
    return 0;
}