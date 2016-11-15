#include <iostream>


using namespace std;

void EF (int n) {
int a[n];
int s = n;
for (int i = 0; i < n; i++) {
a[i] = i + 1;
}
for (int i = 0; i < n; i++) {
for (int j = n; j > 0; j--) {
if (n%j == 0 & a[i]%j== 0) {
if (j != 1) {
s--;
}
break;
}
}
}
cout << s;

}

int main() {
int n;
cin >> n;
EF (n);
return 0;
}
