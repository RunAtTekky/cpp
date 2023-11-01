def solve() :
    
    n,m = [int(x) for x in input().split()]
    first = input()
    second = input()
    cnt = 0
    
    while (n<=2*m and second not in first):
        first = first + first
        n = 2*n
        cnt += 1
    if second in first:
        print(cnt)
        return
    first = first + first
    if second in first:
        print(cnt+1)
    else:
        print(-1)


t = int(input())

while t>0:
    solve()
    t -= 1