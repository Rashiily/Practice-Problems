#include <iostream>
using namespace std;

class Numbers {
    int n;

public:
    void getInput() {
        cout << "Enter value of n: ";
        cin >> n;
    }

    void printNumbers() {
        for(int i = 1; i <= n; i++) {
            cout << i << " ";
        }
    }
};

int main() {
    Numbers obj;
    obj.getInput();
    obj.printNumbers();
    return 0;
}