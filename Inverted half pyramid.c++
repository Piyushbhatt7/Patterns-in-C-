using namespace std;
#include<iostream>
main()
{
    int n;
    cin>>n;

    for (int i = n; i >=1; i--)
    {
        /* code */
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    
}