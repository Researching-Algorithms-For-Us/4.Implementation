'''
13:58 -> 14:26

1. 영식 요금제
- 30초마다 10원청구 / 30초 이하여도 10원청구 / 30~60사이면 20원청구 
2. 민식 요금제
- 60초마다 15원청구 / 59초 통화 15원 청구 / 60~119사이시 30원 청구

통화의 개수는 N(N <= 20)
둘째줄 통화 시간 N개 주어짐(P <= 10,000)

3번 통과
3
40 40 40

40 = Y 2 / M 2 (1M = 15 , 2Y = 20) 
40 = Y 2 / M 2 (1M = 15 , 2Y = 20) 
40 = Y 2 / M 2 (1M = 15 , 2Y = 20) 

M 45

3번통과
3
61 61 61
61 = Y 3 / M 2 (3Y = 30, 2M = 30)
61 = Y 3 / M 2 (3Y = 30, 2M = 30)
61 = Y 3 / M 2 (3Y = 30, 2M = 30)

10(x-1) <= y <= 10x
15(x-1) <= y <= 15x

'''
def set_input():
    size = int(input()) # size를 출력할 필요가 없었는데 출력해서 에러
    value = list(map(int, input().split()))

    return value

def cell(rate_plan, devide, price):
    #60 15
    #30 10
    value = rate_plan // devide + 1
    out = value * price
    return out;

def main():
    rate_plan_list = set_input()
    m_devide = 60
    m_price = 15

    y_devide = 30
    y_price = 10
    
    m = 0
    y = 0

    for rp in rate_plan_list:
        m += cell(rp,m_devide,m_price)
        y += cell(rp,y_devide,y_price)

    if m == y:
        print(f"Y M {m}")
    elif m > y:
        print(f"Y {y}")
    else:
        print(f"M {m}")
    

if __name__ == '__main__':
    main()
    