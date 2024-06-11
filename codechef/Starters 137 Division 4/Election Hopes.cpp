#include <iostream>
using namespace std;

int main() {
    int X, Y;
    // Read the input values
    cin >> X >> Y;
    
    // Check if Chef dominated the election
    if (X >= 2 * Y) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
