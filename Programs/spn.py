def solve():
  a,b,c = [int(x) for x in input().split()]
  if a < b and b < c:
    print("STAIR")
  elif a < b and b > c:
    print("PEAK")
  else:
    print("NONE")

t = int(input())
for _ in range(t):
  solve()
