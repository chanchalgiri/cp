/*
Pattern - 3
        * 
      * *
    * * *
  * * * *
* * * * * 
        
*/

#include<iostream>
using namespace std;
int main(){

    int n,i,j,k;
    cin>>n;
    for(int i=0;i<n;i++){           //for no. of rows
        for(int j=0;j<n-i-1;j++){   //space is one less then the total  *
            cout<<"   ";            // j < (5-0-1) = j<4 (so it won't include 4)i.e the last element
        }
        for(int k=0;k<=i;k++){      //k<=0
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}