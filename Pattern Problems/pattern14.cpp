/*
    *
   * *
  * * *
 * * * *
* * * * *

*/

#include<iostream>
using namespace std;

int main(){

    int i,j,k,n;
    cin>>n;
    cout<<"Pattern:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){   //space required only for the first half .
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}