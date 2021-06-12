def set_input():
    first_col, first_row = map(int, input().split())
    first = []
    for _ in range(first_col):
        first.append(list(map(int,input().split())))

    second_col, second_row = map(int, input().split())
    second = []
    for _ in range(second_col):
        second.append(list(map(int,input().split())))
    
    return first, first_col, first_row, second, second_col, second_row

def main():
    first, first_col, first_row, second, second_col, second_row = set_input()

    result = []
    for i in range(first_col):
        tmp = []
            
        for j in range(second_row):
            value_sum = 0
            for k in range(second_col):
                value_sum = value_sum + first[i][k]*second[k][j]
            tmp.append(value_sum)
            #print(value_sum, end=" ")
        result.append(tmp)
        #print()
    for col in result:
        print(' '.join(str(v) for v in col))

if __name__ == '__main__':
    main()

