#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int array1[n];
    for(int i=0;i<n;++i)
    cin>>array1[i];
    for(int i=(n-1);i>=0;--i)
    cout<<array1[i]<<" ";
    return 0;
}
