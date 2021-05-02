#source code
'''
21:20~21:35
8x8
수평으로 두칸 이동한뒤 수직으로 한칸
수직으로 두칸 이동한뒤 수평으로 한칸
'''

def set_input():
    point = str(input())
    #roads.append(0)
    return point

def main():
    point = set_input()
    convert_list = ['a','b','c','d','e','f','g','h']
    x = int(convert_list.index(point[0]))
    y = int(point[1])-1 #ord('a') 로 쓸수 있다.
    point = (x,y)
    
    paths = [(-2,-1),(-2,1),(2,-1),(2,1),(-1,-2),(-1,2),(1,-2),(1,2)]
    count = 0

    for path in paths:
        result = (point[0] + path[0], point[1] + path[1])
        if not( ( result[0] < 0 or result[0] > 7 ) or ( result[1] < 0 or result[1] > 7 ) ):
            count += 1
        
    print(count)

if __name__ == '__main__':
    main()
    