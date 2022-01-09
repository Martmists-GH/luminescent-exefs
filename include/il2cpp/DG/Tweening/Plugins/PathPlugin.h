#pragma once

#include "il2cpp.h"

void DG_Tweening_Plugins_PathPlugin__Reset (DG_Tweening_Plugins_PathPlugin_o* __this, DG_Tweening_Core_TweenerCore_Vector3__Path__PathOptions__o* t, const MethodInfo* method_info);
void DG_Tweening_Plugins_PathPlugin__SetFrom (DG_Tweening_Plugins_PathPlugin_o* __this, DG_Tweening_Core_TweenerCore_Vector3__Path__PathOptions__o* t, bool isRelative, const MethodInfo* method_info);
void DG_Tweening_Plugins_PathPlugin__SetFrom (DG_Tweening_Plugins_PathPlugin_o* __this, DG_Tweening_Core_TweenerCore_Vector3__Path__PathOptions__o* t, DG_Tweening_Plugins_Core_PathCore_Path_o* fromValue, bool setImmediately, const MethodInfo* method_info);
DG_Tweening_Plugins_Core_ABSTweenPlugin_Vector3__Path__PathOptions__o* DG_Tweening_Plugins_PathPlugin__Get (const MethodInfo* method_info);
DG_Tweening_Plugins_Core_PathCore_Path_o* DG_Tweening_Plugins_PathPlugin__ConvertToStartValue (DG_Tweening_Plugins_PathPlugin_o* __this, DG_Tweening_Core_TweenerCore_Vector3__Path__PathOptions__o* t, UnityEngine_Vector3_o value, const MethodInfo* method_info);
void DG_Tweening_Plugins_PathPlugin__SetRelativeEndValue (DG_Tweening_Plugins_PathPlugin_o* __this, DG_Tweening_Core_TweenerCore_Vector3__Path__PathOptions__o* t, const MethodInfo* method_info);
void DG_Tweening_Plugins_PathPlugin__SetChangeValue (DG_Tweening_Plugins_PathPlugin_o* __this, DG_Tweening_Core_TweenerCore_Vector3__Path__PathOptions__o* t, const MethodInfo* method_info);
float DG_Tweening_Plugins_PathPlugin__GetSpeedBasedDuration (DG_Tweening_Plugins_PathPlugin_o* __this, DG_Tweening_Plugins_Options_PathOptions_o options, float unitsXSecond, DG_Tweening_Plugins_Core_PathCore_Path_o* changeValue, const MethodInfo* method_info);
void DG_Tweening_Plugins_PathPlugin__EvaluateAndApply (DG_Tweening_Plugins_PathPlugin_o* __this, DG_Tweening_Plugins_Options_PathOptions_o options, DG_Tweening_Tween_o* t, bool isRelative, DG_Tweening_Core_DOGetter_Vector3__o* getter, DG_Tweening_Core_DOSetter_Vector3__o* setter, float elapsed, DG_Tweening_Plugins_Core_PathCore_Path_o* startValue, DG_Tweening_Plugins_Core_PathCore_Path_o* changeValue, float duration, bool usingInversePosition, int32_t updateNotice, const MethodInfo* method_info);
void DG_Tweening_Plugins_PathPlugin__SetOrientation (DG_Tweening_Plugins_PathPlugin_o* __this, DG_Tweening_Plugins_Options_PathOptions_o options, DG_Tweening_Tween_o* t, DG_Tweening_Plugins_Core_PathCore_Path_o* path, float pathPerc, UnityEngine_Vector3_o tPos, int32_t updateNotice, const MethodInfo* method_info);
void DG_Tweening_Plugins_PathPlugin___ctor (DG_Tweening_Plugins_PathPlugin_o* __this, const MethodInfo* method_info);
