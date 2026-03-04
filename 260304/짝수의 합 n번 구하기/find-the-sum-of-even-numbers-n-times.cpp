#include <iostream>
using namespace std;


void sum(int a, int b){
    int add=0;
    for(int i=a; i<b+1; i++){
        i%2==0?add+=i:false;
    }
    cout<<add<<endl;
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;

        sum(a,b);
    }
    return 0;
}