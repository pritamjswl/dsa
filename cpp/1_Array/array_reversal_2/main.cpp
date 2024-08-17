/* Reverse the same array without using extra space */

#include <iostream>

using namespace std;

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5 / 2; i++) {
        int temp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = temp;
    }

    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}