people = 88

bomb_pattern =  3

max_bomb = 30

ppls = []

for i in range(people):
    ppls.append(i+1)

lucknum = 0
last_rm_num = 0
#print(ppls)

for i in range(max_bomb):
    if len(ppls) == 1:
        break

    bomb = bomb_pattern+last_rm_num
    if last_rm_num != 0:
        bomb -= 1

    # len is 1 based
    if bomb>=len(ppls):
        bomb = bomb%len(ppls)
    #print(bomb)
    
    last_rm_num = bomb
    lucknum = ppls[bomb]
    del ppls[bomb-1]

print(lucknum)
