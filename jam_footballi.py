# https://quera.org/problemset/148638/

t = int(input())
play_list = []

for i in range(t):
    play_list.append(list(map(int, input().split())))

for i in range(t):
    if (play_list[i][0] + play_list[i][2]) > (play_list[i][1] + play_list[i][3]):
        print("perspolis")
    elif (play_list[i][0] + play_list[i][2]) < (play_list[i][1] + play_list[i][3]):
        print("esteghlal")
    else:
        if play_list[i][1] < play_list[i][2]:
            print("perspolis")
        elif play_list[i][1] > play_list[i][2]:
            print("esteghlal")
        else:
            print("penalty")
