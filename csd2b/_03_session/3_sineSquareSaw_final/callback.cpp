#include "callback.h"

CustomCallback::CustomCallback (float samplerate)
  : AudioCallback (samplerate), oscillator_1 (220, samplerate),
oscillator_2 (220, samplerate), oscillator_3 (220, samplerate)
{}

void CustomCallback::prepare (int samplerate) {
  oscillator_1.setSamplerate (samplerate);
  oscillator_2.setSamplerate (samplerate);
  oscillator_3.setSamplerate (samplerate);

  float freq = 220.0f;
  oscillator_1.setFrequency(freq);
  oscillator_2.setFrequency(freq * 1.5);
  oscillator_3.setFrequency(freq * 1.501);

  std::cout << "\nsamplerate: " << samplerate << "\n";
}

void CustomCallback::process (AudioBuffer buffer) {
  auto [inputChannels,
        outputChannels,
        numInputChannels,
        numOutputChannels,
        numFrames] = buffer;

  for (int channel = 0u; channel < numOutputChannels; ++channel) {
    for (int frame = 0u; frame < numFrames; ++frame) {
      float outputSample = oscillator_1.getSample() + oscillator_2.getSample() + oscillator_3.getSample();
      outputChannels[channel][frame] = outputSample;

      oscillator_1.tick();
      oscillator_2.tick();
      oscillator_3.tick();


    }
  }
}
