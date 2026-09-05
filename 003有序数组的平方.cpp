////1-±©Á¦


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//	public:
//		vector<int> sortedSquares(vector<int> &A) {
//			for (int i = 0; i < A.size(); i++) {
//				A[i] *= A[i];
//			}
//			sort(A.begin(), A.end());
//			return A;
//		}
//};
//
//int main() {
//	vector<int> A = {-4, -2, 0, 11, 29};
//	Solution().sortedSquares(A);
//	for (int j = 0; j < A.size(); j++) {
//		cout << A[j] << endl;
//	}
//}


//2-Ë«Ö¸Õë·¨
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
	public:
		vector<int> sortedsquared(vector<int> &A) {
			int n = A.size();
			vector<int> res(n);
			int l = 0;
			int r = n - 1;
			int k = n - 1;
			while (l <= r) {
				if (abs(A[l]) > abs(A[r])) {
					res[k--] = A[l] * A[l];
					l++;
				} else {
					res[k--] = A[r] * A[r];
					r--;

				}

			}
			return res;
		}
};

int main() {
	vector<int> A = {-100, -9, -4, -2, 0, 11, 29};
	vector<int> res = Solution().sortedsquared(A);
	for (int j = 0; j < res.size(); j++) {
		cout << res[j] << endl;
	}
}


