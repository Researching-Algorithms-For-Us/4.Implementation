 '''
14:51 ~ 15:04

1set = [1~9]
M < 1,000,000

방번호 꾸밀때
필요한 세트 최소값을 구하시오.
단. (6 -> 9), (9 -> 6) 가능

'''

def set_input():
    value = int(input()) 
    return value

def main():
    value = set_input()
    
    heep = [0 for _ in range(10)]
    ranges = [x for x in range(10)]

    value = list(str(value))
    for v in value:
        for idx, r in enumerate(ranges):
            if int(v) == int(r):
                heep[idx] += 1
                break
    #3 + 3 = 6 / 2 = 3set
    #0 + 6 = 6 / 2 = 3set
    #3 + 4 = 7 / 2 = 4set
    six_nine = (heep[6]+heep[9])//2
    six_nine_re = (heep[6]+heep[9])%2
    heep[9] = six_nine + six_nine_re
    heep[6] = six_nine + six_nine_re
    print(max(heep))

if __name__ == '__main__':
    main()
    
