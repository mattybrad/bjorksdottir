#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       lfo2;           //xy=123.75000381469727,633.0000085830688
AudioFilterStateVariable squareWaveSmoothingFilter; //xy=225.00000762939453,717.7500095367432
AudioMixer4              lfo1FreqModMixer;         //xy=298.75000381469727,630.0000076293945
AudioSynthWaveformDc     filterEnvelopeDC; //xy=316,422
AudioSynthWaveformSineModulated lfo1;           //xy=324,540
AudioSynthWaveform       waveform1B;     //xy=550,96
AudioSynthWaveform       waveform1C;     //xy=550,133
AudioSynthWaveform       waveform3A;     //xy=550,303
AudioSynthWaveform       waveform1A;     //xy=551,58
AudioSynthWaveform       waveform2A;     //xy=551,184
AudioSynthWaveform       waveform2C;     //xy=551,253
AudioSynthWaveform       waveform4A;     //xy=551,416
AudioSynthWaveform       waveform4B;     //xy=551,452
AudioSynthWaveform       waveform2B;     //xy=553,219
AudioSynthWaveform       waveform3C;     //xy=553,369
AudioSynthWaveform       waveform3B;     //xy=554,334
AudioSynthWaveform       waveform4C;     //xy=554,486
AudioSynthWaveform       waveform5C;     //xy=554,607
AudioSynthWaveform       waveform5B;     //xy=555,572
AudioSynthWaveform       waveform5A;     //xy=556,537
AudioSynthWaveform       waveform6A;     //xy=558,662
AudioSynthWaveform       waveform6C;     //xy=558,728
AudioSynthWaveform       waveform6B;     //xy=559,694
AudioEffectEnvelope      envelope2;      //xy=705,91
AudioEffectEnvelope      envelope1;      //xy=706,58
AudioEffectEnvelope      envelope3;      //xy=706,127
AudioEffectEnvelope      envelope6;      //xy=714,253
AudioEffectEnvelope      envelope7;      //xy=714,301
AudioEffectEnvelope      envelope8;      //xy=714,332
AudioEffectEnvelope      envelope9;      //xy=714,366
AudioEffectEnvelope      envelope5;      //xy=715,219
AudioEffectEnvelope      envelope4;      //xy=716,186
AudioSynthWaveformDc     vcaDC;          //xy=720,790
AudioEffectEnvelope      envelope10;     //xy=725,417
AudioEffectEnvelope      envelope11;     //xy=725,451
AudioEffectEnvelope      envelope12;     //xy=726,483
AudioEffectEnvelope      envelope15;     //xy=726,603
AudioEffectEnvelope      envelope16;     //xy=726,657
AudioEffectEnvelope      envelope17;     //xy=726,689
AudioEffectEnvelope      envelope14;     //xy=728,569
AudioEffectEnvelope      envelope18;     //xy=728,722
AudioEffectEnvelope      envelope13;     //xy=729,537
AudioEffectEnvelope      filterEnvelope1; //xy=869,152
AudioEffectEnvelope      filterEnvelope2; //xy=877,276
AudioEffectEnvelope      filterEnvelope5; //xy=878,622
AudioEffectEnvelope      filterEnvelope6; //xy=878,734
AudioEffectEnvelope      filterEnvelope3; //xy=883,376
AudioEffectEnvelope      filterEnvelope4; //xy=885,494
AudioMixer4              stringMixer6;   //xy=1038,673
AudioMixer4              stringMixer2;   //xy=1042,213
AudioMixer4              stringMixer4;   //xy=1042,441
AudioMixer4              stringMixer5;   //xy=1043,561
AudioMixer4              stringMixer3;   //xy=1045,323
AudioMixer4              stringMixer1;   //xy=1046,98
AudioMixer4              filterModMixer3; //xy=1050,380
AudioMixer4              filterModMixer1; //xy=1051,156
AudioMixer4              filterModMixer2; //xy=1055,269
AudioMixer4              filterModMixer4; //xy=1058,500
AudioMixer4              filterModMixer6; //xy=1060,731
AudioMixer4              filterModMixer5; //xy=1063,620
AudioMixer4              vcaSignalMixer; //xy=1063,795
AudioFilterStateVariable filter3;        //xy=1199,353
AudioFilterStateVariable filter1;        //xy=1200,137
AudioFilterStateVariable filter2;        //xy=1200,257
AudioFilterStateVariable filter5;        //xy=1204,554
AudioFilterStateVariable filter6;        //xy=1204,660
AudioFilterStateVariable filter4;        //xy=1206,449
AudioMixer4              stringGroupMixer1; //xy=1384,236
AudioMixer4              stringGroupMixer2; //xy=1384,531
AudioMixer4              stringGroupMixerMaster; //xy=1517,372
AudioEffectMultiply      vca1;           //xy=1599,484
AudioEffectWaveshaper    waveshape1;     //xy=1700,418
AudioMixer4              distortionMixer; //xy=1832,475
AudioEffectBitcrusher    bitcrusher1;    //xy=1967,405
AudioPlayMemory          startSound;       //xy=2015,307
AudioPlayQueue           glitch;         //xy=2036,484
AudioMixer4              finalMixer;     //xy=2154,409
AudioOutputI2S           i2s1;           //xy=2326,296
AudioAnalyzePeak         peak1;          //xy=2331,508
AudioRecordQueue         glitchRecord;   //xy=2364,407
AudioConnection          patchCord1(lfo2, 0, squareWaveSmoothingFilter, 0);
AudioConnection          patchCord2(squareWaveSmoothingFilter, 0, vcaSignalMixer, 2);
AudioConnection          patchCord3(squareWaveSmoothingFilter, 0, lfo1FreqModMixer, 0);
AudioConnection          patchCord4(lfo1FreqModMixer, lfo1);
AudioConnection          patchCord5(filterEnvelopeDC, filterEnvelope1);
AudioConnection          patchCord6(filterEnvelopeDC, filterEnvelope2);
AudioConnection          patchCord7(filterEnvelopeDC, filterEnvelope3);
AudioConnection          patchCord8(filterEnvelopeDC, filterEnvelope4);
AudioConnection          patchCord9(filterEnvelopeDC, filterEnvelope5);
AudioConnection          patchCord10(filterEnvelopeDC, filterEnvelope6);
AudioConnection          patchCord11(lfo1, 0, filterModMixer1, 1);
AudioConnection          patchCord12(lfo1, 0, filterModMixer2, 1);
AudioConnection          patchCord13(lfo1, 0, filterModMixer3, 1);
AudioConnection          patchCord14(lfo1, 0, filterModMixer4, 1);
AudioConnection          patchCord15(lfo1, 0, filterModMixer5, 1);
AudioConnection          patchCord16(lfo1, 0, filterModMixer6, 1);
AudioConnection          patchCord17(lfo1, 0, vcaSignalMixer, 1);
AudioConnection          patchCord18(waveform1B, envelope2);
AudioConnection          patchCord19(waveform1C, envelope3);
AudioConnection          patchCord20(waveform3A, envelope7);
AudioConnection          patchCord21(waveform1A, envelope1);
AudioConnection          patchCord22(waveform2A, envelope4);
AudioConnection          patchCord23(waveform2C, envelope6);
AudioConnection          patchCord24(waveform4A, envelope10);
AudioConnection          patchCord25(waveform4B, envelope11);
AudioConnection          patchCord26(waveform2B, envelope5);
AudioConnection          patchCord27(waveform3C, envelope9);
AudioConnection          patchCord28(waveform3B, envelope8);
AudioConnection          patchCord29(waveform4C, envelope12);
AudioConnection          patchCord30(waveform5C, envelope15);
AudioConnection          patchCord31(waveform5B, envelope14);
AudioConnection          patchCord32(waveform5A, envelope13);
AudioConnection          patchCord33(waveform6A, envelope16);
AudioConnection          patchCord34(waveform6C, envelope18);
AudioConnection          patchCord35(waveform6B, envelope17);
AudioConnection          patchCord36(envelope2, 0, stringMixer1, 1);
AudioConnection          patchCord37(envelope1, 0, stringMixer1, 0);
AudioConnection          patchCord38(envelope3, 0, stringMixer1, 2);
AudioConnection          patchCord39(envelope6, 0, stringMixer2, 2);
AudioConnection          patchCord40(envelope7, 0, stringMixer3, 0);
AudioConnection          patchCord41(envelope8, 0, stringMixer3, 1);
AudioConnection          patchCord42(envelope9, 0, stringMixer3, 2);
AudioConnection          patchCord43(envelope5, 0, stringMixer2, 1);
AudioConnection          patchCord44(envelope4, 0, stringMixer2, 0);
AudioConnection          patchCord45(vcaDC, 0, vcaSignalMixer, 0);
AudioConnection          patchCord46(envelope10, 0, stringMixer4, 0);
AudioConnection          patchCord47(envelope11, 0, stringMixer4, 1);
AudioConnection          patchCord48(envelope12, 0, stringMixer4, 2);
AudioConnection          patchCord49(envelope15, 0, stringMixer5, 2);
AudioConnection          patchCord50(envelope16, 0, stringMixer6, 0);
AudioConnection          patchCord51(envelope17, 0, stringMixer6, 1);
AudioConnection          patchCord52(envelope14, 0, stringMixer5, 1);
AudioConnection          patchCord53(envelope18, 0, stringMixer6, 2);
AudioConnection          patchCord54(envelope13, 0, stringMixer5, 0);
AudioConnection          patchCord55(filterEnvelope1, 0, filterModMixer1, 0);
AudioConnection          patchCord56(filterEnvelope2, 0, filterModMixer2, 0);
AudioConnection          patchCord57(filterEnvelope5, 0, filterModMixer5, 0);
AudioConnection          patchCord58(filterEnvelope6, 0, filterModMixer6, 0);
AudioConnection          patchCord59(filterEnvelope3, 0, filterModMixer3, 0);
AudioConnection          patchCord60(filterEnvelope4, 0, filterModMixer4, 0);
AudioConnection          patchCord61(stringMixer6, 0, filter6, 0);
AudioConnection          patchCord62(stringMixer2, 0, filter2, 0);
AudioConnection          patchCord63(stringMixer4, 0, filter4, 0);
AudioConnection          patchCord64(stringMixer5, 0, filter5, 0);
AudioConnection          patchCord65(stringMixer3, 0, filter3, 0);
AudioConnection          patchCord66(stringMixer1, 0, filter1, 0);
AudioConnection          patchCord67(filterModMixer3, 0, filter3, 1);
AudioConnection          patchCord68(filterModMixer1, 0, filter1, 1);
AudioConnection          patchCord69(filterModMixer2, 0, filter2, 1);
AudioConnection          patchCord70(filterModMixer4, 0, filter4, 1);
AudioConnection          patchCord71(filterModMixer6, 0, filter6, 1);
AudioConnection          patchCord72(filterModMixer5, 0, filter5, 1);
AudioConnection          patchCord73(vcaSignalMixer, 0, vca1, 1);
AudioConnection          patchCord74(filter3, 0, stringGroupMixer1, 2);
AudioConnection          patchCord75(filter1, 0, stringGroupMixer1, 0);
AudioConnection          patchCord76(filter2, 0, stringGroupMixer1, 1);
AudioConnection          patchCord77(filter5, 0, stringGroupMixer2, 1);
AudioConnection          patchCord78(filter6, 0, stringGroupMixer2, 2);
AudioConnection          patchCord79(filter4, 0, stringGroupMixer2, 0);
AudioConnection          patchCord80(stringGroupMixer1, 0, stringGroupMixerMaster, 0);
AudioConnection          patchCord81(stringGroupMixer2, 0, stringGroupMixerMaster, 1);
AudioConnection          patchCord82(stringGroupMixerMaster, 0, vca1, 0);
AudioConnection          patchCord83(vca1, waveshape1);
AudioConnection          patchCord84(vca1, 0, distortionMixer, 1);
AudioConnection          patchCord85(waveshape1, 0, distortionMixer, 0);
AudioConnection          patchCord86(distortionMixer, bitcrusher1);
AudioConnection          patchCord87(distortionMixer, glitchRecord);
AudioConnection          patchCord88(bitcrusher1, 0, finalMixer, 0);
AudioConnection          patchCord89(startSound, 0, finalMixer, 2);
AudioConnection          patchCord90(glitch, 0, finalMixer, 1);
AudioConnection          patchCord91(finalMixer, peak1);
AudioConnection          patchCord92(finalMixer, 0, i2s1, 0);
AudioConnection          patchCord93(finalMixer, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=1222,68
// GUItool: end automatically generated code

#include "AudioSampleSega.h"
#include "AudioSampleWindows.h"
#include "AudioSampleWorms.h"
#include "AudioSampleLemmings.h"
#include "AudioSampleMariokart.h"
#include "AudioSamplePrinceofpersia.h"
#include "ParamKnob.h"

// define how many things there are
const int NUM_FRET_GROUPS = 9;
const int NUM_FRETS = 12;

// define pins
int SELECT_PINS_I[3] = {5,6,7};
int SELECT_PINS_J[3] = {2,3,4};
int DIGITAL_SENSOR_PIN = 39;
int ANALOG_SENSOR_PINS[4] = {34,33,31,32};
int PALM_PIN = 30;
int STRING_PIN = 17;
int FRET_PIN = 16;
int KILL_SWITCH_PIN = 24;
int KILL_SWITCH_LIGHT_PIN = 10;
int STRING_MUX_PINS[8] = {4,3,2,5,1,6,0,7};
int FRET_MUX_GROUPS[9] = {7,6,3,8,1,5,2,4,0}; // the neck is wired confusingly - this sorts out which multiplexer to read from
int STRING_LIGHT_PINS[6] = {20,21,38,37,36,35};

int activeKnobGroup = 3;
int tempKnobPin = 8;
int tempKnobFunction(int group, int pin) {
  if(group == activeKnobGroup) {
    return pin;
  } else {
    tempKnobPin ++;
    return tempKnobPin;
  }
}

// define knobs
ParamKnob paramKnobs[32];
int FILTER_CUTOFF_KNOB = tempKnobFunction(0,0);
int FILTER_RESONANCE_KNOB = tempKnobFunction(0,1);
int FILTER_ATTACK_KNOB = tempKnobFunction(0,2);
int FILTER_DECAY_KNOB = tempKnobFunction(0,3);
int FILTER_SUSTAIN_KNOB = tempKnobFunction(0,4);
int FILTER_RELEASE_KNOB = tempKnobFunction(0,5);
int FILTER_ENVELOPE_KNOB = tempKnobFunction(0,6);
int AMP_ATTACK_KNOB = tempKnobFunction(1,0);
int AMP_DECAY_KNOB = tempKnobFunction(1,1);
int AMP_SUSTAIN_KNOB = tempKnobFunction(1,2);
int AMP_RELEASE_KNOB = tempKnobFunction(1,3);
int AMP_RELEASE2_KNOB = tempKnobFunction(1,4);
int DISTORTION_KNOB = tempKnobFunction(1,5);
int BIT_CRUSH_RESOLUTION_KNOB = tempKnobFunction(1,6);
int BIT_CRUSH_RATE_KNOB = tempKnobFunction(1,7);
int VOLUME_KNOB = tempKnobFunction(2,0);
int FINE_TUNING_KNOB = tempKnobFunction(2,1);
int COARSE_TUNING_KNOB = tempKnobFunction(2,2);
int PORTAMENTO_KNOB = tempKnobFunction(2,3);
int LFO1_FREQUENCY_KNOB = tempKnobFunction(3,0);
int LFO2_FREQUENCY_KNOB = tempKnobFunction(3,1);
int LFO2_WAVE_SELECT = tempKnobFunction(3,7);
int LFO1_LEVEL_KNOB = tempKnobFunction(3,2);
int LFO2_LEVEL_KNOB = tempKnobFunction(3,3);
int WHAMMY_KNOB = tempKnobFunction(3,4);
int OCTAVE_FADE_KNOB = tempKnobFunction(3,5);
int OCTAVE_DELAY_KNOB = tempKnobFunction(3,6);
int WAVE_SELECT_KNOB = tempKnobFunction(0,7);

// define routing
int LFO1_TO_VCA = 0;
int LFO1_TO_VCF = 1;
int LFO2_TO_VCA = 0;
int LFO2_TO_LFO1 = 1;

// lookup tables
int FRET_LOOKUP[NUM_FRET_GROUPS][8] = {
  {1,1,1,1,1,3,1,2},
  {2,2,2,2,4,4,4,4},
  {4,2,3,4,3,3,3,3},
  {5,5,5,5,5,7,5,6},
  {6,6,6,6,8,8,8,8},
  {8,6,7,8,7,7,7,7},
  {8,8,8,8,8,11,8,10},
  {10,10,10,10,12,12,12,12},
  {12,10,11,12,11,11,11,11}
};
int STRING_LOOKUP[NUM_FRET_GROUPS][8] = {
  {2,1,0,3,4,0,5,5},
  {3,2,1,4,0,4,1,3},
  {5,0,1,2,5,3,4,2},
  {2,1,0,3,4,0,5,5},
  {3,2,1,4,0,4,1,3},
  {5,0,1,2,5,3,4,2},
  {2,1,0,3,4,0,5,5},
  {3,2,1,4,0,4,1,3},
  {5,0,1,2,5,3,4,2}
};
//int guitarTuning[6] = {-2,5,10,14,17,22};
int guitarTuning[6] = {0,5,10,15,19,24};

// knob response curves
int INT_SQUARE_RESPONSE_CURVE[1023];
float FLOAT_RESPONSE_CURVE[1023];

bool strings[6] = {false,false,false,false,false,false};
float targetFrequencies[6] = {440,440,440,440,440,440};
float currentFrequencies[6] = {440,440,440,440,440,440};
int knobValues[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int stringLights[6] = {0,0,0,0,0,0};

int touchThreshold = 20000; // was 1200 with nscan=2, prescale=1, maybe 20000 or so at nscan=9, prescale=2
int fretTouchThreshold = 15000;
int touchTimeLimit = 50 * 1000; // in microseconds, apparently

int nextRelease[18] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int nextNote[18] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int nextFilterRelease[6] = {-1,-1,-1,-1,-1,-1};

float maxPeak = 0.0;

// adjustable values
float ampAttack = 0;
float ampDecay = 50;
float ampSustain = 0.3;
bool useAmpReleaseLong = true;
float ampReleaseLong = 3000; // for when a string is plucked
float ampReleaseShort = 200; // for when a string is muted
float ampRelease = 50;
float filterAttack = 2000;
float filterDecay = 2000;
float filterSustain = 0.1;
float filterRelease = 2000;
float lfo1Level = 0;
float lfo2Level = 0;
float lfo1Frequency = 10;
float lfo2Frequency = 10;
float distortionLevel = 0;
float filterCutoff = 2000;
float filterResonance = 2;
float filterEnvelopeLevel = 0.3;
float octaveDelay = 40;
float octaveFade = 0; // 0 is 6-string mode, 0.5 is 12-string, 1 is 18-string
bool killSwitch = false;
float portamento = 1000;
float mainVolume = 0.5;
float bitCrushRate = 44100;
float bitCrushResolution = 16;
float waveSelectRaw = 0;
float lfoWaveSelectRaw = 0;
float oscPulseWidth = 0.5;
int waveSelect = 0;
int waveSelectPrevious = waveSelect;
int lfoWaveSelect = 0;
int lfoWaveSelectPrevious = lfoWaveSelect;
float whammy = 1;
float coarseTuning = 1;
float fineTuning = 1;
int lfo1Dest = LFO1_TO_VCA;
int lfo2Dest = LFO2_TO_VCA;
bool glitchMode = false;
bool safeMode = false;

AudioSynthWaveform* oscillators[18];
AudioEffectEnvelope* envelopes[18];
AudioFilterStateVariable* filters[6];
AudioEffectEnvelope* filterEnvelopes[6];
AudioMixer4* stringMixers[6];
AudioMixer4* filterModMixers[6];

float WAVESHAPE_EXAMPLE[17] = {
  -0.25,
  -0.25,
  -0.2,
  -0.2,
  -0.2,
  -0.2,
  -0.15,
  -0.1,
  0,
  0.1,
  0.15,
  0.2,
  0.2,
  0.2,
  0.2,
  0.25,
  0.25
};

void setup() {
  randomSeed(analogRead(14)); // i think 14 is fine?
  
  AudioMemory(50);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.5);

  Serial.begin(9600);

  // init LED pins
  for(int i=0;i<6;i++) {
    pinMode(STRING_LIGHT_PINS[i], OUTPUT);
  }

  pinMode(SELECT_PINS_I[0], OUTPUT);
  pinMode(SELECT_PINS_I[1], OUTPUT);
  pinMode(SELECT_PINS_I[2], OUTPUT);
  pinMode(SELECT_PINS_J[0], OUTPUT);
  pinMode(SELECT_PINS_J[1], OUTPUT);
  pinMode(SELECT_PINS_J[2], OUTPUT);
  pinMode(KILL_SWITCH_PIN, INPUT_PULLUP);
  pinMode(KILL_SWITCH_LIGHT_PIN, OUTPUT);
  pinMode(STRING_PIN, INPUT_PULLUP);
  pinMode(FRET_PIN, INPUT_PULLUP);
  pinMode(DIGITAL_SENSOR_PIN, INPUT);
   
  oscillators[0] = &waveform1A;
  oscillators[1] = &waveform2A;
  oscillators[2] = &waveform3A;
  oscillators[3] = &waveform4A;
  oscillators[4] = &waveform5A;
  oscillators[5] = &waveform6A;
  oscillators[6] = &waveform1B;
  oscillators[7] = &waveform2B;
  oscillators[8] = &waveform3B;
  oscillators[9] = &waveform4B;
  oscillators[10] = &waveform5B;
  oscillators[11] = &waveform6B;
  oscillators[12] = &waveform1C;
  oscillators[13] = &waveform2C;
  oscillators[14] = &waveform3C;
  oscillators[15] = &waveform4C;
  oscillators[16] = &waveform5C;
  oscillators[17] = &waveform6C;
  envelopes[0] = &envelope1;
  envelopes[1] = &envelope4;
  envelopes[2] = &envelope7;
  envelopes[3] = &envelope10;
  envelopes[4] = &envelope13;
  envelopes[5] = &envelope16;
  envelopes[6] = &envelope2;
  envelopes[7] = &envelope5;
  envelopes[8] = &envelope8;
  envelopes[9] = &envelope11;
  envelopes[10] = &envelope14;
  envelopes[11] = &envelope17;
  envelopes[12] = &envelope3;
  envelopes[13] = &envelope6;
  envelopes[14] = &envelope9;
  envelopes[15] = &envelope12;
  envelopes[16] = &envelope15;
  envelopes[17] = &envelope18;
  filters[0] = &filter1;
  filters[1] = &filter2;
  filters[2] = &filter3;
  filters[3] = &filter4;
  filters[4] = &filter5;
  filters[5] = &filter6;
  filterEnvelopes[0] = &filterEnvelope1;
  filterEnvelopes[1] = &filterEnvelope2;
  filterEnvelopes[2] = &filterEnvelope3;
  filterEnvelopes[3] = &filterEnvelope4;
  filterEnvelopes[4] = &filterEnvelope5;
  filterEnvelopes[5] = &filterEnvelope6;
  stringMixers[0] = &stringMixer1;
  stringMixers[1] = &stringMixer2;
  stringMixers[2] = &stringMixer3;
  stringMixers[3] = &stringMixer4;
  stringMixers[4] = &stringMixer5;
  stringMixers[5] = &stringMixer6;
  filterModMixers[0] = &filterModMixer1;
  filterModMixers[1] = &filterModMixer2;
  filterModMixers[2] = &filterModMixer3;
  filterModMixers[3] = &filterModMixer4;
  filterModMixers[4] = &filterModMixer5;
  filterModMixers[5] = &filterModMixer6;

  paramKnobs[FILTER_CUTOFF_KNOB].init(1, 10000, 500, ParamKnob::QUADRATIC_RESPONSE);
  paramKnobs[FILTER_RESONANCE_KNOB].init(0.7, 10, 3, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[FILTER_ATTACK_KNOB].init(0, 1000, 5, ParamKnob::QUADRATIC_RESPONSE);
  paramKnobs[FILTER_DECAY_KNOB].init(0, 1000, 5, ParamKnob::QUADRATIC_RESPONSE);
  paramKnobs[FILTER_SUSTAIN_KNOB].init(0, 1, 0.2, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[FILTER_ENVELOPE_KNOB].init(0, 1, 0.3, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[AMP_ATTACK_KNOB].init(0, 1000, 0.1, ParamKnob::QUADRATIC_RESPONSE);
  paramKnobs[AMP_DECAY_KNOB].init(0, 1000, 100, ParamKnob::QUADRATIC_RESPONSE);
  paramKnobs[AMP_SUSTAIN_KNOB].init(0, 1, 0.3, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[AMP_RELEASE_KNOB].init(0, 10000, 20000, ParamKnob::QUADRATIC_RESPONSE);
  paramKnobs[BIT_CRUSH_RESOLUTION_KNOB].init(2, 16, 16, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[BIT_CRUSH_RATE_KNOB].init(1, 44100, 44100, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[LFO1_LEVEL_KNOB].init(0, 1, 0, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[LFO2_LEVEL_KNOB].init(0, 1, 0, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[LFO1_FREQUENCY_KNOB].init(0.5, 10000, 2, ParamKnob::CUBIC_RESPONSE);
  paramKnobs[LFO2_FREQUENCY_KNOB].init(0.5, 10000, 3, ParamKnob::CUBIC_RESPONSE);
  paramKnobs[LFO2_WAVE_SELECT].init(0, 4.99, 0, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[WHAMMY_KNOB].init(0, 1, 1, ParamKnob::WHAMMY_RESPONSE); // slightly weird hack involving init parameters not matching actual values due to funky response curve
  paramKnobs[OCTAVE_FADE_KNOB].init(0, 1, 0.25, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[OCTAVE_DELAY_KNOB].init(0, 1000, 0, ParamKnob::QUADRATIC_RESPONSE);
  paramKnobs[PORTAMENTO_KNOB].init(0, 55, 50, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[WAVE_SELECT_KNOB].init(0, 4.99, 0, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[VOLUME_KNOB].init(0, 1, 0.5, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[COARSE_TUNING_KNOB].init(0.5, 2, 1, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[FINE_TUNING_KNOB].init(0.9, 1.1, 1, ParamKnob::LINEAR_RESPONSE);
  
  for(int i=0;i<18;i++) {
    oscillators[i]->begin(0.1,getFreq(44+5*i),getWaveform(waveSelect));
    envelopes[i]->attack(ampAttack);
    envelopes[i]->decay(ampDecay);
    envelopes[i]->sustain(ampSustain);
    envelopes[i]->release(ampRelease);
    if(i<6) {
      filters[i]->frequency(filterCutoff);
      filters[i]->resonance(filterResonance);
      filters[i]->octaveControl(5);
      filterEnvelopes[i]->attack(filterAttack);
      filterEnvelopes[i]->decay(filterDecay);
      filterEnvelopes[i]->sustain(filterSustain);
      filterEnvelopes[i]->release(filterRelease);
    }
  }

  filterEnvelopeDC.amplitude(1);
  vcaDC.amplitude(1);

  squareWaveSmoothingFilter.frequency(1000);
  lfo2.begin(1,5,WAVEFORM_SINE);
  lfo1.amplitude(1);
  lfo1.frequency(3);
  vcaSignalMixer.gain(1,0);
  vcaSignalMixer.gain(2,0);
  bitcrusher1.bits(16);
  bitcrusher1.sampleRate(44100);
  waveshape1.shape(WAVESHAPE_EXAMPLE, 17);
  distortionMixer.gain(0,0.5*distortionLevel);
  distortionMixer.gain(1,0.5*(1-distortionLevel));

  //glitchRecord.begin();
  
  switch(random(6)) {
    case 0:
    startSound.play(AudioSampleSega);
    break;
    case 1:
    startSound.play(AudioSampleWindows);
    break;
    case 2:
    startSound.play(AudioSampleWorms);
    break;
    case 3:
    startSound.play(AudioSampleMariokart);
    break;
    case 4:
    startSound.play(AudioSamplePrinceofpersia);
    break;
    case 5:
    startSound.play(AudioSampleLemmings);
    break;
  }
  
}

bool isTouched;
long timeStart;
long timeTotal;
int thisString;
bool isFirstNote = true;
int loopTime = 80; // rough guess for first loop for now
int loopCount = 0;
int testNote = 0;
int lastStringChange[6] = {0,0,0,0,0,0};
void loop() {

  int capacitance;
  bool fretTouched;
  int stringPositions[6] = {0,0,0,0,0,0};
  int thisString;
  int thisFret;
  bool stringTouched;
  int digitalReading;

  timeStart = millis();

  loopCount = (loopCount + 1) % 200;
  if(loopCount == 0) testNote = (testNote + 1) % 6;

  // just first 8 knobs until everything is wired up
  for(int i=0;i<8;i++) {
    paramKnobs[i].isActive = !safeMode;
  }

  // 9 iterations, 1 for each multiplexer
  // yellow wires
  for(int i = 0; i < 8; i ++) {
    
    digitalWrite(SELECT_PINS_I[0], bitRead(i, 0));
    digitalWrite(SELECT_PINS_I[1], bitRead(i, 1));
    digitalWrite(SELECT_PINS_I[2], bitRead(i, 2));

    // 8 iterations, 1 for each multiplexer channel
    // green wires
    for(int j = 0; j < 8; j ++) {
      digitalWrite(SELECT_PINS_J[0], bitRead(j, 0));
      digitalWrite(SELECT_PINS_J[1], bitRead(j, 1));
      digitalWrite(SELECT_PINS_J[2], bitRead(j, 2));

      delayMicroseconds(10); // stops everything from breaking

      thisString = STRING_LOOKUP[FRET_MUX_GROUPS[i]][j];
      thisFret = FRET_LOOKUP[FRET_MUX_GROUPS[i]][j];

      fretTouched = !digitalRead(FRET_PIN);
      
      if(fretTouched) {
        stringPositions[thisString] = max(stringPositions[thisString], thisFret);
      }

      if(i==0) {
        thisString = STRING_MUX_PINS[j];
        if(thisString<6) {
          // new logic goes here
          if(millis()-lastStringChange[thisString] > 30) {
            stringTouched = !digitalRead(STRING_PIN);
            if(stringTouched != strings[thisString]) {
              // change detected
              lastStringChange[thisString] = millis();
              strings[thisString] = stringTouched;
              if(stringTouched) {
                // mute string
                for(int k=0;k<3;k++) {
                  envelopes[thisString+k*6]->release(ampReleaseShort);
                  envelopes[thisString+k*6]->noteOff();
                  nextRelease[thisString+k*6]=-1;
                }
                filterEnvelopes[thisString]->noteOff();
                nextFilterRelease[thisString]=-1;
              } else {
                // schedule notes
                for(int k=0;k<3;k++) {
                  nextNote[thisString+k*6] = millis() + k*octaveDelay;
                  nextRelease[thisString+k*6]=-1;
                  nextFilterRelease[thisString+k*6]=-1;
                }
              }
            }
          }
          for(int k=0;k<3;k++) {
            if(nextNote[thisString+k*6]!=-1 && millis()>=nextNote[thisString+k*6]) {
              envelopes[thisString+k*6]->release(ampReleaseLong);
              envelopes[thisString+k*6]->noteOn();
              nextRelease[thisString+k*6] = millis() + ampAttack + ampDecay;
              if(k==0) {
                filterEnvelopes[thisString]->noteOn();
                nextFilterRelease[thisString] = millis() + filterAttack + filterDecay;
              }
              nextNote[thisString+k*6] = -1;
            } else if(nextRelease[thisString+k*6]!=-1 && millis()>=nextRelease[thisString+k*6]) {
              envelopes[thisString+k*6]->noteOff();
              nextRelease[thisString+k*6]=-1;
            }
          }
          if(nextFilterRelease[thisString]!=-1 && millis()>=nextFilterRelease[thisString]) {
            filterEnvelopes[thisString]->noteOff();
            nextFilterRelease[thisString]=-1;
          }
        }
        killSwitch = digitalRead(KILL_SWITCH_PIN);
        killSwitch = false;
        stringGroupMixerMaster.gain(0,killSwitch?0:1);
        stringGroupMixerMaster.gain(1,killSwitch?0:1);
      }

      if(j<4) {
        paramKnobs[j*8+i].setValue(analogRead(ANALOG_SENSOR_PINS[j]));
        //if(paramKnobs[j*8+i].isChanged() && j==0) Serial.println(j*8+i);
      }
    }

    // toggle switches
    digitalReading = digitalRead(DIGITAL_SENSOR_PIN);
    switch(i) {
      case 0:
      lfo1Dest = digitalReading ? LFO1_TO_VCA : LFO1_TO_VCF;
      break;

      case 1:
      lfo2Dest = digitalReading ? LFO2_TO_VCA : LFO2_TO_LFO1;
      break;

      case 2:
      safeMode = digitalReading;
      safeMode = true;
      break;

      case 3:
      glitchMode = digitalReading;
      break;
    }
  }

  // record glitch data
  while(glitchRecord.available()) {
    glitchRecord.readBuffer();
    glitchRecord.freeBuffer();
  }

  filterCutoff = paramKnobs[FILTER_CUTOFF_KNOB].getCurrentValue();
  filterResonance = paramKnobs[FILTER_RESONANCE_KNOB].getCurrentValue();
  filterAttack = paramKnobs[FILTER_ATTACK_KNOB].getCurrentValue();
  filterDecay = paramKnobs[FILTER_DECAY_KNOB].getCurrentValue();
  filterSustain = paramKnobs[FILTER_SUSTAIN_KNOB].getCurrentValue();
  filterEnvelopeLevel = paramKnobs[FILTER_ENVELOPE_KNOB].getCurrentValue();
  ampAttack = paramKnobs[AMP_ATTACK_KNOB].getCurrentValue();
  ampDecay = paramKnobs[AMP_DECAY_KNOB].getCurrentValue();
  ampSustain = paramKnobs[AMP_SUSTAIN_KNOB].getCurrentValue();
  ampReleaseLong = paramKnobs[AMP_RELEASE_KNOB].getCurrentValue();
  bitCrushResolution = paramKnobs[BIT_CRUSH_RESOLUTION_KNOB].getCurrentValue();
  bitCrushRate = paramKnobs[BIT_CRUSH_RATE_KNOB].getCurrentValue();
  lfo1Level = paramKnobs[LFO1_LEVEL_KNOB].getCurrentValue();
  lfo2Level = paramKnobs[LFO2_LEVEL_KNOB].getCurrentValue();
  lfo1Frequency = paramKnobs[LFO1_FREQUENCY_KNOB].getCurrentValue();
  lfo2Frequency = paramKnobs[LFO2_FREQUENCY_KNOB].getCurrentValue();
  portamento = paramKnobs[PORTAMENTO_KNOB].getCurrentValue();
  whammy = paramKnobs[WHAMMY_KNOB].getCurrentValue();
  octaveFade = paramKnobs[OCTAVE_FADE_KNOB].getCurrentValue();
  octaveDelay = paramKnobs[OCTAVE_DELAY_KNOB].getCurrentValue();
  waveSelectRaw = paramKnobs[WAVE_SELECT_KNOB].getCurrentValue();
  lfoWaveSelectRaw = paramKnobs[LFO2_WAVE_SELECT].getCurrentValue();
  mainVolume = paramKnobs[VOLUME_KNOB].getCurrentValue();
  coarseTuning = paramKnobs[COARSE_TUNING_KNOB].getCurrentValue();
  fineTuning = paramKnobs[FINE_TUNING_KNOB].getCurrentValue();

  // do stuff with parameters
  waveSelectPrevious = waveSelect;
  waveSelect = floor(waveSelectRaw);
  lfoWaveSelectPrevious = lfoWaveSelect;
  lfoWaveSelect = floor(lfoWaveSelectRaw);
  oscPulseWidth = max(0,min(1,waveSelectRaw-4));
  ampRelease = useAmpReleaseLong?ampReleaseLong:ampReleaseShort;
  adjustOctaveVolumes();
  bitcrusher1.bits(bitCrushResolution);
  bitcrusher1.sampleRate(bitCrushRate);
  distortionMixer.gain(0,distortionLevel);
  distortionMixer.gain(1,1-distortionLevel);
  finalMixer.gain(0,glitchMode?0:mainVolume);
  finalMixer.gain(1,glitchMode?mainVolume:0);
  if(lfoWaveSelect!=lfoWaveSelectPrevious) lfo2.begin(getWaveform(lfoWaveSelect));
  lfo1.frequency(lfo1Frequency);
  lfo2.frequency(lfo2Frequency);

  // do funky vca calculation
  float vcaMultiplier = 0.5;
  float vcaLFO1Level = lfo1Dest == LFO1_TO_VCA ? lfo1Level : 0;
  float vcaLFO2Level = lfo2Dest == LFO2_TO_VCA ? lfo2Level : 0;
  if(vcaLFO1Level+vcaLFO2Level>1) {
    vcaMultiplier = 0.5/(vcaLFO1Level+vcaLFO2Level);
  }
  vcaSignalMixer.gain(0,1-vcaMultiplier*(vcaLFO1Level+vcaLFO2Level));
  vcaSignalMixer.gain(1,vcaMultiplier*vcaLFO1Level);
  vcaSignalMixer.gain(2,vcaMultiplier*vcaLFO2Level);

  // lfo freq mod
  lfo1FreqModMixer.gain(0,lfo2Dest==LFO2_TO_LFO1?lfo2Level:0);
  
  // set frequency of oscillators
  bool portamentoActive = portamento < 50;
  float amountToChange;
  float noteInterval;
  float deltaFreq;
  for(int i=0; i<6; i++) {
    if(waveSelect!=waveSelectPrevious) {
      oscillators[i]->begin(getWaveform(waveSelect));
      oscillators[i+6]->begin(getWaveform(waveSelect));
      oscillators[i+12]->begin(getWaveform(waveSelect));
    }
    
    // the 0.0594631 * frequency term is to get the interval between two semitones in Hz
    amountToChange = 0.0594631 * currentFrequencies[i] * portamento * loopTime * 0.001;
    targetFrequencies[i] = getFreq(20+stringPositions[i]+guitarTuning[i]);
    
    deltaFreq = targetFrequencies[i] - currentFrequencies[i];
    if(!portamentoActive || abs(deltaFreq) < amountToChange || isFirstNote) {
      currentFrequencies[i] = targetFrequencies[i];
    } else if(deltaFreq > 0) {
      currentFrequencies[i] += amountToChange;
    } else {
      currentFrequencies[i] -= amountToChange;
    }
    oscillators[i]->frequency(whammy*coarseTuning*fineTuning*currentFrequencies[i]);
    oscillators[i+6]->frequency(2*whammy*currentFrequencies[i]);
    oscillators[i+12]->frequency(4*whammy*currentFrequencies[i]);
    if(waveSelect==4) {
      oscillators[i]->pulseWidth(oscPulseWidth);
      oscillators[i+6]->pulseWidth(oscPulseWidth);
      oscillators[i+12]->pulseWidth(oscPulseWidth);
    }
    for(int j=0;j<3;j++) {
      envelopes[i+6*j]->attack(ampAttack);
      envelopes[i+6*j]->decay(ampDecay);
      envelopes[i+6*j]->sustain(ampSustain);
    }

    // filters
    filters[i]->frequency(filterCutoff);
    filters[i]->resonance(filterResonance);
    filterEnvelopes[i]->attack(filterAttack);
    filterEnvelopes[i]->decay(filterDecay);
    filterEnvelopes[i]->sustain(filterSustain);
    filterEnvelopes[i]->release(filterRelease);
    filterModMixers[i]->gain(0, filterEnvelopeLevel);
    filterModMixers[i]->gain(1, lfo1Dest==LFO1_TO_VCF?lfo1Level:0);

    // fade LEDs
    if(stringLights[i]>0) {
      stringLights[i] -= 10; // this will need to be linked to loop time
      analogWrite(STRING_LIGHT_PINS[i], stringLights[i]);
    } else {
      digitalWrite(STRING_LIGHT_PINS[i], LOW);
    }
  }
  timeTotal = millis() - timeStart;
  loopTime = timeTotal;
  //Serial.print("TIME:");
  //Serial.println(timeTotal);
  float thisPeak;
  if(peak1.available()) {
    thisPeak = peak1.read();
    analogWrite(KILL_SWITCH_LIGHT_PIN, 128 * thisPeak);
    if(thisPeak > maxPeak) maxPeak = thisPeak;
  }
  //Serial.println(maxPeak);
  //Serial.println(thisPeak);

  isFirstNote = false;
}

float getFreq(float noteNum) {
  return pow(2, (noteNum-49)/12) * 440;
}

int fakeTouchRead(int pin) {
  int returnValue;
  if(millis() % 6000 < 3000) {
    returnValue = pin == 2 || pin == 13 ? 100000 : 100;
  } else {
    returnValue = pin == 14 || pin == 25 ? 100000 : 100;
  }
  return returnValue;
}

void adjustOctaveVolumes() {
  float reduction = 1 - 0.4 * octaveFade; // slight reduction in volume to compensate for more oscillators
  for(int i=0;i<6;i++) {
    stringMixers[i]->gain(0,reduction);
    stringMixers[i]->gain(1,reduction*constrain(octaveFade*2,0,1));
    stringMixers[i]->gain(2,reduction*constrain(octaveFade*2-1,0,1));
  }
}

int getWaveform(int waveformNumber) {
  int returnWaveform;
  switch(waveformNumber) {
    case 0:
    returnWaveform = WAVEFORM_SQUARE;
    break;
    case 1:
    returnWaveform = WAVEFORM_SINE;
    break;
    case 2:
    returnWaveform = WAVEFORM_TRIANGLE;
    break;
    case 3:
    returnWaveform = WAVEFORM_SAWTOOTH;
    break;
    case 4:
    returnWaveform = WAVEFORM_PULSE;
    break;
  }
  return returnWaveform;
}

// stolen from a forum
float mapFloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
