#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<< "Enter the number of rows:";
    cin >> rows;

    int i=1;
    while(i <= rows){
        // char ch = 'A' + i - 1;
        // cout<< ch;
        // char j = ch + 1;
        // int k = 2;
        // while(k <= rows){
        //     cout<< ch;
        //     j++;
        //     k++;
        // }
        // i++;
        // cout<< endl;

        char ch = 'A' + i - 1;
        char value = ch;
        
        int j=1 ;
        while(j <= rows){
            cout << value << " ";
            value++;
            j++;
        }
        i++;
        cout << endl;
    }
}