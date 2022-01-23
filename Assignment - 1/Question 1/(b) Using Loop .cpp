#include <bits/stdc++.h>
#include <sys/time.h>

using namespace std;
typedef long long int ll;

std::ostream& 
operator<<( std::ostream& dest, __int128_t value ){
    std::ostream::sentry s( dest );
    if ( s ) {
        __uint128_t tmp = value < 0 ? -value : value;
        char buffer[ 128 ];
        char* d = std::end( buffer );
        do
        {
            -- d;
            *d = "0123456789"[ tmp % 10 ];
            tmp /= 10;
        } while ( tmp != 0 );
        if ( value < 0 ) {
            -- d;
            *d = '-';
        }
        int len = std::end( buffer ) - d;
        if ( dest.rdbuf()->sputn( d, len ) != len ) {
            dest.setstate( std::ios_base::badbit );
        }
    }
    return dest;
}

struct timespec;

time_t c1, c2;

int main() {
    c1 = clock();

    __int128 a = 0, b = 1;
    
    cout << a << " ";
    for (int i = 1; i <= 100; i++){
        cout << b << " ";

        __int128 temp = a;
        a = b;
        b += temp;
    }

    cout << endl;

    c2 = clock() - c1;
    float CPU_time = (float)c2 / CLOCKS_PER_SEC;
    cout << "The time taken by the program - B is: " << CPU_time<< endl;

    return 0;
}
