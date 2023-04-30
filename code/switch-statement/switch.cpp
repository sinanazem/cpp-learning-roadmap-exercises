# include <iostream>
using namespace std;
int main(){

    int num;
    cout<<"please enter day of week with Number: (0-6)" << endl;
    cin>>num;
    switch (num) {
        case(0):
            cout << "Shanbeh"<< endl;
            break;
        case(1):
            cout << "Yekshanbeh"<< endl;
            break;
        case(2):
            cout << "Doushanbeh"<< endl;
            break;
        case(3):
            cout << "Sehshanbeh"<< endl;
            break;
        case(4):
            cout << "Chaharshanbeh"<< endl;
            break;
        case(5):
            cout << "Panjshanbeh"<< endl;
            break;
        case(6):
            cout << "Jomeh"<< endl;
            break;
        default:
            cout << "not in range" << endl;
            break;
        };
    return 0;
    }
