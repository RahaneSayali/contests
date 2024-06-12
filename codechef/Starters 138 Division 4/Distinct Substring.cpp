#include <iostream>
using namespace std;

// Function to check if there exists a valid binary string
bool isValid(int N, int K) {
    // Calculate the minimum length required to create K distinct islands
    int minLengthRequired = (K * (K + 1)) / 2 + (K - 1);
    // If K == 1, we only need one position
    if (K == 1) {
        minLengthRequired = 1;
    }
    return N >= minLengthRequired;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        if (isValid(N, K)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
