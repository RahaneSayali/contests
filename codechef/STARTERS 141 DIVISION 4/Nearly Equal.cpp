#include <bits/stdc++.h>
using namespace std;

int hammingDistance(const string& str1, const string& str2) {
    int distance = 0;
    for (size_t i = 0; i < str1.length(); ++i) {
        if (str1[i] != str2[i]) {
            ++distance;
        }
    }
    return distance;
}
int main() {
	int T;
    cin >> T;
    
    while (T--) {
        int N, M;
        cin >> N >> M;
        
        string A, B;
        cin >> A >> B;
        
        int minHammingDistance = INT_MAX;
       
        for (int i = 0; i <= N - M; ++i) {
            string subA = A.substr(i, M);
            int currentHammingDistance = hammingDistance(subA, B);
            if (currentHammingDistance < minHammingDistance) {
                minHammingDistance = currentHammingDistance;
            }
        }
        
        // Output the minimum Hamming distance for this test case
        cout << minHammingDistance << endl;
    }
    
    return 0;

}
