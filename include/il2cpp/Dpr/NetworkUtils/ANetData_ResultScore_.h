#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_ResultScore___get_GetDataID (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_ResultScore____ctor (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_ResultScore___CreateDataBuffer (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_ResultScore____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, int32_t idx, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_ResultScore___get_FromStationIndex (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_ResultScore___SendReliableData (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_ResultScore___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, int32_t transportType, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_ResultScore___SendUnReliableData (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_ResultScore___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, int32_t transportType, const MethodInfo* method_info);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_ResultScore___CreateReliableData (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, const MethodInfo* method_info);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_ResultScore___CreateUnReliableData (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_ResultScore___WriteSendData (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo* method_info);
System_Byte_array* Dpr_NetworkUtils_ANetData_ResultScore___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_ResultScore___ReceivePacket (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, INL1_PacketReader_o* pr, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_ResultScore___ReadRecieveData (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, INL1_PacketReader_o* pr, const MethodInfo* method_info);
Dpr_Contest_ResultScore_o Dpr_NetworkUtils_ANetData_ResultScore___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_ResultScore__o* __this, INL1_PacketReader_o* pr, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_ResultScore____cctor (const MethodInfo* method_info);