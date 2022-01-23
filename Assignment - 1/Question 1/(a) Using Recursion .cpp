#include <bits/stdc++.h>
#include <sys/time.h>

using namespace std;
typedef long long ll;

std::ostream&
operator<<( std::ostream& dest, __int128_t value )
{
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

time_t c1;
time_t c2;

__int128 fib(__int128 n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main(){
    c1 = clock();

    for (int i = 0; i < 40; i++){
        cout << i + 1 << " " << fib(i);
        cout << "\n";
    }

    c2 = clock() - c1;
    float CPU_time = (float)c2 / CLOCKS_PER_SEC;

    cout << "The time taken by program - A is: " << CPU_time << "\n";

    return 0;
}
