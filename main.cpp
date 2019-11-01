#include <iostream>

int main() {
    using namespace std;
    char letter = 'y';
    switch(letter){
        case 'Y':
            cout << "You chose y or Y";
            break;
        case 'y':
            cout << "You chose y or Y";
            break;
        case 'n':
            cout << "You chose n or N";
            break;
        case 'N':
            cout << "You chose n or N";
            break;
        default:
            cout << "You didn't choose a valid option";
            break;
    }
    return 0;
}