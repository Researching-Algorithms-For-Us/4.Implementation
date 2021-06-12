'''
# A^4 = A^2 A^2
# A^5 = A^2 A^2 A
# A^2n = A^n A^n
'''
def set_input():
    size, multify = map(int, input().split())
    array = []
    for _ in range(size):
        array.append(list(map(int,input().split())))

    return array, size, multify

def main():
    array, size, multify = set_input()
    
    def cal(size, array_a, array_b):
        result = []
        for i in range(size):
            tmp = []
                
            for j in range(size):
                value_sum = 0
                for k in range(size):
                    value_sum = value_sum + array_a[i][k]*array_b[k][j]
                tmp.append(value_sum % 1000)
                #print(value_sum, end=" ")
            result.append(tmp)
        return result

    result = [ [1 if c==r else 0 for c in range(size)] for r in range(size) ]

    while multify != 1:
        copy_array = array.copy()
        if multify % 2:
            result = cal(size,result,array)
            multify = multify - 1
        else:
            array = cal(size,copy_array,copy_array)
            multify = multify // 2

    result = cal(size,result,array)
    
    for col in result:
        print(' '.join(str(v) for v in col))

if __name__ == '__main__':
    main()

