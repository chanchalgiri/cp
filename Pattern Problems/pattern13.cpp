/*
a
b c
d e f
g h i j
k l m n o

*/
#include<iostream>
using namespace std;
int main(){

    int n,i,j;
    char alph = 'a';

    cin>>n;
    cout<<"Pattern :"<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<< " "<<alph++<<" ";
        }
        cout<<endl;
    }
    return 0;
}