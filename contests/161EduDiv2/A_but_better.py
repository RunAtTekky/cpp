def solve():

    n = int(input())
    a = input()
    b = input()
    c = input()

    for i in range(n):
        if c[i] not in (a[i],b[i]):
            print("YES")
            return
    print("NO")

t = int(input())
for _ in range(t):
    solve()
