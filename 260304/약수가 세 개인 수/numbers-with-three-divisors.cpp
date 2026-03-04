#include <iostream>

using namespace std;

int st, ed;

int count=0;

void divisorCount(int num){
    int check=0;
    for(int i=1; i<num+1; i++){
        num%i==0?check++:false;
    }
    check==3?count++:false;
}

int main() {
    cin >> st >> ed;

    // Please write your code here.
    for(int i=st; i<ed+1; i++){
        divisorCount(i);
    }

    cout<<count;

    return 0;
}
