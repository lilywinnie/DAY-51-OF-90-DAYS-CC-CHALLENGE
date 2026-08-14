#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;

    while (T--)
    {
        int Z, Y, A, B, C;
        cin >> Z >> Y >> A >> B >> C;

        int remaining_money = Z - Y;
        int total_cost = A + B + C;

        if (remaining_money >= total_cost) 
            cout << "YES\n";
        
        else 
            cout << "NO\n";
        
    }

    return 0;
}
