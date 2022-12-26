#include <string>
#include <iostream>

using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;
    cout<<str.substr(1, 3)<<endl;

    int index = str.find('a');

   if (index >= 0) {
        cout<<to_string(index);
    }
    else {
        cout << "symbol 'a' not found" << endl;
    }

}


