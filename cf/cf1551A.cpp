/**
 * @file cf1551A.cpp
 * @author ondhokar
 * @brief 
 * @version 0.1
 * @date 2022-01-04
 * 
 */
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    double c1, c2;
    int n;
    while(t--) {
        cin >> n;
        c2 = ceil(2*n/3.0);
        
        if((int(c2))%2==0) {
            c2 = 0.5*c2;
            c1 = floor(n/3.0);
        }
        else {
            c2 = .5*(c2-1);
            c1 = ceil(n/3.0);
        }

        cout << int(c1) << " " << int(c2) << endl;



    }
    return 0;
}