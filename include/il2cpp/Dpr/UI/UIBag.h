#pragma once

#include "il2cpp.h"

bool Dpr_UI_UIBag__get_isBattle (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
bool Dpr_UI_UIBag__get_isNeedBgmDuck (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
bool Dpr_UI_UIBag__get_canSwitchFavorite (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
bool Dpr_UI_UIBag__get_canSort (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
bool Dpr_UI_UIBag__get_canUseItem (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
bool Dpr_UI_UIBag__get_IsOpenFromBattleTeam (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBag__set_IsOpenFromBattleTeam (Dpr_UI_UIBag_o* __this, bool value, const MethodInfo* method_info);
void Dpr_UI_UIBag__OnCreate (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBag__Open (Dpr_UI_UIBag_o* __this, int32_t bootType, int32_t modeType, Pml_PokePara_PokemonParam_o* pokemonParam, int32_t displayMoney, bool isDontBuryNuts, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_UIBag__OpenSelectKinomi (Dpr_UI_UIBag_o* __this, System_Action_int__o* onSelectedKinomiItem, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_UIBag__OpenWazaMachineOnly (Dpr_UI_UIBag_o* __this, bool isContestWaza, Pml_PokePara_PokemonParam_o* pokemonParam, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_UIBag__OpenAutoPilot (Dpr_UI_UIBag_o* __this, uint16_t useItemNo, int32_t bootType, System_Action_o* onComplete, int32_t prevWindowId, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIBag__OpOpen (Dpr_UI_UIBag_o* __this, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_UIBag__Close (Dpr_UI_UIBag_o* __this, UnityEngine_Events_UnityAction_UIWindow__o* onClosed_, int32_t nextWindowId, bool isPlayCloseSe, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIBag__OpClose (Dpr_UI_UIBag_o* __this, UnityEngine_Events_UnityAction_UIWindow__o* onClosed_, int32_t nextWindowId, bool isPlayCloseSe, const MethodInfo* method_info);
void Dpr_UI_UIBag__OnUpdate (Dpr_UI_UIBag_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_UI_UIBag__OnUpdateDefault (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBag__OnUpdateSelectAmount (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBag__OnUpdatePokemonParty (Dpr_UI_UIBag_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_UI_UIBag__UpdateKeyGuide (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBag__SetupBagItemPanel (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBag__SetupBattleBootParam (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBag__OnChangeBagPanelSelectItem (Dpr_UI_UIBag_o* __this, Dpr_UI_BagItemButton_o* bagItemButton, const MethodInfo* method_info);
void Dpr_UI_UIBag__CreatePokemonPartyParam (Dpr_UI_UIBag_o* __this, int32_t selectIndex, const MethodInfo* method_info);
void Dpr_UI_UIBag__StartSelectPokemonParty (Dpr_UI_UIBag_o* __this, UnityEngine_Events_UnityAction_PokemonPartyItem__int__o* onClicked, const MethodInfo* method_info);
void Dpr_UI_UIBag__EndSelectPokemonParty (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBag__OpenContextMenu (Dpr_UI_UIBag_o* __this, ContextMenuID_array* contextMenuIDs, System_Action_ContextMenuID__o* onSelected, UnityEngine_Vector2_o pivot, UnityEngine_Vector3_o pos, System_Action_o* onClosed, bool isNoDecideSe, bool isNoCancelSe, const MethodInfo* method_info);
void Dpr_UI_UIBag__ShowItemContextMenu (Dpr_UI_UIBag_o* __this, Dpr_Item_ItemInfo_o* item, const MethodInfo* method_info);
void Dpr_UI_UIBag__SwitchSelectedItemFavorite (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBag__ShowWazaOboeWindow (Dpr_UI_UIBag_o* __this, Pml_PokePara_PokemonParam_o* pokemonParam, int32_t learnWazaNo, System_Action_WazaNo__WazaNo__o* resultCallBack, const MethodInfo* method_info);
void Dpr_UI_UIBag__StartSortItems (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBag__SortItems (Dpr_UI_UIBag_o* __this, int32_t sortType, const MethodInfo* method_info);
void Dpr_UI_UIBag__ShowSortResultMessage (Dpr_UI_UIBag_o* __this, int32_t sortType, const MethodInfo* method_info);
void Dpr_UI_UIBag__OnPokemonPartyClickedToUseItem (Dpr_UI_UIBag_o* __this, Dpr_UI_PokemonPartyItem_o* pokemonPartyItem, int32_t index, const MethodInfo* method_info);
void Dpr_UI_UIBag__UseWazaMachine (Dpr_UI_UIBag_o* __this, Pml_PokePara_PokemonParam_o* pokeParam, Dpr_Item_ItemInfo_o* itemInfo, const MethodInfo* method_info);
void Dpr_UI_UIBag__UseApplicationItem (Dpr_UI_UIBag_o* __this, Pml_PokePara_PokemonParam_o* pokeParam, Dpr_Item_ItemInfo_o* itemInfo, const MethodInfo* method_info);
void Dpr_UI_UIBag__UseTokuseiItem (Dpr_UI_UIBag_o* __this, Pml_PokePara_PokemonParam_o* pokeParam, Dpr_Item_ItemInfo_o* itemInfo, System_Func_PokemonParam__bool__o* useItemFunc, const MethodInfo* method_info);
bool Dpr_UI_UIBag__CheckAndUseRecoveryItem (Dpr_UI_UIBag_o* __this, Pml_PokePara_PokemonParam_o* pokeParam, Dpr_Item_ItemInfo_o* itemInfo, bool isUse, int32_t* resultType, const MethodInfo* method_info);
System_String_o* Dpr_UI_UIBag__GetRecoveryResultLabelName (Dpr_UI_UIBag_o* __this, int32_t recoveryResult, const MethodInfo* method_info);
float Dpr_UI_UIBag__GetRecoverHpRate (Dpr_UI_UIBag_o* __this, int32_t recoveryHpValue, const MethodInfo* method_info);
bool Dpr_UI_UIBag__CheckExpItem (Dpr_UI_UIBag_o* __this, Dpr_Item_ItemInfo_o* itemInfo, int32_t* powerID, int32_t* addExpValue, const MethodInfo* method_info);
System_Action_o* Dpr_UI_UIBag__GetUseItemToNothingAction (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
bool Dpr_UI_UIBag__CanUseWazaMachine (Dpr_UI_UIBag_o* __this, int32_t monsNo, uint16_t formNo, uint16_t machineNo, const MethodInfo* method_info);
void Dpr_UI_UIBag__EndUseItemAction (Dpr_UI_UIBag_o* __this, Pml_PokePara_PokemonParam_o* pokemonParam, Dpr_Item_ItemInfo_o* itemInfo, int32_t useCount, bool isForceEnd, const MethodInfo* method_info);
void Dpr_UI_UIBag__UseFormChangeItem (Dpr_UI_UIBag_o* __this, Dpr_UI_PokemonPartyItem_o* pokemonPartyItem, Dpr_Item_ItemInfo_o* itemInfo, const MethodInfo* method_info);
void Dpr_UI_UIBag__ShowFormChangeResult (Dpr_UI_UIBag_o* __this, Pml_PokePara_PokemonParam_o* pokemonParam, const MethodInfo* method_info);
void Dpr_UI_UIBag__OnBattleBootPokemonPartyClickedToUseItem (Dpr_UI_UIBag_o* __this, Dpr_UI_PokemonPartyItem_o* pokemonPartyItem, int32_t index, const MethodInfo* method_info);
void Dpr_UI_UIBag__OnPokemonPartyClickedToEquipItem (Dpr_UI_UIBag_o* __this, Dpr_UI_PokemonPartyItem_o* pokemonPartyItem, int32_t index, const MethodInfo* method_info);
void Dpr_UI_UIBag__EndItemEquip (Dpr_UI_UIBag_o* __this, Dpr_UI_PokemonPartyItem_o* pokemonPartyItem, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIBag__ResetBallTab (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIBag__StartAutoPilot (Dpr_UI_UIBag_o* __this, Dpr_Item_ItemInfo_o* useItem, const MethodInfo* method_info);
void Dpr_UI_UIBag___ctor (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBag____n__0 (Dpr_UI_UIBag_o* __this, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_UIBag___StartSortItems_b__126_0 (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBag___StartSortItems_g__OnSelected_126_1 (Dpr_UI_UIBag_o* __this, int32_t contextMenuID, const MethodInfo* method_info);
void Dpr_UI_UIBag___ShowSortResultMessage_b__128_0 (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
bool Dpr_UI_UIBag___CheckAndUseRecoveryItem_g__RecoverySick_133_0 (uint32_t sick, Dpr_UI_UIBag___c__DisplayClass133_0_o* , const MethodInfo* method_info);
void Dpr_UI_UIBag___CheckAndUseRecoveryItem_g__SetRecoverySickResult_133_1 (int32_t* targetResultType, int32_t setResultType, const MethodInfo* method_info);
void Dpr_UI_UIBag___GetUseItemToNothingAction_b__137_0 (Dpr_UI_UIBag_o* __this, const MethodInfo* method_info);
