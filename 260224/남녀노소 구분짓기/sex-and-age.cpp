#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int gender, age;

    cin>>gender>>age;

    gender==0?(age<20?cout<<"BOY":cout<<"MAN"):(age<20?cout<<"GIRL":cout<<"WOMAN");
    return 0;
}