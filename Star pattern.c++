using namespace std;
#include<iostream>
main(){
    int n;
    cout<<"Enter any no. to print the star pattern: ";
    cin>>n;

   
   // Upper part of code
   
   
   
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }


  /// Lower part of the code
 
  for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }



}