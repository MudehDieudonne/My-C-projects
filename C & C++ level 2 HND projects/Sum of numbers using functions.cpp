#include <iostream>
using namespace std;

int sum(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int result = sum(a, b, c);
    cout << "The sum of " << a << ", " << b << ", and " << c << " is " << result << endl;
    return 0;
}


