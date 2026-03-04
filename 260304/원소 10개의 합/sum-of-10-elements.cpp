#include <iostream>
using namespace std;

int sum=0;

int main() {
    // Please write your code here.
    for(int i=0; i<10; i++){
        int a;
        cin>>a;

        sum+=a;
    }
    cout<<sum;
    return 0;
}