#include <iostream>

using namespace std;

int main()
{
 int a;double s=0;
 cout<<"Tippen Sie die erste Note : ";cin>>a;s=s+a;
 cout<<"Tippen Sie die zweite Note : ";cin>>a;s=s+a;
 cout<<"Tippen Sie die dritte Note : ";cin>>a;s=s+a;
 cout<<"Tippen Sie die vierte Note : ";cin>>a;s=s+a;
 cout<<"Tippen Sie die f�nfte Note : ";cin>>a;s=s+a;
       s=s/5.0;
 cout<<"Der Durchschnitt ist : "<<s<<endl<<endl;
 cout<<"Danke!\n";
 cout<<"Dr�cken Sie eine Taste, um fortzufahren ..."<<endl;
    cin.ignore();
    cin.get();
return 0 ;
}
