row = 6
array = []

for r in range(row):
    subarray = list(map(int, input().split()))
    array.append(subarray)


glass_row = 4
glass_col = 4
hourglass = [0]*glass_row*glass_col

for gr in range(glass_row):
    for gc in range(glass_col):
        for igr in range(gc, gc+3):
            for igc in range(gr, gr+3):
                if igr == gc+1 and (igc == gr or igc == gr + 2):
                    continue
                else:
                    hourglass[gr+gc*glass_row] += array[igr][igc]

print(max(hourglass))