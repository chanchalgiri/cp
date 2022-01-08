/* 
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

*/

#include<iostream>
using namespace std;

//val = val*[(i-k+1)/k]   ==> formula used
int main(){

    int i,j,k,n;
    int val = 1;
    cin>>n;
    cout<<"Pascal's Triangle:"<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        for(int k=0;k<=i;k++){
            if(k==0 || i==0){
                val = 1;
            }
            else{
                val = val*(i-k+1)/k;
            }
            cout<<" "<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}