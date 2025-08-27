#include<iostream>
using namespace std;

string repeatStr(string s , int n){
    string result="";
    for (int j=0; j<=n; j++){
        result += s;
    }
    return result;
}

int main(){
    int rows;
    cout<< "Enter the number of rows:";
    cin>> rows;

    string str="*";

    int i =0;
    while (i<=rows){
        cout<< repeatStr("*", i);
        cout<< endl;
        i++;
    }

}

