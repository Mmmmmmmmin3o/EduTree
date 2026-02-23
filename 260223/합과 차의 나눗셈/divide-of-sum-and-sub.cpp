#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    float a,b;

    cin>>a>>b;

    float answer=(a+b)/(a-b);

    printf("%.2f", answer);
    return 0;
}