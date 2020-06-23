#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int a,b,r,q;
    cin >> a >> b;
    r=a%b;
    if(r<0) r+=abs(b);
	q=(a-r)/b;
	cout << q << " ";
	cout << r << endl;
    return 0;
}
