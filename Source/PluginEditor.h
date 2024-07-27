/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Cloud4_compressorAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Cloud4_compressorAudioProcessorEditor (Cloud4_compressorAudioProcessor&);
    ~Cloud4_compressorAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Cloud4_compressorAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Cloud4_compressorAudioProcessorEditor)
};
