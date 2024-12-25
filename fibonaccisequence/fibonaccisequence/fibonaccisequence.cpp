#include <iostream>
using namespace std;


//friend added that single letter variables can be confusing so im going to change them really quickly. (before change they are x y z since im used from school.) 

int main() {
    int termCount;
    cout << "Enter the number of terms: ";
    cin >> termCount;

    int secondNum = 0, thirdNum = 1;
    cout << "Starting the sequence... ";

    if (termCount >= 1) {
        cout << secondNum << " ";
    }

    if (termCount >= 2) {
        cout << thirdNum << " ";
    }

    for (int i = 3; i <= termCount; i++) {
        int proximum = secondNum + thirdNum;
        cout << proximum << " ";
        secondNum = thirdNum;
        thirdNum = proximum;
    }

    cout << endl;
    return 0;
}