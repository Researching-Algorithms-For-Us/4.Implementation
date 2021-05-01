'''
15:30 ~ 15:47

1~20 까지 숫자가 하나씩 쓰인 20장카드가 오름차순 정렬되어있음
다음과 같은 규칙으로 카드의 위치를 바꿈
[a,b] (1<=a<=b<=20)
a부터 b까지의 카드를 현재의 "역순"
구간은 10 고정
카드 배치 마지막 어떻게 되냐?

input : size = 10 (고정)
      : start-end
output : list[20]
'''

def set_input():
    card_list = []
    for _ in range(10):
        card = list(map(int, input().split()))
        card_list.append(card)
    return card_list

def main():
    card_list = set_input()
    cards = [x for x in range(1,21)]
    for card in card_list:
        start = min(card) - 1
        end = max(card)
        step = cards[start:end]
        step.reverse()
        cards[start:end] = step
    print(' '.join(map(str,cards)))

if __name__ == '__main__':
    main()
    