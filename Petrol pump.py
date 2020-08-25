def calc_diff(a,n):
    s=(sum(a))
    dp=[[for i in range(s+1)] for j in range(n+1)]
    for i in range(n+1):
        dp[i][0]=True
    for j in range(1,s+1):
        dp[0][j]=False
    for i in range(1,n+1):
        for j in range(1,s+1):
            dp[i][j]=dp[i-1][j]
            if(a[i-1]<=j):
                dp[i][j]|=dp[i-1][j-a[i-1]]
    for j in range(s//2,-1,-1):
        if(dp[n][j]==True):
            diff=s-(2*j)
            break
    return diff
S=list(map(int,input().split()))
diff=calc_diff(S,len(S)-1)
min_p=(sum(S)-diff)/2
max_p=min_p+diff
print(int(max_p))
