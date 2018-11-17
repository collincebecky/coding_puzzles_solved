
def get_value(value):
    
    sumation=1
    for i in range(value):
        prod=5*i 
        sumation+=prod


    return sumation
def main():
    while 1:
        value=int(input("Enter polygon value : "))
        print("value of the polygon equals %s " % get_value(value))


if __name__ == '__main__':
    main()