#include <iostream>
#include <cstring>
using namespace std;

void isPalindrome(char text[])
{
    int length = strlen(text);
    bool palindrome = true;

    for (int i = 0; i < length / 2; i++)
    {
        cout << text[i] << " = " << text[length - 1 - i] << endl;

        if (text[i] != text[length - 1 - i])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
    {
        cout << "Your text is Palindrome." << endl;
    }
    else
    {
        cout << "Your text is not Palindrome." << endl;
    }
}

int main()
{
    char text[100];

    cout << "Enter text : ";
    cin >> text;

    cout << "======================" << endl;

    isPalindrome(text);

    return 0;
}