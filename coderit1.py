t=int(input())
for i in range(t):
    list1=list(map(int,input().split()))
    n=list1[0]
    k=list1[1]
    listn=list(map(int,input().split()))
    listb=[]
    for i in range(len(listn)):
        for j in range(i+1,len(listn)):
            if(abs(listn[i]-listn[j])%k==0):
                listb.append(listn[i])
        s=list(set(listb))
        print(s)

