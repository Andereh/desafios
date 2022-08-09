#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int t;
    int coins;
    cin >> t;

    while (t--)
    {
        cin >> coins;
        cout << (coins % 2 == 0 ? "fist" : "second") << '\n';
    }
    return 0;
}
