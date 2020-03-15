#include <vector>

struct Matrix{
    std::vector<float> matrix_values;
    int n_rows, n_cols;

    Matrix(int a, int b){
        n_rows = a;
        n_cols = b;
    }

    void fill(float a){
        matrix_values.assign(n_rows*n_cols, a);
    }

    
};