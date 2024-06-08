def find(a):
    arr=[]
    for i in range(a):
        arr.append(1)
    cal(arr,a)

def cal(arr,a):
    if len(arr) == 1:
        return
    print(arr)
    for i in range(len(arr)-1,-1,-1):
        arr[i]+=1
        if sum(arr) > a:
            arr.pop(i)
        if sum(arr) == a:
            break
    cal(arr,a)


def main():
    target=int(input("Target= "))
    find(target)

if __name__=="__main__":
    main()