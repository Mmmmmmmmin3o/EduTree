#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    bool check=true;

    for(int i=2; i<n; i++){
        if(n%i==0){
            check=false;
        }
    }

    check?cout<<"P":cout<<"C";
    return 0;
}