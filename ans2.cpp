#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int L, B;
    cin >> L >> B;

    int area = L * B;
    int peri = 2 * (L + B);

    if (area > peri) 
        cout << "Area\n" << area << "\n";
    
    else if (peri > area) 
        cout << "Peri\n" << peri << "\n";
    
    else 
        cout << "Eq\n" << area << "\n";
    
    return 0;
}

