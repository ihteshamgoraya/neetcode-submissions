class Solution {
    hasDuplicate(nums) {
        let seen = new Set()
        for (let i=0; i < nums.length; i++) {
            if (seen.has(nums[i])) {
                return true
            }
            seen.add(nums[i]);
        }
        return false;
    }
}
let solution1 = new Solution()
console.log(solution1.hasDuplicate([1, 2, 3, 4, 5,6,7,7]))