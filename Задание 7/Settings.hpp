#pragma once
#include <map>
#include <string>
#include <iostream>

using namespace std;

class Settings {
public:
     map < string, int> map;

     void Add(string key, int value) {
        map.insert(pair<string, int>(key, value));
    }

    int Get(string key) {
        return map[key];
    }

    void print_map() {
        for (auto iter = map.begin(); iter != map.end(); iter++) {
            cout << iter ->first << " = " << iter ->second << "\n";
        }
    }
};
