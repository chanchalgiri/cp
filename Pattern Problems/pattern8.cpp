/*
1 1 1 1 1 
  2 2 2 2
    3 3 3
      4 4 
        5

*/

#include<iostream>
using namespace std;
int main(){

    int n,i,j,k;
    cin>>n;
    cout<<"Pattern :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<< "   ";
        }
        for(int k=0;k<n-i;k++){
            cout<< " "<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}