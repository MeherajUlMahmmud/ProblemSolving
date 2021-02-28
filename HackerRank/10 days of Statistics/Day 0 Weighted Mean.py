n = int(input())

arr = [int(val) for val in input().split()]
weights = [int(val) for val in input().split()]

numerator = 0
denominator = 0

for i in range(n):
    numerator += arr[i] * weights[i]
    
denominator = sum(weights)

weighted_mean = numerator / denominator
print(round(weighted_mean, 1))
