#source code
'''
21:00~21:07
여행가 A는 NxN 크기의 정사각형 공간 위에 있다.
상하좌우로 이동할 수 있으며  시작좌표 (1,1)
'''

def set_input():
    size = int(input())
    walk = list(map(str,input().split()))
    #roads.append(0)
    return size, walk

def main():
    size, walk = set_input()

    x = 0
    y = 0

    for w in walk:
        if w == 'L':
            if x-1 > 0:
                x = x - 1
        if w == 'R':
            if x+1 <= size:
                x = x + 1
        if w == 'U':
            if y-1 > 0:
                y = y - 1
        if w == 'D':
            if y+1 <= size:
                y = y + 1    
    print(y+1,x+1)

if __name__ == '__main__':
    main()
    