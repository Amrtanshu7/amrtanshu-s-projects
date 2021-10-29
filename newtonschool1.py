string=str(input("enter the string:"))
list1=list(string)
list2=list(reversed(list1))
count=[]
for i in range(len(list1)):
    if(list1[i]!=list2[i]):
        x=list1[i]
        list1[i]=list2[i]
        temp=list(reversed(list1))
        if(temp==list1):
            t="".join(list1)
            count.append(t)
        list1[i]=x
print(count)
print(len(set(count)))



