#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int sum=0;
    float count=0;

    for(int i=a; i<b+1; i++){
        if(i%5==0||i%7==0){
            sum+=i;
            count++;
        }
    }
    printf("%d %.1f",sum,float(sum)/count);
    return 0;
}