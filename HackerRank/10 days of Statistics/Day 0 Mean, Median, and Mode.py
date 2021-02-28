n = int(input())
numbers = [int(val) for val in input().split()]
numbers.sort()

# mean
mean = sum(numbers) / n

# median
if n % 2 == 0:
    median = (numbers[n//2 - 1] + numbers[n//2]) / 2
else:
    median = numbers[n//2 - 1] / 2

# mode
maxCount = 0
for i in range(n):
    count = 0
    for j in range(n):
        if numbers[i] == numbers[j]:
            count += 1
        
        if count > maxCount:
            maxCount = count
            mode = numbers[i]

print(mean)
print(median)
print(mode)
