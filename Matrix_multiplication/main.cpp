#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>


using namespace std;

int main()
{
    size_t m;
    size_t n;
    size_t k;
    size_t t;
    int a;
    srand(time(nullptr));
    cin >> a;
    switch (a)
    {
    case 1:{

        cout << "matrix size 1" << endl;
        cin >> m >> n;
        cout << "matrix size 2" << endl;
        cin >> k >> t;
        if (n != k){
            cout << "n != k";
            return 0;
        }

        vector<vector<int>> A(m, vector<int>(n));
        for (size_t i = 0; i < A.size(); ++i) {
            for (size_t j = 0; j < A[i].size(); ++j) {
                cin >> A[i][j];
            }
        }
        vector<vector<int>> B(k, vector<int>(t));
        for (size_t i = 0; i < B.size(); ++i) {
            for (size_t j = 0; j < B[i].size(); ++j) {
                cin >> B[i][j];
            }
        }
        vector<vector<int>> C(m, vector<int>(t));
        for (size_t i = 0; i < C.size(); ++i) {
            for (size_t j = 0; j < C[i].size(); ++j) {
                for (size_t u = 0; u < n; ++u){
                    C[i][j]+=A[i][u]*B[u][j];
                }
            }
        }
        for (auto arr : C) {
            for (auto element : arr) {
                cout << element << " ";
            }
            cout << endl;
        }
    }
        break;
    case 2:{
        cout << "matrix size 1" << endl;
        cin >> m >> n;
        cout << "matrix size 2" << endl;
        cin >> k >> t;
        if (n != k){
            cout << "n != k";
            return 0;}
        int max;
        int min;
        cin >> max >> min;
        vector<vector<int>> A(m, vector<int>(n));
        for (size_t i = 0; i < A.size(); ++i) {
            for (size_t j = 0; j < A[i].size(); ++j) {
                A[i][j] = min + rand() % (max - min);
            }
        }
        vector<vector<int>> B(k, vector<int>(t));
        for (size_t i = 0; i < B.size(); ++i) {
            for (size_t j = 0; j < B[i].size(); ++j) {
                B[i][j] = min + rand() % (max - min);
            }
        }
        vector<vector<int>> C(m, vector<int>(t));
        for (size_t i = 0; i < C.size(); ++i) {
            for (size_t j = 0; j < C[i].size(); ++j) {
                for (size_t u = 0; u < n; ++u){
                    C[i][j]+=A[i][u]*B[u][j];
                }
            }
        }
        for (auto arr : C) {
            for (auto element : arr) {
                cout << element << " ";
            }
            cout << endl;

        }

    }
        break;
    }
    return 0;
}
