using namespace std;

class NumArray {
    public:
        NumArray(vector<int> &nums) {
            int sum = 0;
            runningSums.push_back(sum);
            for (int i = 0; i < nums.size(); i++) {
                sum += nums[i];
                runningSums.push_back(sum);
            }
        }

        int sumRange(int i, int j) {
            return runningSums[j+1] - runningSums[i];
        }

    private:
        vector<int> runningSums;
};

