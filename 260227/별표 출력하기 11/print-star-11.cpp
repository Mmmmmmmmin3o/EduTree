#include <iostream>
using namespace std;

void starWindow(int n, int i){
    if(i%2==0){
        for(int j=0; j<n*2+1; j++) cout<<"* ";
    }
    else{
        for(int j=0; j<n*2+1; j++){
            j%2==0?cout<<"* ":cout<<"  ";
        }
    }
    cout<<endl;
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=0; i<2*n+1; i++){
        starWindow(n,i);
    }
    return 0;
}