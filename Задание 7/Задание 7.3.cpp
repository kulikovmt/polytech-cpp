#include <string>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <fstream>

using namespace std;

int main() {
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "Сircle length = " << trunc(2 * M_PI * r * 1000 + 0.5) / 1000 << "\n";

    string str;
    fstream file;
    cout << "Enter line: ";
    cin >> str;
    string f = "D:/text.txt ";
    string tempString = " ";

    while (true) {
        if (str == "read") {
            file.open(f, ios::in);
            string tempString = "";
            cout << "\n File contains: \n";
            string line;
            while (getline(file, line)) {
                tempString += line + "\n";
            }
            file.close();
            cout << tempString;
        }
        else if (str == "erase") {
            file.open(f, ios::out);
            file << "";
            file.close();
        }
        else if (str == "exit") {
            break;
        }
        else {
            file.open(f, ios::in);
            string tempString = "";
            string line;
            while (getline(file, line)) {
                tempString += line + "\n";
            }
            file.close();
            file.open(f, ios::out);
            file << tempString;
            file << str;
            file.close();
        }
        cout << "Enter line:";
        cin >> str;
    }
}