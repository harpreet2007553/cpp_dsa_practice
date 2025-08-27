#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    int i=0;
    while(i<=30){
        if(n == pow(2,i)){
            cout<< "true";
            return true;
        } 
        i++;
    }
    cout<< "false";
    return false;
        
}