
#include <iostream>
#include <map>
#include <stack>
#include <sstream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore();

    map<string, string> attributeMap;
    string line, currentTag;

    for (int i = 0; i < n; ++i) {
        getline(cin, line);


        if (line.substr(0, 2) == "</") {

            int pos = currentTag.rfind('.');
            if (pos != string::npos)
                currentTag = currentTag.substr(0, pos);
            else
                currentTag = "";
        } else {

            line = line.substr(1, line.length() - 2);

            stringstream ss(line);
            string tagName, attrName, equalSign, attrValue;
            ss >> tagName;

            if (!currentTag.empty()) {
                currentTag += "." + tagName;
            } else {
                currentTag = tagName;
            }

            while (ss >> attrName >> equalSign >> attrValue) {

                attrValue = attrValue.substr(1, attrValue.length() - 2);
                string fullAttrName = currentTag + "~" + attrName;
                attributeMap[fullAttrName] = attrValue;
            }
        }
    }

    for (int i = 0; i < q; ++i) {
        string query;
        getline(cin, query);
        if (attributeMap.find(query) != attributeMap.end()) {
            cout << attributeMap[query] << endl;
        } else {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}
