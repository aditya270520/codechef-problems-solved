# cook your dish here
n = 100000
pre_computed_values = [0] * (n+1)
for c in range(1, n//2+1):
    for b in range(c, n+1, c):
        if b%c == 0:
            for a in range(c, n+1, b):
                if a%b == c:
                    if a > b:
                        pre_computed_values[a] +=1 
                    else:
                        pre_computed_values[b] +=1 
                        
testcases = int(input())
for t in range(testcases):
    n = int(input())
    print(sum(pre_computed_values[:n+1]))