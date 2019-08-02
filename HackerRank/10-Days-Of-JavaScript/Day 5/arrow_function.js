/*
 * Modify and return the array so that all even elements are doubled and all odd elements are tripled.
 *
 * Parameter(s):
 * nums: An array of numbers.
 */
function modifyArray(nums) {
    nums.forEach((number, index) => {
        if (number % 2 === 0) {
            nums[index] *= 2;
        } else {
            nums[index] *= 3;
        }
    });
    return nums;
}