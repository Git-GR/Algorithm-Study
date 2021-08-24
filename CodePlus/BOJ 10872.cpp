#include <iostream>

using namespace std;

int factorial(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;
    return n * factorial(n - 1);
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
