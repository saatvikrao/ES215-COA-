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

long gettime(){
    struct timeval start;
    gettimeofday(&start, NULL);

    return start.tv_sec*1000000 + start.tv_usec;
}

int main() {
    long start = gettime();

    __int128 a = 0, b = 1;
    cout << a << " ";
    for (int i = 1; i <= 100; i++){
        cout << b << " ";
        __int128 t = a;
        a = b;
        b += t;
    }

    cout << "\n";

    long end = gettime();

    cout << end - start;

    return 0;
}
