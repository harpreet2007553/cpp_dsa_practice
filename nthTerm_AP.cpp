#include<iostream>
using namespace std;

int AP_Term(int n){
    int AP = 3*n + 7;
    return AP;
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    cout<< "The nth term of AP(3*n + 7) is : "<< AP_Term(n);
}