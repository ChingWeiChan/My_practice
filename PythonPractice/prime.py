# -*- coding: utf-8 -*-
total=0
max=input("Please input the maxium:") #maxium
for i in range(2,int(max)):
   for j in range(2,i):
       if(i%j==0):break
   else:
       Maxnum=i
       total+=1
       print(i)

print("Total:"+str(total)+'\n'+'The Max Prime in Maxium is:'+str(Maxnum))