#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M ;
    double** matrix = new double*[N];
    for (int i = 0; i < N; ++i)
        matrix[i] = new double[M];

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }


    double maxis = numeric_limits<double>::min();
    double minis = numeric_limits<double>::max();


    for (int i = 0; i < N; ++i) {
        int r = -1;
        int c = -1;
        for (int j = 0; j < M; ++j)
        {
            if (matrix[i][j] > maxis)
            {
                maxis = matrix[i][j];
                c = i;
                r = j;
            }
        }

        for (int j = 0; j < N; ++j)
        {
            if (matrix[j][r] < minis)
            {
                minis = matrix[j][r];
            }
        }

        if (maxis==minis && c>=0 && r>=0)
        {
            cout << c << " " << r << endl;
        }
    }



    return 0;
}
