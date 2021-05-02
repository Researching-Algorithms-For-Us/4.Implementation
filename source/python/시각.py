#source code
'''
21:08~21:17
정수 N입력 00:00:00 ~ N:59:59초
3이하나라도 포함되는 모든 경우의수를 작성하시오
'''

def set_input():
    clock = int(input())
    #roads.append(0)
    return clock

def main():
    clock = set_input()
    count = 0
    for hour in range(clock+1):
        for minute in range(60):
            for second in range(60):
                time = f'{hour}:{minute}:{second}'
                if '3' in time:
                    count += 1
    

if __name__ == '__main__':
    main()
    