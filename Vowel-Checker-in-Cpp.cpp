#include <iostream>
using namespace std;
int main()
{
    char a;

    cout << "Enter an Alphabet:";
    cin >> a;

    if (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U')
    {
        cout << "VOWEL\n";
    }
    else
        cout << "Consonent";
    return 0;
}
