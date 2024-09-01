using namespace std;
#include<iostream>
main(){

    int n;
    cout<<"Enter any no. to print 0-1 pattern: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<" 1";
            }
            else{
                cout<<" 0";
            }
        }
        cout<<endl;
    }
}