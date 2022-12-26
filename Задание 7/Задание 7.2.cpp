#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include <regex>

using namespace std;

int main() {

    string name;
    cout << "Enter your name: ";
    cin >> name;

    regex reg("^([A-Z])([a-z]*)$");

    bool found = regex_match(name, reg);

    if (found == false) {
        cout << "Incorrect name : " << name << "! \n \n";
    }
    else {
        cout << "Thanks! \n \n";
    }

    regex re("^[a-z0-9_][a-z0-9_\.-]*[a-z0-9_]@([a-z0-9]+[a-z0-9_-]*[a-z0-9]\.)+[a-z0-9]{2,}$");

    char arr[] = "PF0FiOs4 oXF2IFr kulikovmat@mail.ru moKHDscK7GY dadanetnet@asd.qwe nHCC0zNOJ bkhbh mail.ru jGeiDTaqH Ht72xEBD yBsAbZANW";
    char* tmp_char;
    tmp_char = strtok(arr, " ");

    while (tmp_char != NULL) {
        if (regex_search(tmp_char, re)) cout << tmp_char << "\n";
        tmp_char = strtok(NULL, " ");
    }
}