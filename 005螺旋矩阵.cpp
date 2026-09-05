#include <iostrceam>
#include <vector>

class Solution {
	public:
		vector<vector<int>> generateMatrix(int) {
			vector<vector<int>> res(n, vector<int>(n, 0));
			int startx = 0, starty = 0;
			int loop = n / 2;
			int mid = n / 2;
			int count = 1;
			int offset = 1;
			int i, j;
			while (loop--) {
				i = startx;
				j = starty;
				for (j = 1; j < n - offset; j++) {
					res[i][j] = count++;
				}
				for (i = 1; i < n - offset; i++) {
					res[i][j] = count++;
				}
				for (; j > startx; j--) {
					res[i][j] = count++;
				}
				for (; i > starty; i--) {
					res[i][j] = count++;
				}
				offset++;
				startx++;
				starty++;
			}
			if (n % 2 == 1) {
				res[mid][mid] = count;
			}
			return res;
		}
};