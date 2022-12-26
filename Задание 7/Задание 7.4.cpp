#include <string>
#include <iostream>
#include <math.h>
#include <vector>
#include "Settings.hpp"

using namespace std;

void print(std::vector <float> v) {

    for (int n : v) cout << n << " ";
    cout << endl;
}
int main() {
    setlocale(LC_ALL, "Russian");
    vector <float> arr{ 0,1,2,3,4 };
    print(arr);

    vector<float>::iterator iter = arr.begin();
    iter += 3;
    arr.insert(iter, 9);
    print(arr);

    arr.pop_back();
    print(arr);

    Settings user;
    user.Add("Петр", 16);
    user.Add("Ян", 35);
    user.Add("Денис", 33);
    user.Add("Сергей", 25);

    user.print_map();

    cout << user.Get("Ян") << "\n";
    cout << user.Get("Сергей") << "\n";
};