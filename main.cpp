#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int x;
    cout<<"How many stars do you want?(eg. 12) ";
    cin>>x;
    if(x==0){cout<<"Please enter an integer greater than zero..."<<endl;}else{
    cout << "Hello world!" << endl;
    for(int i=0;i<x;i++){
        for(int j=x;j>i;j--){
            cout<<"*";
        }cout<<endl;
        Sleep(500);
    }
    }  //end of else.
system("PAUSE");
return 0;
}
