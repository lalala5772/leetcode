#include <vector>
#include <unordered_map>
using namespace std;

//기존엔 브루트포스로 진행했지만, 회적화를 위해 해시테이블을 활용
//시간 복잡도: 브루트포스 O(n^2)에서 해시테이블을 활용하여 O(n) 로 줄일 수 있음
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> indices;

       for(int i=0;i<nums.size();i++){
        int complement = target - nums[i];

        //초기화 값으로 자료형을 추측하여 할당해주는 키워드 auto
        auto it = indices.find(complement); 
        //find()는 complement라는 키를 검색
        //값을 찾으면 해당 키와 값이 들어 있는 위치를 가리키는 반복자(iterator)를 반환
        //찾지 못하면 indices.end()를 반환

        if(it != indices.end()){
            return {it -> second, i};
        }
        indices[nums[i]] = i;
       }

        return {};
    }
};
