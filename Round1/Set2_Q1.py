#Set-2 Question 1

def max_element_index(arr):
        max_ele=max(arr)
        return arr.index(max_ele)

def find_score():
    n=int(input("Enter Size "))
    arr=[]
    print("Enter the Element")
    for _ in range(n):
        arr.append(int(input()))
    k=int(input("Enter the Value of k "))
    sum=0
    for i in range(k):
        max_ele_index=max_element_index(arr)
        m=arr.pop(max_ele_index)
        sum+=m
        arr.append(m+1)
    return sum     

def main():
    print(find_score())

    


if __name__== "__main__":
    main()