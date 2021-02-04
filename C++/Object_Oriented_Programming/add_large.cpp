#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2, sum = "";
    int carry = 0;
    cout << "Enter the two numbers to be added" << endl;
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int l1 = s1.length(), l2 = s2.length();
    if (l1 > l2)
    {
        swap(s1, s2);
        swap(l1, l2);
    }
    for (int i = 0; i < l1; i++)
    {
        int s = (s1[i] - '0') + (s2[i] - '0') + carry;
        carry = s / 10;
        sum += s % 10 + '0';
    }
    for (int i = l1; i < l2; i++)
    {
        int s = (s2[i] - '0') + carry;
        carry = s / 10;
        sum += s % 10 + '0';
    }
    if (carry == 1)
        sum += '1';
    reverse(sum.begin(), sum.end());
    cout << sum << endl;
    return 0;
}