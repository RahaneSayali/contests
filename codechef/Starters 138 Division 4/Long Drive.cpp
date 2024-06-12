#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int X,Y;
        cin>>X>>Y;
        int numerator = 10 * (Y - X);
        int denominator = 100 - Y;
        int h = (numerator + denominator - 1) / denominator;
        cout<<h<<endl;
    }
    
}
