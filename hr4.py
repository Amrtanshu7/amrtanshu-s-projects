np=list(map(int,input().split()))
p=np[1]
A=list(map(int,input().split()))
if p==0:
    print(0)
else:
    f=1
    flag=0
    while(flag==0):
        for i in range(len(A)):
            A[i]=A[i]*f
        
        list1=[(A[i]-p) for i in range(len(A)) if ((A[i]-p)>=0)]
        print(list1)
        if len(list1)!=0:
            print(min(list1))
            flag=1
        else:
            f=f+1   

