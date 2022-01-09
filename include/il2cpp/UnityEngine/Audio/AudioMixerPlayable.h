#pragma once

#include "il2cpp.h"

UnityEngine_Audio_AudioMixerPlayable_o UnityEngine_Audio_AudioMixerPlayable__Create (UnityEngine_Playables_PlayableGraph_o graph, int32_t inputCount, bool normalizeInputVolumes, const MethodInfo* method_info);
UnityEngine_Playables_PlayableHandle_o UnityEngine_Audio_AudioMixerPlayable__CreateHandle (UnityEngine_Playables_PlayableGraph_o graph, int32_t inputCount, bool normalizeInputVolumes, const MethodInfo* method_info);
void UnityEngine_Audio_AudioMixerPlayable___ctor (UnityEngine_Audio_AudioMixerPlayable_o __this, UnityEngine_Playables_PlayableHandle_o handle, const MethodInfo* method_info);
UnityEngine_Playables_PlayableHandle_o UnityEngine_Audio_AudioMixerPlayable__GetHandle (UnityEngine_Audio_AudioMixerPlayable_o __this, const MethodInfo* method_info);
UnityEngine_Playables_Playable_o UnityEngine_Audio_AudioMixerPlayable__op_Implicit (UnityEngine_Audio_AudioMixerPlayable_o playable, const MethodInfo* method_info);
bool UnityEngine_Audio_AudioMixerPlayable__Equals (UnityEngine_Audio_AudioMixerPlayable_o __this, UnityEngine_Audio_AudioMixerPlayable_o other, const MethodInfo* method_info);
bool UnityEngine_Audio_AudioMixerPlayable__CreateAudioMixerPlayableInternal (UnityEngine_Playables_PlayableGraph_o* graph, bool normalizeInputVolumes, UnityEngine_Playables_PlayableHandle_o* handle, const MethodInfo* method_info);
