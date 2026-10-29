#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
         return {}; //list initialization으로 인해 가능한 리턴방식
         //사실상 return vector<int>{i, j};와 동일함
    }
};
