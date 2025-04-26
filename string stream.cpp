
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> result;
    stringstream ss(str);
    int num;
    char ch;

    while (ss >> num) {
        result.push_back(num);
        ss >> ch;
    }

    return result;
}

int main() {
    string input;
    getline(cin, input);

    vector<int> numbers = parseInts(input);

    for (int n : numbers) {
        cout << n << endl;
    }

    return 0;
}
