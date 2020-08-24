t=int(input())
while(t!=0):
    n=int(input())
    monkey=list(map(int,input().split()))
    steps=set()
    monkey.insert(0,0)
    for i in range(1,n+1):
        if(monkey[i]==0):
            continue
        count=0
        current=i
        block=i
        while(True):
            current=monkey[current]
            monkey[block]=0
            block=current
            count+=1
            if(current==i):
                break
        steps.add(count)
        
    if(len(steps)==1):
        for x in steps:
            print(x)
    else:
        print("LCM of steps")
    t-=1
