'''
15:50 ~ 16:12

잼민이가 2박 3일 수학여행
수학여행 1학년 ~ 6학년까지 묵을 방을 배정해야함
학생은 남학생 , 여학생끼리 배정

한방에 같은 학년 배정( 한방에 1명 배정 가능 )

한방에 배정 인원수 : K
k = 2 12개 필요
1 2
2 1
1 3
0 1
1 2
1 1

students = 1<=N<=1,000
room_size = 1<K<1,000
sex = 0(여),1(남)
years = 1<=Y<=6
'''
import math

def set_input():
    line = list(map(int, input().split()))
    students_count = line[0]
    room_size = line[1]
    students = []
    for _ in range(students_count):
        student = list(map(int, input().split()))
        students.append(student)
    
    return students, room_size

def main():
    students, room_size = set_input()
    # [
    #     학년 :  1 2 3 4 5 6
    #     여자 : [0 0 0 0 0 0],
    #     남자 : [0 0 0 0 0 0]
    # ]
    students_map = [[0] * 6 for _ in range(2)]
    
    for student in students:
        sex = student[0]
        year = student[1] - 1
        students_map[sex][year] += 1
    
    #math.ceil()
    count = 0
    for students in students_map:
        for y_s in students:
            count += int(math.ceil(y_s/room_size))
    print(count)

if __name__ == '__main__':
    main()
    