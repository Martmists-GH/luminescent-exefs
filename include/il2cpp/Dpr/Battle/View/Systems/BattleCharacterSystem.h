#pragma once

#include "il2cpp.h"

Dpr_Battle_View_Objects_BOTrainer_array* Dpr_Battle_View_Systems_BattleCharacterSystem__get_Trainers (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCharacterSystem__set_Trainers (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, Dpr_Battle_View_Objects_BOTrainer_array* value, const MethodInfo* method_info);
Dpr_Battle_View_Objects_BOPokemon_array* Dpr_Battle_View_Systems_BattleCharacterSystem__get_Pokemons (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCharacterSystem__set_Pokemons (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, Dpr_Battle_View_Objects_BOPokemon_array* value, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCharacterSystem___ctor (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, Dpr_Battle_View_Systems_BattleViewSystem_o* pViewSystem, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCharacterSystem__Dispose (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_Systems_BattleCharacterSystem__StartLoadAllCharacter (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, System_Boolean_array* isPokemonSetupFlags, System_Boolean_array* isTrainerSetupFlags, System_Action_o* onComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_Systems_BattleCharacterSystem__StartLoadPoke (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, int32_t vPos, bool IsVisible, System_Action_o* onComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_Systems_BattleCharacterSystem__StartLoadPoke (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, int32_t vPos, bool IsVisible, int32_t vPosTarget, System_Action_o* onComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_Systems_BattleCharacterSystem__StartLoadPoke (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, int32_t vPos, Pml_PokePara_PokemonParam_o* param, bool IsVisible, System_Action_o* onComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_Systems_BattleCharacterSystem__StartLoadExceptionPoke (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, int32_t vPos, Pml_PokePara_PokemonParam_o* param, System_String_o* AssetBundleName, bool IsVisible, System_Action_o* onComplete, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCharacterSystem__StartDelete (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, Dpr_Battle_View_Objects_BOPokemon_o* pokemon, const MethodInfo* method_info);
bool Dpr_Battle_View_Systems_BattleCharacterSystem__IsFinishDelete (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, Dpr_Battle_View_Objects_BOPokemon_o* pokemon, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_Systems_BattleCharacterSystem__StartLoadTrainer (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, int32_t vPos, Dpr_Battle_Logic_TRAINER_DATA_o* data, Dpr_Battle_View_TrainerSimpleParam_o param, System_Action_o* onComplete, const MethodInfo* method_info);
Dpr_Battle_View_Objects_BOPokemon_o* Dpr_Battle_View_Systems_BattleCharacterSystem__GetPokemonModel (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, int32_t vPos, const MethodInfo* method_info);
Dpr_Battle_View_Objects_BOTrainer_o* Dpr_Battle_View_Systems_BattleCharacterSystem__GetTrainerModel (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, int32_t vPos, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_Systems_BattleCharacterSystem__StartLoadMigawari (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, System_Action_o* onComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_Systems_BattleCharacterSystem__StartLoadDigudaStone (Dpr_Battle_View_Systems_BattleCharacterSystem_o* __this, System_Action_o* onComplete, const MethodInfo* method_info);
