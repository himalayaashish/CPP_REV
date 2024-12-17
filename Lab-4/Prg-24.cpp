// 1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n

#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;
    cout << "Enter the number of terms (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum -= static_cast<double>(i) / (i + 1);
        else
            sum += static_cast<double>(i) / (i + 1);
    }

    cout << "The result of the series is: " << sum << endl;
    return 0;
}
