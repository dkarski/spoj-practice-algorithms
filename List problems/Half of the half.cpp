#include <iostream>
#include "../SpojPracticeAlgorithms.h"
using namespace std;

void halfOfTheHalf() {
    int count;
    string arrayStrings[100];

    cin >> count;
    for(int i=0; i<count; i++) {
        cin >> arrayStrings[i];
    }

    for(int i=0; i<count; i++) {
        string buff;
        string oneString = arrayStrings[i];
        int halfString = oneString.length() / 2;
        for(int j = 0; j < halfString; j = j + 2){
            buff += oneString[j];
        }
        cout << buff << endl;
    }
}

