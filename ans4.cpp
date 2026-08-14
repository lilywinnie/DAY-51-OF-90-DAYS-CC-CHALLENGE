#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;

        if (N % 2 == 0 || N >= 7) 
            cout << "YES\n";
            
        else 
            cout << "NO\n";
    }

    return 0;
}
