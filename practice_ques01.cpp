#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a, b, c;

    for(;true;){
        int rem = n%10;
        if(rem == 0){
            break;
        }
        cout<< rem << endl;
        n = n/10;
    }
}