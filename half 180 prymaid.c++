using namespace std;
#include<iostream>
main()
{
    int n,i,j;

    cout<<"Enter any number: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           if(j<=n-i){
            cout<<"  ";
           }
           else{
                   cout<<"* ";
           }
        }
        
        cout<<endl;
    }
}