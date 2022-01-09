#pragma once

#include "il2cpp.h"

System_Collections_Generic_Dictionary_string__Object__o* Dpr_Battle_View_BattleViewAssetManager__get_CachedAssetBundle (const MethodInfo* method_info);
void Dpr_Battle_View_BattleViewAssetManager__set_CachedAssetBundle (System_Collections_Generic_Dictionary_string__Object__o* value, const MethodInfo* method_info);
System_Collections_Generic_List_Tuple_string__EffectData___o* Dpr_Battle_View_BattleViewAssetManager__get_CachedEffectData (const MethodInfo* method_info);
void Dpr_Battle_View_BattleViewAssetManager__set_CachedEffectData (System_Collections_Generic_List_Tuple_string__EffectData___o* value, const MethodInfo* method_info);
System_Collections_Generic_List_Tuple_string__ObjectEntity___o* Dpr_Battle_View_BattleViewAssetManager__get_CachedModelData (const MethodInfo* method_info);
void Dpr_Battle_View_BattleViewAssetManager__set_CachedModelData (System_Collections_Generic_List_Tuple_string__ObjectEntity___o* value, const MethodInfo* method_info);
System_Collections_Generic_Dictionary_string__CameraFilePlayable__o* Dpr_Battle_View_BattleViewAssetManager__get_CachedCameraFilePlayables (const MethodInfo* method_info);
void Dpr_Battle_View_BattleViewAssetManager__set_CachedCameraFilePlayables (System_Collections_Generic_Dictionary_string__CameraFilePlayable__o* value, const MethodInfo* method_info);
void Dpr_Battle_View_BattleViewAssetManager__Initialize (const MethodInfo* method_info);
void Dpr_Battle_View_BattleViewAssetManager__UnInitialize (bool isNeedDestroyObjects, const MethodInfo* method_info);
bool Dpr_Battle_View_BattleViewAssetManager__HasCameraFilePlayable (System_String_o* key, const MethodInfo* method_info);
void Dpr_Battle_View_BattleViewAssetManager__AddCameraFilePlayable (System_String_o* key, Dpr_Battle_View_Playables_CameraFilePlayable_o* playable, const MethodInfo* method_info);
bool Dpr_Battle_View_BattleViewAssetManager__TryGetCameraFilePlayable (System_String_o* key, Dpr_Battle_View_Playables_CameraFilePlayable_o** playable, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_BattleViewAssetManager__LoadBattleViewUISystem (System_String_o* path, System_Action_GameObject__o* onComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_BattleViewAssetManager__LoadModel (System_String_o* path, System_Action_GameObject__o* onComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_BattleViewAssetManager__LoadTrainer (Dpr_Battle_View_TrainerSimpleParam_o param, System_Action_GameObject__o* onComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_BattleViewAssetManager__LoadPoke (int32_t monsNo, int32_t formNo, uint8_t sex, bool isRare, System_Action_GameObject__o* onComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_BattleViewAssetManager__LoadExceptionPoke (int32_t monsNo, int32_t formNo, uint8_t sex, bool isRare, System_String_o* AssetBundleName, System_Action_GameObject__o* onComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_BattleViewAssetManager__LoadSequenceFile (System_String_o* path, System_Action_SequenceFile__o* onComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_BattleViewAssetManager__LoadWaitCameraFile (System_String_o* fileName, System_Action_GameObject__o* onComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_BattleViewAssetManager__LoadAssetBundle_object_ (System_String_o* path, System_Action_Object__o* onComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_BattleViewAssetManager__LoadAssetBundle_GameObject_ (System_String_o* path, System_Action_Object__o* onComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_BattleViewAssetManager__LoadAssetBundle_Object_ (System_String_o* path, System_Action_Object__o* onComplete, const MethodInfo* method_info);
void Dpr_Battle_View_BattleViewAssetManager__AddNeedDestroyObject (UnityEngine_GameObject_o* go, bool isCheckDead, const MethodInfo* method_info);
void Dpr_Battle_View_BattleViewAssetManager___cctor (const MethodInfo* method_info);
