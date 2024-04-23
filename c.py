def solve():
    n = int(input())
    a = [int(x) for x in input().split()]
    nums = [0 * N]

    maxi = max(a)
    
    vec = a
    for num in a:
        nums[num] += 1
    
    if min(a) == max(a):
        print(n)
        for i in range(n):
            print(i+1,i+1)
        return
    MEX = -1
    for i in range(0,maxi+1):
        if nums[i] == 0:
            MEX = i
            break
    
    if MEX == -1:
        print(-1)
        return
    
    for i in range(0,MEX):
        if nums[i]<2:
            print(-1)
            return
    
    st = {}
    
    fp = -1
    
    for i in range(0,n):
        if vec[i] < MEX:
            st[vec[i]] = 1
        if len(st) == MEX:
            fp = i
            break
        
    st2 = {}
    for i in range(fp+1, n):
        if vec[i] < MEX:
            st2[vec[i]] = 1
        if len(st2) == MEX:
            print(2)
            print(1, fp+1)
            print(fp+2, n)
            return
    
    print(-1)


t = int(input())
N = 100005

for _ in range(t):
    solve()
    
