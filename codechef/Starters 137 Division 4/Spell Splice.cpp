#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> V(N), A(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> V[i] >> A[i];
        }
        
        int max_strength = 0;
        
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                int combined_strength = A[i] * V[j] + V[i] * A[j];
                if (combined_strength > max_strength) {
                    max_strength = combined_strength;
                }
            }
        }
        
        cout << max_strength << endl;
    }
    
    return 0;
}
