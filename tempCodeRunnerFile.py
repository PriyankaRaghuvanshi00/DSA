str="space remove"
ans=""
cnt=0;
for i in str:
   if i==' ':
      cnt+=1;
      continue;
   ans=ans+i;

for i in range(0,cnt):
   ans='_'+ans;
print("\n");
print("after moving space to front (_ represented as space) ",ans);
print("\n");