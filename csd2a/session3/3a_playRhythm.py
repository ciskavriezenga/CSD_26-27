import pygame
import time
# expected input:
# first number: number of note durations
# from index 1 to index x: note durations
# last: bpm
# example: 4 1 0.5 1.5 0.5 120

# ___ retrieve all necessary values and lists necessary for playing rhythm ___
# use functions: input, float, int, list function append,
# variables: note_durations, num_notes, bpm


# TODO retrieve num notes from input
num_notes = int(input("Enter number notes: "))
print("Entered number of notes: ", num_notes)

# TODO retrieve quarter note durations from input
note_durations = []
for i in range(num_notes):
    note_dur = float(input("enter duration: "))
    note_durations.append(note_dur)

print(note_durations)

# TODO retrieve bpm from input and calculate corresponding quarternote dur. in time
bpm = float(input("Enter bpm: "))
print("Entered bpm: ", bpm)


# TODO transform note durations to sequence of time durations (sec)
quarternote_dur = 60 / bpm
time_durations = []
for note_dur in note_durations:
    print("note_dur: ", note_dur)
    time_dur = quarternote_dur * note_dur
    time_durations.append(time_dur)

print("Durations in time: ", time_durations)

# ___ play rhythm ___
# init  mixer module and load sample
pygame.init()
sample = pygame.mixer.Sound('../assets/plop.wav')




# play sequence
# TODO loop through time durations ans play sample
# use sample.play and time.sleep
for time_dur in time_durations:
    sample.play()



# ensure sample playback is finished
time.sleep(sample.get_length())
