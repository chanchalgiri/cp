/*Pattern-18
    *
   * *
  *   *
 *     *
*********

*/
#include<iostream>
using namespace std;

int main(){

    int n,i,j;
    cin>>n;
    cout<<"Pattern:"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(i+j == n-1 || j-i == n-1 || i == n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}