#include <vector>
#include <iostream>
using namespace std;


int main() {
    int N;
    cin >> N;
    vector <int> arr;
    if (1 <= N && N <= 1000) {
        while (N > 0) {
            int element;
            cin >> element;
            arr.push_back(element);
            N--;
        }
        for (int i = arr.size() - 1; i >= 0; i--) {
            cout << arr.at(i) << " ";
        }
    }
    return 0;
}