n=int(input())
sum=0

for i in range (0,n):
	num=int(input())
	sum+=num
    
res=int(str(sum)[:10])
print (res)
