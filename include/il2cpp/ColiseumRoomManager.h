#pragma once

#include "il2cpp.h"

FieldPlayerEntity_o* ColiseumRoomManager__get_player (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
bool ColiseumRoomManager__get_isBattle (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* ColiseumRoomManager__Start (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__SetMatchingParam (ColiseumRoomManager_o* __this, Dpr_SubContents_MatchingParam_o matchingParam, const MethodInfo* method_info);
void ColiseumRoomManager__SetBatteleRule (ColiseumRoomManager_o* __this, int32_t ruleId, const MethodInfo* method_info);
void ColiseumRoomManager__Init (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__MyUpdate (ColiseumRoomManager_o* __this, float deltaTime, const MethodInfo* method_info);
bool ColiseumRoomManager__IsInputCancel (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__OnDestroy (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__SetZoneData (ColiseumRoomManager_o* __this, int32_t zoneId, int32_t locIndex, UnityEngine_Vector2Int_o gridPos, const MethodInfo* method_info);
void ColiseumRoomManager__SetUp (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__Clear (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__CreateWarpCollision (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__LandStartPoint (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__CreateFrontDesk (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__StartGuruGuruJoinAnimation (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__StartGuruGuruLeaveAnimation (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__LeaveUnion (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__TransitionUnionInit (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__ReturnBattle (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__ReturnBattleMatching (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__CreateBattleMatchingManager (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__OnSessionEvent (ColiseumRoomManager_o* __this, Dpr_NetworkUtils_SessionEventData_o eventData, const MethodInfo* method_info);
void ColiseumRoomManager__JoinOtherPlayer (ColiseumRoomManager_o* __this, int32_t stationIndex, const MethodInfo* method_info);
void ColiseumRoomManager__LeaveMine (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__LeaveOtherPlayer (ColiseumRoomManager_o* __this, int32_t index, const MethodInfo* method_info);
void ColiseumRoomManager__GamingError (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__Crush (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__Resume (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__NetworkError (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
bool ColiseumRoomManager__IsNetworkError (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__OpenSystemErrorMessage (ColiseumRoomManager_o* __this, Dpr_NetworkUtils_ErrorAppletResult_o* errorAppletResult, const MethodInfo* method_info);
void ColiseumRoomManager__ClearSession (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__OnReceiveData (ColiseumRoomManager_o* __this, Dpr_NetworkUtils_INetData_o* netData, const MethodInfo* method_info);
void ColiseumRoomManager__SetNetData (ColiseumRoomManager_o* __this, Dpr_NetworkUtils_INetData_o* netData, const MethodInfo* method_info);
System_Collections_IEnumerator_o* ColiseumRoomManager__LoadAsset (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__SendJoinData (ColiseumRoomManager_o* __this, int32_t stationIndex, const MethodInfo* method_info);
void ColiseumRoomManager__SendPosData (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__SendRequestData (ColiseumRoomManager_o* __this, int32_t stationIndex, uint8_t id, const MethodInfo* method_info);
void ColiseumRoomManager__SendJoin (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__SendLeave (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__SendStanbyPointData (ColiseumRoomManager_o* __this, bool isJoin, const MethodInfo* method_info);
void ColiseumRoomManager__SendBattle (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__ReciveColiseumJoin (ColiseumRoomManager_o* __this, Dpr_NetworkUtils_NetDataColiseumJoinDataData_o* data, const MethodInfo* method_info);
void ColiseumRoomManager__ReciveColiseumLeave (ColiseumRoomManager_o* __this, Dpr_NetworkUtils_NetDataColiseumLeaveData_o* data, const MethodInfo* method_info);
void ColiseumRoomManager__ReciveColiseumStanby (ColiseumRoomManager_o* __this, Dpr_NetworkUtils_NetDataColiseumStanbyPointData_o* data, const MethodInfo* method_info);
void ColiseumRoomManager__AddMember (ColiseumRoomManager_o* __this, int32_t pointIndex, int32_t stationIndex, const MethodInfo* method_info);
void ColiseumRoomManager__RemoveMember (ColiseumRoomManager_o* __this, int32_t pointIndex, int32_t stationIndex, const MethodInfo* method_info);
void ColiseumRoomManager__SetNpcTalkBit (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__SetUpColiseum (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__ResetMacthPlayer (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__CreateBattleReadyPoint (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__SetBattleReadyPos (ColiseumRoomManager_o* __this, int32_t index, UnityEngine_GameObject_o* obj, const MethodInfo* method_info);
bool ColiseumRoomManager__CheckAllPlayerReadyOk (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__BattleStart (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__OnReadyWait (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__OnLeaveEnd (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager__ControllPlayer (ColiseumRoomManager_o* __this, int32_t hitColNum, const MethodInfo* method_info);
void ColiseumRoomManager__LeaveControllPlayer (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager___ctor (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager___cctor (const MethodInfo* method_info);
void ColiseumRoomManager___Start_b__47_0 (ColiseumRoomManager_o* __this, Effect_EffectData_o* e, const MethodInfo* method_info);
void ColiseumRoomManager___Start_b__47_1 (ColiseumRoomManager_o* __this, Effect_EffectData_o* e, const MethodInfo* method_info);
void ColiseumRoomManager___Start_b__47_2 (ColiseumRoomManager_o* __this, Effect_EffectData_o* e, const MethodInfo* method_info);
void ColiseumRoomManager___Start_b__47_3 (ColiseumRoomManager_o* __this, Effect_EffectData_o* e, const MethodInfo* method_info);
System_Collections_IEnumerator_o* ColiseumRoomManager____n__0 (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* ColiseumRoomManager___LeaveUnion_g__Leave_62_0 (ColiseumRoomManager_o* __this, const MethodInfo* method_info);
void ColiseumRoomManager___LoadAsset_b__80_0 (ColiseumRoomManager_o* __this, int32_t eventType, System_String_o* name, UnityEngine_Object_o* asset, const MethodInfo* method_info);
