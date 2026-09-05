//#1-暴力解法

//#include <iostream>
//#include <vector>
//using namespace std;
//
//class solution {
//	public:
//		int remove(vector<int> &nums, int val) {
//			int size = nums.size();
//			for (int i = 0; i < size; i++) {
//				if (nums[i] == val) {
//					for (int j = i + 1; j < size; j++) {
//						nums[j - 1] = nums[j];
//					}
//					i--;
//					size--;
//				}
//			}
//			return size;
//		}
//
//};
//
//int main() {
//	vector<int> arr = {1, 2, 2, 4, 4, 2};
//	int val = 2;
//	int res_size = solution().remove(arr, val);
//	cout << "移除后数组长度：" << res_size;
//}


//#2-双指针解法
#include <iostream>
#include <vector>
using namespace std;

class solution {
	public:
		int remove(vector<int> &nums, int val) {
			int slow_index = 0;
			for (int fast_index = 0; fast_index < nums.size(); fast_index++) {
				if (nums[fast_index] != val) {
					nums[slow_index++] = nums[fast_index];
				}
			}
			return slow_index;
		}
};

int main() {
	vector<int> arr = {1, 2, 2, 4, 4, 2};
	int val = 2;
	int res_size = solution().remove(arr, val);
	cout << "移除后数组长度：" << res_size;
}