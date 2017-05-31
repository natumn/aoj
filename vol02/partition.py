def partition(A, p, r):
   x = A[r]
   i = p-1
   for j in range(p, r):
      if A[j] <= x:
         i = i+1
         A[i],A[j] = A[j],A[i]
   A[i+1],A[r] = A[r],A[i+1]
   return i+1

r = int(input())
A = list(map(int, input().split()))
p = partition(A, 0, r-1)
A = list(map(str, A))
A[p] = "[%s]"%(A[p])
print(" ".join(A))
