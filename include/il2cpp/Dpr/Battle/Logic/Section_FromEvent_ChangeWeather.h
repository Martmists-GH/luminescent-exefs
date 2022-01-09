#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_FromEvent_ChangeWeather___ctor (Dpr_Battle_Logic_Section_FromEvent_ChangeWeather_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FromEvent_ChangeWeather__Execute (Dpr_Battle_Logic_Section_FromEvent_ChangeWeather_o* __this, Dpr_Battle_Logic_Section_FromEvent_ChangeWeather_Result_o* result, Dpr_Battle_Logic_Section_FromEvent_ChangeWeather_Description_o** description, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FromEvent_ChangeWeather__endWeather_byAirLock (Dpr_Battle_Logic_Section_FromEvent_ChangeWeather_o* __this, uint8_t userPokeID, bool isTokuseiWindowDisplay, Dpr_Battle_Logic_StrParam_o** successMessage, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FromEvent_ChangeWeather__endWeather (Dpr_Battle_Logic_Section_FromEvent_ChangeWeather_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FromEvent_ChangeWeather__endWeather_After (Dpr_Battle_Logic_Section_FromEvent_ChangeWeather_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FromEvent_ChangeWeather__startDefaultWeather (Dpr_Battle_Logic_Section_FromEvent_ChangeWeather_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_FromEvent_ChangeWeather__changeWeather (Dpr_Battle_Logic_Section_FromEvent_ChangeWeather_o* __this, Dpr_Battle_Logic_Section_FromEvent_ChangeWeather_Description_o** description, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Section_FromEvent_ChangeWeather__checkWeatherChangeEnable (Dpr_Battle_Logic_Section_FromEvent_ChangeWeather_o* __this, uint8_t weather, uint8_t turn, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FromEvent_ChangeWeather__changeWeather_Success (Dpr_Battle_Logic_Section_FromEvent_ChangeWeather_o* __this, uint8_t userPokeID, uint8_t weather, uint8_t turn, uint8_t turnUpCount, Dpr_Battle_Logic_StrParam_o** successMessage, bool isDisplayTokuseiWindow, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FromEvent_ChangeWeather__changeWeatherCore (Dpr_Battle_Logic_Section_FromEvent_ChangeWeather_o* __this, uint8_t weather, uint8_t turn, uint8_t turnUpCount, uint8_t causePokeID, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FromEvent_ChangeWeather__changeWeather_Fail (Dpr_Battle_Logic_Section_FromEvent_ChangeWeather_o* __this, uint8_t userPokeID, bool isTokuseiWindowDisplay, const MethodInfo* method_info);
