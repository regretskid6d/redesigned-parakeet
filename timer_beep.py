import time
secs = int(input("Seconds: "))
while secs:
    print(f"{secs}...", end="\r")
    time.sleep(1)
    secs -= 1
print("⏰ Time's up!\a")  # \a is the bell character
