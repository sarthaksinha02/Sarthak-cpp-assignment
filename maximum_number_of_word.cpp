#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int maxWords = 0, currentWords = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            currentWords++;
        }
    }

    currentWords++;

    if (currentWords > maxWords) {
        maxWords = currentWords;
    }

    cout << "The maximum number of words in the sentence is: " << maxWords << endl;

return 0;
}