#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }

    int fact = 1;

    for(int i = 1; i <= n; i++){
        fact = fact*(n-i+1);
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n ;

    int r; 
    cout<<"Enter the value of r : ";
    cin>>r;

    if(n < r || n < 0){
        cout<<"Invalid input";
        return 0;
    }


    int nCr = factorial(n)/(factorial(r)*factorial(n-r));

    cout<<"nCr = "<< nCr;
    
}