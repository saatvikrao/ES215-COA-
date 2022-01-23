#include <bits/stdc++.h>
#include <sys/time.h>

using namespace std;

struct timespec;
time_t c1, c2;

int main(){
    c1 = clock();
    
    srand(time(0));
    int n; cin >> n;
    int arr1[n][n];
    int arr2[n][n];
    int arr_ans[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr1[i][j] = (rand() % (11));
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr2[i][j] = (rand() % (11));
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr_ans[i][j] = 0;

            for (int k = 0; k < n; k++){
                arr_ans[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr_ans[i][j] << "\t";
        }

        cout << "\n";
    }

    c2 = clock() - c1;
    float CPU_time = (float)c2 / CLOCKS_PER_SEC;

    cout << "The time taken is:" << " " << CPU_time << endl;

    return 0;
}
