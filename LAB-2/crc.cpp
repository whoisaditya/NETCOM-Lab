// CRC Detection

#include <iostream>

using namespace std;

int main()
{
    // binary division
    int n;
    cout << "Enter a no. : ";
    cin >> n;

    // convert no. to binary
    int binary[32];
    int i = 0;
    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // binary division
    int count = 0;
    for (int j = 0; j < i; j++)
    {
        if (binary[j] == 1)
            count++;
    }

    // print binary no.
     
}
