#include<iostream>
#include<string>

using namespace std;
int main() {
    string find;
    int times = 0;
    string message;

    cout << "Enter a message a message: ";
    getline(cin, message);


    cout << "Enter the character to be found: ";
    cin >> find;
    
    while (find.length() > 1) {
        cout << "Enter the character to be found: ";
        cin >> find;
    }

    for (int j = 0; j < find.length(); j++)
    {
        times = 0;
        for (int i = 0; i < message.length(); i++) {
            if (message[i] == find[j]) {
                times++;
            }
        }
        cout << "The character " << find[j] << " appeared " << times << " times(s) in the message \n";
    }
    return 0;

}
