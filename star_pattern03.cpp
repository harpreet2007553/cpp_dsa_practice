#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i=1; i<=n; ){
        for(int j=1; j <= n ;){
            if(i==j){
                cout<<"*";
            } else if(j == n-i+1){
                cout<< "*";
            } else if((n/2)+1 == j && (n/2)+1 > i){
                cout<< "*";
            }else{
                cout<< " ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
}