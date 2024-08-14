#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Sol {
public:
    int median(vector<vector<int>> &matrix, int r, int c) {
        vector<int> lst;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                lst.push_back(matrix[i][j]);
            }
        }

        sort(lst.begin(), lst.end());

        return lst[(r * c) / 2];
    }
};

int main() {
    Sol obj;

    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5},
        {8, 9, 11, 12, 13},
        {21, 23, 25, 27, 29}
    };

    int r = matrix.size(), c = matrix[0].size();
    int ans = obj.median(matrix, r, c);

    cout << "The median element of the matrix is: " << ans << endl;
    return 0;
}
