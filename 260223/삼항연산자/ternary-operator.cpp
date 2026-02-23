#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int grade;
    cin>>grade;

    string answer=(grade==100)?"pass":"failure";

    cout<<answer;
    return 0;
}