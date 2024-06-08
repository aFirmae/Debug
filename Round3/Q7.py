res=[]
def main():
    size=int(input("Size= "))
    arr=[]
    print("Enter the element")
    even=False
    if size%2 != 0:
        res.append(-1)
        even=True
    for _ in range(size):
        arr.append(int(input()))
    j=0
    for i in range(1,size):                
        k=gcd(arr[i],arr[j])
        check(k,arr[j],arr)
        j+=1

    if even:
        res.pop()
        k=gcd(arr[size-1],arr[size-2])
        check(k,arr[size-2],arr)

def check(k,b,arr):
    if k == 1:
        res.append(arr.index(b))
    else:
        res.append(-1)
    
def gcd(a,b):
    if b==0: return a
    else:
        return gcd(b,a%b)

main()
print(res)
    