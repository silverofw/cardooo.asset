﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};

struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
struct Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391;
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
struct Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A;
struct Dictionary_2_tE4338305F3537556B20A4483BABF6D7D6FE1B9B9;
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7;
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEqualityComparer_1_t38009044A4DADA30C1C7C33E1DB1F56A370D4EE0;
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t73C3366FF37ECFD1CC6142A80D1A0E31E89DDB04;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9;
struct LinkedList_1_t89E3EDA3D3331CC4A1385EB118E2317E8E7F1E44;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
struct List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72;
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
struct ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24;
struct EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B;
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ChunkU5BU5D_t95CFB8B54DAFA085DBAC233BCB9254A640F28F3C;
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Exception_t;
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067;
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct StringBuilder_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600;
struct Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793;
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;
struct Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA;

IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5;
IL2CPP_EXTERN_C String_t* _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946;
IL2CPP_EXTERN_C String_t* _stringLiteralC2753D07AF090380ACE5333B7A09995955528ABE;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9* ____keys;
	ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24* ____values;
	RuntimeObject* ____syncRoot;
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72  : public RuntimeObject
{
	ChunkU5BU5D_t95CFB8B54DAFA085DBAC233BCB9254A640F28F3C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};
struct Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793  : public RuntimeObject
{
	uint32_t ___totalBytes;
	uint32_t ___defaulChunkSize;
	List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72* ___chunks;
	Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* ___existingValues;
	Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A* ___serializationAdapters;
};
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor;
};
struct Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA  : public RuntimeObject
{
	uint32_t ___position;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 
{
	List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72* ____list;
	int32_t ____index;
	int32_t ____version;
	Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* ____current;
};
struct LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565 
{
	int32_t ___entryLimit;
	Dictionary_2_tE4338305F3537556B20A4483BABF6D7D6FE1B9B9* ___cache;
	LinkedList_1_t89E3EDA3D3331CC4A1385EB118E2317E8E7F1E44* ___lru;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body;
};
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 
{
	int32_t ___m_Version;
	RuntimeObject* ___m_InternalOp;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager;
};
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_pinvoke
{
	int32_t ___m_Version;
	RuntimeObject* ___m_InternalOp;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager;
};
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_com
{
	int32_t ___m_Version;
	RuntimeObject* ___m_InternalOp;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 
{
	uint32_t ___stringId;
	uint32_t ___nextId;
};
struct ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A 
{
	uint32_t ___typeId;
	uint32_t ___objectId;
};
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters;
};
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables;
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame;
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars;
};
struct ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA 
{
	uint32_t ___stringId;
	Il2CppChar ___separator;
};
struct ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_marshaled_pinvoke
{
	uint32_t ___stringId;
	uint8_t ___separator;
};
struct ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_marshaled_com
{
	uint32_t ___stringId;
	uint8_t ___separator;
};
struct Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D 
{
	uint32_t ___assemblyId;
	uint32_t ___classId;
};
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Buffer;
	Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A* ___m_Adapters;
	LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565 ___m_Cache;
	StringBuilder_t* ___stringBuilder;
};
struct InternalOp_tBDC23A9687C8968D1086B882C50280316C8CAB4B  : public RuntimeObject
{
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___m_AssetBundle;
	AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___m_PreloadRequest;
	AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___m_RequestOperation;
	RuntimeObject* ___m_Result;
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 ___m_ProvideHandle;
	String_t* ___subObjectName;
};
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray;
};
struct List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72_StaticFields
{
	ChunkU5BU5D_t95CFB8B54DAFA085DBAC233BCB9254A640F28F3C* ___s_emptyArray;
};
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache;
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories;
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, bool ___1_cacheValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_TryGetCachedValue_TisRuntimeObject_m378281E383A4CD8A2DA1034DC7DA6EE583D6B352_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, RuntimeObject** ___1_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_gshared (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, uint32_t ___0_id, RuntimeObject* ___1_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_gshared (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, uint32_t ___0_offset, RuntimeObject** ___1_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_values, bool ___1_hashElements, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F_gshared (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Reader_ReadObject_m60087ED32721C8797522F51D63896A0B8D800BA2 (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, Type_t* ___0_t, uint32_t ___1_id, bool ___2_cacheValue, const RuntimeMethod* method) ;
inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387 (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, bool ___1_cacheValue, const RuntimeMethod* method)
{
	return ((  UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, bool, const RuntimeMethod*))Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_gshared)(__this, ___0_id, ___1_cacheValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool Reader_TryGetCachedValue_TisUInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_m171BEE00C2EF9D7A0BBC5799382BF32BF59EE51D (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA** ___1_val, const RuntimeMethod* method)
{
	return ((  bool (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA**, const RuntimeMethod*))Reader_TryGetCachedValue_TisRuntimeObject_m378281E383A4CD8A2DA1034DC7DA6EE583D6B352_gshared)(__this, ___0_offset, ___1_val, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline bool LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3 (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, uint32_t ___0_id, RuntimeObject* ___1_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*, uint32_t, RuntimeObject*, const RuntimeMethod*))LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_gshared)(__this, ___0_id, ___1_obj, method);
}
inline bool LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76 (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, uint32_t ___0_offset, RuntimeObject** ___1_val, const RuntimeMethod* method)
{
	return ((  bool (*) (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*, uint32_t, RuntimeObject**, const RuntimeMethod*))LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_gshared)(__this, ___0_offset, ___1_val, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_ReserveInternal_m9A1779F90497775A6053B8485FCFAFF3CDC5AF73 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_dataSize, bool ___1_prefixSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, void* ___0_pData, uint32_t ___1_dataSize, bool ___2_prefixSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14 (void* ___0_pData, uint64_t ___1_size, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* ___2_hash, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, uint32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* Writer_FindChunkWithSpace_m81B652C6FE31B0A45E2F90A87E9EA02092ECBE77 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_length, const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8 (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, uint32_t, const RuntimeMethod*))Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteInternal_mFEC1AC834A029D7D9FE87381C44967BFDB68EA64 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_id, void* ___1_pData, uint32_t ___2_dataSize, bool ___3_prefixSize, const RuntimeMethod* method) ;
inline Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F (List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 (*) (List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257 (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_inline (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899* __this, const RuntimeMethod* method)
{
	return ((  Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* (*) (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_WriteObject_m9AAB78B632B61A8D5D2B0BC0C250CF70B8C8B371 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, RuntimeObject* ___0_obj, bool ___1_serializeTypeData, const RuntimeMethod* method) ;
inline uint32_t Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_values, bool ___1_hashElements, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, bool, const RuntimeMethod*))Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_gshared)(__this, ___0_values, ___1_hashElements, method);
}
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method)
{
	return ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, const RuntimeMethod*))ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F_gshared)(__this, ___0_node, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t068F5201D923072F46716204841D21328FE6218D* (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared)(method);
}
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_m5BFF8BF215EBBD2B94DB67B384DAB97E221FA134_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___0_args;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Reader_ReadObject_TisRuntimeObject_m89E2D400BA86BDF838C372099DE6DB96B3578D1C_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, bool ___1_cacheValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		uint32_t L_2 = ___0_offset;
		bool L_3 = ___1_cacheValue;
		RuntimeObject* L_4;
		L_4 = Reader_ReadObject_m60087ED32721C8797522F51D63896A0B8D800BA2(__this, L_1, L_2, L_3, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadObject_TisIl2CppFullySharedGenericAny_m47A8D2F2F19B59E62D90270D9D72B2CE879D0A46_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, bool ___1_cacheValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tECBAAE7384CBA557AB875DA1973DD604F24CC697 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tECBAAE7384CBA557AB875DA1973DD604F24CC697);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		uint32_t L_2 = ___0_offset;
		bool L_3 = ___1_cacheValue;
		RuntimeObject* L_4;
		L_4 = Reader_ReadObject_m60087ED32721C8797522F51D63896A0B8D800BA2(__this, L_1, L_2, L_3, NULL);
		void* L_6 = UnBox_Any(L_4, il2cpp_rgctx_data(method->rgctx_data, 1), L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6))), SizeOf_T_tECBAAE7384CBA557AB875DA1973DD604F24CC697);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Reader_ReadObjectArray_TisIl2CppFullySharedGenericAny_mFCA1042D54B8FAE98E760D284838FE348545F489_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, bool ___1_cacheValues, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t821854D62406274345073E3DA287C24FA32A3599 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t821854D62406274345073E3DA287C24FA32A3599);
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0006;
		}
	}
	{
		return (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_0006:
	{
		uint32_t L_1 = ___0_id;
		bool L_2 = ___1_cacheValues;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387(__this, L_1, L_2, Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_RuntimeMethod_var);
		V_0 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		NullCheck(L_4);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_1 = L_5;
		V_2 = 0;
		goto IL_0031;
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_1;
		int32_t L_7 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		bool L_12 = ___1_cacheValues;
		InvokerActionInvoker3< uint32_t, bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_11, L_12, (Il2CppFullySharedGenericAny*)L_13);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_13, SizeOf_T_t821854D62406274345073E3DA287C24FA32A3599);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0031:
	{
		int32_t L_15 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB7D5A9CE82410118BB74F3903944D75329184C75_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		bool L_18 = (*(bool*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17)))));
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 Reader_ReadValue_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_m9DB5C6CB68A5DBA64913C592F79F152D9DFB7BBF_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_18 = (*(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17)))));
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m298715E2251AB0CF9402C163D7F55F3DA3A440F3_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		int32_t L_18 = (*(int32_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17)))));
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Reader_ReadValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m65A1B3772ED69D47101427F3A822C58A0BD1EBBF_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		int64_t L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		int64_t L_18 = (*(int64_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17)))));
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadValue_TisIl2CppFullySharedGenericStruct_m485132093A736AC2D8737907CDF1237252F68DB3_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
	const Il2CppFullySharedGenericStruct L_18 = L_1;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
	memset(V_0, 0, SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
		return;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		il2cpp_codegen_memcpy(L_18, ((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17)))), SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_18, SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 Reader_ReadValue_TisDynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53_m7F8F623E1365DCDCC61235608F97DA64797F5B14_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53));
		DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 L_18 = (*(DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17)))));
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A Reader_ReadValue_TisObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A_m00DCED7313915341E43267303C4BDD15E315D4DB_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A));
		ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A L_18 = (*(ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17)))));
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA Reader_ReadValue_TisObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_mFD04F4E677525B0998B0995997E259E83672D95F_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA));
		ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA L_18 = (*(ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17)))));
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D Reader_ReadValue_TisData_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D_m6AB2EDB1C610CDB3A6C93B36CEE34F5298B1DA1C_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D));
		Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D L_18 = (*(Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17)))));
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, bool ___1_cacheValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	uint32_t V_3 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	uint32_t* V_5 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0006;
		}
	}
	{
		return (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
	}

IL_0006:
	{
		uint32_t L_1 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___m_Buffer;
		NullCheck(L_2);
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 4))))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		uint32_t L_3 = ___0_id;
		uint32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_5, L_8, NULL);
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0038:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		uint32_t L_12 = ___0_id;
		NullCheck(L_11);
		V_1 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 4)))));
		uint8_t* L_13 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_13);
		uint32_t L_14 = ___0_id;
		bool L_15;
		L_15 = Reader_TryGetCachedValue_TisUInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_m171BEE00C2EF9D7A0BBC5799382BF32BF59EE51D(__this, L_14, (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_15)
		{
			goto IL_0057;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_2;
		return L_16;
	}

IL_0057:
	{
		V_3 = (uint32_t)0;
		uint8_t* L_17 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)L_17, ((int64_t)4), NULL);
		uint32_t L_18 = ___0_id;
		uint32_t L_19 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___m_Buffer;
		NullCheck(L_20);
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19))))) <= ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0096;
		}
	}
	{
		uint32_t L_21 = V_3;
		uint32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___m_Buffer;
		NullCheck(L_24);
		int32_t L_25 = ((int32_t)(((RuntimeArray*)L_24)->max_length));
		RuntimeObject* L_26 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_25);
		String_t* L_27;
		L_27 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2753D07AF090380ACE5333B7A09995955528ABE)), L_23, L_26, NULL);
		Exception_t* L_28 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, method);
	}

IL_0096:
	{
		uint32_t L_29 = V_3;
		uint32_t L_30 = sizeof(uint32_t);
		if ((int64_t)(((int64_t)(((int64_t)(uint64_t)L_29)/((int64_t)((int32_t)L_30))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 3), (uint32_t)((intptr_t)((int64_t)(((int64_t)(uint64_t)L_29)/((int64_t)((int32_t)L_30))))));
		V_4 = L_31;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = L_32;
		V_6 = L_33;
		if (!L_33)
		{
			goto IL_00b5;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_6;
		NullCheck(L_34);
		if (((int32_t)(((RuntimeArray*)L_34)->max_length)))
		{
			goto IL_00bb;
		}
	}

IL_00b5:
	{
		V_5 = (uint32_t*)((uintptr_t)0);
		goto IL_00c6;
	}

IL_00bb:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_6;
		NullCheck(L_35);
		V_5 = (uint32_t*)((uintptr_t)((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_00c6:
	{
		uint32_t* L_36 = V_5;
		uint8_t* L_37 = V_0;
		uint32_t L_38 = V_3;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_36, (void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, 4))), ((int64_t)(uint64_t)L_38), NULL);
		V_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		bool L_39 = ___1_cacheValue;
		if (!L_39)
		{
			goto IL_00e8;
		}
	}
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_40 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		uint32_t L_41 = ___0_id;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_4;
		bool L_43;
		L_43 = LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3(L_40, L_41, (RuntimeObject*)L_42, LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
	}

IL_00e8:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_4;
		return L_44;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* Reader_ReadValueArray_TisIl2CppFullySharedGenericStruct_m8A6E4E29F5AAFEA2743F7E8C237FBE7CCA5844A8_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, bool ___1_cacheValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tBD5AE8C7901D08A42121E477B8722A04FA6FC867 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_2 = NULL;
	uint32_t V_3 = 0;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_4 = NULL;
	Il2CppFullySharedGenericStruct* V_5 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_6 = NULL;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0006;
		}
	}
	{
		return (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)NULL;
	}

IL_0006:
	{
		uint32_t L_1 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___m_Buffer;
		NullCheck(L_2);
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 4))))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		uint32_t L_3 = ___0_id;
		uint32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_5, L_8, NULL);
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0038:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		uint32_t L_12 = ___0_id;
		NullCheck(L_11);
		V_1 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 4)))));
		uint8_t* L_13 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_13);
		uint32_t L_14 = ___0_id;
		bool L_15;
		L_15 = ((  bool (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_14, (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_15)
		{
			goto IL_0057;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_16 = V_2;
		return L_16;
	}

IL_0057:
	{
		V_3 = (uint32_t)0;
		uint8_t* L_17 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)L_17, ((int64_t)4), NULL);
		uint32_t L_18 = ___0_id;
		uint32_t L_19 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___m_Buffer;
		NullCheck(L_20);
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19))))) <= ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0096;
		}
	}
	{
		uint32_t L_21 = V_3;
		uint32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___m_Buffer;
		NullCheck(L_24);
		int32_t L_25 = ((int32_t)(((RuntimeArray*)L_24)->max_length));
		RuntimeObject* L_26 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_25);
		String_t* L_27;
		L_27 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2753D07AF090380ACE5333B7A09995955528ABE)), L_23, L_26, NULL);
		Exception_t* L_28 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, method);
	}

IL_0096:
	{
		uint32_t L_29 = V_3;
		uint32_t L_30 = SizeOf_T_tBD5AE8C7901D08A42121E477B8722A04FA6FC867;
		if ((int64_t)(((int64_t)(((int64_t)(uint64_t)L_29)/((int64_t)((int32_t)L_30))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_31 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)(__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 3), (uint32_t)((intptr_t)((int64_t)(((int64_t)(uint64_t)L_29)/((int64_t)((int32_t)L_30))))));
		V_4 = L_31;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_32 = V_4;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_33 = L_32;
		V_6 = L_33;
		if (!L_33)
		{
			goto IL_00b5;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_34 = V_6;
		NullCheck(L_34);
		if (((int32_t)(((RuntimeArray*)L_34)->max_length)))
		{
			goto IL_00bb;
		}
	}

IL_00b5:
	{
		V_5 = (Il2CppFullySharedGenericStruct*)((uintptr_t)0);
		goto IL_00c6;
	}

IL_00bb:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_35 = V_6;
		NullCheck(L_35);
		V_5 = (Il2CppFullySharedGenericStruct*)((uintptr_t)((Il2CppFullySharedGenericStruct*)(L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_00c6:
	{
		Il2CppFullySharedGenericStruct* L_36 = V_5;
		uint8_t* L_37 = V_0;
		uint32_t L_38 = V_3;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_36, (void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, 4))), ((int64_t)(uint64_t)L_38), NULL);
		V_6 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)NULL;
		bool L_39 = ___1_cacheValue;
		if (!L_39)
		{
			goto IL_00e8;
		}
	}
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_40 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		uint32_t L_41 = ___0_id;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_42 = V_4;
		bool L_43;
		L_43 = LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3(L_40, L_41, (RuntimeObject*)L_42, LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
	}

IL_00e8:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_44 = V_4;
		return L_44;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_TryGetCachedValue_TisRuntimeObject_m378281E383A4CD8A2DA1034DC7DA6EE583D6B352_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, RuntimeObject** ___1_val, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_0 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		uint32_t L_1 = ___0_offset;
		bool L_2;
		L_2 = LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76(L_0, L_1, (&V_0), LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject** L_3 = ___1_val;
		RuntimeObject* L_4 = V_0;
		*(RuntimeObject**)L_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 1))));
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject** L_5 = ___1_val;
		il2cpp_codegen_initobj(L_5, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_TryGetCachedValue_TisIl2CppFullySharedGenericAny_m151773AC14DF9C7BDA828C249287B71490E8475F_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, Il2CppFullySharedGenericAny* ___1_val, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t5C0F3E77CC912EF60F10E0446BEBC8179091A551 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t5C0F3E77CC912EF60F10E0446BEBC8179091A551);
	RuntimeObject* V_0 = NULL;
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_0 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		uint32_t L_1 = ___0_offset;
		bool L_2;
		L_2 = LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76(L_0, L_1, (&V_0), LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___1_val;
		RuntimeObject* L_4 = V_0;
		void* L_6 = UnBox_Any(L_4, il2cpp_rgctx_data(method->rgctx_data, 1), L_5);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6))), SizeOf_T_t5C0F3E77CC912EF60F10E0446BEBC8179091A551);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_3, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6))));
		return (bool)1;
	}

IL_001e:
	{
		Il2CppFullySharedGenericAny* L_7 = ___1_val;
		il2cpp_codegen_initobj(L_7, SizeOf_T_t5C0F3E77CC912EF60F10E0446BEBC8179091A551);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Reserve_TisIl2CppFullySharedGenericStruct_m6C3475B760340AD0C2C3DAE671C07B00C6933259_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAD28673DFDA47E13D7EFCDBF8F3EC1BE20A2DCDF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tAD28673DFDA47E13D7EFCDBF8F3EC1BE20A2DCDF;
		uint32_t L_1;
		L_1 = Writer_ReserveInternal_m9A1779F90497775A6053B8485FCFAFF3CDC5AF73(__this, L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Reserve_TisIl2CppFullySharedGenericStruct_mE24A71A6AC46599AD20C620E585A36512B0F467B_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tEF9A349F5CAC3CC260DAB237BEE7009D6C5DBB9E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tEF9A349F5CAC3CC260DAB237BEE7009D6C5DBB9E;
		uint32_t L_1 = ___0_count;
		uint32_t L_2;
		L_2 = Writer_ReserveInternal_m9A1779F90497775A6053B8485FCFAFF3CDC5AF73(__this, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)), (bool)1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB45C272FF5E3BA1A875244D239B246CD91BE214E_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, bool ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(bool);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_mB4A1E22E477148AD2E1AFE3B58E12D77CBC81EF2_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m042BC9E7D84F216F0BBFD918C48587F96572CF57_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, int32_t ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m829C42A192B8075D18C538B2A01F9BD9876F9908_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, int64_t ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int64_t);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m7570060A594296F3B0136718F14DD48B08AAE244_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Il2CppFullySharedGenericStruct ___0_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tDB8D1C44ADB32944EED2913050ED827CC69CF70F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tDB8D1C44ADB32944EED2913050ED827CC69CF70F;
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(Il2CppFullySharedGenericStruct*)___0_val), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m19F3BE1901356C08F4ED504BB87D54CBA077107C_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Il2CppFullySharedGenericStruct* ___0_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5C70F0C38E743DE890656C0A78E32A60FAFC8BBB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_val;
		V_1 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = V_1;
		V_0 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_1);
		Il2CppFullySharedGenericStruct* L_2 = V_0;
		uint32_t L_3 = SizeOf_T_t5C70F0C38E743DE890656C0A78E32A60FAFC8BBB;
		uint32_t L_4;
		L_4 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)L_2, L_3, (bool)0, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisDynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53_m6A59B04C3BC525AF3C5F05C1FD5E4D451B5225A0_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A_m0271742BD5A3F7EA56AE26C84F7B94BA3B1AD190_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_m3BF6D2CD8719FE1C5003348AF46CC9338E9F0027_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisData_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D_mBFAA6DE29A89519BFAED75A7B084D0E64EF4B978_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_values, bool ___1_hashElements, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint32_t V_4 = 0;
	Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* V_5 = NULL;
	uint8_t* V_6 = NULL;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_values;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint32_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint32_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_values;
		NullCheck(L_4);
		uint32_t L_5 = sizeof(uint32_t);
		V_2 = (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_4)->max_length)), (int32_t)L_5));
		uint32_t* L_6 = V_0;
		uint32_t L_7 = V_2;
		BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)L_6, (uint64_t)((int64_t)(uint64_t)L_7), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_3)), NULL);
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_8 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_9 = V_3;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D(L_8, L_9, (&V_4), Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_11 = V_4;
		return L_11;
	}

IL_0041:
	{
		uint32_t L_12 = V_2;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_13;
		L_13 = Writer_FindChunkWithSpace_m81B652C6FE31B0A45E2F90A87E9EA02092ECBE77(__this, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, 4)), NULL);
		V_5 = L_13;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_14 = V_5;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14->___data;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_16 = V_5;
		NullCheck(L_16);
		uint32_t L_17 = L_16->___position;
		NullCheck(L_15);
		V_6 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)));
		uint8_t* L_18 = V_6;
		uint32_t L_19 = __this->___totalBytes;
		V_7 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, 4));
		uintptr_t L_20 = ((uintptr_t)L_18);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_20, (void*)((uintptr_t)(&V_2)), ((int64_t)4), NULL);
		uint32_t* L_21 = V_0;
		uint32_t L_22 = V_2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_20, 4))), (void*)L_21, ((int64_t)(uint64_t)L_22), NULL);
		uint32_t L_23 = V_2;
		V_8 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, 4));
		uint32_t L_24 = __this->___totalBytes;
		uint32_t L_25 = V_8;
		__this->___totalBytes = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25));
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_26 = V_5;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_27 = L_26;
		NullCheck(L_27);
		uint32_t L_28 = L_27->___position;
		uint32_t L_29 = V_8;
		NullCheck(L_27);
		L_27->___position = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29));
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_30 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_31 = V_3;
		uint32_t L_32 = V_7;
		NullCheck(L_30);
		Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_30, L_31, L_32, Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		bool L_33 = ___1_hashElements;
		if (!L_33)
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_34 = sizeof(uint32_t);
		if ((((int32_t)L_34) <= ((int32_t)4)))
		{
			goto IL_0110;
		}
	}
	{
		V_9 = 0;
		goto IL_0109;
	}

IL_00c7:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		uint32_t* L_35 = V_0;
		int32_t L_36 = V_9;
		uint32_t L_37 = sizeof(uint32_t);
		uint32_t L_38 = sizeof(uint32_t);
		BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), (int32_t)L_37))))), (uint64_t)((int64_t)((int32_t)L_38)), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_3)), NULL);
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_39 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_40 = V_3;
		uint32_t L_41 = V_7;
		int32_t L_42 = V_9;
		uint32_t L_43 = sizeof(uint32_t);
		NullCheck(L_39);
		Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_39, L_40, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)il2cpp_codegen_multiply(L_42, (int32_t)L_43)))), Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		int32_t L_44 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0109:
	{
		int32_t L_45 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___0_values;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_00c7;
		}
	}

IL_0110:
	{
		uint32_t L_47 = V_7;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m2E39C9C3A4DCE833A27E5A18846D87F9F2371F7A_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_values, bool ___1_hashElements, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_1 = NULL;
	uint32_t V_2 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint32_t V_4 = 0;
	Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* V_5 = NULL;
	uint8_t* V_6 = NULL;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = ___0_values;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (Il2CppFullySharedGenericStruct*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (Il2CppFullySharedGenericStruct*)((uintptr_t)((Il2CppFullySharedGenericStruct*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = ___0_values;
		NullCheck(L_4);
		uint32_t L_5 = SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4;
		V_2 = (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_4)->max_length)), (int32_t)L_5));
		Il2CppFullySharedGenericStruct* L_6 = V_0;
		uint32_t L_7 = V_2;
		BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)L_6, (uint64_t)((int64_t)(uint64_t)L_7), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_3)), NULL);
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_8 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_9 = V_3;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D(L_8, L_9, (&V_4), Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_11 = V_4;
		return L_11;
	}

IL_0041:
	{
		uint32_t L_12 = V_2;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_13;
		L_13 = Writer_FindChunkWithSpace_m81B652C6FE31B0A45E2F90A87E9EA02092ECBE77(__this, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, 4)), NULL);
		V_5 = L_13;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_14 = V_5;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14->___data;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_16 = V_5;
		NullCheck(L_16);
		uint32_t L_17 = L_16->___position;
		NullCheck(L_15);
		V_6 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)));
		uint8_t* L_18 = V_6;
		uint32_t L_19 = __this->___totalBytes;
		V_7 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, 4));
		uintptr_t L_20 = ((uintptr_t)L_18);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_20, (void*)((uintptr_t)(&V_2)), ((int64_t)4), NULL);
		Il2CppFullySharedGenericStruct* L_21 = V_0;
		uint32_t L_22 = V_2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_20, 4))), (void*)L_21, ((int64_t)(uint64_t)L_22), NULL);
		uint32_t L_23 = V_2;
		V_8 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, 4));
		uint32_t L_24 = __this->___totalBytes;
		uint32_t L_25 = V_8;
		__this->___totalBytes = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25));
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_26 = V_5;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_27 = L_26;
		NullCheck(L_27);
		uint32_t L_28 = L_27->___position;
		uint32_t L_29 = V_8;
		NullCheck(L_27);
		L_27->___position = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29));
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_30 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_31 = V_3;
		uint32_t L_32 = V_7;
		NullCheck(L_30);
		Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_30, L_31, L_32, Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		bool L_33 = ___1_hashElements;
		if (!L_33)
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_34 = SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4;
		if ((((int32_t)L_34) <= ((int32_t)4)))
		{
			goto IL_0110;
		}
	}
	{
		V_9 = 0;
		goto IL_0109;
	}

IL_00c7:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		Il2CppFullySharedGenericStruct* L_35 = V_0;
		int32_t L_36 = V_9;
		uint32_t L_37 = SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4;
		uint32_t L_38 = SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4;
		BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)((uintptr_t)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), (int32_t)L_37))))), (uint64_t)((int64_t)((int32_t)L_38)), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_3)), NULL);
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_39 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_40 = V_3;
		uint32_t L_41 = V_7;
		int32_t L_42 = V_9;
		uint32_t L_43 = SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4;
		NullCheck(L_39);
		Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_39, L_40, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)il2cpp_codegen_multiply(L_42, (int32_t)L_43)))), Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		int32_t L_44 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0109:
	{
		int32_t L_45 = V_9;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_46 = ___0_values;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_00c7;
		}
	}

IL_0110:
	{
		uint32_t L_47 = V_7;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m1F36B0202AA640C59BE8DBBBDDCCEAD13E450E4E_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_offset, Il2CppFullySharedGenericStruct ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t6FE7FC22E2C0C40985040077400A9AC2F7747B35 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = ___0_offset;
		uint32_t L_1 = SizeOf_T_t6FE7FC22E2C0C40985040077400A9AC2F7747B35;
		Writer_WriteInternal_mFEC1AC834A029D7D9FE87381C44967BFDB68EA64(__this, L_0, (void*)((uintptr_t)(Il2CppFullySharedGenericStruct*)___1_val), L_1, (bool)0, NULL);
		uint32_t L_2 = ___0_offset;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m7A3D45B37C05F32AC89762BCEA7FA71D03757896_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_offset, Il2CppFullySharedGenericStruct* ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA4F5C8530B7503B3E075A70A1741D3DE52289C0B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___1_val;
		V_1 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = V_1;
		V_0 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_1);
		uint32_t L_2 = ___0_offset;
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		uint32_t L_4 = SizeOf_T_tA4F5C8530B7503B3E075A70A1741D3DE52289C0B;
		Writer_WriteInternal_mFEC1AC834A029D7D9FE87381C44967BFDB68EA64(__this, L_2, (void*)L_3, L_4, (bool)0, NULL);
		V_1 = (Il2CppFullySharedGenericStruct*)((uintptr_t)0);
		uint32_t L_5 = ___0_offset;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m60DC005445A769FE90608945D4CB13E5EB0B0678_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_offset, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___1_values, bool ___2_hashElements, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_29 = alloca(SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B);
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_3 = NULL;
	Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* V_5 = NULL;
	uint8_t* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Il2CppFullySharedGenericStruct V_10 = alloca(SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B);
	memset(V_10, 0, SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B);
	uint32_t V_11 = 0;
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = ___1_values;
		NullCheck(L_0);
		uint32_t L_1 = SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), (int32_t)L_1));
		uint32_t L_2 = ___0_offset;
		V_1 = L_2;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3 = ___1_values;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = L_3;
		V_3 = L_4;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = V_3;
		NullCheck(L_5);
		if (((int32_t)(((RuntimeArray*)L_5)->max_length)))
		{
			goto IL_001c;
		}
	}

IL_0017:
	{
		V_2 = (Il2CppFullySharedGenericStruct*)((uintptr_t)0);
		goto IL_0025;
	}

IL_001c:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_6 = V_3;
		NullCheck(L_6);
		V_2 = (Il2CppFullySharedGenericStruct*)((uintptr_t)((Il2CppFullySharedGenericStruct*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0025:
	{
		List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72* L_7 = __this->___chunks;
		NullCheck(L_7);
		Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 L_8;
		L_8 = List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F(L_7, List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F_RuntimeMethod_var);
		V_4 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0103:
			{
				Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257((&V_4), Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00f5_1;
			}

IL_0037_1:
			{
				Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_9;
				L_9 = Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_inline((&V_4), Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_RuntimeMethod_var);
				V_5 = L_9;
				uint32_t L_10 = V_1;
				Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_11 = V_5;
				NullCheck(L_11);
				uint32_t L_12 = L_11->___position;
				if ((!(((uint32_t)L_10) < ((uint32_t)L_12))))
				{
					goto IL_00eb_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00e7_1:
					{
						V_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
						return;
					}
				});
				try
				{
					{
						Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_13 = V_5;
						NullCheck(L_13);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_13->___data;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
						V_7 = L_15;
						if (!L_15)
						{
							goto IL_005f_2;
						}
					}
					{
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_7;
						NullCheck(L_16);
						if (((int32_t)(((RuntimeArray*)L_16)->max_length)))
						{
							goto IL_0065_2;
						}
					}

IL_005f_2:
					{
						V_6 = (uint8_t*)((uintptr_t)0);
						goto IL_0070_2;
					}

IL_0065_2:
					{
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_7;
						NullCheck(L_17);
						V_6 = (uint8_t*)((uintptr_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
					}

IL_0070_2:
					{
						uint8_t* L_18 = V_6;
						uint32_t L_19 = V_1;
						UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, (intptr_t)((uintptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, 4)))))), (void*)((uintptr_t)(&V_0)), ((int64_t)4), NULL);
						uint8_t* L_20 = V_6;
						uint32_t L_21 = V_1;
						Il2CppFullySharedGenericStruct* L_22 = V_2;
						uint32_t L_23 = V_0;
						UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21)))), (void*)L_22, ((int64_t)(uint64_t)L_23), NULL);
						bool L_24 = ___2_hashElements;
						if (!L_24)
						{
							goto IL_00e2_2;
						}
					}
					{
						uint32_t L_25 = SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B;
						if ((((int32_t)L_25) <= ((int32_t)4)))
						{
							goto IL_00e2_2;
						}
					}
					{
						V_8 = 0;
						goto IL_00db_2;
					}

IL_00a1_2:
					{
						__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_26 = ___1_values;
						int32_t L_27 = V_8;
						NullCheck(L_26);
						int32_t L_28 = L_27;
						il2cpp_codegen_memcpy(L_29, (L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B);
						il2cpp_codegen_memcpy(V_10, L_29, SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B);
						uint32_t L_30 = SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B;
						BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)((uintptr_t)(Il2CppFullySharedGenericStruct*)V_10), (uint64_t)((int64_t)((int32_t)L_30)), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_9)), NULL);
						Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_31 = __this->___existingValues;
						Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_32 = V_9;
						uint32_t L_33 = ___0_offset;
						int32_t L_34 = V_8;
						uint32_t L_35 = SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B;
						NullCheck(L_31);
						Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_31, L_32, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_33, ((int32_t)il2cpp_codegen_multiply(L_34, (int32_t)L_35)))), Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
						int32_t L_36 = V_8;
						V_8 = ((int32_t)il2cpp_codegen_add(L_36, 1));
					}

IL_00db_2:
					{
						int32_t L_37 = V_8;
						__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_38 = ___1_values;
						NullCheck(L_38);
						if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
						{
							goto IL_00a1_2;
						}
					}

IL_00e2_2:
					{
						uint32_t L_39 = ___0_offset;
						V_11 = L_39;
						goto IL_0115;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00eb_1:
			{
				uint32_t L_40 = V_1;
				Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_41 = V_5;
				NullCheck(L_41);
				uint32_t L_42 = L_41->___position;
				V_1 = (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)L_42));
			}

IL_00f5_1:
			{
				bool L_43;
				L_43 = Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB((&V_4), Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB_RuntimeMethod_var);
				if (L_43)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_0111;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0111:
	{
		V_3 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)NULL;
		return (uint32_t)(-1);
	}

IL_0115:
	{
		uint32_t L_44 = V_11;
		return L_44;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_WriteObjects_TisIl2CppFullySharedGenericAny_mE9C845BE586B809CDB1731891E8F2BB84FA92FBE_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, RuntimeObject* ___0_objs, bool ___1_serizalizeTypeData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
	memset(V_3, 0, SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
	{
		RuntimeObject* L_0 = ___0_objs;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (uint32_t)(-1);
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_objs;
		int32_t L_2;
		L_2 = ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		V_1 = 0;
		RuntimeObject* L_4 = ___0_objs;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{
				{
					RuntimeObject* L_6 = V_2;
					if (!L_6)
					{
						goto IL_004a;
					}
				}
				{
					RuntimeObject* L_7 = V_2;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004a:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0037_1;
			}

IL_001c_1:
			{
				RuntimeObject* L_8 = V_2;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_memcpy(V_3, L_9, SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
				int32_t L_11 = V_1;
				int32_t L_12 = L_11;
				V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
				il2cpp_codegen_memcpy(L_13, V_3, SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
				RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), L_13);
				bool L_15 = ___1_serizalizeTypeData;
				uint32_t L_16;
				L_16 = Writer_WriteObject_m9AAB78B632B61A8D5D2B0BC0C250CF70B8C8B371(__this, L_14, L_15, NULL);
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint32_t)L_16);
			}

IL_0037_1:
			{
				RuntimeObject* L_17 = V_2;
				NullCheck((RuntimeObject*)L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
				if (L_18)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_004b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_0;
		uint32_t L_20;
		L_20 = Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980(__this, L_19, (bool)1, Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_RuntimeMethod_var);
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalOp_LoadBundleFromDependecies_TisRuntimeObject_m84785F4D039CCC3C767B50962BDA1E19ED039747_gshared (RuntimeObject* ___0_results, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0 = ___0_results;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_results;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_3 = V_2;
		return L_3;
	}

IL_0015:
	{
		V_0 = (RuntimeObject*)NULL;
		V_1 = (bool)1;
		V_3 = 0;
		goto IL_0043;
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___0_results;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var, L_4, L_5);
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_4;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_8 = V_4;
		NullCheck(L_8);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_9;
		L_9 = InterfaceFuncInvoker0< AssetBundle_tB38418819A49060CD738CB21541649340F082943* >::Invoke(0, IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var, L_8);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_11 = V_4;
		V_0 = L_11;
	}

IL_003d:
	{
		V_1 = (bool)0;
	}

IL_003f:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0043:
	{
		int32_t L_13 = V_3;
		RuntimeObject* L_14 = ___0_results;
		NullCheck((RuntimeObject*)L_14);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_16 = V_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisRuntimeObject_m8546CE5243FDDEFA3C7483FEB44BF91BD8F91DAF_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_1 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_7 = ___0_node;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___0_node;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisIl2CppFullySharedGenericAny_m3A43E5E58A18E3D2892C620B8AED19012BA4E57B_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___0_node, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_1 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_7 = ___0_node;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___0_node;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisRuntimeObject_m367D8F5D10D80B4A1A34D42A5339BAF95A51FE5E_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_0 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_3 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_6 = ___0_node;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = __this->____shadowedVars;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = __this->____shadowedVars;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_23 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_25 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_26 = ___0_node;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisIl2CppFullySharedGenericAny_m0060183C8192066670005792D19D2EC19C50DBB7_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_0 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_3 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_6 = ___0_node;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = __this->____shadowedVars;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = __this->____shadowedVars;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_23 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_25 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_26 = ___0_node;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mA9E7AA6DB293483965B65EEEBF63885DEF084EA2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRuntimeObject_m6C6E2EDC433DCAB90206712FB63993865A9B9305_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m97DBB59374BCA99C98C45F169AF69955608B68AA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m7C42EB46E69BD2515C39AB6013A0763C6479AD66_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0E8E39845CA3F1BFADAC1B15E849E5885D813E6F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m28D19B06528A4614AF9C3E29DC8274DE067868D8_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
