// C++ Program to remove the vowels from a string
#include <cstring>
#include <iostream>
using namespace std;
bool isLindrome(void);
int main()
{
    int j = 0;

    string str = "GeeksforGeeks";

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i'
            && str[i] != 'o' && str[i] != 'u'
            && str[i] != 'A' && str[i] != 'E'
            && str[i] != 'I' && str[i] != 'O'
            && str[i] != 'U') {
            str[j++] = str[i];
        }
    }

    isLindrome();
    while (j < str.size())
    {

        str[j] = '\0';

        j++;
    }
    cout << "String without vowels: " << str << endl;

    return 0;



}

bool isPrime(int value)
{
    if(value <= 1)
    {
        cout << "Khong Phai La So Nguyen To" << endl;
    }

    for (int index = 2; index < value; ++index)
    {
        if(index % value == 0)
        {
            cout << "Khong phia la so nguyen to " << endl;
            break;
        }
        
    }
    //true thi la so nguyen to
    return 0;
}

bool isLindrome(void)
{
    int start;
    int end;

    int i = 8;

    int res = i++;
// i = 9, res = 8
    cout << i << " " << res << endl;

    res = ++i;
    cout << i << " " << res << endl;

    // i = 10 , res = 10 
    res = (i++) + (++i);
    cout << i << " " << res << endl;

    // i= 12 res = 22
    res = ++i + i++;
    cout << i << " " << res << endl;

    // i = 14 res = 26
    res = i++ + ++i;
    cout << i << " " << res << endl;

    // i = 16 res 30

    return true;
}