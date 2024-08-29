#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
194,
204,
205,
206,
207,
208,
209,
210,
211,
212,
215,
216,
317,
318,
319,
348,
349,
350,
370,
371,
372,
373,
470,
471,
472,
475,
510,
511,
513,
515,
517,
519,
524,
532,
533,
534,
535,
536,
537,
538,
539,
540,
541,
618,
619,
673,
674,
740,
746,
749,
751,
756,
757,
759,
760,
764,
765,
767,
769,
770,
773,
774,
775,
778,
780,
783,
785,
787,
796,
860,
862,
864,
874,
875,
876,
877,
879,
886,
887,
888,
889,
890,
898,
899,
900,
904,
905,
907,
911,
912,
913,
1192,
1370,
1371,
8388,
8389,
8391,
8392,
8393,
8394,
8395,
8397,
8399,
8401,
8411,
8413,
8418,
8420,
8422,
8424,
8475,
8476,
8478,
8479,
8480,
8481,
8482,
8484,
8486,
9398,
9402,
9404,
9405,
9406,
9407,
9657,
9658,
9659,
9660,
9678,
9679,
9680,
9682,
9724,
9783,
9785,
9787,
9795,
9796,
9797,
9798,
10179,
10183,
10184,
10211,
10229,
10236,
10243,
10254,
10258,
10278,
10352,
10354,
10363,
10365,
10366,
10373,
10387,
10407,
10408,
10416,
10418,
10425,
10426,
10429,
10431,
10436,
10442,
10443,
10450,
10452,
10464,
10467,
10468,
10469,
10480,
10489,
10495,
10496,
10497,
10499,
10500,
10517,
10519,
10533,
10550,
10577,
10607,
10608,
11044,
11136,
11137,
11339,
11340,
11347,
11348,
11349,
11354,
11429,
11819,
11820,
12036,
12046,
12776,
12797,
12799,
12801,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 194,
ves_icall_System_Array_InternalCreate,
// token 204,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 205,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 206,
ves_icall_System_Array_CanChangePrimitive,
// token 207,
ves_icall_System_Array_FastCopy,
// token 208,
ves_icall_System_Array_GetLengthInternal_raw,
// token 209,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 210,
ves_icall_System_Array_GetGenericValue_icall,
// token 211,
ves_icall_System_Array_GetValueImpl_raw,
// token 212,
ves_icall_System_Array_SetGenericValue_icall,
// token 215,
ves_icall_System_Array_SetValueImpl_raw,
// token 216,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 317,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 318,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 319,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 348,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 349,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 350,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 370,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 371,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 372,
ves_icall_System_Enum_InternalGetCorElementType,
// token 373,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 470,
ves_icall_System_Environment_get_ProcessorCount,
// token 471,
ves_icall_System_Environment_get_TickCount,
// token 472,
ves_icall_System_Environment_get_TickCount64,
// token 475,
ves_icall_System_Environment_FailFast_raw,
// token 510,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 511,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 513,
ves_icall_System_GC_SuppressFinalize_raw,
// token 515,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 517,
ves_icall_System_GC_GetGCMemoryInfo,
// token 519,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 524,
ves_icall_System_Object_MemberwiseClone_raw,
// token 532,
ves_icall_System_Math_Ceiling,
// token 533,
ves_icall_System_Math_Cos,
// token 534,
ves_icall_System_Math_Floor,
// token 535,
ves_icall_System_Math_Log10,
// token 536,
ves_icall_System_Math_Pow,
// token 537,
ves_icall_System_Math_Sin,
// token 538,
ves_icall_System_Math_Sqrt,
// token 539,
ves_icall_System_Math_Tan,
// token 540,
ves_icall_System_Math_Log2,
// token 541,
ves_icall_System_Math_ModF,
// token 618,
ves_icall_System_MathF_Log2,
// token 619,
ves_icall_System_MathF_ModF,
// token 673,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 674,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 740,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 746,
ves_icall_RuntimeType_make_array_type_raw,
// token 749,
ves_icall_RuntimeType_make_byref_type_raw,
// token 751,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 756,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 757,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 759,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 760,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 764,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 765,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 767,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 769,
ves_icall_System_RuntimeType_getFullName_raw,
// token 770,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 773,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 774,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 775,
ves_icall_RuntimeType_GetFields_native_raw,
// token 778,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 780,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 783,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 785,
ves_icall_RuntimeType_GetName_raw,
// token 787,
ves_icall_RuntimeType_GetNamespace_raw,
// token 796,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 860,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 862,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 864,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 874,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 875,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 876,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 877,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 879,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 886,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 887,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 888,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 889,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 890,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 898,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 899,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 900,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 904,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 905,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 907,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 911,
ves_icall_System_String_FastAllocateString_raw,
// token 912,
ves_icall_System_String_InternalIsInterned_raw,
// token 913,
ves_icall_System_String_InternalIntern_raw,
// token 1192,
ves_icall_System_Type_internal_from_handle_raw,
// token 1370,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1371,
ves_icall_System_ValueType_Equals_raw,
// token 8388,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8389,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8391,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8392,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8393,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8394,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8395,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8397,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8399,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8401,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8411,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8413,
mono_monitor_exit_icall_raw,
// token 8418,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8420,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8422,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8424,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8475,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8476,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8478,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8479,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8480,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8481,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8482,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8484,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8486,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9398,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9402,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9404,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9405,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9406,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9407,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9657,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9658,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9659,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9660,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9678,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9679,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9680,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9682,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 9724,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9783,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 9785,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 9787,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9795,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9796,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9797,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 9798,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 10179,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 10183,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 10184,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 10211,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 10229,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 10236,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 10243,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 10254,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 10258,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 10278,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 10352,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 10354,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 10363,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 10365,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 10366,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 10373,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 10387,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 10407,
ves_icall_reflection_get_token_raw,
// token 10408,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 10416,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 10418,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 10425,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 10426,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 10429,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 10431,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10436,
ves_icall_reflection_get_token_raw,
// token 10442,
ves_icall_get_method_info_raw,
// token 10443,
ves_icall_get_method_attributes,
// token 10450,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10452,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10464,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10467,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10468,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10469,
ves_icall_reflection_get_token_raw,
// token 10480,
ves_icall_InternalInvoke_raw,
// token 10489,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10495,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10496,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10497,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10499,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10500,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10517,
ves_icall_InvokeClassConstructor_raw,
// token 10519,
ves_icall_InternalInvoke_raw,
// token 10533,
ves_icall_reflection_get_token_raw,
// token 10550,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10577,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10607,
ves_icall_reflection_get_token_raw,
// token 10608,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 11044,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 11136,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 11137,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 11339,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11340,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11347,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 11348,
ves_icall_ModuleBuilder_getToken_raw,
// token 11349,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 11354,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11429,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11819,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11820,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 12036,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 12046,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 12776,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12797,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12799,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12801,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
