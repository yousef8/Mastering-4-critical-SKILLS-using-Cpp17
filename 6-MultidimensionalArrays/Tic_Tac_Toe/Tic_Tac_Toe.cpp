//============================================================================
// Name        : Tic_Tac_Toe.cpp
// Author      : Yousef Elsayed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int N;
	cout << "Enter the size of the matrix (3 <= N <= 9): ";
	cin >> N;
	int COLS { N }, ROWS { N };

	char matrix[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			matrix[i][j] = '.';

	char player;

	bool is_o_turn { 0 }, is_x_turn { 1 }, is_win_case { 0 }, is_win { 0 };

	while (!is_win) {
		if (is_x_turn) {
			player = 'x';
			is_o_turn = 1;
			is_x_turn = 0;
		} else {
			player = 'o';
			is_o_turn = 0;
			is_x_turn = 1;
		}

		int row, col;
		bool is_in_range = 0;
		bool is_available = 0;

		for (int r = 0; r < ROWS; r++) {
			for (int c = 0; c < COLS; c++) {
				cout << matrix[r][c] << " ";
			}
			cout << endl;
		}

		while (!is_in_range && !is_available) {
			cout << "player " << player << " turn. "
					<< "Enter empty location (r, c): ";
			cin >> row >> col;

			row = row - 1;
			col = col - 1;

			if (row < ROWS && col < COLS)
				is_in_range = 1;

			if (matrix[row][col] == '.')
				is_available = 1;

			if (!is_in_range && !is_available)
				cout << "Invalid Input. Try Again" << endl;
		}

		matrix[row][col] = player;

		bool is_horizental { 0 }, is_vertical { 0 }, is_diagonal { 0 };

		// Check Horizental
		int hz_cnt = 0;
		for (int j = 0; j < COLS; j++) {
			if (matrix[row][j] == player)
				hz_cnt++;
		}
		if (hz_cnt == COLS)
			is_horizental = 1;

		// Check Vertical
		int v_cnt = 0;
		for (int i = 0; i < ROWS; i++) {
			if (matrix[i][col] == player)
				v_cnt++;
		}
		if (v_cnt == ROWS)
			is_vertical = 1;

		// Check Diagonal

		if (!is_diagonal) {
			// top left corner
			int cnt = 0;
			for (int i = 0, j = 0; i < ROWS; i++, j++) {
				if (matrix[i][j] == player) {
					cnt++;
				}
			}
			if (cnt == COLS)
				is_diagonal = 1;
		} else if (!is_diagonal) {
			// top right corner
			int cnt = 0;
			for (int i = 0, j = COLS - 1; i < ROWS; i++, j--) {
				if (matrix[i][j] == player) {
					cnt++;
				}
			}
			if (cnt == COLS)
				is_diagonal = 1;
		} else if (!is_diagonal) {
			// LOWER LEFT CORNER
			int cnt = 0;
			for (int i = ROWS - 1, j = 0; i >= 0; i--, j++) {
				if (matrix[i][j] == player) {
					cnt++;
				}
			}
			if (cnt == COLS)
				is_diagonal = 1;
		} else if (!is_diagonal) {
			// LOWER RIGHT CORNER
			int cnt = 0;
			for (int i = ROWS - 1, j = COLS - 1; i >= 0; i--, j++) {
				if (matrix[i][j] == player) {
					cnt++;
				}
			}
			if (cnt == COLS)
				is_diagonal = 1;
		}

		if (is_horizental || is_vertical || is_diagonal) {
			is_win = 1;
			break;
		}

	}

	for (int r = 0; r < ROWS; r++) {
		for (int c = 0; c < COLS; c++) {
			cout << matrix[r][c] << " ";
		}
		cout << endl;
	}

	cout << "Player " << player << " Wins" << endl;

	return 0;

}
