#include<iostream>
using namespace std;

int main(){
    int row_column;
    cout<<"Enter the number of rows/columns: ";
    cin>>row_column;

    for (int i=1; i <= row_column; i++){
        for (int j=1; j <= row_column; j++ ){
            cout<<j<< " ";
        }
        cout<<endl;
    }
}