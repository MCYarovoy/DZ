#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

void NOK(int a, int b) {
int i;
for (int i = a; i <= a * b; i = i + a) {
if (fmod(i, a) == 0 & fmod(i, b) == 0) {
cout << "НОК " << a << " и " << b << ": " << i << endl;
break;
}

}
}

int main() {
setlocale(0, "Russian");
int a, b = 0;
cout << "Введите первое число" << endl;
cin >> a;
cout << "Введите второе число" << endl;
cin >> b;
NOK(a, b);

_getch();
return 0;
}
