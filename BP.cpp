#include <iostream>

using namespace std;

int pb(int a,int n)
{
if (n==0)
return 1;
else if (n==1)
return a;
else if (n % 2 == 0 )
return pb( a * a, n/2);
else
return pb( a * a, n /2)*a;
}

int main() {
int a, n = 0;
cin >> a;
cin >> n;
pb (a, n);

cout << pb(a,n);
}
