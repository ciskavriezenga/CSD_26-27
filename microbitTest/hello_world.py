from microbit import display, Image, sleep

# Scroll text across the screen once
display.scroll("Hello World!")

# Flash a happy face on a loop
while True:
    display.show(Image.HAPPY)
    sleep(1000)
    display.show(Image.SMILE)
    sleep(1000)
