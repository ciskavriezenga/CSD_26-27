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



# TODO retrieve nu notes from input

# TODO retrieve note durations from input


# TODO retrieve bpm from input and calculate corresponding quarternote dur. in time


# TODO transform note durations to sequence of time durations (sec)



# ___ play rhythm ___
# init  mixer module and load sample
pygame.init()
sample = pygame.mixer.Sound('../assets/plop.wav')
sample.play()


# play sequence
# TODO loop through time durations ans play sample
# use sample.play and time.sleep


# ensure sample playback is finished
time.sleep(sample.get_length())
