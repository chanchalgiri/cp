/*
pattern-1
*
* * 
* * *
* * * *
* * * * *

*/

#include<iostream>
using namespace std;
int main(){

    int n,i,j;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
    
}
