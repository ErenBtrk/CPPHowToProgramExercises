#include <iostream>

using namespace std;

int main(){
    int i = 1;
    int j = 2;
    int k = 3;
    int m = 2;
    cout << ( i == 1 ) << endl;
    cout << ( j == 3 ) << endl;
    cout << ( i >= 1 && j < 4 ) << endl;
    cout << ( m <= 99 && k < m ) << endl;
    cout << ( j >= i || k == m ) << endl;
    cout << ( k + m < j || 3 - j >= k ) << endl;
    cout << ( !m ) << endl;
    cout << ( !( j - m ) ) << endl;
    cout << ( !( k > m ) ) << endl;






    return 0;
}
