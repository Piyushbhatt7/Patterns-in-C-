using namespace std;
#include<iostream>
main()
{

    int n;

    cout<<"Enter any no. to print the Butterfly pattern: ";
    cin>>n;

    // The upper part of Butterfly pattern
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<" *";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }

        for(int j=1; j<=i;j++){
            cout<<" *";
        }
        cout<<endl;
    }

    /// The lower part of Butterfly Pattern

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++)
        {
            cout<<" *";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }

        for(int j=1; j<=i;j++){
            cout<<" *";
        }
        cout<<endl;
    }
}