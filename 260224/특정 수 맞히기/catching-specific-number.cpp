#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int answer=false;
    while(true){
        int temp;
        cin>>temp;

        if(temp>25){
            cout<<"Lower"<<endl;
        }
        else if(temp<25){
            cout<<"Higher"<<endl;
        }
        else{
            cout<<"Good"<<endl;
            break;
        }
    }
    return 0;
}