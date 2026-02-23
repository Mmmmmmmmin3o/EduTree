#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;

    cin>>a>>b>>c;

    int sum=a+b+c;
    int avg=sum/3;
    int answer=sum-avg;

    cout<<sum<<"\n"<<avg<<"\n"<<answer;
    return 0;
}