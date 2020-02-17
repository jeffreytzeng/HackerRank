def countingValleys(n, s):
    valleys = 0
    previous_level = 0
    current_level = 0
    
    for step in range(len(s)):
        previous_level = current_level
        current_level += -1 if s[step] == "D" else 1

        if previous_level == 0 and current_level == -1:
            valleys += 1
    
    return valleys


n = int(input())
s = input()
print(countingValleys(n, s))