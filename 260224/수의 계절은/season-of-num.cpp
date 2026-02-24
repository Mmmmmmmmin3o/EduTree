#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int month;
    cin>>month;

    if(month<6 and month>2){
        cout<<"Spring";
    }
    else if(month<9 and month>5){
        cout<<"Summer";
    }
    else if(month<12 and month>8){
        cout<<"Fall";
    }
    else{
        cout<<"Winter";
    }
    return 0;
}