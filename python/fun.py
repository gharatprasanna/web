a=2
def my_function():
    b=a*a
    print(b)
    my_function()
    def percentage(tot):
        per=tot/500*100
        return per
        phy=86
        che=90
        math=80
        hindi=55
        eng=88
        tot=sum((phy,che,math,hindi,eng))
        result=percentage(tot)
        print("your total no is ",tot)
        print("your percentage is",round(result,2))

