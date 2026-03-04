#include <iostream>

using namespace std;

int st, ed;
int count=0;

void divisor(int num){

    int sum=0;
    

    for(int i=1; i<num; i++){
        num%i==0?sum+=i:false;
        // cout<<sum<<endl;
    }

    if(num==sum) count+=1;
}

int main() {
    cin >> st >> ed;

    // Please write your code here.

    for(int i=st; i<ed+1; i++){
        divisor(i);
    }

    cout<<count;

    return 0;
}
