
def DisplayPattern(iNo):

    if iNo < 0 :
        iNo = -iNo

    for x in range (iNo):
        print("$\t*",end="\t")
    print()

def main():

    iValue = int(input("Enter Number\n"))

    DisplayPattern(iValue)

if __name__ == "__main__":
    main()