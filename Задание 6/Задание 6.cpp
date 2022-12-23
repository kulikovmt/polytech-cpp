#include <iostream>
#include <string>

using namespace std;

enum class BirthCode : int {
    INCORRECT,
    WERENT_BORN,
    NEGATIVE,
};

class Birth : public exception {

public: Birth(BirthCode code): code(code) {}

      const char* what() const throw() override {

          if (code == BirthCode::INCORRECT) return "Incorrect value...";

          else if (code == BirthCode::WERENT_BORN) return "You haven't been born yet";

          else if (code == BirthCode::NEGATIVE) return "You entered a negative number!";
      }    
      
private:
    BirthCode code;
};

int main() {
    try
    {
        int a;

        cout << "Enter 1, 2 or 3: ";
        cin >> a;

        cout << "You entered: ";
        
        switch (a) {
        case 1:
            cout << "One" << endl;
            break;
        case 2:
            cout << "Two" << endl;
            break;
        case 3:
            cout << "Three" << endl;
            break;
        default:
            throw "Incorrect value";
        }
    }
    catch ( const char * error) {
        cout << error << endl;
    }

    try {
        int b;
        cout << "Enter your of your birth: ";
        cin >> b;

        cout << "You entered: ";

        if (b < 1850) {
            throw Birth(BirthCode::INCORRECT);
        }
        if (b > 2022) {
            throw Birth(BirthCode::WERENT_BORN);
        }
        if (b < 0) {
            throw Birth(BirthCode::NEGATIVE);
        }
        else
        {
            cout<<"Thanks!";
        }
    }
    catch (Birth &error) {
        cout << error.what();
    }
}