#include <iostream>
using namespace std;

int addMultiples(int n) {
    int result;
    for (int i=0; i<=n; i++){
        if ((i%2 == 0) || (i%5 == 0)) {
            result += i;
        }
    }
    cout << result;
}


int main() {
    int n;
    cout << "Please enter a number:" << endl;
    cin >> n;
    addMultiples(n);
    return 0;
}
