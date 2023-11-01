def rev(s,a,b):
    while a<b:
        temp = s[a]
        s[a] = s[b]
        s[b] = temp
        a += 1
        b -= 1
t = int(input())
while t > 0:
    n,k = [int(i) for i in input().split()]
    s = input()
    sV = []
    sV = [ch for ch in s]
    l = []
    l = [int(i) for i in input().split()]
    r = []
    r = [int(i) for i in input().split()]

    q = int(input())
    qV = []
    qV = [int(i) for i in input().split()]

    i=0
    while i<k:
        a = qV[i]
        b = l[i] + r[i] - qV[i]
        rev(sV,a,b)

        i = i+1
    
    for ch in sV:
        print(ch, end='')
    print()




    t = t-1