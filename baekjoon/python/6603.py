import itertools

def set_input():
    value = list(map(str, input().split()))
    return value

def main():
    while True:
        value = set_input()
        if value[0] == "0":
            break
        value = value[1:]
        result = list(itertools.combinations(value, 6))
        for r in result:
            print(" ".join(list(r)))
        print()

if __name__ == '__main__':
    main()

