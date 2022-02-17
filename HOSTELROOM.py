# cook your dish here
def solve():
    n,x = [int(xx) for xx in input().split()]
    l = [int(x) for x in input().split()]
    answer = x
    result = x
    for i in l:
        result+=i 
        answer = max(answer,result)
    print(answer)


t = 1
t = int(input())
for _ in range(t):
    solve()
