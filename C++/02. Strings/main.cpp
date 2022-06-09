#include <string>
#include <iostream>

using namespace std;

int main() {
    int i;
    string str1 = "string creator 1";
    string str2 ("string creator 2");
    string str3 (str2);

    for (i=0 ; i < str1.length(); i ++) {
        cout << str1.at(i) << endl;
    }

    for (i=0 ; i < str2.length(); i ++) {
        cout << str2[i] << endl;
    }

    
}
