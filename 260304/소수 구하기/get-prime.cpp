#include <iostream>
using namespace std;

void divisor(int num){
    int check=0;
    for(int i=1; i<num+1; i++){
        num%i==0?check++:false;
    }
    if(check==2) cout<<num<<" ";
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=2; i<n+1; i++){
        divisor(i);
    }
    return 0;
}