using namespace std;
#include<iostream>
main()
{
    int n;
    int count=1;

    cout<<"Enter any no. to print Floyd's triangle: ";
    cin>>n;

     for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++)
        {
            cout<<count<<"  ";
            count++;
        }
         cout<<endl;
     }
    


}