#include<iostream>
using namespace std;

int main() {
    int sum = 0, n = 100;
    for(int i = 1; i <= n; i++) {
        sum += i * i;
    }
    cout << "The sum of squares of first " << n << " numbers is: " << sum << endl;
    return 0;
}