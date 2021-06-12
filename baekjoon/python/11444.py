'''
# 백준 공식 사이트 참고 : https://www.acmicpc.net/blog/view/28
# fail
'''
def set_input():
    value = int(input())
    return value

def main():
    value = set_input()
    array = [
        [1,1],
        [1,0]
    ]
    result = [
        [1,0],
        [0,1]
    ]

    def cal(size, array_a, array_b):
        result = []
        for i in range(size):
            tmp = []

            for j in range(size):
                value_sum = 0
                for k in range(size):
                    value_sum = value_sum + array_a[i][k]*array_b[k][j]
                tmp.append(value_sum % 1000000007)
                #print(value_sum, end=" ")
            result.append(tmp)
        return result
    
    while value > 0:
        if value%2 == 1:
            result = cal(2,result,array)
        array = cal(2,array,array)
        value = value // 2
    
    print(result[0][1])

if __name__ == '__main__':
    main()

