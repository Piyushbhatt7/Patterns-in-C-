using namespace std;
#include<iostream>
main(){
    
    int n;
    
    cout<<"Enter any no. to print the inverted pattern: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}