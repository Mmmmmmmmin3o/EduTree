#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    int sum=0;

    for(int i=a; i<b+1; i++){
        sum+=i;
    }

    cout<<sum;
    
    return 0;
}