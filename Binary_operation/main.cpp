#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

string get_string_binary_value(int value)
{
    string str;
    do
    {
        str.append(to_string(value & 0x1));
        value >>= 0x1;
    } while (value != 0);
    reverse(str.begin(), str.end());
    return str;
}

int main()
{
    const int width = 10;
    int a;
    cin >> a;
    if (0 > a || a > 16)
    {
        cout << "Input value must be 0 <= value <= 16";
        return 0;
    }
    cout << setw(width) << "A" << setw(width) << "B" << setw(width) << "A & B" << setw(width) << "A | B" << setw(width) << "A ^ B" << endl;
    for(int i = 0; i <= a; i++)
    {
        for(int j = 0; j <= a; j++)
        {
            cout << setw(width) << get_string_binary_value(i) << setw(width) << get_string_binary_value(j)
                 << setw(width) << get_string_binary_value(i & j) << setw(width) << get_string_binary_value(i | j)
                 << setw(width) << get_string_binary_value(i ^ j) << endl;
        }
    }
    return 0;
}
