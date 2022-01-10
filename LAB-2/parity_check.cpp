// Check parity

#include <iostream>

using namespace std;

int main()
{
    // enter a no.
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

    // check parity
    int count = 0;
    for (int j = 0; j < i; j++)
    {
        if (binary[j] == 1)
            count++;
    }

    // print binary no.
    cout << "Binary no. : ";
    int j;
    for (j = 0; j < i; j++)
        cout << binary[j];

    cout << "*";

    cout << endl;

    if (count % 2 == 0)
        binary[j] = 0;
    else
        binary[j] = 1;

    i = i+1;

    // do you want to insert an error
    cout << "Press 1 to insert an error" << endl;
    int error;
    cin >> error;

    if (error == 1)
    {
        // enter the position of error
        int position;
        cout << "Enter the position of error : ";
        cin >> position;

        // insert an error
        cout << "Current Value : " << binary[position - 1] << endl;

        binary[position - 1] = 1 - binary[position - 1];

        cout << "Changed Value : " << binary[position - 1] << endl;
    }

    // print binary no.
    cout << "Binary no. : ";
    for (int j = 0; j < i; j++)
        cout << binary[j];

    cout << endl;

    // check parity
    count = 0;
    for (int j = 0; j < i; j++)
    {
        if (binary[j] == 1)
            count++;
    }

    // print result
    if (count % 2 != 0)
        cout << "Error Detected" << endl;

    return 0;
}