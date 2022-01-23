#include <iostream>
#include <vector>

using namespace std;

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max_of_four(a, b, c, d) << "\n";
}

int max_of_four(int a, int b, int c, int d) {
    vector <int> arr;
    int max = 0;
    
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(d);
    
    const unsigned long arrSize {arr.size()};
    
    for(int i = 0; i < arrSize; i++) {
        if (arr[i] > max) {
            max =  arr[i];
        }
    }
    
    return max;
}