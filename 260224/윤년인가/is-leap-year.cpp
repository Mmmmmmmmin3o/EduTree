#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int y;

    cin>>y;

    (y%4==0)?(y%100==0 and y%400!=0? cout<<"false":cout<<"true"):cout<<"false";
    return 0;
}