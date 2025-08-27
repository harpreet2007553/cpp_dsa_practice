#include<iostream>
using namespace std;

int main(){
    int a=0;
    int b=1;
    int n;
    cout<< "Enter the value of nth term:";
    cin>>n;

    int sum;

    for(int i=0; i<n-2 ;i++){
        sum = a + b;
        a = b;
        b = sum;
    }
    cout<< "The "<< n <<"th term of fibonacci series is : "<< sum;
}