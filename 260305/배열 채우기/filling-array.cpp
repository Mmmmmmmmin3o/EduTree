#include <iostream>
using namespace std;

int i=0;

int main() {
    // Please write your code here.
    int a[10];
    
    while(true){
        cin>>a[i];
        if(a[i]==0){
            i--;
            break;
        }
        else if(i==9) break;
        i++;
    }

    for(int j=i; j>=0; j--){
        cout<<a[j]<<" ";
    }
    return 0;
}