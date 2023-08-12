#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    long long n,m,a;

    cin>>n>>m>>a;

    long long number=ceil((double)m/a)*ceil((double)n/a);

    cout<<number;

    return 0;
}
