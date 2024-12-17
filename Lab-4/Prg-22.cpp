// [(11)/1] + [(22)/2] + [(33)/3] + [(44)/4] + [(55)/5] + ... + [(nn)/n]
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double sum = 0.0;
    cout << "Enter a number (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += pow(i, i) / i;
    }

    cout << "The result of the series is: " << sum << endl;
    return 0;
}
