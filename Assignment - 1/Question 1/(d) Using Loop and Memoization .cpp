#include <bits/stdc++.h>
#include <sys/time.h>

using namespace std;
typedef long long ll;

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

__int128 arr[1000] = {0};

__int128 fib(__int128 n){
    if (n == 0){
        return 0;
    } else if (n == 1){
        return 1;
    } else if (arr[n] != 0){
        return arr[n];
    } else {
        __int128 i = 1, prev = 0, curr = 1;

        while (i < n + 1){
            while (arr[i] != 0){
                prev = arr[i - 1];
                curr = arr[i];
                i++;
            }

            __int128 temp = curr;
            curr += prev;
            arr[i] = curr;
            prev = temp;

            i++;
        }
        return curr;
    }
}

int main() {
    c1 = clock();

    arr[0] = 0;
    arr[1] = 1;

    for (__int128 i = 0; i <= 100; i++){
        cout << fib(i) << " ";
    }
    cout << "\n";

    c2 = clock() - c1;

    float CPU_time = (float)c2 / CLOCKS_PER_SEC;
    cout << "The time taken by the program - D is:" << " " << CPU_time << endl;

    return 0;
}
