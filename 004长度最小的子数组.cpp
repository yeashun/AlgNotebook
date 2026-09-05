//1-暴力


//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//	public:
//		int minSubArrayLen(vector<int> &nums, int s) {
//			int result = INT32_MAX;
//			int sum = 0;
//			int sublength = 0;
//			for (int i = 0; i < nums.size(); i++) {
//				sum = 0;
//				for (int j = i; j < nums.size(); j++) {
//					sum += nums[j];
//					if (sum >= s) {
//						sublength = j - i + 1;
//						result = result < sublength ? result : sublength;
//						break;
//					}
//				}
//			}
//			return result == INT32_MAX ? 0 : result;
//		}
//};
//
//int main() {
//	vector<int> nums = {2, 3, 1, 2, 4, 3};
//	int s = 7;
//	int result = INT32_MAX;
//	result = Solution().minSubArrayLen(nums, s);
//	cout << "最小长度：" << result;
//}

//2-滑动窗口
#include <iostream>
#include <vector>
using namespace std;

class Solution {
	public:
		int minSubArrayLen(vector<int> &nums, int s) {
			int sum = 0;
			int result = INT32_MAX;
			int i = 0;
			int sublength = 0;
			for (int j = 0; j < nums.size(); j++) {
				sum += nums[j];
				while (sum >= s) {
					sublength = j - i + 1;
					result = result < sublength ? result : sublength;
					sum -= nums[i++];
				}
			}
			return result == INT32_MAX ? 0 : result;
		}

};

int main() {
	vector<int> nums = {2, 3, 3, 1, 5, 3};
	int s = 7;
	int result = INT32_MAX;
	result = Solution().minSubArrayLen(nums, s);
	cout << "最小长度：" << result;
}