using namespace std;
#include<iostream>
main()
{
    int n;
    int i,j;

    cout<<"Enter any no. to print half praymid: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i<<"  ";
        }
        cout<<endl;
    }
}