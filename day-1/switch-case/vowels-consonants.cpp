//  10. Vowel or Consonant

//  Accept a character and use switch - case to determine whether it is a vowel.If it is not a vowel, display that it is a consonant.

#include <iostream>

using namespace std;

int main() {

    char ch; 

    cout << "Enter the character = ";
    cin >> ch;

    switch (ch) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout<< ch<<" is a Vowel "<< endl ;
        break;
    default:
        cout << ch << " is a Consonant " << endl;
    }

	return 0;

    //  If you provide 'ar' like , it still get the first character only due to chat-datatype.
    //  And as per that input it shows the output.

}