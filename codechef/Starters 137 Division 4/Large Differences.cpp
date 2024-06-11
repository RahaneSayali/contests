#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculate_difference(const vector<int>& A, int N) {
    int total_diff = 0;
    for (int i = 1; i < N; ++i) {
        total_diff += abs(A[i] - A[i - 1]);
    }
    return total_diff;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int initial_diff = calculate_difference(A, N);
        int max_diff = initial_diff;

        for (int i = 0; i < N; ++i) {
            int original_value = A[i];

            vector<int> candidates = {1, K};
            if (i > 0) {
                candidates.push_back(A[i - 1]);
            }
            if (i < N - 1) {
                candidates.push_back(A[i + 1]);
            }

            for (int new_value : candidates) {
                A[i] = new_value;
                int new_diff = calculate_difference(A, N);
                max_diff = max(max_diff, new_diff);
            }
            
            A[i] = original_value;
        }

        cout << max_diff << endl;
    }

    return 0;
}
