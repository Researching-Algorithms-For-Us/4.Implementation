'''
14:30 -> 14:35

별찍기

'''
def set_input():
    size = int(input()) 
    return size

def main():
    size = set_input()
    for idx in range(size):
        value = 2*idx+1
        null = size-1-idx

        str_null = " "*null
        str_value = "*"*value
        print(str_null + str_value) #출력 형식이 잘못됨 -> ,안먹힘
    
        
if __name__ == '__main__':
    main()
    