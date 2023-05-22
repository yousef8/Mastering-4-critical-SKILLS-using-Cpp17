/*
 * 16_grid_sum.cpp
 *
 *  Created on: Jan 24, 2023
 *      Author: eastking
 */
#include <iostream>

using namespace std;

int grid_sum(int grid[][3], int r, int c, int ROWS, int COLS) {
	if (r >= ROWS || c >= COLS)
		return 0;
	int dr[3] { 1, 0, 1 };
	int dc[3] { 0, 1, 1 };
	int p { 0 }, v {-1};

	for (int i = 0; i < 3; i++) {
		int nr = r + dr[i];
		int nc = c + dc[i];

		if (nr >= ROWS || nc >= COLS)
			continue;

		if (v > grid[nr][nc])
			continue;
		v = grid[nr][nc];
		p = i;
	}

	return grid[r][c] + grid_sum(grid, r+dr[p], c+dc[p], ROWS, COLS);
}

int main() {
	int grid[3][3] { { 1, 7, 8 }, { 2, 10, 11 }, { 20, 5, 9 } };

	cout << grid_sum(grid, 0, 0, 3, 3) << endl;

	return 0;

}

