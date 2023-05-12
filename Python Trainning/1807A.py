Tcase = int(input())
for case in range(Tcase):
    a, b, c = map(int, input().split())
    if a + b == c :
        print("+")
    else:
        print("-")