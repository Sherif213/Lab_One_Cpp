#include <iostream>
#include <vector>
#include <limits.h> 
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> sequence(n);


    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }

    long long product = 1;
    bool hasNonDivisible = false;
    int largest = INT_MIN;
    int largestPosition = -1;

    for (int i = 0; i < n; i++) {
        if (sequence[i] % 5 != 0) {
            hasNonDivisible = true;
            product *= sequence[i];
            if (sequence[i] > largest) {
                largest = sequence[i];
                largestPosition = i + 1;
            }
        }
    }

    if (hasNonDivisible) {
        cout << "Product of numbers not divisible by 5: " << product << endl;
        cout << "Largest number not divisible by 5: " << largest << endl;
        cout << "Position of the largest number: " << largestPosition << endl;
    }
    else {
        cout << "No numbers not divisible by 5 in the sequence." << endl;
    }
}

int main() {
    solve();
    return 0;
}