/*
a
a b
a b c
a b c d
a b c d e

*/
#include<iostream>
using namespace std;
int main(){

    int i,j,n;
    cin>>n;
    cout<<"Pattern:"<<endl;
    for(int i=0;i<n;i++){
        char alph = 'a';
        for(int j=0;j<=i;j++){
            cout<<" "<< alph++<< " ";
        }
        cout<<endl;
    }
    return 0;
}