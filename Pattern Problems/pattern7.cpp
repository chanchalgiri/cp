/*
        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5

*/

#include<iostream>
using namespace std;
int main(){

    int i,j,k,n;
    cin>>n;
    cout<<"Pattern is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"   ";
        }
        for(int k=0;k<=i;k++){
            cout<<" "<<i+1<< " ";
        }
        cout<<endl;
    }
    return 0;
}