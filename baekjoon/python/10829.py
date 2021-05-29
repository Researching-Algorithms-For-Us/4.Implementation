from collections import deque

def set_input():
    value = int(input())
    return value

def main():
    number = set_input()
    #
    #print(str(bin(number))[2:])
    bin_list = deque()
    def bins(number):

        quotient = number // 2
        remainder = number % 2
        
        bin_list.appendleft(str(remainder))

        if number == 1:
            return 
        bins(quotient)
        
    bins(number)
    print("".join(bin_list))

if __name__ == '__main__':
    main()

