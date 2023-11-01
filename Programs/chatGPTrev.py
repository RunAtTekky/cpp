def reverse_substring(s, a, b):
    return s[:a] + s[a:b+1][::-1] + s[b+1:]


t = int(input())

for _ in range(t):
    n, k = map(int, input().split())  
    s = input()  
    l = list(map(int, input().split()))  
    r = list(map(int, input().split()))  
    q = int(input())  
    modifications = list(map(int, input().split())) 


    for x in modifications:
        i = 0
        while i < k and l[i] <= x:
            i += 1
        
        a = min(x, r[i-1] + l[i-1] - x)
        b = max(x, r[i-1] + l[i-1] - x)
        s = reverse_substring(s, a-1, b-1)  

    print(s)

