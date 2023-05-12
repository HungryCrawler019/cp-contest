Tcase = int(input())
for ncase in range(Tcase):
    n = int(input())
    x = list(map(int, input().split()))
    sum = 0
    for i in range(n):
        if x[i] % 2 == 0:
            sum += x[i]
        else:
            sum -= x[i]
    if sum > 0:
        print("YES")
    else:
        print("NO")