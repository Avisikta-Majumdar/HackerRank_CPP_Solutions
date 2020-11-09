#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(n>9)
    {
        cout<<"Greater than 9";
    }
    else
    {
        const char *colour[9]={"one","two","three", "four","five","six","seven","eight","nine" };
        std::cout << colour[n-1] << endl;
    }
    return 0;
}
