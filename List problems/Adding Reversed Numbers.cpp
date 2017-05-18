#include <sstream>
#include <iostream>
#include "../SpojPracticeAlgorithms.h"

using namespace std;

string reserveString(string x);
string removeLeadingZeros(string number);
int convertToInteger(string number);

void addingReversedNumbers(){
    int count;

    cin >> count;
    for(int i=0; i<count; i++) {
        string stringDoubleArray[2];
        int integersOutputArray[2];
        string resultString;

        cin >> stringDoubleArray[0] >> stringDoubleArray[1];

        for(int j=0; j<2;j++){
            stringDoubleArray[j] = reserveString(stringDoubleArray[j]);
            stringDoubleArray[j] = removeLeadingZeros(stringDoubleArray[j]);
            integersOutputArray[j] = convertToInteger(stringDoubleArray[j]);
        }

        resultString = to_string(integersOutputArray[0] + integersOutputArray[1]);
        resultString = reserveString(resultString);
        resultString = removeLeadingZeros(resultString);
        cout << resultString << endl;
    }
}

string reserveString(string x){
    int length = (int) x.length();
    string y;
    for(int i=0; i<length; i++) {
        y += x[length - 1 - i];
    }
    return y;
}

string removeLeadingZeros(string number){
    return number.erase(0, min(number.find_first_not_of('0'), number.size()-1));
}

int convertToInteger(string number){
    return atoi(number.c_str());
}