#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "strin";
    s.push_back('g');
    cout << s << endl;

    s = "This";
    cout << s.append(" and that.") << endl;

    string s1 = "Thing 1";
    string s2 = "Thing 2";
    s1.swap(s2);
    cout << s1 << " and " << s2 << " have been swapped!" << endl;

    s = "This is the song that doesn't end.";
    cout << s.substr(0, 16) << endl;
    cout << s.substr(12, 4) << endl;
    cout << s.substr(17) << endl;
    return 0;
}
