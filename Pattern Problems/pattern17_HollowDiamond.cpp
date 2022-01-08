/*patter-17

* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *

*/
#include<iostream>
using namespace std;                                       
                                                            
int main(){

    int i,j,n;
    cin>>n;
    cout<<"Pattern is:"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            //upper right 
            if(j<n-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            //upper right
            if(i+n<=j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            //lower left
            if(j<=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            //lower right
            if((2*n-1)-j<=i){
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