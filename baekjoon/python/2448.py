
def set_input():
    number = int(input())
    return number

def main():
    number = set_input()
    star_map = [ [" "] * 2 * number for _ in range(number)]
    
    def star(y,x,n):
        if n == 3:
            #1
            star_map[y][x] = '*'
            #2
            star_map[y+1][x-1] = '*'
            star_map[y+1][x+1] = '*'
            #3
            star_map[y+2][x-2] = '*'
            star_map[y+2][x-1] = '*'
            star_map[y+2][x] = '*'
            star_map[y+2][x+1] = '*'
            star_map[y+2][x+2] = '*'
        else:
            next = n//2
            star(y,x,next)
            star(y+next,x-next,next)
            star(y+next,x+next,next)

    old = number-1
    star(0,old,number)

    for m in star_map:
        print("".join(m))
        
if __name__ == '__main__':
    main()

