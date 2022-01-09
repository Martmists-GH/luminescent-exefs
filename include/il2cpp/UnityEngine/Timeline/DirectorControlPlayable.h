#pragma once

#include "il2cpp.h"

UnityEngine_Playables_ScriptPlayable_DirectorControlPlayable__o UnityEngine_Timeline_DirectorControlPlayable__Create (UnityEngine_Playables_PlayableGraph_o graph, UnityEngine_Playables_PlayableDirector_o* director, const MethodInfo* method_info);
void UnityEngine_Timeline_DirectorControlPlayable__OnPlayableDestroy (UnityEngine_Timeline_DirectorControlPlayable_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method_info);
void UnityEngine_Timeline_DirectorControlPlayable__PrepareFrame (UnityEngine_Timeline_DirectorControlPlayable_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, const MethodInfo* method_info);
void UnityEngine_Timeline_DirectorControlPlayable__OnBehaviourPlay (UnityEngine_Timeline_DirectorControlPlayable_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, const MethodInfo* method_info);
void UnityEngine_Timeline_DirectorControlPlayable__OnBehaviourPause (UnityEngine_Timeline_DirectorControlPlayable_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, const MethodInfo* method_info);
void UnityEngine_Timeline_DirectorControlPlayable__ProcessFrame (UnityEngine_Timeline_DirectorControlPlayable_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, Il2CppObject* playerData, const MethodInfo* method_info);
void UnityEngine_Timeline_DirectorControlPlayable__SyncSpeed (UnityEngine_Timeline_DirectorControlPlayable_o* __this, double speed, const MethodInfo* method_info);
void UnityEngine_Timeline_DirectorControlPlayable__SyncPlayState (UnityEngine_Timeline_DirectorControlPlayable_o* __this, UnityEngine_Playables_PlayableGraph_o graph, double playableTime, const MethodInfo* method_info);
bool UnityEngine_Timeline_DirectorControlPlayable__DetectDiscontinuity (UnityEngine_Timeline_DirectorControlPlayable_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, const MethodInfo* method_info);
bool UnityEngine_Timeline_DirectorControlPlayable__DetectOutOfSync (UnityEngine_Timeline_DirectorControlPlayable_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method_info);
void UnityEngine_Timeline_DirectorControlPlayable__UpdateTime (UnityEngine_Timeline_DirectorControlPlayable_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method_info);
void UnityEngine_Timeline_DirectorControlPlayable___ctor (UnityEngine_Timeline_DirectorControlPlayable_o* __this, const MethodInfo* method_info);
