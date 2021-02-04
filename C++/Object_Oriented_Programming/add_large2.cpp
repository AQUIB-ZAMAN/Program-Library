#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2, sum = "";
    int carry = 0;
    cout << "Enter the two numbers to be added" << endl;
    cin >> s1 >> s2;
    int l1 = s1.length(), l2 = s2.length();
    if (l1 > l2)
    {
        swap(s1, s2);
        swap(l1, l2);
    }
    for (int i = l1; i < l2; i++)
        s1 = '0' + s1;
    for (int i = l2 - 1; i >= 0; i--)
    {
        int s = (s1[i] - '0') + (s2[i] - '0') + carry;
        carry = s / 10;
        char temp = (s % 10 + '0');
        sum = temp + sum;
    }
    if (carry == 1)
        sum = '1' + sum;
    cout << sum << endl;
    return 0;
}