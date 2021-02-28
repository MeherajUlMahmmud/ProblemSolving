def median(nums):
    if len(nums) % 2 == 0:
        return int(sum(nums[len(nums)//2 - 1:len(nums)//2 + 1]) / 2)
    else:
        return nums[len(nums)//2]



def quartiles(N,nums):
    Q1 = median(nums[:len(nums)//2])
#     Q2 = median(nums)
    if N%2 == 0:
        Q3 = median(nums[len(nums)//2:])
    else:
        Q3 = median(nums[len(nums)//2+1:])
    return Q1, Q3


n = int(input())
arr = [int(val) for val in input().split()]
frequency = [int(val) for val in input().split()]

data = []

for i in range(len(arr)):
    for j in range(frequency[i]):
        data.append(arr[i])

data.sort()

Q1, Q3 = quartiles(n, data)
print(round(Q3, 1) - round(Q1, 1) * 1.0)
