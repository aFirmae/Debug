def main():
    n=int(input("Size= "))
    arr=[]
    print("Enter array")
    for _ in range(n):
        arr.append(int(input()))
    
    out=[]
    max=0
    for i in range(n):
        sum=arr[i]
        out.append(arr[i])
        for j in range(i+1,n):
            sum+=arr[j]
            out.append(arr[j])

        if sum==0:
            break
        else:
            out.clear()
    print(out)

if __name__=="__main__":
    main()