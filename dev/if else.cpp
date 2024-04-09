#include<bits/stdC++.h>
using namespace std;

int main() {
    char a;
    cout << "Enter a character: ";
    cin >> a;


    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        cout << a << " is a vowel";
    } else {
        cout << a << " is not a vowel";
    }

	return 0;
	
}
