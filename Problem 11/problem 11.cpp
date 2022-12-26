#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

int get_max_product(vector<vector<int>> grid, int rows, int cols) {
    int max_product = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Check the product of the numbers to the right
            if (j < cols - 3) {
                max_product = max(max_product, grid[i][j] * grid[i][j + 1] * grid[i][j + 2] * grid[i][j + 3]);
            }

            // Check the product of the numbers below
            if (i < rows - 3) {
                max_product = max(max_product, grid[i][j] * grid[i + 1][j] * grid[i + 2][j] * grid[i + 3][j]);
            }

            // Check the product of the numbers to the lower-right
            if (i < rows - 3 && j < cols - 3) {
                max_product = max(max_product, grid[i][j] * grid[i + 1][j + 1] * grid[i + 2][j + 2] * grid[i + 3][j + 3]);
            }

            // Check the product of the numbers to the lower-left
            if (i < rows - 3 && j >= 3) {
                max_product = max(max_product, grid[i][j] * grid[i + 1][j - 1] * grid[i + 2][j - 2] * grid[i + 3][j - 3]);
            }
        }
    }

    return max_product;
}

int main() {
    ifstream my_file("./input.txt");
    string line;
    vector<vector<int>> grid;

    while (getline(my_file, line)) {
        vector<int> temp_v;
        istringstream iss(line);

        string number;
        while (iss >> number) {
            temp_v.push_back(stoi(number));
        }

        grid.push_back(temp_v);

    }

    my_file.close();


    cout << get_max_product(grid, 20, 20) << endl;

}
