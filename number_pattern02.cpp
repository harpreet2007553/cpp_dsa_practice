#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<< "Enter the number of rows:";
    cin>>rows;

    // int i=0;
    
    // while (i<= rows){
    //     int j = 0;
    //     int value = i;
    //     while ( j <= i){
    //         cout<< value << " ";
    //         j++;
    //         value++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    int i=1;
    while(i<= rows){
        cout<< i << " ";
        int j= i+1;
        int val = 2;
        while (val <= i ){
            cout<< j << " ";
            j++;
            val++;
        }
        cout<< endl;
        i++;
    }
}