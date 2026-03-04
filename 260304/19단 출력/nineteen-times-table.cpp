#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    for(int i=1; i<20; i++){
        for(int j=1; j<20; j++){
            printf("%d * %d = %d ", i,j,i*j);
            j%2==0?cout<<endl:(j==19?cout<<" ":cout<<"/ ");
        }
        cout<<endl;
    }
    return 0;
}