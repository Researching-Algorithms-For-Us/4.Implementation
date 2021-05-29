
def set_input():
    value = int(input())
    return value

def main():
    number = set_input()
    star_map = [ [" "] * (4*number-3) for _ in range(4*number-3) ]

    def star(y,x):
        for i in range(y,x):
            star_map[y][i] = "*"
            star_map[i][y] = "*"
            star_map[x-1][i] = "*"
            star_map[i][x-1] = "*"
            
        if 0 < x <= (4*number-3):
            star(y+2,x-2)
    star(0,(4*number-3))

    for sm in star_map:
        print("".join(sm))
    
if __name__ == '__main__':
    main()

