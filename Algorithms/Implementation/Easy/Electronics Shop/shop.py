b, n, m = map(int, input().split())

keyboard = list(map(int, input().split()))
keyboard.sort()
usb = list(map(int, input().split()))
usb.sort()

j = 0
max = -1

for i in range(len(keyboard)-1, -1, -1):
    for k in range(j, len(usb)):
        if keyboard[i] + usb[k] > b:
            j = k
            break
        if keyboard[i] + usb[k] > max:
            max = keyboard[i] + usb[k]

print(max)