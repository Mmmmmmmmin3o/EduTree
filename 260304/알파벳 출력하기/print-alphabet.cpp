#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int alphabet=65;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<char(alphabet++);
            if(alphabet>90){
                alphabet=65;
            }
        }
        cout<<endl;
    }
    return 0;
}