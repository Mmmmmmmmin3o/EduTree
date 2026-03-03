#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int answer=11;

    for(int i=1; i<n+1; i++){
        int temp=answer;
        for(int j=1; j<n+1; j++){
            cout<<temp<<" ";
            temp+=2;
        }
        answer+=2;
        cout<<endl;
    }
    return 0;
}