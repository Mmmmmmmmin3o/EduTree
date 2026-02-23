#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int h,w;

    cin>>h>>w;

    int answer=(10000*w)/(h*h);

    if(answer>=25){
        printf("%d\nObesity", answer);
    }
    else{
        cout<<answer;
    }
    return 0;
}