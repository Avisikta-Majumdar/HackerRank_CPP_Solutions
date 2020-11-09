#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int a,b;
    cin>>a >> b;
    char arr[][9] ={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=b;++i)
    {
        if(i<10)
        {
            cout<<arr[i-1]<<"\n";
        }
        else if(i%2==0)
        {
            cout<<"even\n";
        }
        else
        {
            cout<<"odd\n";
        }
    }
    return 0;
}

