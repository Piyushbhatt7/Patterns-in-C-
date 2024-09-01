using namespace std;
#include<iostream>
main()
{
    int n;

    cout<<"Enter any no. to print Rhombus pattern: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<" *";
        }
        cout<<endl;
    }

}