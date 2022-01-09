#pragma once

#include "il2cpp.h"

void Dpr_MsgWindow_MsgWindowDataModel__Initialize (Dpr_MsgWindow_MsgWindowDataModel_o* __this, System_Single_array* msgSpeedArray, int32_t waitFinishFrame, Dpr_MsgWindow_MsgWindowDataContainer_o* dataContainer, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__OnFinalize (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__Clear (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_MsgWindow_MsgWindowDataModel__get_IsOpen (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
int32_t Dpr_MsgWindow_MsgWindowDataModel__get_MsgState (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__ChangeMsgState (Dpr_MsgWindow_MsgWindowDataModel_o* __this, int32_t nextState, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__ChangeMsgSpeed (Dpr_MsgWindow_MsgWindowDataModel_o* __this, int32_t msgSpeed, const MethodInfo* method_info);
bool Dpr_MsgWindow_MsgWindowDataModel__get_InputEnabled (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_MsgWindow_MsgWindowDataModel__get_IsShowLastKeywaitIcon (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_MsgWindow_MsgWindowDataModel__get_IsShowLoadingIcon (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__SetInputEnabled (Dpr_MsgWindow_MsgWindowDataModel_o* __this, bool enabled, const MethodInfo* method_info);
bool Dpr_MsgWindow_MsgWindowDataModel__get_CanInputClose (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
System_String_o* Dpr_MsgWindow_MsgWindowDataModel__get_LabelName (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_MsgWindow_MsgWindowDataModel__HasSpeakerName (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
System_String_o* Dpr_MsgWindow_MsgWindowDataModel__get_SpeakerName (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__ClearSpeakerName (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_MsgWindow_MsgWindowDataModel__get_MessageData (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
float Dpr_MsgWindow_MsgWindowDataModel__get_ShowOneFontTimeSec (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_MsgWindow_MsgWindowDataModel__get_IsUnknownMessage (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_MsgWindow_MsgWindowDataModel__get_HasBattleOnelineTag (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_MsgWindow_MsgWindowDataModel__get_IsNetwork (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__FormatTextData (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__FormatItemGetTextData (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__SetPocketIconData (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__SetBtlMsgWindowParam (Dpr_MsgWindow_MsgWindowDataModel_o* __this, Dpr_MsgWindow_MsgWindowParam_o* btlMsgWindowParam, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__ResetParam (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__SetMsgWindowParam (Dpr_MsgWindow_MsgWindowDataModel_o* __this, Dpr_MsgWindow_MsgWindowParam_o* msgWindowParam, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__SetBoardMsgWindowParam (Dpr_MsgWindow_MsgWindowDataModel_o* __this, Dpr_MsgWindow_MsgWindowParam_o* msgWindowParam, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__SetWindowParameters (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
System_String_o* Dpr_MsgWindow_MsgWindowDataModel__CreateSpeakerName (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__SetWindowDataFromMessageData (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__OnStartOpen (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__OnFinishedOpen (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__OnFinishedMessage (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__CheckWaitFinishTime (Dpr_MsgWindow_MsgWindowDataModel_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__OnClose (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__OnFinishedClose (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__CallFinishedCallback (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
System_Nullable_Vector2__o Dpr_MsgWindow_MsgWindowDataModel__get_WndAnchorPosition (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
int32_t Dpr_MsgWindow_MsgWindowDataModel__get_TextWidth (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
float Dpr_MsgWindow_MsgWindowDataModel__get_FrameWidth (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
int32_t Dpr_MsgWindow_MsgWindowDataModel__get_SortingOrder (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
float Dpr_MsgWindow_MsgWindowDataModel__get_SpeakerFrameWidth (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
float Dpr_MsgWindow_MsgWindowDataModel__get_SpeakerNameFontSize (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
float Dpr_MsgWindow_MsgWindowDataModel__get_FontSize (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
float Dpr_MsgWindow_MsgWindowDataModel__get_FontScale (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
UnityEngine_Color_o Dpr_MsgWindow_MsgWindowDataModel__get_FontColor (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
UnityEngine_Color_o Dpr_MsgWindow_MsgWindowDataModel__get_NetworkFonrColor (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
TMPro_TMP_FontAsset_o* Dpr_MsgWindow_MsgWindowDataModel__get_FontAsset (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__set_FontAsset (Dpr_MsgWindow_MsgWindowDataModel_o* __this, TMPro_TMP_FontAsset_o* value, const MethodInfo* method_info);
bool Dpr_MsgWindow_MsgWindowDataModel__CheckShowRoadsignByPattern (Dpr_MsgWindow_MsgWindowDataModel_o* __this, int32_t pattern, const MethodInfo* method_info);
Dpr_MsgWindow_RoadsignViewData_o* Dpr_MsgWindow_MsgWindowDataModel__GetRoadsignViewDataByPattern (Dpr_MsgWindow_MsgWindowDataModel_o* __this, int32_t pattern, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel__ClearCallbackFunc (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
void Dpr_MsgWindow_MsgWindowDataModel___ctor (Dpr_MsgWindow_MsgWindowDataModel_o* __this, const MethodInfo* method_info);
