#pragma once

#include "il2cpp.h"

UnityEngine_RectTransform_o* UnityEngine_UI_Slider__get_fillRect (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__set_fillRect (UnityEngine_UI_Slider_o* __this, UnityEngine_RectTransform_o* value, const MethodInfo* method_info);
UnityEngine_RectTransform_o* UnityEngine_UI_Slider__get_handleRect (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__set_handleRect (UnityEngine_UI_Slider_o* __this, UnityEngine_RectTransform_o* value, const MethodInfo* method_info);
int32_t UnityEngine_UI_Slider__get_direction (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__set_direction (UnityEngine_UI_Slider_o* __this, int32_t value, const MethodInfo* method_info);
float UnityEngine_UI_Slider__get_minValue (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__set_minValue (UnityEngine_UI_Slider_o* __this, float value, const MethodInfo* method_info);
float UnityEngine_UI_Slider__get_maxValue (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__set_maxValue (UnityEngine_UI_Slider_o* __this, float value, const MethodInfo* method_info);
bool UnityEngine_UI_Slider__get_wholeNumbers (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__set_wholeNumbers (UnityEngine_UI_Slider_o* __this, bool value, const MethodInfo* method_info);
float UnityEngine_UI_Slider__get_value (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__set_value (UnityEngine_UI_Slider_o* __this, float value, const MethodInfo* method_info);
void UnityEngine_UI_Slider__SetValueWithoutNotify (UnityEngine_UI_Slider_o* __this, float input, const MethodInfo* method_info);
float UnityEngine_UI_Slider__get_normalizedValue (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__set_normalizedValue (UnityEngine_UI_Slider_o* __this, float value, const MethodInfo* method_info);
UnityEngine_UI_Slider_SliderEvent_o* UnityEngine_UI_Slider__get_onValueChanged (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__set_onValueChanged (UnityEngine_UI_Slider_o* __this, UnityEngine_UI_Slider_SliderEvent_o* value, const MethodInfo* method_info);
float UnityEngine_UI_Slider__get_stepSize (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider___ctor (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__Rebuild (UnityEngine_UI_Slider_o* __this, int32_t executing, const MethodInfo* method_info);
void UnityEngine_UI_Slider__LayoutComplete (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__GraphicUpdateComplete (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__OnEnable (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__OnDisable (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__Update (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__OnDidApplyAnimationProperties (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__UpdateCachedReferences (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
float UnityEngine_UI_Slider__ClampValue (UnityEngine_UI_Slider_o* __this, float input, const MethodInfo* method_info);
void UnityEngine_UI_Slider__Set (UnityEngine_UI_Slider_o* __this, float input, bool sendCallback, const MethodInfo* method_info);
void UnityEngine_UI_Slider__OnRectTransformDimensionsChange (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
int32_t UnityEngine_UI_Slider__get_axis (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
bool UnityEngine_UI_Slider__get_reverseValue (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__UpdateVisuals (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__UpdateDrag (UnityEngine_UI_Slider_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, UnityEngine_Camera_o* cam, const MethodInfo* method_info);
bool UnityEngine_UI_Slider__MayDrag (UnityEngine_UI_Slider_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method_info);
void UnityEngine_UI_Slider__OnPointerDown (UnityEngine_UI_Slider_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method_info);
void UnityEngine_UI_Slider__OnDrag (UnityEngine_UI_Slider_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method_info);
void UnityEngine_UI_Slider__OnMove (UnityEngine_UI_Slider_o* __this, UnityEngine_EventSystems_AxisEventData_o* eventData, const MethodInfo* method_info);
UnityEngine_UI_Selectable_o* UnityEngine_UI_Slider__FindSelectableOnLeft (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
UnityEngine_UI_Selectable_o* UnityEngine_UI_Slider__FindSelectableOnRight (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
UnityEngine_UI_Selectable_o* UnityEngine_UI_Slider__FindSelectableOnUp (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
UnityEngine_UI_Selectable_o* UnityEngine_UI_Slider__FindSelectableOnDown (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Slider__OnInitializePotentialDrag (UnityEngine_UI_Slider_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method_info);
void UnityEngine_UI_Slider__SetDirection (UnityEngine_UI_Slider_o* __this, int32_t direction, bool includeRectLayouts, const MethodInfo* method_info);
UnityEngine_Transform_o* UnityEngine_UI_Slider__UnityEngine_UI_ICanvasElement_get_transform (UnityEngine_UI_Slider_o* __this, const MethodInfo* method_info);
