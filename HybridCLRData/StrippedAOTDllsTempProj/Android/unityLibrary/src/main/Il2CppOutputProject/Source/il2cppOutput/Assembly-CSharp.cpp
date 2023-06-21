#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

struct Action_1_t0A01E63A4339ABF30BF7C175CF376F7CE2BAC1A8;
struct Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE;
struct AsyncOperationBase_1_t264CB4D817C2464BBB4459949707E3EE57EA0E59;
struct AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16;
struct AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13;
struct AsyncOperationBase_1_t53CEC258A81CC6E6C433249F4DBF1B719395DBD7;
struct AsyncOperationBase_1_t7FF01DEBAE9F81B36369204D58419D7F66D5099C;
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
struct IList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827;
struct IReadOnlyList_1_t7BB300FE9C8B0D3BCB34B752D2516BD12EB5E8CF;
struct List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713;
struct List_1_t35606A619A8A2A5FF7964D0D06504FD6C4C46E3F;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct AsyncOperationHandle_1U5BU5D_t33A91BF335262C899952E2EE0C5FE73B06C13F26;
struct AsyncOperationHandle_1U5BU5D_tC322A803F4FB00759286F28E6B71283EB857D2EF;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1;
struct Assembly_t;
struct AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ConsoleToScreen_t4D4E2DA6049B115E29915B9B584C8009100A848E;
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
struct IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct LoadDll_tDC7D94A38579BD51146B0C4A28A079D1511D22C7;
struct LoadSceneForCustomBuild_tD39959EB3332929D94AFD87E8165BB53169D4B76;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodBase_t;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
struct Type_t;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
struct U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169;
struct U3CSpawnTemporaryCubeU3Ed__6_t49B9A2C291CC2ACC91DBEDB42759629AA38A51B3;
struct U3CStartSpawnerU3Ed__5_tC9FDA1C279062439E1424B0825EFF4C9E015C6B8;

IL2CPP_EXTERN_C RuntimeClass* AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t5C589FDB16AA590F74FBE8A07066DD3139D14C1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnTemporaryCubeU3Ed__6_t49B9A2C291CC2ACC91DBEDB42759629AA38A51B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartSpawnerU3Ed__5_tC9FDA1C279062439E1424B0825EFF4C9E015C6B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____16749C5F0CE0E1DAD582E52A171CB0C90DCA56DE30DCA3CF0F94F0A4244CA51F_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____D2E15C822A36CE03B54EB307ADE0FF9E0D83C44633117EB456B132B0A43F983E_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC;
IL2CPP_EXTERN_C String_t* _stringLiteralD2EFCBBA102ED3339947E85F4141EB08926E40E9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF68D696AD3010513619A9414870322387487A6A7;
IL2CPP_EXTERN_C const RuntimeMethod* Addressables_LoadAssetAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6AED115E529E2520C8D5A5372C586AE9FB043832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Addressables_Release_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m50F71DF61FA17948640834394F0E55E9007573B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Addressables_Release_TisIList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827_m05E0F779E22A2AEB81C2DC54F3578A128A11920C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_WaitForCompletion_mB4F188A55BCF8E8117460DE5BF131EBE981F2F02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_add_Completed_m73DC0B3A8EEDBB255106AA99673B6298A75507B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_Result_m845E23C3B692F4E6822829F4F860205BEB2CF419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleToScreen_Log_mA5DDFAB65C29E797A1C47CD29C6C83E3163A52EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB744852F5B540EC298DA374A401A1F43C7C8234D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF6B2F0A9449537CDAF6E3C8F3503AD9C0FAA7453_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBCB2022C9F3547636252B9BA57C21BA85635884D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC026A18802CD1B286B64BD3E73C70159D98DD67F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF65D9CA37CDD41E6A17EC68AC0EFC2A59EFE8596_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m33A351ADA40CDA64143F349FACB5993E95C41C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2DD280D3F853F60459093DDE358720E756D06F47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnTemporaryCubeU3Ed__6_System_Collections_IEnumerator_Reset_m0169FD70CC07165028C1CAB25AE6D77DA6684648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartSpawnerU3Ed__5_System_Collections_IEnumerator_Reset_mC9165A87D263459F36DEB98A02F77632E739F790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_0_mCFB666A331652F80B5DA8EEC3D3921232A165305_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct AsyncOperationHandle_1U5BU5D_tC322A803F4FB00759286F28E6B71283EB857D2EF;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713  : public RuntimeObject
{
	AsyncOperationHandle_1U5BU5D_t33A91BF335262C899952E2EE0C5FE73B06C13F26* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t35606A619A8A2A5FF7964D0D06504FD6C4C46E3F  : public RuntimeObject
{
	AsyncOperationHandle_1U5BU5D_tC322A803F4FB00759286F28E6B71283EB857D2EF* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct AddressablesUtility_t4CCE6EE705EA0C281354F46964F27F480CE60695  : public RuntimeObject
{
};
struct Assembly_t  : public RuntimeObject
{
};
struct Assembly_t_marshaled_pinvoke
{
};
struct Assembly_t_marshaled_com
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
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E  : public RuntimeObject
{
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
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169  : public RuntimeObject
{
};
struct U3CSpawnTemporaryCubeU3Ed__6_t49B9A2C291CC2ACC91DBEDB42759629AA38A51B3  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* ___U3CU3E4__this;
	List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713* ___U3ChandlesU3E5__2;
};
struct U3CStartSpawnerU3Ed__5_tC9FDA1C279062439E1424B0825EFF4C9E015C6B8  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* ___U3CU3E4__this;
};
struct AsyncOperationHandle_1_tDA2BA7FC48753E9F44D6A9B3873AAB9F2BE05DA4 
{
	AsyncOperationBase_1_t264CB4D817C2464BBB4459949707E3EE57EA0E59* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
	bool ___m_UnloadSceneOpExcludeReleaseCallback;
};
struct AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA 
{
	AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
	bool ___m_UnloadSceneOpExcludeReleaseCallback;
};
struct AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 
{
	AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
	bool ___m_UnloadSceneOpExcludeReleaseCallback;
};
struct AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 
{
	AsyncOperationBase_1_t53CEC258A81CC6E6C433249F4DBF1B719395DBD7* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
	bool ___m_UnloadSceneOpExcludeReleaseCallback;
};
struct AsyncOperationHandle_1_tA75F8D06AFC1438E550A121D1FD0390909B3E5DD 
{
	AsyncOperationBase_1_t7FF01DEBAE9F81B36369204D58419D7F66D5099C* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
	bool ___m_UnloadSceneOpExcludeReleaseCallback;
};
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D 
{
	RuntimeObject* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
};
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke
{
	RuntimeObject* ___m_InternalOp;
	int32_t ___m_Version;
	char* ___m_LocationName;
};
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com
{
	RuntimeObject* ___m_InternalOp;
	int32_t ___m_Version;
	Il2CppChar* ___m_LocationName;
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct MethodBase_t  : public MemberInfo_t
{
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	float ___m_Seconds;
};
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds;
};
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds;
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D163_t14F496531A53FC59E99B23F1604545CA23FE662C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D163_t14F496531A53FC59E99B23F1604545CA23FE662C__padding[163];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D483_tA83A14C70CF76C1078C7BC7D15E18D1F5B116B70 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D483_tA83A14C70CF76C1078C7BC7D15E18D1F5B116B70__padding[483];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct Enumerator_t4BD9F294DE78CC63D72846803E5104E5FA246E76 
{
	List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713* ____list;
	int32_t ____index;
	int32_t ____version;
	AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ____current;
};
struct Enumerator_t20BE174F69C2DA5812A59D7C578E0284700987AE 
{
	List_1_t35606A619A8A2A5FF7964D0D06504FD6C4C46E3F* ____list;
	int32_t ____index;
	int32_t ____version;
	AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ____current;
};
struct AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740  : public RuntimeObject
{
	String_t* ___m_AssetGUID;
	String_t* ___m_SubObjectName;
	String_t* ___m_SubObjectType;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___m_Operation;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
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
struct MethodInfo_t  : public MethodBase_t
{
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
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	intptr_t ___m_Ptr;
	RuntimeObject* ___m_SourceStyle;
};
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	Il2CppIUnknown* ___m_SourceStyle;
};
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr;
	Il2CppIUnknown* ___m_SourceStyle;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	intptr_t ___m_Ptr;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow;
	String_t* ___m_Name;
};
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow;
	char* ___m_Name;
};
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow;
	Il2CppChar* ___m_Name;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct ConsoleToScreen_t4D4E2DA6049B115E29915B9B584C8009100A848E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	String_t* ____logStr;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____lines;
	int32_t ___fontSize;
};
struct LoadDll_tDC7D94A38579BD51146B0C4A28A079D1511D22C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct LoadSceneForCustomBuild_tD39959EB3332929D94AFD87E8165BB53169D4B76  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	String_t* ___SceneKey;
};
struct PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* ___SpawnablePrefab;
	float ___DelayBetweenSpawns;
	float ___DealyBeforeDestroying;
	int32_t ___NumberOfPrefabsToSpawn;
};
struct List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713_StaticFields
{
	AsyncOperationHandle_1U5BU5D_t33A91BF335262C899952E2EE0C5FE73B06C13F26* ___s_emptyArray;
};
struct List_1_t35606A619A8A2A5FF7964D0D06504FD6C4C46E3F_StaticFields
{
	AsyncOperationHandle_1U5BU5D_tC322A803F4FB00759286F28E6B71283EB857D2EF* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	__StaticArrayInitTypeSizeU3D483_tA83A14C70CF76C1078C7BC7D15E18D1F5B116B70 ___16749C5F0CE0E1DAD582E52A171CB0C90DCA56DE30DCA3CF0F94F0A4244CA51F;
	__StaticArrayInitTypeSizeU3D163_t14F496531A53FC59E99B23F1604545CA23FE662C ___D2E15C822A36CE03B54EB307ADE0FF9E0D83C44633117EB456B132B0A43F983E;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_StaticFields
{
	U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169* ___U3CU3E9;
	Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE* ___U3CU3E9__0_0;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	bool ___showKeyboardFocus;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None;
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
struct AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_StaticFields
{
	RuntimeObject* ___PatchedAOTAssemblyList;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
struct AsyncOperationHandle_1U5BU5D_tC322A803F4FB00759286F28E6B71283EB857D2EF  : public RuntimeArray
{
	ALIGN_FIELD (8) AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 m_Items[1];

	inline AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LocationName), (void*)NULL);
		#endif
	}
	inline AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LocationName), (void*)NULL);
		#endif
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 Addressables_LoadAssetAsync_TisRuntimeObject_mCCF94162F8FE63BFC873C8B4409CABDDAB079375_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mCDB69DE3F4173FFB4DB9B58CCB99D53CA858AEB8_gshared (Action_1_t0A01E63A4339ABF30BF7C175CF376F7CE2BAC1A8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_1_add_Completed_m0A29904183FF915F3F53B5A91D966447A51BA0D7_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, Action_1_t0A01E63A4339ABF30BF7C175CF376F7CE2BAC1A8* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_1_get_Result_m3BFABA5103704DD252ABCC2DDF622300E887773E_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_1_WaitForCompletion_m4E4B5C196ABB1FB73BC34C54E9E6E4955B6255F6_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Addressables_Release_TisRuntimeObject_m532EA1203DD205F51CF634FD0E63965162B1AFB7_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mCACC09ECAD907669AA91E018E6F83DD36ACCF660_gshared (List_1_t35606A619A8A2A5FF7964D0D06504FD6C4C46E3F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mA0C7FD7B062ED414FC8C60E464220B44FEBDC931_gshared_inline (List_1_t35606A619A8A2A5FF7964D0D06504FD6C4C46E3F* __this, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t20BE174F69C2DA5812A59D7C578E0284700987AE List_1_GetEnumerator_m1ED8D3AEAE4FAF3F49C49553FCAE2CF7253844C4_gshared (List_1_t35606A619A8A2A5FF7964D0D06504FD6C4C46E3F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mA609EA63EC9C819BB3DC2AD28CC0AA9CB165F174_gshared (Enumerator_t20BE174F69C2DA5812A59D7C578E0284700987AE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 Enumerator_get_Current_mE3C4F884C166634AA30198179698296293A1C246_gshared_inline (Enumerator_t20BE174F69C2DA5812A59D7C578E0284700987AE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4CCF4D630958A4288A07EFD5B1D3E60F5EEAA40E_gshared (Enumerator_t20BE174F69C2DA5812A59D7C578E0284700987AE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m8497BC2DB3BC6DE8DB791166C7D4D897F373F0DB_gshared (List_1_t35606A619A8A2A5FF7964D0D06504FD6C4C46E3F* __this, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_logMessageReceived_m559439A73DD283295DE44A21F6D3C92D157777CC (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline void List_1_RemoveRange_m33A351ADA40CDA64143F349FACB5993E95C41C7A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared)(__this, ___0_index, ___1_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158 (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_matrix_m7759FEC96FBCB97E02B1BA44D2EC1B3FEEFA257F (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, String_t* ___1_text, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) ;
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
inline AsyncOperationHandle_1_tA75F8D06AFC1438E550A121D1FD0390909B3E5DD Addressables_LoadAssetAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6AED115E529E2520C8D5A5372C586AE9FB043832 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_1_tA75F8D06AFC1438E550A121D1FD0390909B3E5DD (*) (RuntimeObject*, const RuntimeMethod*))Addressables_LoadAssetAsync_TisRuntimeObject_mCCF94162F8FE63BFC873C8B4409CABDDAB079375_gshared)(___0_key, method);
}
inline void Action_1__ctor_mF9CA12B62A4AE333B3B421D7FB54C8EEB640EDB7 (Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mCDB69DE3F4173FFB4DB9B58CCB99D53CA858AEB8_gshared)(__this, ___0_object, ___1_method, method);
}
inline void AsyncOperationHandle_1_add_Completed_m73DC0B3A8EEDBB255106AA99673B6298A75507B5 (AsyncOperationHandle_1_tA75F8D06AFC1438E550A121D1FD0390909B3E5DD* __this, Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationHandle_1_tA75F8D06AFC1438E550A121D1FD0390909B3E5DD*, Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE*, const RuntimeMethod*))AsyncOperationHandle_1_add_Completed_m0A29904183FF915F3F53B5A91D966447A51BA0D7_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m895EBF21426CE7E98587D9579713F76639E0D637 (U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* AsyncOperationHandle_1_get_Result_m845E23C3B692F4E6822829F4F860205BEB2CF419 (AsyncOperationHandle_1_tA75F8D06AFC1438E550A121D1FD0390909B3E5DD* __this, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (AsyncOperationHandle_1_tA75F8D06AFC1438E550A121D1FD0390909B3E5DD*, const RuntimeMethod*))AsyncOperationHandle_1_get_Result_m3BFABA5103704DD252ABCC2DDF622300E887773E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_Load_mD9E9CED2EFF8BBE97ACDE83FB8ED492D1E42E975 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawAssembly, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tDA2BA7FC48753E9F44D6A9B3873AAB9F2BE05DA4 Addressables_LoadResourceLocationsAsync_m96BF35184F12370BCD9A304065F42D080D7EE18B (RuntimeObject* ___0_key, Type_t* ___1_type, const RuntimeMethod* method) ;
inline RuntimeObject* AsyncOperationHandle_1_WaitForCompletion_mB4F188A55BCF8E8117460DE5BF131EBE981F2F02 (AsyncOperationHandle_1_tDA2BA7FC48753E9F44D6A9B3873AAB9F2BE05DA4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AsyncOperationHandle_1_tDA2BA7FC48753E9F44D6A9B3873AAB9F2BE05DA4*, const RuntimeMethod*))AsyncOperationHandle_1_WaitForCompletion_m4E4B5C196ABB1FB73BC34C54E9E6E4955B6255F6_gshared)(__this, method);
}
inline void Addressables_Release_TisIList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827_m05E0F779E22A2AEB81C2DC54F3578A128A11920C (AsyncOperationHandle_1_tDA2BA7FC48753E9F44D6A9B3873AAB9F2BE05DA4 ___0_handle, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationHandle_1_tDA2BA7FC48753E9F44D6A9B3873AAB9F2BE05DA4, const RuntimeMethod*))Addressables_Release_TisRuntimeObject_m532EA1203DD205F51CF634FD0E63965162B1AFB7_gshared)(___0_handle, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 Addressables_LoadSceneAsync_m3868019E92C7809B7352837DB3D2D81088DA6134 (RuntimeObject* ___0_key, int32_t ___1_loadMode, bool ___2_activateOnLoad, int32_t ___3_priority, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PrefabSpawnerSample_StartSpawner_mA0D455BF887465EBD5115267ECA3744D54D2FAAA (PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSpawnerU3Ed__5__ctor_m2FB8349443E94C473E1570436D369B54A2F4CA1A (U3CStartSpawnerU3Ed__5_tC9FDA1C279062439E1424B0825EFF4C9E015C6B8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnTemporaryCubeU3Ed__6__ctor_m8E4BFE46A4FE93ACCDEA119E435BADCD505ECD23 (U3CSpawnTemporaryCubeU3Ed__6_t49B9A2C291CC2ACC91DBEDB42759629AA38A51B3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
inline void List_1__ctor_m2DD280D3F853F60459093DDE358720E756D06F47 (List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713*, const RuntimeMethod*))List_1__ctor_mCACC09ECAD907669AA91E018E6F83DD36ACCF660_gshared)(__this, method);
}
inline void List_1_Add_mC026A18802CD1B286B64BD3E73C70159D98DD67F_inline (List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713* __this, AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713*, AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, const RuntimeMethod*))List_1_Add_mA0C7FD7B062ED414FC8C60E464220B44FEBDC931_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
inline Enumerator_t4BD9F294DE78CC63D72846803E5104E5FA246E76 List_1_GetEnumerator_mF65D9CA37CDD41E6A17EC68AC0EFC2A59EFE8596 (List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4BD9F294DE78CC63D72846803E5104E5FA246E76 (*) (List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713*, const RuntimeMethod*))List_1_GetEnumerator_m1ED8D3AEAE4FAF3F49C49553FCAE2CF7253844C4_gshared)(__this, method);
}
inline void Enumerator_Dispose_mB744852F5B540EC298DA374A401A1F43C7C8234D (Enumerator_t4BD9F294DE78CC63D72846803E5104E5FA246E76* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4BD9F294DE78CC63D72846803E5104E5FA246E76*, const RuntimeMethod*))Enumerator_Dispose_mA609EA63EC9C819BB3DC2AD28CC0AA9CB165F174_gshared)(__this, method);
}
inline AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA Enumerator_get_Current_mBCB2022C9F3547636252B9BA57C21BA85635884D_inline (Enumerator_t4BD9F294DE78CC63D72846803E5104E5FA246E76* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA (*) (Enumerator_t4BD9F294DE78CC63D72846803E5104E5FA246E76*, const RuntimeMethod*))Enumerator_get_Current_mE3C4F884C166634AA30198179698296293A1C246_gshared_inline)(__this, method);
}
inline void Addressables_Release_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m50F71DF61FA17948640834394F0E55E9007573B2 (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___0_handle, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, const RuntimeMethod*))Addressables_Release_TisRuntimeObject_m532EA1203DD205F51CF634FD0E63965162B1AFB7_gshared)(___0_handle, method);
}
inline bool Enumerator_MoveNext_mF6B2F0A9449537CDAF6E3C8F3503AD9C0FAA7453 (Enumerator_t4BD9F294DE78CC63D72846803E5104E5FA246E76* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4BD9F294DE78CC63D72846803E5104E5FA246E76*, const RuntimeMethod*))Enumerator_MoveNext_m4CCF4D630958A4288A07EFD5B1D3E60F5EEAA40E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PrefabSpawnerSample_SpawnTemporaryCube_mDCD6033C452F51E5CFC2C740B094A624D9897499 (PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m8497BC2DB3BC6DE8DB791166C7D4D897F373F0DB (List_1_t35606A619A8A2A5FF7964D0D06504FD6C4C46E3F* __this, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t35606A619A8A2A5FF7964D0D06504FD6C4C46E3F*, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, const RuntimeMethod*))List_1_AddWithResize_m8497BC2DB3BC6DE8DB791166C7D4D897F373F0DB_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleToScreen_OnEnable_m742C0F87C812F43375F76A54DAA0A5AF6A72864D (ConsoleToScreen_t4D4E2DA6049B115E29915B9B584C8009100A848E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleToScreen_Log_mA5DDFAB65C29E797A1C47CD29C6C83E3163A52EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)ConsoleToScreen_Log_mA5DDFAB65C29E797A1C47CD29C6C83E3163A52EA_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleToScreen_OnDisable_m8EBC29961A3FECB32D8C0CD70D443B44C36E6629 (ConsoleToScreen_t4D4E2DA6049B115E29915B9B584C8009100A848E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleToScreen_Log_mA5DDFAB65C29E797A1C47CD29C6C83E3163A52EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)ConsoleToScreen_Log_mA5DDFAB65C29E797A1C47CD29C6C83E3163A52EA_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		Application_remove_logMessageReceived_m559439A73DD283295DE44A21F6D3C92D157777CC(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleToScreen_Log_mA5DDFAB65C29E797A1C47CD29C6C83E3163A52EA (ConsoleToScreen_t4D4E2DA6049B115E29915B9B584C8009100A848E* __this, String_t* ___0_logString, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m33A351ADA40CDA64143F349FACB5993E95C41C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___0_logString;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)10), 0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0098;
	}

IL_0011:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		String_t* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((((int32_t)L_7) > ((int32_t)((int32_t)120))))
		{
			goto IL_002d;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = __this->____lines;
		String_t* L_9 = V_2;
		NullCheck(L_8);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, L_9, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_0094;
	}

IL_002d:
	{
		String_t* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_11/((int32_t)120))), 1));
		V_4 = 0;
		goto IL_008f;
	}

IL_003e:
	{
		int32_t L_12 = V_4;
		String_t* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_12, 1)), ((int32_t)120)))) > ((int32_t)L_14)))
		{
			goto IL_0067;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = __this->____lines;
		String_t* L_16 = V_2;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_16, ((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)120))), ((int32_t)120), NULL);
		NullCheck(L_15);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_15, L_18, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_0089;
	}

IL_0067:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = __this->____lines;
		String_t* L_20 = V_2;
		int32_t L_21 = V_4;
		String_t* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_22, NULL);
		int32_t L_24 = V_4;
		NullCheck(L_20);
		String_t* L_25;
		L_25 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_20, ((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)120))), ((int32_t)il2cpp_codegen_subtract(L_23, ((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)120))))), NULL);
		NullCheck(L_19);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_19, L_25, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0089:
	{
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_008f:
	{
		int32_t L_27 = V_4;
		int32_t L_28 = V_3;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_003e;
		}
	}

IL_0094:
	{
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0098:
	{
		int32_t L_30 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_32 = __this->____lines;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_32, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)50))))
		{
			goto IL_00ca;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_34 = __this->____lines;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_35 = __this->____lines;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_35, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		NullCheck(L_34);
		List_1_RemoveRange_m33A351ADA40CDA64143F349FACB5993E95C41C7A(L_34, 0, ((int32_t)il2cpp_codegen_subtract(L_36, ((int32_t)50))), List_1_RemoveRange_m33A351ADA40CDA64143F349FACB5993E95C41C7A_RuntimeMethod_var);
	}

IL_00ca:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_37 = __this->____lines;
		String_t* L_38;
		L_38 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_37, NULL);
		__this->____logStr = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____logStr), (void*)L_38);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleToScreen_OnGUI_m29CDFC3A06D7C876442EC871D62B622487B5A6F6 (ConsoleToScreen_t4D4E2DA6049B115E29915B9B584C8009100A848E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		int32_t L_2;
		L_2 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), ((float)(((float)L_2)/(1200.0f))), ((float)(((float)L_3)/(800.0f))), (1.0f), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_0, L_1, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_matrix_m7759FEC96FBCB97E02B1BA44D2EC1B3FEEFA257F(L_5, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline((&L_6), (10.0f), (10.0f), (800.0f), (370.0f), NULL);
		String_t* L_7 = __this->____logStr;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_8, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9 = L_8;
		int32_t L_10 = __this->___fontSize;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)10), L_10, NULL);
		NullCheck(L_9);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_9, L_11, NULL);
		GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E(L_6, L_7, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleToScreen__ctor_mA516CADF99E6463AC5FEC5CF38D1F4A5212A9415 (ConsoleToScreen_t4D4E2DA6049B115E29915B9B584C8009100A848E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____logStr = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____logStr), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->____lines = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lines), (void*)L_0);
		__this->___fontSize = ((int32_t)15);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTGenericReferences_RefMethods_m17CF257D96D8BC2F232C4C1502905B792D17170C (AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTGenericReferences__ctor_m41CBD692FC9B521512E552575AFE7A385DEC71A6 (AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTGenericReferences__cctor_mA46BDC06A6577D725A2E5284A2A34C974CE65F68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		((AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_StaticFields*)il2cpp_codegen_static_fields_for(AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_il2cpp_TypeInfo_var))->___PatchedAOTAssemblyList = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_StaticFields*)il2cpp_codegen_static_fields_for(AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1_il2cpp_TypeInfo_var))->___PatchedAOTAssemblyList), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll_Start_mFE4D6C8F812A855AFA86FAE2FD87517F85502110 (LoadDll_tDC7D94A38579BD51146B0C4A28A079D1511D22C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_LoadAssetAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6AED115E529E2520C8D5A5372C586AE9FB043832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_add_Completed_m73DC0B3A8EEDBB255106AA99673B6298A75507B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__0_0_mCFB666A331652F80B5DA8EEC3D3921232A165305_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF68D696AD3010513619A9414870322387487A6A7);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperationHandle_1_tA75F8D06AFC1438E550A121D1FD0390909B3E5DD V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE* G_B2_0 = NULL;
	AsyncOperationHandle_1_tA75F8D06AFC1438E550A121D1FD0390909B3E5DD* G_B2_1 = NULL;
	Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE* G_B1_0 = NULL;
	AsyncOperationHandle_1_tA75F8D06AFC1438E550A121D1FD0390909B3E5DD* G_B1_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		AsyncOperationHandle_1_tA75F8D06AFC1438E550A121D1FD0390909B3E5DD L_0;
		L_0 = Addressables_LoadAssetAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6AED115E529E2520C8D5A5372C586AE9FB043832(_stringLiteralF68D696AD3010513619A9414870322387487A6A7, Addressables_LoadAssetAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6AED115E529E2520C8D5A5372C586AE9FB043832_RuntimeMethod_var);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_il2cpp_TypeInfo_var);
		Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE* L_1 = ((U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_il2cpp_TypeInfo_var))->___U3CU3E9__0_0;
		Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = (&V_0);
			goto IL_002c;
		}
		G_B1_0 = L_2;
		G_B1_1 = (&V_0);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_il2cpp_TypeInfo_var);
		U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169* L_3 = ((U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_il2cpp_TypeInfo_var))->___U3CU3E9;
		Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE* L_4 = (Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE*)il2cpp_codegen_object_new(Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE_il2cpp_TypeInfo_var);
		Action_1__ctor_mF9CA12B62A4AE333B3B421D7FB54C8EEB640EDB7(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__0_0_mCFB666A331652F80B5DA8EEC3D3921232A165305_RuntimeMethod_var), NULL);
		Action_1_t6D0CE828E9104ACD595AC9A8A0364EF1B13434EE* L_5 = L_4;
		((U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_il2cpp_TypeInfo_var))->___U3CU3E9__0_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_il2cpp_TypeInfo_var))->___U3CU3E9__0_0), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_002c:
	{
		AsyncOperationHandle_1_add_Completed_m73DC0B3A8EEDBB255106AA99673B6298A75507B5(G_B2_1, G_B2_0, AsyncOperationHandle_1_add_Completed_m73DC0B3A8EEDBB255106AA99673B6298A75507B5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadDll__ctor_mBEF8662DD6B3B97424D2F5C1FD7C202013F814A2 (LoadDll_tDC7D94A38579BD51146B0C4A28A079D1511D22C7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC12BDD72F9E9A05FD575211B1B2F168CC3C741B9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169* L_0 = (U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169*)il2cpp_codegen_object_new(U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m895EBF21426CE7E98587D9579713F76639E0D637(L_0, NULL);
		((U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m895EBF21426CE7E98587D9579713F76639E0D637 (U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__0_0_mCFB666A331652F80B5DA8EEC3D3921232A165305 (U3CU3Ec_t759AA2D01F9DD0D241D45D49B92875468B956169* __this, AsyncOperationHandle_1_tA75F8D06AFC1438E550A121D1FD0390909B3E5DD ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Result_m845E23C3B692F4E6822829F4F860205BEB2CF419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2EFCBBA102ED3339947E85F4141EB08926E40E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0;
		L_0 = AsyncOperationHandle_1_get_Result_m845E23C3B692F4E6822829F4F860205BEB2CF419((&___0_handle), AsyncOperationHandle_1_get_Result_m845E23C3B692F4E6822829F4F860205BEB2CF419_RuntimeMethod_var);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178(L_0, NULL);
		Assembly_t* L_2;
		L_2 = Assembly_Load_mD9E9CED2EFF8BBE97ACDE83FB8ED492D1E42E975(L_1, NULL);
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(18, L_2, _stringLiteralD2EFCBBA102ED3339947E85F4141EB08926E40E9);
		NullCheck(L_3);
		MethodInfo_t* L_4;
		L_4 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_3, _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_4, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressablesUtility_GetAddressFromAssetReference_m02AF0B6CD523EC9BFAFB68C4489824FCB4A9D377 (AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* ___0_reference, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_Release_TisIList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827_m05E0F779E22A2AEB81C2DC54F3578A128A11920C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_WaitForCompletion_mB4F188A55BCF8E8117460DE5BF131EBE981F2F02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C589FDB16AA590F74FBE8A07066DD3139D14C1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperationHandle_1_tDA2BA7FC48753E9F44D6A9B3873AAB9F2BE05DA4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_0 = ___0_reference;
		il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		AsyncOperationHandle_1_tDA2BA7FC48753E9F44D6A9B3873AAB9F2BE05DA4 L_1;
		L_1 = Addressables_LoadResourceLocationsAsync_m96BF35184F12370BCD9A304065F42D080D7EE18B(L_0, (Type_t*)NULL, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = AsyncOperationHandle_1_WaitForCompletion_mB4F188A55BCF8E8117460DE5BF131EBE981F2F02((&V_0), AsyncOperationHandle_1_WaitForCompletion_mB4F188A55BCF8E8117460DE5BF131EBE981F2F02_RuntimeMethod_var);
		V_1 = L_2;
		RuntimeObject* L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t5C589FDB16AA590F74FBE8A07066DD3139D14C1B_il2cpp_TypeInfo_var, L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827_il2cpp_TypeInfo_var, L_5, 0);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(7, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_6);
		AsyncOperationHandle_1_tDA2BA7FC48753E9F44D6A9B3873AAB9F2BE05DA4 L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		Addressables_Release_TisIList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827_m05E0F779E22A2AEB81C2DC54F3578A128A11920C(L_8, Addressables_Release_TisIList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827_m05E0F779E22A2AEB81C2DC54F3578A128A11920C_RuntimeMethod_var);
		return L_7;
	}

IL_002c:
	{
		AsyncOperationHandle_1_tDA2BA7FC48753E9F44D6A9B3873AAB9F2BE05DA4 L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		Addressables_Release_TisIList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827_m05E0F779E22A2AEB81C2DC54F3578A128A11920C(L_9, Addressables_Release_TisIList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827_m05E0F779E22A2AEB81C2DC54F3578A128A11920C_RuntimeMethod_var);
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneForCustomBuild_Start_mE0A75DD998CA253CBD315002C4F83ABB266D64F6 (LoadSceneForCustomBuild_tD39959EB3332929D94AFD87E8165BB53169D4B76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___SceneKey;
		il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 L_1;
		L_1 = Addressables_LoadSceneAsync_m3868019E92C7809B7352837DB3D2D81088DA6134(L_0, 0, (bool)1, ((int32_t)100), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneForCustomBuild__ctor_m4F7D66EE77D6881D6BF00497709FD8F5E2EB4B95 (LoadSceneForCustomBuild_tD39959EB3332929D94AFD87E8165BB53169D4B76* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrefabSpawnerSample_Start_mBCD8A928695D6F4DF155B8F68B89E5E135F4EEC3 (PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = PrefabSpawnerSample_StartSpawner_mA0D455BF887465EBD5115267ECA3744D54D2FAAA(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PrefabSpawnerSample_StartSpawner_mA0D455BF887465EBD5115267ECA3744D54D2FAAA (PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartSpawnerU3Ed__5_tC9FDA1C279062439E1424B0825EFF4C9E015C6B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartSpawnerU3Ed__5_tC9FDA1C279062439E1424B0825EFF4C9E015C6B8* L_0 = (U3CStartSpawnerU3Ed__5_tC9FDA1C279062439E1424B0825EFF4C9E015C6B8*)il2cpp_codegen_object_new(U3CStartSpawnerU3Ed__5_tC9FDA1C279062439E1424B0825EFF4C9E015C6B8_il2cpp_TypeInfo_var);
		U3CStartSpawnerU3Ed__5__ctor_m2FB8349443E94C473E1570436D369B54A2F4CA1A(L_0, 0, NULL);
		U3CStartSpawnerU3Ed__5_tC9FDA1C279062439E1424B0825EFF4C9E015C6B8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PrefabSpawnerSample_SpawnTemporaryCube_mDCD6033C452F51E5CFC2C740B094A624D9897499 (PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnTemporaryCubeU3Ed__6_t49B9A2C291CC2ACC91DBEDB42759629AA38A51B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnTemporaryCubeU3Ed__6_t49B9A2C291CC2ACC91DBEDB42759629AA38A51B3* L_0 = (U3CSpawnTemporaryCubeU3Ed__6_t49B9A2C291CC2ACC91DBEDB42759629AA38A51B3*)il2cpp_codegen_object_new(U3CSpawnTemporaryCubeU3Ed__6_t49B9A2C291CC2ACC91DBEDB42759629AA38A51B3_il2cpp_TypeInfo_var);
		U3CSpawnTemporaryCubeU3Ed__6__ctor_m8E4BFE46A4FE93ACCDEA119E435BADCD505ECD23(L_0, 0, NULL);
		U3CSpawnTemporaryCubeU3Ed__6_t49B9A2C291CC2ACC91DBEDB42759629AA38A51B3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrefabSpawnerSample__ctor_m034121556E9474210A021B8675E145C2E7ECD9F8 (PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* __this, const RuntimeMethod* method) 
{
	{
		__this->___DelayBetweenSpawns = (2.0f);
		__this->___DealyBeforeDestroying = (1.0f);
		__this->___NumberOfPrefabsToSpawn = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnTemporaryCubeU3Ed__6__ctor_m8E4BFE46A4FE93ACCDEA119E435BADCD505ECD23 (U3CSpawnTemporaryCubeU3Ed__6_t49B9A2C291CC2ACC91DBEDB42759629AA38A51B3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnTemporaryCubeU3Ed__6_System_IDisposable_Dispose_m1A5B9E9FC2C8FEFC325F6808A04E13B81B654632 (U3CSpawnTemporaryCubeU3Ed__6_t49B9A2C291CC2ACC91DBEDB42759629AA38A51B3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnTemporaryCubeU3Ed__6_MoveNext_mFA13828FD213FE8156B58945045B0AFD6457A9EC (U3CSpawnTemporaryCubeU3Ed__6_t49B9A2C291CC2ACC91DBEDB42759629AA38A51B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_Release_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m50F71DF61FA17948640834394F0E55E9007573B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB744852F5B540EC298DA374A401A1F43C7C8234D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF6B2F0A9449537CDAF6E3C8F3503AD9C0FAA7453_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBCB2022C9F3547636252B9BA57C21BA85635884D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC026A18802CD1B286B64BD3E73C70159D98DD67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF65D9CA37CDD41E6A17EC68AC0EFC2A59EFE8596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2DD280D3F853F60459093DDE358720E756D06F47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* V_1 = NULL;
	int32_t V_2 = 0;
	AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_t4BD9F294DE78CC63D72846803E5104E5FA246E76 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_006e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
		List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713* L_4 = (List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713*)il2cpp_codegen_object_new(List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713_il2cpp_TypeInfo_var);
		List_1__ctor_m2DD280D3F853F60459093DDE358720E756D06F47(L_4, List_1__ctor_m2DD280D3F853F60459093DDE358720E756D06F47_RuntimeMethod_var);
		__this->___U3ChandlesU3E5__2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChandlesU3E5__2), (void*)L_4);
		V_2 = 0;
		goto IL_004b;
	}

IL_002d:
	{
		PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* L_5 = V_1;
		NullCheck(L_5);
		AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_6 = L_5->___SpawnablePrefab;
		NullCheck(L_6);
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_7;
		L_7 = VirtualFuncInvoker2< AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool >::Invoke(16, L_6, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)0);
		V_3 = L_7;
		List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713* L_8 = __this->___U3ChandlesU3E5__2;
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_9 = V_3;
		NullCheck(L_8);
		List_1_Add_mC026A18802CD1B286B64BD3E73C70159D98DD67F_inline(L_8, L_9, List_1_Add_mC026A18802CD1B286B64BD3E73C70159D98DD67F_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_004b:
	{
		int32_t L_11 = V_2;
		PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->___NumberOfPrefabsToSpawn;
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_002d;
		}
	}
	{
		PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->___DealyBeforeDestroying;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_16 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_16, L_15, NULL);
		__this->___U3CU3E2__current = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_16);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_006e:
	{
		__this->___U3CU3E1__state = (-1);
		List_1_t85C8FCB5EAE7554FCD64CF1677691C4C370DD713* L_17 = __this->___U3ChandlesU3E5__2;
		NullCheck(L_17);
		Enumerator_t4BD9F294DE78CC63D72846803E5104E5FA246E76 L_18;
		L_18 = List_1_GetEnumerator_mF65D9CA37CDD41E6A17EC68AC0EFC2A59EFE8596(L_17, List_1_GetEnumerator_mF65D9CA37CDD41E6A17EC68AC0EFC2A59EFE8596_RuntimeMethod_var);
		V_4 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009b:
			{
				Enumerator_Dispose_mB744852F5B540EC298DA374A401A1F43C7C8234D((&V_4), Enumerator_Dispose_mB744852F5B540EC298DA374A401A1F43C7C8234D_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0090_1;
			}

IL_0084_1:
			{
				AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_19;
				L_19 = Enumerator_get_Current_mBCB2022C9F3547636252B9BA57C21BA85635884D_inline((&V_4), Enumerator_get_Current_mBCB2022C9F3547636252B9BA57C21BA85635884D_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
				Addressables_Release_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m50F71DF61FA17948640834394F0E55E9007573B2(L_19, Addressables_Release_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m50F71DF61FA17948640834394F0E55E9007573B2_RuntimeMethod_var);
			}

IL_0090_1:
			{
				bool L_20;
				L_20 = Enumerator_MoveNext_mF6B2F0A9449537CDAF6E3C8F3503AD9C0FAA7453((&V_4), Enumerator_MoveNext_mF6B2F0A9449537CDAF6E3C8F3503AD9C0FAA7453_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0084_1;
				}
			}
			{
				goto IL_00a9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a9:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnTemporaryCubeU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m63D5B18CEC89183B459A8BB8C16B8C7027F33F7F (U3CSpawnTemporaryCubeU3Ed__6_t49B9A2C291CC2ACC91DBEDB42759629AA38A51B3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnTemporaryCubeU3Ed__6_System_Collections_IEnumerator_Reset_m0169FD70CC07165028C1CAB25AE6D77DA6684648 (U3CSpawnTemporaryCubeU3Ed__6_t49B9A2C291CC2ACC91DBEDB42759629AA38A51B3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnTemporaryCubeU3Ed__6_System_Collections_IEnumerator_Reset_m0169FD70CC07165028C1CAB25AE6D77DA6684648_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnTemporaryCubeU3Ed__6_System_Collections_IEnumerator_get_Current_mE9DD5773B96E90EF2D14F3DA4B1D2B9E905EDFE0 (U3CSpawnTemporaryCubeU3Ed__6_t49B9A2C291CC2ACC91DBEDB42759629AA38A51B3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSpawnerU3Ed__5__ctor_m2FB8349443E94C473E1570436D369B54A2F4CA1A (U3CStartSpawnerU3Ed__5_tC9FDA1C279062439E1424B0825EFF4C9E015C6B8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSpawnerU3Ed__5_System_IDisposable_Dispose_m3BF849F79A63C1954C375B481D4ADE3CAE26F1FD (U3CStartSpawnerU3Ed__5_tC9FDA1C279062439E1424B0825EFF4C9E015C6B8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartSpawnerU3Ed__5_MoveNext_m0E104C5FEE35691BE4D815B61C44C5FA8AB08759 (U3CStartSpawnerU3Ed__5_tC9FDA1C279062439E1424B0825EFF4C9E015C6B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
	}

IL_001e:
	{
		PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___DelayBetweenSpawns;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_6);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state = (-1);
		PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* L_7 = V_1;
		PrefabSpawnerSample_tB882091F076B6A02C37E403B38DEDA948C518DD5* L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = PrefabSpawnerSample_SpawnTemporaryCube_mDCD6033C452F51E5CFC2C740B094A624D9897499(L_8, NULL);
		NullCheck(L_7);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_9, NULL);
		goto IL_001e;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartSpawnerU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF229100DD75E062ACB5E54989B881396517D690E (U3CStartSpawnerU3Ed__5_tC9FDA1C279062439E1424B0825EFF4C9E015C6B8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSpawnerU3Ed__5_System_Collections_IEnumerator_Reset_mC9165A87D263459F36DEB98A02F77632E739F790 (U3CStartSpawnerU3Ed__5_tC9FDA1C279062439E1424B0825EFF4C9E015C6B8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartSpawnerU3Ed__5_System_Collections_IEnumerator_Reset_mC9165A87D263459F36DEB98A02F77632E739F790_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartSpawnerU3Ed__5_System_Collections_IEnumerator_get_Current_m80A51580D284D89117C5CDE9A05C318612D0250A (U3CStartSpawnerU3Ed__5_tC9FDA1C279062439E1424B0825EFF4C9E015C6B8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mBEB95BEB954BB63E9710BBC7AD5E78C4CB0A0033 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____16749C5F0CE0E1DAD582E52A171CB0C90DCA56DE30DCA3CF0F94F0A4244CA51F_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____D2E15C822A36CE03B54EB307ADE0FF9E0D83C44633117EB456B132B0A43F983E_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)483));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____16749C5F0CE0E1DAD582E52A171CB0C90DCA56DE30DCA3CF0F94F0A4244CA51F_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)163));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____D2E15C822A36CE03B54EB307ADE0FF9E0D83C44633117EB456B132B0A43F983E_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 7;
		(&V_0)->___TotalTypes = 7;
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mE70FB23ACC1EA12ABC948AA22C2E78B2D0AA39B1 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_back(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_cleanup(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com_back(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com_cleanup(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___m_XMin = L_0;
		float L_1 = ___1_y;
		__this->___m_YMin = L_1;
		float L_2 = ___2_width;
		__this->___m_Width = L_2;
		float L_3 = ___3_height;
		__this->___m_Height = L_3;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mA0C7FD7B062ED414FC8C60E464220B44FEBDC931_gshared_inline (List_1_t35606A619A8A2A5FF7964D0D06504FD6C4C46E3F* __this, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___0_item, const RuntimeMethod* method) 
{
	AsyncOperationHandle_1U5BU5D_tC322A803F4FB00759286F28E6B71283EB857D2EF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		AsyncOperationHandle_1U5BU5D_tC322A803F4FB00759286F28E6B71283EB857D2EF* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		AsyncOperationHandle_1U5BU5D_tC322A803F4FB00759286F28E6B71283EB857D2EF* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		AsyncOperationHandle_1U5BU5D_tC322A803F4FB00759286F28E6B71283EB857D2EF* L_6 = V_0;
		int32_t L_7 = V_1;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74)L_8);
		return;
	}

IL_0034:
	{
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_9 = ___0_item;
		List_1_AddWithResize_m8497BC2DB3BC6DE8DB791166C7D4D897F373F0DB(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 Enumerator_get_Current_mE3C4F884C166634AA30198179698296293A1C246_gshared_inline (Enumerator_t20BE174F69C2DA5812A59D7C578E0284700987AE* __this, const RuntimeMethod* method) 
{
	{
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_0 = __this->____current;
		return L_0;
	}
}
