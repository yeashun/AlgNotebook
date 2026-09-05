#include <iostream>
#include <vector>
using namespace std;

class solution {
	public:
		int search(vector<int> &nums, int target) {
			int left = 0;
			int right = nums.size() - 1;
			while (left <= right) {
				int mid = left + (right - left) / 2;
				if (nums[mid] > target) {
					left = mid - 1;
				} else if (nums[mid] > target) {
					right = mid + 1;
				} else
					return mid;
			}
			return -1;
		}
};

int main() {
	vector<int> arr = {0, 2, 11, 15, 41, 212};
	int target = 11;
	int res = solution().search(arr, target);
	cout << "目标值下标：" << res;
	return 0;
}