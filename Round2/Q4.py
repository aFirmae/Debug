def  main():
    m=int(input("Code= "))
    price=1
    while int(m)>0:
        x=m%10
        price*=int(x)
        m=m/10

    print(price)
if __name__=="__main__":
    main()