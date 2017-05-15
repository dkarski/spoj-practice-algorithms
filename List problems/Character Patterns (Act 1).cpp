#include <iostream>
#include "../SpojPracticeAlgorithms.h"

using namespace std;

void characterPatterns() {
    int count;
    int inputIntegerArray[200];
    string outputStringArray[2] = {"*", "."};

    cin >> count;
    for(int i=0; i<count; i++) {
        cin >> inputIntegerArray[i*2]
            >> inputIntegerArray[i*2+1];
    }
    for(int i=0; i<count; i++) {
        for(int j =0; j < inputIntegerArray[i*2]; j++){
            for(int k =0; k < inputIntegerArray[i*2+1]; k++){
                cout << outputStringArray[(j+k) % 2];
            }
            cout << endl;
        }

    }
}

