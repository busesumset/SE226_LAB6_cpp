#include <iostream>
using namespace std;


double sum(int n) {
    double sum = 0;
    int sign = -1;
    for (int i = 1; i <= n; i++) {
        sign *= -1; 
        double term = static_cast<double>(sign) / static_cast<double>(i);
        sum += term;
    }
    return sum;
}


double sum() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    return sum(n);
}

int main() {
    int n;
    cout << "Enter  n: ";
    cin >> n;

    double sum1 = sum(n);
    cout << "The summation : " << sum1 << endl;

    double sum2 = sum();
    cout << "The summation : " << sum2 << endl;

    return 0;
}
