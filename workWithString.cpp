#include <iostream>
#include <string>

using namespace std;

string deleteLettersInText(string text) {
    for (int i = 0; i < text.length() - 1; i++) {
        if (text[i] == 'C' && text[i + 1] == 'O') {
            text.erase(i, 2);
            i--;
        }
    }
    return text;
}

int countSymbols(string text, char symbol[]) {
    int count = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == symbol[0] || text[i] == symbol[1]) {
            count++;
        }
    }
    return count;
}

int main()
{
    string text;
    char targetSymbols[2] {',', '.'};
    cout << "Input text" << endl;
    getline(cin, text);

    string changedText = deleteLettersInText(text);
    int mainCount = countSymbols(text, targetSymbols);

    
    cout << "text length" << endl;
    cout << text.length() << endl;
    cout << "Changed text length" << endl;
    cout << changedText.length() << endl;
    cout << "How much has changed" << endl;
    cout << text.length()- changedText.length() << endl;

    cout << "comma and period count" << endl;
    cout << mainCount << endl;
    cout << "Text" << endl;
    cout << changedText << endl;
}