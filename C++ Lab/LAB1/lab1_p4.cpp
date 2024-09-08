#include <iostream>
using namespace std;

int main() {
    int n,a,b;
    bool prime;

    cout << "Enter the range form start to end: ";
    cin >> a >> b;

    cout << "Prime numbers between " << a << " and " << b<< " are: ";

    for (int n =a; n<=b; n++) {
        if (n < 2) 
            continue;
        
        prime = true;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            cout << n << " ";
        }
    }

    return 0;
}

