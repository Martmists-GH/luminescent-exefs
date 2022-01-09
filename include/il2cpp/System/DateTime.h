#pragma once

#include "il2cpp.h"

void System_DateTime___ctor (System_DateTime_o __this, int64_t ticks, const MethodInfo* method_info);
void System_DateTime___ctor (System_DateTime_o __this, uint64_t dateData, const MethodInfo* method_info);
void System_DateTime___ctor (System_DateTime_o __this, int64_t ticks, int32_t kind, const MethodInfo* method_info);
void System_DateTime___ctor (System_DateTime_o __this, int64_t ticks, int32_t kind, bool isAmbiguousDst, const MethodInfo* method_info);
void System_DateTime___ctor (System_DateTime_o __this, int32_t year, int32_t month, int32_t day, const MethodInfo* method_info);
void System_DateTime___ctor (System_DateTime_o __this, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, const MethodInfo* method_info);
void System_DateTime___ctor (System_DateTime_o __this, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, const MethodInfo* method_info);
void System_DateTime___ctor (System_DateTime_o __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method_info);
int64_t System_DateTime__get_InternalTicks (System_DateTime_o __this, const MethodInfo* method_info);
uint64_t System_DateTime__get_InternalKind (System_DateTime_o __this, const MethodInfo* method_info);
System_DateTime_o System_DateTime__Add (System_DateTime_o __this, System_TimeSpan_o value, const MethodInfo* method_info);
System_DateTime_o System_DateTime__Add (System_DateTime_o __this, double value, int32_t scale, const MethodInfo* method_info);
System_DateTime_o System_DateTime__AddDays (System_DateTime_o __this, double value, const MethodInfo* method_info);
System_DateTime_o System_DateTime__AddMilliseconds (System_DateTime_o __this, double value, const MethodInfo* method_info);
System_DateTime_o System_DateTime__AddMinutes (System_DateTime_o __this, double value, const MethodInfo* method_info);
System_DateTime_o System_DateTime__AddMonths (System_DateTime_o __this, int32_t months, const MethodInfo* method_info);
System_DateTime_o System_DateTime__AddSeconds (System_DateTime_o __this, double value, const MethodInfo* method_info);
System_DateTime_o System_DateTime__AddTicks (System_DateTime_o __this, int64_t value, const MethodInfo* method_info);
System_DateTime_o System_DateTime__AddYears (System_DateTime_o __this, int32_t value, const MethodInfo* method_info);
int32_t System_DateTime__CompareTo (System_DateTime_o __this, Il2CppObject* value, const MethodInfo* method_info);
int32_t System_DateTime__CompareTo (System_DateTime_o __this, System_DateTime_o value, const MethodInfo* method_info);
int64_t System_DateTime__DateToTicks (int32_t year, int32_t month, int32_t day, const MethodInfo* method_info);
int64_t System_DateTime__TimeToTicks (int32_t hour, int32_t minute, int32_t second, const MethodInfo* method_info);
int32_t System_DateTime__DaysInMonth (int32_t year, int32_t month, const MethodInfo* method_info);
bool System_DateTime__Equals (System_DateTime_o __this, Il2CppObject* value, const MethodInfo* method_info);
bool System_DateTime__Equals (System_DateTime_o __this, System_DateTime_o value, const MethodInfo* method_info);
System_DateTime_o System_DateTime__FromBinary (int64_t dateData, const MethodInfo* method_info);
System_DateTime_o System_DateTime__FromBinaryRaw (int64_t dateData, const MethodInfo* method_info);
System_DateTime_o System_DateTime__FromFileTime (int64_t fileTime, const MethodInfo* method_info);
System_DateTime_o System_DateTime__FromFileTimeUtc (int64_t fileTime, const MethodInfo* method_info);
void System_DateTime__System_Runtime_Serialization_ISerializable_GetObjectData (System_DateTime_o __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method_info);
System_DateTime_o System_DateTime__SpecifyKind (System_DateTime_o value, int32_t kind, const MethodInfo* method_info);
int64_t System_DateTime__ToBinary (System_DateTime_o __this, const MethodInfo* method_info);
int64_t System_DateTime__ToBinaryRaw (System_DateTime_o __this, const MethodInfo* method_info);
System_DateTime_o System_DateTime__get_Date (System_DateTime_o __this, const MethodInfo* method_info);
int32_t System_DateTime__GetDatePart (System_DateTime_o __this, int32_t part, const MethodInfo* method_info);
int32_t System_DateTime__get_Day (System_DateTime_o __this, const MethodInfo* method_info);
int32_t System_DateTime__get_DayOfWeek (System_DateTime_o __this, const MethodInfo* method_info);
int32_t System_DateTime__GetHashCode (System_DateTime_o __this, const MethodInfo* method_info);
int32_t System_DateTime__get_Hour (System_DateTime_o __this, const MethodInfo* method_info);
bool System_DateTime__IsAmbiguousDaylightSavingTime (System_DateTime_o __this, const MethodInfo* method_info);
int32_t System_DateTime__get_Kind (System_DateTime_o __this, const MethodInfo* method_info);
int32_t System_DateTime__get_Minute (System_DateTime_o __this, const MethodInfo* method_info);
int32_t System_DateTime__get_Month (System_DateTime_o __this, const MethodInfo* method_info);
System_DateTime_o System_DateTime__get_Now (const MethodInfo* method_info);
System_DateTime_o System_DateTime__get_UtcNow (const MethodInfo* method_info);
int64_t System_DateTime__GetSystemTimeAsFileTime (const MethodInfo* method_info);
int32_t System_DateTime__get_Second (System_DateTime_o __this, const MethodInfo* method_info);
int64_t System_DateTime__get_Ticks (System_DateTime_o __this, const MethodInfo* method_info);
System_TimeSpan_o System_DateTime__get_TimeOfDay (System_DateTime_o __this, const MethodInfo* method_info);
int32_t System_DateTime__get_Year (System_DateTime_o __this, const MethodInfo* method_info);
bool System_DateTime__IsLeapYear (int32_t year, const MethodInfo* method_info);
System_DateTime_o System_DateTime__Parse (System_String_o* s, System_IFormatProvider_o* provider, const MethodInfo* method_info);
int64_t System_DateTime__ToFileTime (System_DateTime_o __this, const MethodInfo* method_info);
int64_t System_DateTime__ToFileTimeUtc (System_DateTime_o __this, const MethodInfo* method_info);
System_DateTime_o System_DateTime__ToLocalTime (System_DateTime_o __this, const MethodInfo* method_info);
System_DateTime_o System_DateTime__ToLocalTime (System_DateTime_o __this, bool throwOnOverflow, const MethodInfo* method_info);
System_String_o* System_DateTime__ToString (System_DateTime_o __this, const MethodInfo* method_info);
System_String_o* System_DateTime__ToString (System_DateTime_o __this, System_String_o* format, const MethodInfo* method_info);
System_String_o* System_DateTime__ToString (System_DateTime_o __this, System_IFormatProvider_o* provider, const MethodInfo* method_info);
System_String_o* System_DateTime__ToString (System_DateTime_o __this, System_String_o* format, System_IFormatProvider_o* provider, const MethodInfo* method_info);
System_DateTime_o System_DateTime__ToUniversalTime (System_DateTime_o __this, const MethodInfo* method_info);
System_DateTime_o System_DateTime__op_Addition (System_DateTime_o d, System_TimeSpan_o t, const MethodInfo* method_info);
System_DateTime_o System_DateTime__op_Subtraction (System_DateTime_o d, System_TimeSpan_o t, const MethodInfo* method_info);
System_TimeSpan_o System_DateTime__op_Subtraction (System_DateTime_o d1, System_DateTime_o d2, const MethodInfo* method_info);
bool System_DateTime__op_Equality (System_DateTime_o d1, System_DateTime_o d2, const MethodInfo* method_info);
bool System_DateTime__op_LessThan (System_DateTime_o t1, System_DateTime_o t2, const MethodInfo* method_info);
bool System_DateTime__op_LessThanOrEqual (System_DateTime_o t1, System_DateTime_o t2, const MethodInfo* method_info);
bool System_DateTime__op_GreaterThan (System_DateTime_o t1, System_DateTime_o t2, const MethodInfo* method_info);
bool System_DateTime__op_GreaterThanOrEqual (System_DateTime_o t1, System_DateTime_o t2, const MethodInfo* method_info);
int32_t System_DateTime__GetTypeCode (System_DateTime_o __this, const MethodInfo* method_info);
bool System_DateTime__System_IConvertible_ToBoolean (System_DateTime_o __this, System_IFormatProvider_o* provider, const MethodInfo* method_info);
uint16_t System_DateTime__System_IConvertible_ToChar (System_DateTime_o __this, System_IFormatProvider_o* provider, const MethodInfo* method_info);
int8_t System_DateTime__System_IConvertible_ToSByte (System_DateTime_o __this, System_IFormatProvider_o* provider, const MethodInfo* method_info);
uint8_t System_DateTime__System_IConvertible_ToByte (System_DateTime_o __this, System_IFormatProvider_o* provider, const MethodInfo* method_info);
int16_t System_DateTime__System_IConvertible_ToInt16 (System_DateTime_o __this, System_IFormatProvider_o* provider, const MethodInfo* method_info);
uint16_t System_DateTime__System_IConvertible_ToUInt16 (System_DateTime_o __this, System_IFormatProvider_o* provider, const MethodInfo* method_info);
int32_t System_DateTime__System_IConvertible_ToInt32 (System_DateTime_o __this, System_IFormatProvider_o* provider, const MethodInfo* method_info);
uint32_t System_DateTime__System_IConvertible_ToUInt32 (System_DateTime_o __this, System_IFormatProvider_o* provider, const MethodInfo* method_info);
int64_t System_DateTime__System_IConvertible_ToInt64 (System_DateTime_o __this, System_IFormatProvider_o* provider, const MethodInfo* method_info);
uint64_t System_DateTime__System_IConvertible_ToUInt64 (System_DateTime_o __this, System_IFormatProvider_o* provider, const MethodInfo* method_info);
float System_DateTime__System_IConvertible_ToSingle (System_DateTime_o __this, System_IFormatProvider_o* provider, const MethodInfo* method_info);
double System_DateTime__System_IConvertible_ToDouble (System_DateTime_o __this, System_IFormatProvider_o* provider, const MethodInfo* method_info);
System_Decimal_o System_DateTime__System_IConvertible_ToDecimal (System_DateTime_o __this, System_IFormatProvider_o* provider, const MethodInfo* method_info);
System_DateTime_o System_DateTime__System_IConvertible_ToDateTime (System_DateTime_o __this, System_IFormatProvider_o* provider, const MethodInfo* method_info);
Il2CppObject* System_DateTime__System_IConvertible_ToType (System_DateTime_o __this, System_Type_o* type, System_IFormatProvider_o* provider, const MethodInfo* method_info);
bool System_DateTime__TryCreate (int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, System_DateTime_o* result, const MethodInfo* method_info);
void System_DateTime___cctor (const MethodInfo* method_info);
