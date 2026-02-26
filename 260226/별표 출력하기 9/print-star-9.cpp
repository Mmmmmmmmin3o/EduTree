#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    // for(int i=0; i<n; i++){ //n번 반복
    //     for(int j=n-i; j>0; j--){ //n-i만큼 띄어쓰기
    //         cout<<" ";
    //     }
    //     for(int j=0; j<2*i+1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    for(int i=n; i>0; i--){
        for(int j=i*2-1; j>1; j--){
            cout<<" ";
        }
        for(int j=0; j<2*(n-i)+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}