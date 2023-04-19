#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int islandPerimeter(vector<vector<int>> &grid)
{

    int row = grid.size();
    int col = grid[0].size();
    int perimeter = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (grid[i][j] == 1)
            {
                if (j == 0 || (j != 0 && grid[i][j - 1] == 0))
                {
                    perimeter++;
                }
                if (i == 0 || (i != 0 && grid[i - 1][j] == 0))
                {
                    perimeter++;
                }
                if (j == col - 1 || (j != col - 1 && grid[i][j + 1] == 0))
                {
                    perimeter++;
                }
                if (i == row - 1 || (i != row - 1 && grid[i + 1][j] == 0))
                {
                    perimeter++;
                }
            }
        }
    }
    return perimeter;
}

int main()
{
    int rows = 0, cols = 0;
    vector<vector<int>> grid;
    cout << "Rows: " << endl;
    cin >> rows;
    cout << "Cols: " << endl;
    cin >> cols;

    for (int i = 0; i < rows; i++)
    {
        cout << "row " << i << endl;
        vector<int> v;
        for (int j = 0; j < cols; j++)
        {
            int num = 0;

            cin >> num;
            v.push_back(num);
        }
        grid.push_back(v);
    }

    cout << islandPerimeter(grid);
}