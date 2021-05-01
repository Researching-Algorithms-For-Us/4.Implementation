'''
15:08 ~ 15:20
양의 정수가 주어져있을때 두수사이에 있는 정수를 모두 출력
input : 시작 과 끝점
out : N 두수 사이 개수
    : 간격 정수
1<=A,B<10^15

'''

def set_input():
    value = list(map(int, input().split()))
    return value

def main():
    value = set_input()
    
    # a = b있음
    # start가 무조건 작은거 아님

    start = min(value) 
    end = max(value)

    count = 0
    output = ''
    
    for idx in range(start + 1,end):
        output += str(idx) + ' '
        count += 1

    print(count)
    print(output)

if __name__ == '__main__':
    main()
    