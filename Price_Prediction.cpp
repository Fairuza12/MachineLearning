#include <bits/stdc++.h>
using namespace std;
int main()
{
    int potato_kg,price=10;
    cin>>potato_kg;
    if(potato_kg==1 || potato_kg%2==0)
    {
        price = price*potato_kg;
    }
    else
    {
        price = 10*(potato_kg-1)+5;
    }
    cout<<price<<endl;
    return 0;
}
