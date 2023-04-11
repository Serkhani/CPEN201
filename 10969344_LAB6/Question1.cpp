#include <iostream>
#include <fstream>

using namespace std;

const int ALPHABET_OFFSET = 26;

struct LetterStruct {
    char letter;
    int count;
    float percent;
};

void openFile(ifstream& input, ofstream& output) {
    string inputName, outputName;
    cout << "Enter input file name: ";
    cin >> inputName;
    cout << "Enter output file name: ";
    cin >> outputName;

    input.open(inputName);
    if (!input) {
        cerr << "Unable to open input file: " << inputName << endl;
        exit(1);
    }

    output.open(outputName);
    if (!output) {
        cerr << "Unable to open output file: " << outputName << endl;
        exit(1);
    }
}

void count(ifstream& input, LetterStruct letters[]) {
    char c;
    int totalLetters = 0;
    int capitalLetters = 0;

    while (input.get(c)) {
        if (isalpha(c)) {
            totalLetters++;
            if (isupper(c)) {
                capitalLetters++;
                letters[c-'A'].count++;//subtracting 'A' from character to create a reference point from index 0.... associate index 0 with A
//                letters[c-'A'].letter = c;
            } else {
                letters[c-'a'+ALPHABET_OFFSET+6].count++;// adding ALPHABET_OFFSET for a.... the number 6 represents characters between Z and a
//                letters[c-'a'+ALPHABET_OFFSET+6].letter = c;
            }
        }
    }

    for (int i = 0; i < ALPHABET_OFFSET*2+6; i++) {
        if (i > 25 && i < 32)
            continue;// this is to prevent the program from printing the characters between Z and a
        letters[i].percent = (float)letters[i].count / totalLetters * 100;
    }

    letters[ALPHABET_OFFSET*2+6].count = capitalLetters;//storing number of capital letters after the count for each letter
    letters[ALPHABET_OFFSET*2+7].count = totalLetters - capitalLetters;//storing number of small letters after the count for each letter and capital letters
//    letters[ALPHABET_OFFSET*2+6].percent = (float)(capitalLetters / totalLetters) * 100;
//    letters[ALPHABET_OFFSET*2+7].percent = 100 - letters[ALPHABET_OFFSET*2].percent;
}

void printResult(ofstream& output, LetterStruct letters[]) {
    output << "Num of capital letters: " << letters[ALPHABET_OFFSET*2+6].count << endl;
    output << "Num of small letters: " << letters[ALPHABET_OFFSET*2+7].count << endl;

    for (int i = 0; i < (ALPHABET_OFFSET*2)+6; i++) {
        if (i > 25 && i < 32)
            continue;// this is to prevent the program from printing the characters between Z and a
        letters[i].letter = (char) 65+i;
    cout<<i<<endl;
    }
    for (int i = 0; i < (ALPHABET_OFFSET*2)+6; i++) {
        if (i > 25 && i < 32)
            continue;// this is to prevent the program from printing the characters between Z and a
        output << letters[i].letter << ": " << letters[i].count << " (" << letters[i].percent << "%)" << endl;
    }
}

int main() {
    LetterStruct letters[ALPHABET_OFFSET*2+6] = {0};
    ifstream input;
    ofstream output;

    openFile(input, output);
    count(input, letters);
    printResult(output, letters);

    input.close();
    output.close();

    return 0;
}
