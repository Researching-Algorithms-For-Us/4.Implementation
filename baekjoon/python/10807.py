'''
15:22 ~ 15:27

n개의 정수가 주었을때 정수 v가 몇개인지
1 <= N <= 100

input : size
      : numbers ...
      : search

output : count

11
1 4 1 2 4 2 4 2 3 4 4
2

'''

def set_input():

    size = input()
    numbers = list(map(int, input().split()))
    search = int(input())    
    return size, numbers, search

def main():
    size, numbers, search = set_input()
    #set, count
    output = numbers.count(search)
    print(output)

if __name__ == '__main__':
    main()
    