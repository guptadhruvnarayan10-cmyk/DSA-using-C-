// program of sum of even numbers between 0 to 10
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    b=0;
    for(a=0;a<=10;a++){
        if(a%2==0)
        {
            b=b+a;
        }
    }
    cout<<b<<endl;
    return 0;
}
