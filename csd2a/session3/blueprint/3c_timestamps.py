import pygame
import time

# hardcoded note_durations and bpm for the sake of the example
note_durations = [1, 0.5, 1, 0.5, 0.5]
bpm = 120
print("note_durations:", note_durations)

# calculate duration of a quarternote in seconds
quarternote_dur = 60.0 / bpm
print("bpm:", bpm, "quarternote_dur", quarternote_dur)

# transform note durations to sequence of time durations
time_durations = []
for note_dur in note_durations:
    time_durations.append(quarternote_dur * note_dur)

print("time_durations", time_durations)

# init  mixer module and load sample
pygame.init()
sample = pygame.mixer.Sound('../assets/plop.wav')

# TODO transform time durations to a sequence of timestamps
timestamp_seq = []
sum = 0
# TODO - calculate and append timestamps


print("timestamp_seq:", timestamp_seq)


# retrieve the first time stamp
if timestamp_seq:
    ts = timestamp_seq.pop(0)
else:
    # list contains no items
    print("no timestamps --> exit")
    exit()


# store the current time
time_zero = time.time()
print("time zero:", time_zero)

playing_rhythm = True

while(playing_rhythm):
    # TODO calculate t_delta

    # TODO check if we passed the next timestamp,
    # if so, play sample and fetch new timestamp

    # TODO no new timestamp available, stop while loop



# wait till last sample is done playing before exit
time.sleep(time_durations[-1])
