#include<gtest/gtest.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_subarray_sum(vector<int>& nums) {
	int n = nums.size();
	int max_sum = 0;
	int current_sum = 0;
	for (int i = 0; i < n; i++) {
		current_sum += nums[i];

		if (current_sum < 0) {
			current_sum = 0;
		}

		max_sum = max(max_sum, current_sum);
	}

	return max_sum;
}

//测试用例
TEST(ADDtest, test1) {
	vector<int> nums = {-2,11,-4,13,-5,-2};
	int result=max_subarray_sum(nums);
	EXPECT_EQ(result, 20);
}
TEST(ADDtest, test2) {
	vector<int> nums = { -5,3,2,4 };
	int result = max_subarray_sum(nums);
	EXPECT_EQ(result, 8);
}
TEST(ADDtest, test3) {
	vector<int> nums = { -2,4,7,4};
	int result = max_subarray_sum(nums);
	EXPECT_EQ(result, 10);
}
TEST(ADDtest, test4) {
	vector<int> nums = { -10,-5,-8,11,21,-2,9 };
	int result = max_subarray_sum(nums);
	EXPECT_EQ(result, 11113);
}
int main(int argc,char**argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
