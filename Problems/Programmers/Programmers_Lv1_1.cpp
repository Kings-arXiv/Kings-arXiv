#include <iostream>

// Programmers �ڵ��׽�Ʈ LV.1: ���簢�� �����

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    for (int i = 1; i <= a * b; i++){
        cout << "*";
        if (i % a == 0)
            cout << "\n";
    }
    
    return 0;
}