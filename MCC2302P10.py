people = 8

bomb_pattern = 3

max_bomb = 6

ppls = []

for i in range(people):
    ppls.append(i+1)
# [1,2,3,4,5]

# list = [1,3,5]
# list.pop(0) [3,5]
lucknum = 0
for i in range(max_bomb):

    if len(ppls) == 1:
        print(ppls[0])
        break

    bomb = bomb_pattern+i

    if bomb_pattern+i>len(ppls):
        for a in range((bomb_pattern+i)//len(ppls)):
            bomb -= len(ppls)
        #print(bomb)
    
    lucknum = ppls[bomb-1]
    ppls.pop(bomb-1)
    print(ppls)

print(lucknum)
