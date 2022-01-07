/*
a
b b
c c c
d d d d
e e e e e

*/
#include<iostream>
using namespace std;

int main(){

    int n,i,j;
    char alph = 'a';
    cin>>n;
    cout<<"Pattern:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<" "<<alph<<" ";
        }
        alph++;
        cout<<endl;
    }
    return 0;
}