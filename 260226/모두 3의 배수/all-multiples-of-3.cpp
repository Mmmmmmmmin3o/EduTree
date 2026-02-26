#include <iostream>
using namespace std;

int main() {
    bool check=true;
    // Please write your code here.
    for(int i=1; i<6; i++){
        int temp;
        cin>>temp;

        temp%3==0?check=true:check=false;
        if(temp%3==0){ 
            check=true;
        }
        else{
            check=false;
            break;
        }
    }

    check==true?cout<<1:cout<<0;
    return 0;
}