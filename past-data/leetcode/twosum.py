#!/usr/bin/python3
def twoSum(nums, target):
#         Ordenar
    nums.sort()
    n = len(nums)
    if n < 2:
        return [-1,-1]
    i = 0
    j = n-1
    while i < j:
        print('i: ',i ,', j: ',j)
        if nums[i] + nums[j] > target:
            j = j - 1
        elif nums[i] + nums[j] < target:
            i = i + 1
        else:
            return [i, j]
    return [-1, -1]
print(twoSum([2, 3, 4], 6))
