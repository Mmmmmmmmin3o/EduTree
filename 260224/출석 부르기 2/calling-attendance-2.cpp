#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    while(true){
        int temp;
        cin>>temp;

        if(temp==1){
            cout<<"John"<<endl;
        }
        else if(temp==2){
            cout<<"Tom"<<endl;
        }
        else if(temp==3){
            cout<<"Paul"<<endl;
        }
        else if(temp==4){
            cout<<"Sam"<<endl;
        }
        else{
            cout<<"Vacancy"<<endl;
            break;
        }
    }
    return 0;
}