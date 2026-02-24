#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    while(N<101){
        N>=60?
            (N>=70?
                (N>=80?
                    (N>=90?cout<<"A": cout<<"B")
                :cout<<"C")
            :cout<<"D")
        :cout<<"F";

        cout<<" ";
        N++;
    }
    return 0;
}