#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int classroom=0,hallway=0,bathroom=0;

    for(int i=1; i<n+1; i++){
        if(i%2==0){
            if(i%3==0){
                if(i%12==0){
                    bathroom++;
                }
                else hallway++;
            }
            else classroom++;
        }
        else if(i%3==0){
            if(i%12==0){
                bathroom++;
            }
            else hallway++;
        }
        else if(i%12==0){
            bathroom;
        }
    }
    cout<<classroom<<" "<<hallway<<" "<<bathroom;
    return 0;
}