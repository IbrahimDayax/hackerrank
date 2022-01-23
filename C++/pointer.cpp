#include <iostream>
#include <cmath>

using namespace std;

void update(int *a,int *b) {
    cout << *a + *b<< "\n";
    cout << abs((*a - *b)) << "\n";
}

int main() {
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    
    return 0;
}