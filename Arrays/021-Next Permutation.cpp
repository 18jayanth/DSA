class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(); // size of the array.

    // Step 1: Find the break point:
    int ind = -1; // break point
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            // index i is the break point
            ind = i;
            break;
        }
    }

    // If break point does not exist:
    if (ind == -1) {
        // reverse the whole array:
        reverse(nums.begin(), nums.end());
        
    }

    // Step 2: Find the next greater element
    //         and swap it with arr[ind]:
    else{
    for (int i = n - 1; i > ind; i--) {
        if (nums[i] > nums[ind]) {
            swap(nums[i], nums[ind]);
            break;
        }
    }

    // Step 3: reverse the right half:
    reverse(nums.begin() + ind + 1, nums.end());

    }
    }
};
//method-2  stl method
next_permutation(arr.begin(),arr.end())
