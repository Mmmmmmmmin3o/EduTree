#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum=0;
    float avg=0;

    for(int i=0; i<10; i++){
        int temp;
        cin>>temp;
        if(temp<=200 and temp>=0){
            sum+=temp;
            avg++;
        }
    }

    printf("%d %.1f", sum, float(sum)/avg);
    return 0;
}