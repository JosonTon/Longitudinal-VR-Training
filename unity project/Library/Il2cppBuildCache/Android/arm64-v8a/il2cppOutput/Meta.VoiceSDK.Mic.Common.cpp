#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`3<System.Int32,System.Single[],System.Single>
struct Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18;
// System.Action`3<System.Int32,System.Object,System.Single>
struct Action_3_t305BA31151982EE25E9A627B2E60D3E0E964DC35;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// Meta.WitAi.Data.AudioEncoding
struct AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Meta.WitAi.Interfaces.IAudioInputSource
struct IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Meta.WitAi.Lib.MicBase
struct MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6;
// Meta.WitAi.Lib.MicDebug
struct MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33
struct U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Endian_t3238130C7D5B1143BB591F7E860C2D2E7BC0EAC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral138C8DE2C1CB9DED85DB8AAFB49C1CF08A14A170;
IL2CPP_EXTERN_C String_t* _stringLiteral6BC7B8B30763D35752A71C9CA56135B797B57F9D;
IL2CPP_EXTERN_C String_t* _stringLiteral7289E5E64EBFCA0CED33860E3C36166013E27A9E;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF3768A048853CBDA2EB8478E42FD206D4D43CA;
IL2CPP_EXTERN_C String_t* _stringLiteral93FBA0F83648DD713F4B0217197020DE79E4F4A1;
IL2CPP_EXTERN_C String_t* _stringLiteralE6F90E407138E7EA292B71FFD3F0B169CBFC99A6;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_m47D2C5913168372CE923323D0ACFC4D3275148D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_m77AF64EABA65F3FCF2CB5E38C359B46AB986C823_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisIAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_m3C9B5908D299D70910F37B5905394421599B3A59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicDebug_OnSampleReady_mFB6DE5288BEBA88578E18095581454E0CF6BA673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicDebug_OnStartRecording_mB16675B2DD44A9A1955F4E650AF234B7B5B1800F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicDebug_OnStopRecording_mE70BE1A49A30A0D4DEE4EA5A1656DC94F1376DEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadRawAudioU3Ed__33_System_Collections_IEnumerator_Reset_mE6753986B2A1F0BCFF0717D9C1BCB83C2B65A2F9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t868CDB3F22D21B0851DC2595B4CA8E8F3B78CD55 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33
struct U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68  : public RuntimeObject
{
public:
	// System.Int32 Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Meta.WitAi.Lib.MicBase Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::<>4__this
	MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * ___U3CU3E4__this_2;
	// System.Int32 Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::sampleDurationMS
	int32_t ___sampleDurationMS_3;
	// UnityEngine.AudioClip Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::<micClip>5__2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___U3CmicClipU3E5__2_4;
	// System.Single[] Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::<sample>5__3
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___U3CsampleU3E5__3_5;
	// System.Int32 Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::<loops>5__4
	int32_t ___U3CloopsU3E5__4_6;
	// System.Int32 Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::<readAbsPos>5__5
	int32_t ___U3CreadAbsPosU3E5__5_7;
	// System.Int32 Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::<prevPos>5__6
	int32_t ___U3CprevPosU3E5__6_8;
	// System.Int32 Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::<micTempTotal>5__7
	int32_t ___U3CmicTempTotalU3E5__7_9;
	// System.Int32 Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::<micDif>5__8
	int32_t ___U3CmicDifU3E5__8_10;
	// System.Single[] Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::<temp>5__9
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___U3CtempU3E5__9_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68, ___U3CU3E4__this_2)); }
	inline MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_sampleDurationMS_3() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68, ___sampleDurationMS_3)); }
	inline int32_t get_sampleDurationMS_3() const { return ___sampleDurationMS_3; }
	inline int32_t* get_address_of_sampleDurationMS_3() { return &___sampleDurationMS_3; }
	inline void set_sampleDurationMS_3(int32_t value)
	{
		___sampleDurationMS_3 = value;
	}

	inline static int32_t get_offset_of_U3CmicClipU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68, ___U3CmicClipU3E5__2_4)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_U3CmicClipU3E5__2_4() const { return ___U3CmicClipU3E5__2_4; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_U3CmicClipU3E5__2_4() { return &___U3CmicClipU3E5__2_4; }
	inline void set_U3CmicClipU3E5__2_4(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___U3CmicClipU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmicClipU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsampleU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68, ___U3CsampleU3E5__3_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_U3CsampleU3E5__3_5() const { return ___U3CsampleU3E5__3_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_U3CsampleU3E5__3_5() { return &___U3CsampleU3E5__3_5; }
	inline void set_U3CsampleU3E5__3_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___U3CsampleU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsampleU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CloopsU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68, ___U3CloopsU3E5__4_6)); }
	inline int32_t get_U3CloopsU3E5__4_6() const { return ___U3CloopsU3E5__4_6; }
	inline int32_t* get_address_of_U3CloopsU3E5__4_6() { return &___U3CloopsU3E5__4_6; }
	inline void set_U3CloopsU3E5__4_6(int32_t value)
	{
		___U3CloopsU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CreadAbsPosU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68, ___U3CreadAbsPosU3E5__5_7)); }
	inline int32_t get_U3CreadAbsPosU3E5__5_7() const { return ___U3CreadAbsPosU3E5__5_7; }
	inline int32_t* get_address_of_U3CreadAbsPosU3E5__5_7() { return &___U3CreadAbsPosU3E5__5_7; }
	inline void set_U3CreadAbsPosU3E5__5_7(int32_t value)
	{
		___U3CreadAbsPosU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CprevPosU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68, ___U3CprevPosU3E5__6_8)); }
	inline int32_t get_U3CprevPosU3E5__6_8() const { return ___U3CprevPosU3E5__6_8; }
	inline int32_t* get_address_of_U3CprevPosU3E5__6_8() { return &___U3CprevPosU3E5__6_8; }
	inline void set_U3CprevPosU3E5__6_8(int32_t value)
	{
		___U3CprevPosU3E5__6_8 = value;
	}

	inline static int32_t get_offset_of_U3CmicTempTotalU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68, ___U3CmicTempTotalU3E5__7_9)); }
	inline int32_t get_U3CmicTempTotalU3E5__7_9() const { return ___U3CmicTempTotalU3E5__7_9; }
	inline int32_t* get_address_of_U3CmicTempTotalU3E5__7_9() { return &___U3CmicTempTotalU3E5__7_9; }
	inline void set_U3CmicTempTotalU3E5__7_9(int32_t value)
	{
		___U3CmicTempTotalU3E5__7_9 = value;
	}

	inline static int32_t get_offset_of_U3CmicDifU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68, ___U3CmicDifU3E5__8_10)); }
	inline int32_t get_U3CmicDifU3E5__8_10() const { return ___U3CmicDifU3E5__8_10; }
	inline int32_t* get_address_of_U3CmicDifU3E5__8_10() { return &___U3CmicDifU3E5__8_10; }
	inline void set_U3CmicDifU3E5__8_10(int32_t value)
	{
		___U3CmicDifU3E5__8_10 = value;
	}

	inline static int32_t get_offset_of_U3CtempU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68, ___U3CtempU3E5__9_11)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_U3CtempU3E5__9_11() const { return ___U3CtempU3E5__9_11; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_U3CtempU3E5__9_11() { return &___U3CtempU3E5__9_11; }
	inline void set_U3CtempU3E5__9_11(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___U3CtempU3E5__9_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtempU3E5__9_11), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAttributes
struct FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Meta.WitAi.Data.AudioEncoding/Endian
struct Endian_t3238130C7D5B1143BB591F7E860C2D2E7BC0EAC9 
{
public:
	// System.Int32 Meta.WitAi.Data.AudioEncoding/Endian::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Endian_t3238130C7D5B1143BB591F7E860C2D2E7BC0EAC9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// Meta.WitAi.Data.AudioEncoding
struct AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C  : public RuntimeObject
{
public:
	// System.String Meta.WitAi.Data.AudioEncoding::encoding
	String_t* ___encoding_0;
	// System.Int32 Meta.WitAi.Data.AudioEncoding::bits
	int32_t ___bits_1;
	// System.Int32 Meta.WitAi.Data.AudioEncoding::samplerate
	int32_t ___samplerate_2;
	// Meta.WitAi.Data.AudioEncoding/Endian Meta.WitAi.Data.AudioEncoding::endian
	int32_t ___endian_3;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C, ___encoding_0)); }
	inline String_t* get_encoding_0() const { return ___encoding_0; }
	inline String_t** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(String_t* value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_bits_1() { return static_cast<int32_t>(offsetof(AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C, ___bits_1)); }
	inline int32_t get_bits_1() const { return ___bits_1; }
	inline int32_t* get_address_of_bits_1() { return &___bits_1; }
	inline void set_bits_1(int32_t value)
	{
		___bits_1 = value;
	}

	inline static int32_t get_offset_of_samplerate_2() { return static_cast<int32_t>(offsetof(AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C, ___samplerate_2)); }
	inline int32_t get_samplerate_2() const { return ___samplerate_2; }
	inline int32_t* get_address_of_samplerate_2() { return &___samplerate_2; }
	inline void set_samplerate_2(int32_t value)
	{
		___samplerate_2 = value;
	}

	inline static int32_t get_offset_of_endian_3() { return static_cast<int32_t>(offsetof(AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C, ___endian_3)); }
	inline int32_t get_endian_3() const { return ___endian_3; }
	inline int32_t* get_address_of_endian_3() { return &___endian_3; }
	inline void set_endian_3(int32_t value)
	{
		___endian_3 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_8;
	// System.String System.IO.FileStream::name
	String_t* ___name_9;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_10;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_11;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_12;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_13;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_14;
	// System.Boolean System.IO.FileStream::async
	bool ___async_15;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_16;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_17;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_18;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_19;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_20;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_21;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_22;

public:
	inline static int32_t get_offset_of_buf_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_8() const { return ___buf_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_8() { return &___buf_8; }
	inline void set_buf_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_8), (void*)value);
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_10)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_10() const { return ___safeHandle_10; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_10() { return &___safeHandle_10; }
	inline void set_safeHandle_10(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_10), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_11)); }
	inline bool get_isExposed_11() const { return ___isExposed_11; }
	inline bool* get_address_of_isExposed_11() { return &___isExposed_11; }
	inline void set_isExposed_11(bool value)
	{
		___isExposed_11 = value;
	}

	inline static int32_t get_offset_of_append_startpos_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_12)); }
	inline int64_t get_append_startpos_12() const { return ___append_startpos_12; }
	inline int64_t* get_address_of_append_startpos_12() { return &___append_startpos_12; }
	inline void set_append_startpos_12(int64_t value)
	{
		___append_startpos_12 = value;
	}

	inline static int32_t get_offset_of_access_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_13)); }
	inline int32_t get_access_13() const { return ___access_13; }
	inline int32_t* get_address_of_access_13() { return &___access_13; }
	inline void set_access_13(int32_t value)
	{
		___access_13 = value;
	}

	inline static int32_t get_offset_of_owner_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_14)); }
	inline bool get_owner_14() const { return ___owner_14; }
	inline bool* get_address_of_owner_14() { return &___owner_14; }
	inline void set_owner_14(bool value)
	{
		___owner_14 = value;
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_15)); }
	inline bool get_async_15() const { return ___async_15; }
	inline bool* get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(bool value)
	{
		___async_15 = value;
	}

	inline static int32_t get_offset_of_canseek_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_16)); }
	inline bool get_canseek_16() const { return ___canseek_16; }
	inline bool* get_address_of_canseek_16() { return &___canseek_16; }
	inline void set_canseek_16(bool value)
	{
		___canseek_16 = value;
	}

	inline static int32_t get_offset_of_anonymous_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_17)); }
	inline bool get_anonymous_17() const { return ___anonymous_17; }
	inline bool* get_address_of_anonymous_17() { return &___anonymous_17; }
	inline void set_anonymous_17(bool value)
	{
		___anonymous_17 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_18)); }
	inline bool get_buf_dirty_18() const { return ___buf_dirty_18; }
	inline bool* get_address_of_buf_dirty_18() { return &___buf_dirty_18; }
	inline void set_buf_dirty_18(bool value)
	{
		___buf_dirty_18 = value;
	}

	inline static int32_t get_offset_of_buf_size_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_19)); }
	inline int32_t get_buf_size_19() const { return ___buf_size_19; }
	inline int32_t* get_address_of_buf_size_19() { return &___buf_size_19; }
	inline void set_buf_size_19(int32_t value)
	{
		___buf_size_19 = value;
	}

	inline static int32_t get_offset_of_buf_length_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_20)); }
	inline int32_t get_buf_length_20() const { return ___buf_length_20; }
	inline int32_t* get_address_of_buf_length_20() { return &___buf_length_20; }
	inline void set_buf_length_20(int32_t value)
	{
		___buf_length_20 = value;
	}

	inline static int32_t get_offset_of_buf_offset_21() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_21)); }
	inline int32_t get_buf_offset_21() const { return ___buf_offset_21; }
	inline int32_t* get_address_of_buf_offset_21() { return &___buf_offset_21; }
	inline void set_buf_offset_21(int32_t value)
	{
		___buf_offset_21 = value;
	}

	inline static int32_t get_offset_of_buf_start_22() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_22)); }
	inline int64_t get_buf_start_22() const { return ___buf_start_22; }
	inline int64_t* get_address_of_buf_start_22() { return &___buf_start_22; }
	inline void set_buf_start_22(int64_t value)
	{
		___buf_start_22 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_6;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_7;

public:
	inline static int32_t get_offset_of_buf_recycle_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_6() const { return ___buf_recycle_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_6() { return &___buf_recycle_6; }
	inline void set_buf_recycle_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_6), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_7)); }
	inline RuntimeObject * get_buf_recycle_lock_7() const { return ___buf_recycle_lock_7; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_7() { return &___buf_recycle_lock_7; }
	inline void set_buf_recycle_lock_7(RuntimeObject * value)
	{
		___buf_recycle_lock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_7), (void*)value);
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.IO.MonoIOStat
struct MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`3<System.Int32,System.Single[],System.Single>
struct Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.IO.FileSystemInfo
struct FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Meta.WitAi.Lib.MicBase
struct MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action Meta.WitAi.Lib.MicBase::OnStartRecording
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStartRecording_4;
	// System.Action Meta.WitAi.Lib.MicBase::OnStartRecordingFailed
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStartRecordingFailed_5;
	// System.Action Meta.WitAi.Lib.MicBase::OnStopRecording
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStopRecording_6;
	// System.Action`3<System.Int32,System.Single[],System.Single> Meta.WitAi.Lib.MicBase::OnSampleReady
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * ___OnSampleReady_7;
	// System.Boolean Meta.WitAi.Lib.MicBase::<IsRecording>k__BackingField
	bool ___U3CIsRecordingU3Ek__BackingField_8;
	// Meta.WitAi.Data.AudioEncoding Meta.WitAi.Lib.MicBase::<AudioEncoding>k__BackingField
	AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * ___U3CAudioEncodingU3Ek__BackingField_9;
	// System.Int32 Meta.WitAi.Lib.MicBase::_sampleCount
	int32_t ____sampleCount_10;
	// UnityEngine.Coroutine Meta.WitAi.Lib.MicBase::_reader
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____reader_11;

public:
	inline static int32_t get_offset_of_OnStartRecording_4() { return static_cast<int32_t>(offsetof(MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6, ___OnStartRecording_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStartRecording_4() const { return ___OnStartRecording_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStartRecording_4() { return &___OnStartRecording_4; }
	inline void set_OnStartRecording_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStartRecording_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartRecording_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartRecordingFailed_5() { return static_cast<int32_t>(offsetof(MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6, ___OnStartRecordingFailed_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStartRecordingFailed_5() const { return ___OnStartRecordingFailed_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStartRecordingFailed_5() { return &___OnStartRecordingFailed_5; }
	inline void set_OnStartRecordingFailed_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStartRecordingFailed_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartRecordingFailed_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnStopRecording_6() { return static_cast<int32_t>(offsetof(MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6, ___OnStopRecording_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStopRecording_6() const { return ___OnStopRecording_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStopRecording_6() { return &___OnStopRecording_6; }
	inline void set_OnStopRecording_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStopRecording_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStopRecording_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnSampleReady_7() { return static_cast<int32_t>(offsetof(MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6, ___OnSampleReady_7)); }
	inline Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * get_OnSampleReady_7() const { return ___OnSampleReady_7; }
	inline Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 ** get_address_of_OnSampleReady_7() { return &___OnSampleReady_7; }
	inline void set_OnSampleReady_7(Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * value)
	{
		___OnSampleReady_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSampleReady_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsRecordingU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6, ___U3CIsRecordingU3Ek__BackingField_8)); }
	inline bool get_U3CIsRecordingU3Ek__BackingField_8() const { return ___U3CIsRecordingU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsRecordingU3Ek__BackingField_8() { return &___U3CIsRecordingU3Ek__BackingField_8; }
	inline void set_U3CIsRecordingU3Ek__BackingField_8(bool value)
	{
		___U3CIsRecordingU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CAudioEncodingU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6, ___U3CAudioEncodingU3Ek__BackingField_9)); }
	inline AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * get_U3CAudioEncodingU3Ek__BackingField_9() const { return ___U3CAudioEncodingU3Ek__BackingField_9; }
	inline AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C ** get_address_of_U3CAudioEncodingU3Ek__BackingField_9() { return &___U3CAudioEncodingU3Ek__BackingField_9; }
	inline void set_U3CAudioEncodingU3Ek__BackingField_9(AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * value)
	{
		___U3CAudioEncodingU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAudioEncodingU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of__sampleCount_10() { return static_cast<int32_t>(offsetof(MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6, ____sampleCount_10)); }
	inline int32_t get__sampleCount_10() const { return ____sampleCount_10; }
	inline int32_t* get_address_of__sampleCount_10() { return &____sampleCount_10; }
	inline void set__sampleCount_10(int32_t value)
	{
		____sampleCount_10 = value;
	}

	inline static int32_t get_offset_of__reader_11() { return static_cast<int32_t>(offsetof(MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6, ____reader_11)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__reader_11() const { return ____reader_11; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__reader_11() { return &____reader_11; }
	inline void set__reader_11(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____reader_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reader_11), (void*)value);
	}
};


// Meta.WitAi.Lib.MicDebug
struct MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Meta.WitAi.Interfaces.IAudioInputSource Meta.WitAi.Lib.MicDebug::_micSource
	RuntimeObject* ____micSource_4;
	// System.String Meta.WitAi.Lib.MicDebug::fileDirectory
	String_t* ___fileDirectory_5;
	// System.String Meta.WitAi.Lib.MicDebug::fileName
	String_t* ___fileName_6;
	// System.IO.FileStream Meta.WitAi.Lib.MicDebug::_fileStream
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * ____fileStream_7;
	// System.Byte[] Meta.WitAi.Lib.MicDebug::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_8;

public:
	inline static int32_t get_offset_of__micSource_4() { return static_cast<int32_t>(offsetof(MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC, ____micSource_4)); }
	inline RuntimeObject* get__micSource_4() const { return ____micSource_4; }
	inline RuntimeObject** get_address_of__micSource_4() { return &____micSource_4; }
	inline void set__micSource_4(RuntimeObject* value)
	{
		____micSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____micSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_fileDirectory_5() { return static_cast<int32_t>(offsetof(MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC, ___fileDirectory_5)); }
	inline String_t* get_fileDirectory_5() const { return ___fileDirectory_5; }
	inline String_t** get_address_of_fileDirectory_5() { return &___fileDirectory_5; }
	inline void set_fileDirectory_5(String_t* value)
	{
		___fileDirectory_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileDirectory_5), (void*)value);
	}

	inline static int32_t get_offset_of_fileName_6() { return static_cast<int32_t>(offsetof(MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC, ___fileName_6)); }
	inline String_t* get_fileName_6() const { return ___fileName_6; }
	inline String_t** get_address_of_fileName_6() { return &___fileName_6; }
	inline void set_fileName_6(String_t* value)
	{
		___fileName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileName_6), (void*)value);
	}

	inline static int32_t get_offset_of__fileStream_7() { return static_cast<int32_t>(offsetof(MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC, ____fileStream_7)); }
	inline FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * get__fileStream_7() const { return ____fileStream_7; }
	inline FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 ** get_address_of__fileStream_7() { return &____fileStream_7; }
	inline void set__fileStream_7(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * value)
	{
		____fileStream_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileStream_7), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_8() { return static_cast<int32_t>(offsetof(MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC, ____buffer_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_8() const { return ____buffer_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_8() { return &____buffer_8; }
	inline void set__buffer_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_8), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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


// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mBF2BF40F3D77C479FB3B6B93B577E3541D94ADA2_gshared (Action_3_t305BA31151982EE25E9A627B2E60D3E0E964DC35 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.Object,System.Single>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_m7812AE5D0379032A09C4473551E7D421C251AF81_gshared (Action_3_t305BA31151982EE25E9A627B2E60D3E0E964DC35 * __this, int32_t ___arg10, RuntimeObject * ___arg21, float ___arg32, const RuntimeMethod* method);

// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4 (String_t* ___deviceName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean Meta.WitAi.Lib.MicBase::get_IsRecording()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MicBase_get_IsRecording_m9653297BD38DF78902CE71DF65D75A13FAB388F5_inline (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, const RuntimeMethod* method);
// System.Boolean Meta.WitAi.Lib.MicBase::get_IsInputAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MicBase_get_IsInputAvailable_mA019740717C6818F7E35AC12EA86B4529C543751 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Lib.MicBase::set_IsRecording(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicBase_set_IsRecording_m7F6A7BEB5C0FA240D11813543334392DCFF6CF63_inline (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadRawAudioU3Ed__33__ctor_m096E0F8CBCC7E001522384DA741081A6AD484C9A (U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method);
// System.Void Meta.WitAi.Data.AudioEncoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEncoding__ctor_m752241147095C3A860DB714B2DA1EAB0619B012B (AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<Meta.WitAi.Interfaces.IAudioInputSource>()
inline RuntimeObject* GameObject_GetComponentInChildren_TisIAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_m3C9B5908D299D70910F37B5905394421599B3A59 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.Single[],System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m77AF64EABA65F3FCF2CB5E38C359B46AB986C823 (Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_mBF2BF40F3D77C479FB3B6B93B577E3541D94ADA2_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Meta.WitAi.Lib.MicDebug::UnloadStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicDebug_UnloadStream_mC18CFE1EE7125049FE1AEA5B77FE4CB6F01D4ADB (MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE (String_t* ___path0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A (String_t* ___path0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m6AC78B553639A108EA00728498FA037E52CC425E (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m1BBE1AABAAFE39019ED26585D12E67A1F9D5A4AA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_m6E1FEADC4E62BCC99846934C0761F0AF67DFE17A (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * File_Open_mA9EF74B69D352F396FBD5225BCC3643D8063C002 (String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// Meta.WitAi.Data.AudioEncoding Meta.WitAi.Lib.MicBase::get_AudioEncoding()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * MicBase_get_AudioEncoding_mCD63963F7E43E120B8AAA338363B16CCAA2AABD5_inline (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.Single[],System.Single>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m47D2C5913168372CE923323D0ACFC4D3275148D2 (Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * __this, int32_t ___arg10, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___arg21, float ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 *, int32_t, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, float, const RuntimeMethod*))Action_3_Invoke_m7812AE5D0379032A09C4473551E7D421C251AF81_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
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
// System.String Meta.WitAi.Data.AudioEncoding::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioEncoding_ToString_m49630D1AF2CB7E63373CAB3B80F23F0B8FCAF596 (AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Endian_t3238130C7D5B1143BB591F7E860C2D2E7BC0EAC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF3768A048853CBDA2EB8478E42FD206D4D43CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"audio/raw;bits={bits};rate={samplerate / 1000}k;encoding={encoding};endian={endian.ToString().ToLower()}";
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int32_t L_2 = __this->get_bits_1();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		int32_t L_6 = __this->get_samplerate_2();
		int32_t L_7 = ((int32_t)((int32_t)L_6/(int32_t)((int32_t)1000)));
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		String_t* L_10 = __this->get_encoding_0();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_9;
		int32_t* L_12 = __this->get_address_of_endian_3();
		RuntimeObject * L_13 = Box(Endian_t3238130C7D5B1143BB591F7E860C2D2E7BC0EAC9_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		*L_12 = *(int32_t*)UnBox(L_13);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		String_t* L_16;
		L_16 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral8BF3768A048853CBDA2EB8478E42FD206D4D43CA, L_11, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void Meta.WitAi.Data.AudioEncoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEncoding__ctor_m752241147095C3A860DB714B2DA1EAB0619B012B (AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6F90E407138E7EA292B71FFD3F0B169CBFC99A6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string encoding = "signed-integer";
		__this->set_encoding_0(_stringLiteralE6F90E407138E7EA292B71FFD3F0B169CBFC99A6);
		// public int bits = 16;
		__this->set_bits_1(((int32_t)16));
		// public int samplerate = 16000;
		__this->set_samplerate_2(((int32_t)16000));
		// public Endian endian = Endian.Little;
		__this->set_endian_3(1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Meta.WitAi.Lib.MicBase::add_OnStartRecording(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicBase_add_OnStartRecording_m376246FDD2ED9E85C0EDD82AD58941EAA70B05F3 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnStartRecording_4();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnStartRecording_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicBase::remove_OnStartRecording(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicBase_remove_OnStartRecording_m735A37F08C9FAB01AE4837E35D8571BAEB816628 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnStartRecording_4();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnStartRecording_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicBase::add_OnStartRecordingFailed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicBase_add_OnStartRecordingFailed_m6E23A694650705B7E3C4A983F87C3C900E20D9B1 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnStartRecordingFailed_5();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnStartRecordingFailed_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicBase::remove_OnStartRecordingFailed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicBase_remove_OnStartRecordingFailed_m7C6E9EEF839AD5A9D47316241437B2A5788A62C9 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnStartRecordingFailed_5();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnStartRecordingFailed_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicBase::add_OnStopRecording(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicBase_add_OnStopRecording_mB97C7AEB2814381888CB93C8202312EBCC1488E4 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnStopRecording_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnStopRecording_6();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicBase::remove_OnStopRecording(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicBase_remove_OnStopRecording_m74C8C0D941F7C07FB36E0FADB33459A9E93862F5 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnStopRecording_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnStopRecording_6();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicBase::add_OnSampleReady(System.Action`3<System.Int32,System.Single[],System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicBase_add_OnSampleReady_mD73EE80D11C9B63C9FAA4ED387195E58710EDFC1 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * V_0 = NULL;
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * V_1 = NULL;
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * V_2 = NULL;
	{
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_0 = __this->get_OnSampleReady_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_1 = V_0;
		V_1 = L_1;
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_2 = V_1;
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 *)CastclassSealed((RuntimeObject*)L_4, Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18_il2cpp_TypeInfo_var));
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 ** L_5 = __this->get_address_of_OnSampleReady_7();
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_6 = V_2;
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_7 = V_1;
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 *>((Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_9 = V_0;
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 *)L_9) == ((RuntimeObject*)(Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicBase::remove_OnSampleReady(System.Action`3<System.Int32,System.Single[],System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicBase_remove_OnSampleReady_m8BEE8E998688ECB23CA53AEB1EBD72F44CDD9EB1 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * V_0 = NULL;
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * V_1 = NULL;
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * V_2 = NULL;
	{
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_0 = __this->get_OnSampleReady_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_1 = V_0;
		V_1 = L_1;
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_2 = V_1;
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 *)CastclassSealed((RuntimeObject*)L_4, Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18_il2cpp_TypeInfo_var));
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 ** L_5 = __this->get_address_of_OnSampleReady_7();
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_6 = V_2;
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_7 = V_1;
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 *>((Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_9 = V_0;
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 *)L_9) == ((RuntimeObject*)(Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Meta.WitAi.Lib.MicBase::get_IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MicBase_get_IsRecording_m9653297BD38DF78902CE71DF65D75A13FAB388F5 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; }
		bool L_0 = __this->get_U3CIsRecordingU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Meta.WitAi.Lib.MicBase::set_IsRecording(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicBase_set_IsRecording_m7F6A7BEB5C0FA240D11813543334392DCFF6CF63 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsRecordingU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Boolean Meta.WitAi.Lib.MicBase::get_IsMicListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MicBase_get_IsMicListening_m813FE7F0B3205D831AF2D0F6732468EB6DB3B981 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, const RuntimeMethod* method)
{
	{
		// get => Microphone.IsRecording(GetMicName());
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String Meta.WitAi.Lib.MicBase::GetMicName() */, __this);
		bool L_1;
		L_1 = Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Meta.WitAi.Lib.MicBase::get_IsInputAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MicBase_get_IsInputAvailable_mA019740717C6818F7E35AC12EA86B4529C543751 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsInputAvailable => GetMicClip() != null;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0;
		L_0 = VirtFuncInvoker0< AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * >::Invoke(20 /* UnityEngine.AudioClip Meta.WitAi.Lib.MicBase::GetMicClip() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// Meta.WitAi.Data.AudioEncoding Meta.WitAi.Lib.MicBase::get_AudioEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * MicBase_get_AudioEncoding_mCD63963F7E43E120B8AAA338363B16CCAA2AABD5 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, const RuntimeMethod* method)
{
	{
		// public AudioEncoding AudioEncoding { get; set; } = new AudioEncoding();
		AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * L_0 = __this->get_U3CAudioEncodingU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Meta.WitAi.Lib.MicBase::set_AudioEncoding(Meta.WitAi.Data.AudioEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicBase_set_AudioEncoding_m7A3CDA55DE727E7BC47D4640C32E808783E3CE76 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * ___value0, const RuntimeMethod* method)
{
	{
		// public AudioEncoding AudioEncoding { get; set; } = new AudioEncoding();
		AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * L_0 = ___value0;
		__this->set_U3CAudioEncodingU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicBase::CheckForInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicBase_CheckForInput_m487FAF054363739E769EE0532F6503480CC27477 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicBase::StartRecording(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicBase_StartRecording_mD41475E5E98995E5093DEAE396EDA595A4802576 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, int32_t ___sampleDurationMS0, const RuntimeMethod* method)
{
	{
		// if (IsRecording)
		bool L_0;
		L_0 = MicBase_get_IsRecording_m9653297BD38DF78902CE71DF65D75A13FAB388F5_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// StopRecording();
		VirtActionInvoker0::Invoke(26 /* System.Void Meta.WitAi.Lib.MicBase::StopRecording() */, __this);
	}

IL_000e:
	{
		// if (!IsInputAvailable)
		bool L_1;
		L_1 = MicBase_get_IsInputAvailable_mA019740717C6818F7E35AC12EA86B4529C543751(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		// OnStartRecordingFailed.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = __this->get_OnStartRecordingFailed_5();
		NullCheck(L_2);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0022:
	{
		// IsRecording = true;
		MicBase_set_IsRecording_m7F6A7BEB5C0FA240D11813543334392DCFF6CF63_inline(__this, (bool)1, /*hidden argument*/NULL);
		// _reader = StartCoroutine(ReadRawAudio(sampleDurationMS));
		int32_t L_3 = ___sampleDurationMS0;
		RuntimeObject* L_4;
		L_4 = VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Collections.IEnumerator Meta.WitAi.Lib.MicBase::ReadRawAudio(System.Int32) */, __this, L_3);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		__this->set__reader_11(L_5);
		// }
		return;
	}
}
// System.Collections.IEnumerator Meta.WitAi.Lib.MicBase::ReadRawAudio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MicBase_ReadRawAudio_m1789CD8B3E17B4ECD88C71245469CE657345A812 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, int32_t ___sampleDurationMS0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68 * L_0 = (U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68 *)il2cpp_codegen_object_new(U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68_il2cpp_TypeInfo_var);
		U3CReadRawAudioU3Ed__33__ctor_m096E0F8CBCC7E001522384DA741081A6AD484C9A(L_0, 0, /*hidden argument*/NULL);
		U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68 * L_2 = L_1;
		int32_t L_3 = ___sampleDurationMS0;
		NullCheck(L_2);
		L_2->set_sampleDurationMS_3(L_3);
		return L_2;
	}
}
// System.Void Meta.WitAi.Lib.MicBase::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicBase_StopRecording_m9C1DB9D173E0B9805EB6392A1AB0F67EEC2DBE73 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B6_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_0 = NULL;
	{
		// if (!IsRecording)
		bool L_0;
		L_0 = MicBase_get_IsRecording_m9653297BD38DF78902CE71DF65D75A13FAB388F5_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// IsRecording = false;
		MicBase_set_IsRecording_m7F6A7BEB5C0FA240D11813543334392DCFF6CF63_inline(__this, (bool)0, /*hidden argument*/NULL);
		// if (_reader != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1 = __this->get__reader_11();
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// StopCoroutine(_reader);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2 = __this->get__reader_11();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_2, /*hidden argument*/NULL);
		// _reader = null;
		__this->set__reader_11((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
	}

IL_002b:
	{
		// OnStopRecording?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = __this->get_OnStopRecording_6();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3;
		G_B5_0 = L_4;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0036;
		}
	}
	{
		return;
	}

IL_0036:
	{
		NullCheck(G_B6_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B6_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicBase__ctor_m6DC7A0885C6B983BDE194293438E4AA3014B0C70 (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AudioEncoding AudioEncoding { get; set; } = new AudioEncoding();
		AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * L_0 = (AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C *)il2cpp_codegen_object_new(AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C_il2cpp_TypeInfo_var);
		AudioEncoding__ctor_m752241147095C3A860DB714B2DA1EAB0619B012B(L_0, /*hidden argument*/NULL);
		__this->set_U3CAudioEncodingU3Ek__BackingField_9(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Meta.WitAi.Lib.MicDebug::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicDebug_OnEnable_mC84810E41EC7FBA8A32B1191AA7B0F9D9772C4CA (MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3__ctor_m77AF64EABA65F3FCF2CB5E38C359B46AB986C823_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisIAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_m3C9B5908D299D70910F37B5905394421599B3A59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicDebug_OnSampleReady_mFB6DE5288BEBA88578E18095581454E0CF6BA673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicDebug_OnStartRecording_mB16675B2DD44A9A1955F4E650AF234B7B5B1800F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicDebug_OnStopRecording_mE70BE1A49A30A0D4DEE4EA5A1656DC94F1376DEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_micSource == null)
		RuntimeObject* L_0 = __this->get__micSource_4();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// _micSource = gameObject.GetComponentInChildren<IAudioInputSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = GameObject_GetComponentInChildren_TisIAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_m3C9B5908D299D70910F37B5905394421599B3A59(L_1, /*hidden argument*/GameObject_GetComponentInChildren_TisIAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_m3C9B5908D299D70910F37B5905394421599B3A59_RuntimeMethod_var);
		__this->set__micSource_4(L_2);
	}

IL_0019:
	{
		// if (_micSource != null)
		RuntimeObject* L_3 = __this->get__micSource_4();
		if (!L_3)
		{
			goto IL_0066;
		}
	}
	{
		// _micSource.OnStartRecording += OnStartRecording;
		RuntimeObject* L_4 = __this->get__micSource_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, __this, (intptr_t)((intptr_t)MicDebug_OnStartRecording_mB16675B2DD44A9A1955F4E650AF234B7B5B1800F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void Meta.WitAi.Interfaces.IAudioInputSource::add_OnStartRecording(System.Action) */, IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var, L_4, L_5);
		// _micSource.OnSampleReady += OnSampleReady;
		RuntimeObject* L_6 = __this->get__micSource_4();
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_7 = (Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 *)il2cpp_codegen_object_new(Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18_il2cpp_TypeInfo_var);
		Action_3__ctor_m77AF64EABA65F3FCF2CB5E38C359B46AB986C823(L_7, __this, (intptr_t)((intptr_t)MicDebug_OnSampleReady_mFB6DE5288BEBA88578E18095581454E0CF6BA673_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_m77AF64EABA65F3FCF2CB5E38C359B46AB986C823_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * >::Invoke(4 /* System.Void Meta.WitAi.Interfaces.IAudioInputSource::add_OnSampleReady(System.Action`3<System.Int32,System.Single[],System.Single>) */, IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var, L_6, L_7);
		// _micSource.OnStopRecording += OnStopRecording;
		RuntimeObject* L_8 = __this->get__micSource_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_9, __this, (intptr_t)((intptr_t)MicDebug_OnStopRecording_mE70BE1A49A30A0D4DEE4EA5A1656DC94F1376DEE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(6 /* System.Void Meta.WitAi.Interfaces.IAudioInputSource::add_OnStopRecording(System.Action) */, IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var, L_8, L_9);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicDebug::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicDebug_OnDisable_mD8987195A2C6C4712D98B51B72B0D5DBF5D5B895 (MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3__ctor_m77AF64EABA65F3FCF2CB5E38C359B46AB986C823_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicDebug_OnSampleReady_mFB6DE5288BEBA88578E18095581454E0CF6BA673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicDebug_OnStartRecording_mB16675B2DD44A9A1955F4E650AF234B7B5B1800F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicDebug_OnStopRecording_mE70BE1A49A30A0D4DEE4EA5A1656DC94F1376DEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_micSource != null)
		RuntimeObject* L_0 = __this->get__micSource_4();
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		// _micSource.OnStartRecording -= OnStartRecording;
		RuntimeObject* L_1 = __this->get__micSource_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)MicDebug_OnStartRecording_mB16675B2DD44A9A1955F4E650AF234B7B5B1800F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(1 /* System.Void Meta.WitAi.Interfaces.IAudioInputSource::remove_OnStartRecording(System.Action) */, IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var, L_1, L_2);
		// _micSource.OnSampleReady -= OnSampleReady;
		RuntimeObject* L_3 = __this->get__micSource_4();
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_4 = (Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 *)il2cpp_codegen_object_new(Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18_il2cpp_TypeInfo_var);
		Action_3__ctor_m77AF64EABA65F3FCF2CB5E38C359B46AB986C823(L_4, __this, (intptr_t)((intptr_t)MicDebug_OnSampleReady_mFB6DE5288BEBA88578E18095581454E0CF6BA673_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_m77AF64EABA65F3FCF2CB5E38C359B46AB986C823_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker1< Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * >::Invoke(5 /* System.Void Meta.WitAi.Interfaces.IAudioInputSource::remove_OnSampleReady(System.Action`3<System.Int32,System.Single[],System.Single>) */, IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var, L_3, L_4);
		// _micSource.OnStopRecording -= OnStopRecording;
		RuntimeObject* L_5 = __this->get__micSource_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, __this, (intptr_t)((intptr_t)MicDebug_OnStopRecording_mE70BE1A49A30A0D4DEE4EA5A1656DC94F1376DEE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(7 /* System.Void Meta.WitAi.Interfaces.IAudioInputSource::remove_OnStopRecording(System.Action) */, IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var, L_5, L_6);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicDebug::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicDebug_OnDestroy_mE935436B89E2B6B9F76FECC52BA87BC0C019498A (MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC * __this, const RuntimeMethod* method)
{
	{
		// UnloadStream();
		MicDebug_UnloadStream_mC18CFE1EE7125049FE1AEA5B77FE4CB6F01D4ADB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicDebug::OnStartRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicDebug_OnStartRecording_mB16675B2DD44A9A1955F4E650AF234B7B5B1800F (MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral138C8DE2C1CB9DED85DB8AAFB49C1CF08A14A170);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BC7B8B30763D35752A71C9CA56135B797B57F9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string path = Application.temporaryCachePath;
		String_t* L_0;
		L_0 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		V_0 = L_0;
		// path += "/" + fileDirectory;
		String_t* L_1 = V_0;
		String_t* L_2 = __this->get_fileDirectory_5();
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_1, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (path.EndsWith("/"))
		String_t* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_4, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// path = path.Substring(0, path.Length - 1);
		String_t* L_6 = V_0;
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_9;
		L_9 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_6, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0035:
	{
		// if (!Directory.Exists(path))
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0044;
		}
	}
	{
		// Directory.CreateDirectory(path);
		String_t* L_12 = V_0;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_13;
		L_13 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_12, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// DateTime now = DateTime.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_14;
		L_14 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_1 = L_14;
		// path = $"{path}/{fileName}{now.Year:0000}{now.Month:00}{now.Day:00}_{now.Hour:00}{now.Minute:00}{now.Second:00}.pcm";
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
		String_t* L_17 = V_0;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_16;
		String_t* L_19 = __this->get_fileName_6();
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_18;
		int32_t L_21;
		L_21 = DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_20;
		int32_t L_25;
		L_25 = DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_24;
		int32_t L_29;
		L_29 = DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_31);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = L_28;
		int32_t L_33;
		L_33 = DateTime_get_Hour_m6AC78B553639A108EA00728498FA037E52CC425E((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_34 = L_33;
		RuntimeObject * L_35 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_35);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = L_32;
		int32_t L_37;
		L_37 = DateTime_get_Minute_m1BBE1AABAAFE39019ED26585D12E67A1F9D5A4AA((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_38 = L_37;
		RuntimeObject * L_39 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_39);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_40 = L_36;
		int32_t L_41;
		L_41 = DateTime_get_Second_m6E1FEADC4E62BCC99846934C0761F0AF67DFE17A((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_43);
		String_t* L_44;
		L_44 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral138C8DE2C1CB9DED85DB8AAFB49C1CF08A14A170, L_40, /*hidden argument*/NULL);
		V_0 = L_44;
		// Debug.Log("MicDebug - Writing recording to file: " + path);
		String_t* L_45 = V_0;
		String_t* L_46;
		L_46 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral6BC7B8B30763D35752A71C9CA56135B797B57F9D, L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_46, /*hidden argument*/NULL);
		// _fileStream = File.Open(path, FileMode.Create);
		String_t* L_47 = V_0;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_48;
		L_48 = File_Open_mA9EF74B69D352F396FBD5225BCC3643D8063C002(L_47, 2, /*hidden argument*/NULL);
		__this->set__fileStream_7(L_48);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicDebug::OnSampleReady(System.Int32,System.Single[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicDebug_OnSampleReady_mFB6DE5288BEBA88578E18095581454E0CF6BA673 (MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC * __this, int32_t ___sampleCount0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___sample1, float ___levelMax2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		// if (_fileStream == null || sample == null)
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_0 = __this->get__fileStream_7();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___sample1;
		if (L_1)
		{
			goto IL_000c;
		}
	}

IL_000b:
	{
		// return;
		return;
	}

IL_000c:
	{
		// if (_buffer == null || _buffer.Length != sample.Length * BYTES_PER_SHORT)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get__buffer_8();
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get__buffer_8();
		NullCheck(L_3);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = ___sample1;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))) == ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)2)))))
		{
			goto IL_0033;
		}
	}

IL_0023:
	{
		// _buffer = new byte[sample.Length * BYTES_PER_SHORT];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = ___sample1;
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), (int32_t)2)));
		__this->set__buffer_8(L_6);
	}

IL_0033:
	{
		// for (int i = 0; i < sample.Length; i++)
		V_0 = 0;
		goto IL_0062;
	}

IL_0037:
	{
		// short data = (short) (sample[i] * FLOAT_TO_SHORT);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = ___sample1;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		float L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = il2cpp_codegen_cast_double_to_int<int16_t>(((float)il2cpp_codegen_multiply((float)L_10, (float)(32767.0f))));
		// _buffer[i * BYTES_PER_SHORT] = (byte) data;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get__buffer_8();
		int32_t L_12 = V_0;
		int16_t L_13 = V_1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)2))), (uint8_t)((int32_t)((uint8_t)L_13)));
		// _buffer[i * BYTES_PER_SHORT + 1] = (byte) (data >> 8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get__buffer_8();
		int32_t L_15 = V_0;
		int16_t L_16 = V_1;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)), (int32_t)1))), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_16>>(int32_t)8)))));
		// for (int i = 0; i < sample.Length; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0062:
	{
		// for (int i = 0; i < sample.Length; i++)
		int32_t L_18 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = ___sample1;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		// _fileStream.Write(_buffer, 0, _buffer.Length);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_20 = __this->get__fileStream_7();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = __this->get__buffer_8();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = __this->get__buffer_8();
		NullCheck(L_22);
		NullCheck(L_20);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))));
		// }
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicDebug::OnStopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicDebug_OnStopRecording_mE70BE1A49A30A0D4DEE4EA5A1656DC94F1376DEE (MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC * __this, const RuntimeMethod* method)
{
	{
		// UnloadStream();
		MicDebug_UnloadStream_mC18CFE1EE7125049FE1AEA5B77FE4CB6F01D4ADB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicDebug::UnloadStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicDebug_UnloadStream_mC18CFE1EE7125049FE1AEA5B77FE4CB6F01D4ADB (MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC * __this, const RuntimeMethod* method)
{
	{
		// if (_fileStream == null)
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_0 = __this->get__fileStream_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _fileStream.Close();
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_1 = __this->get__fileStream_7();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_1);
		// _fileStream.Dispose();
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_2 = __this->get__fileStream_7();
		NullCheck(L_2);
		Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_2, /*hidden argument*/NULL);
		// _fileStream = null;
		__this->set__fileStream_7((FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicDebug::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicDebug__ctor_m27B8BC306C0A0CB6A3DBBED2AA1EB4600E61E5F7 (MicDebug_tFB7E58CC025A3889CEF9813EF4765EF94C383FDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7289E5E64EBFCA0CED33860E3C36166013E27A9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93FBA0F83648DD713F4B0217197020DE79E4F4A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string fileDirectory = "MicClips";
		__this->set_fileDirectory_5(_stringLiteral7289E5E64EBFCA0CED33860E3C36166013E27A9E);
		// [SerializeField] private string fileName = "mic_debug_";
		__this->set_fileName_6(_stringLiteral93FBA0F83648DD713F4B0217197020DE79E4F4A1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadRawAudioU3Ed__33__ctor_m096E0F8CBCC7E001522384DA741081A6AD484C9A (U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadRawAudioU3Ed__33_System_IDisposable_Dispose_m96636BFC8E4FFE6F118175D4D7D7A9E51C730479 (U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReadRawAudioU3Ed__33_MoveNext_m1CF11C790EB81C2165E5EB1DEF9885B62B8EFE08 (U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_m47D2C5913168372CE923323D0ACFC4D3275148D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	float V_12 = 0.0f;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * G_B21_0 = NULL;
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * G_B20_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0235;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// OnStartRecording?.Invoke();
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_4 = V_1;
		NullCheck(L_4);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = L_4->get_OnStartRecording_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_002d;
		}
	}
	{
		goto IL_0032;
	}

IL_002d:
	{
		NullCheck(G_B5_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B5_0, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// AudioClip micClip = GetMicClip();
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_7 = V_1;
		NullCheck(L_7);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8;
		L_8 = VirtFuncInvoker0< AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * >::Invoke(20 /* UnityEngine.AudioClip Meta.WitAi.Lib.MicBase::GetMicClip() */, L_7);
		__this->set_U3CmicClipU3E5__2_4(L_8);
		// string micDevice = GetMicName();
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String Meta.WitAi.Lib.MicBase::GetMicName() */, L_9);
		// int micSampleRate = GetMicSampleRate();
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 Meta.WitAi.Lib.MicBase::GetMicSampleRate() */, L_11);
		V_2 = L_12;
		// int sampleTotal = AudioEncoding.samplerate / 1000 * sampleDurationMS * micClip.channels;
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_13 = V_1;
		NullCheck(L_13);
		AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * L_14;
		L_14 = MicBase_get_AudioEncoding_mCD63963F7E43E120B8AAA338363B16CCAA2AABD5_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = L_14->get_samplerate_2();
		int32_t L_16 = __this->get_sampleDurationMS_3();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_17 = __this->get_U3CmicClipU3E5__2_4();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_17, /*hidden argument*/NULL);
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_15/(int32_t)((int32_t)1000))), (int32_t)L_16)), (int32_t)L_18));
		// float[] sample = new float[sampleTotal];
		int32_t L_19 = V_3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_19);
		__this->set_U3CsampleU3E5__3_5(L_20);
		// int loops = 0;
		__this->set_U3CloopsU3E5__4_6(0);
		// int readAbsPos = MicPosition;
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 Meta.WitAi.Lib.MicBase::get_MicPosition() */, L_21);
		__this->set_U3CreadAbsPosU3E5__5_7(L_22);
		// int prevPos = readAbsPos;
		int32_t L_23 = __this->get_U3CreadAbsPosU3E5__5_7();
		__this->set_U3CprevPosU3E5__6_8(L_23);
		// int micTempTotal = micSampleRate / 1000 * sampleDurationMS * micClip.channels;
		int32_t L_24 = V_2;
		int32_t L_25 = __this->get_sampleDurationMS_3();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_26 = __this->get_U3CmicClipU3E5__2_4();
		NullCheck(L_26);
		int32_t L_27;
		L_27 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_26, /*hidden argument*/NULL);
		__this->set_U3CmicTempTotalU3E5__7_9(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_24/(int32_t)((int32_t)1000))), (int32_t)L_25)), (int32_t)L_27)));
		// int micDif = micTempTotal / sampleTotal;
		int32_t L_28 = __this->get_U3CmicTempTotalU3E5__7_9();
		int32_t L_29 = V_3;
		__this->set_U3CmicDifU3E5__8_10(((int32_t)((int32_t)L_28/(int32_t)L_29)));
		// float[] temp = new float[micTempTotal];
		int32_t L_30 = __this->get_U3CmicTempTotalU3E5__7_9();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_31 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_30);
		__this->set_U3CtempU3E5__9_11(L_31);
		goto IL_023c;
	}

IL_00e0:
	{
		// bool isNewDataAvailable = true;
		V_4 = (bool)1;
		goto IL_0210;
	}

IL_00e8:
	{
		// int currPos = MicPosition;
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 Meta.WitAi.Lib.MicBase::get_MicPosition() */, L_32);
		V_5 = L_33;
		// if (currPos < prevPos)
		int32_t L_34 = V_5;
		int32_t L_35 = __this->get_U3CprevPosU3E5__6_8();
		if ((((int32_t)L_34) >= ((int32_t)L_35)))
		{
			goto IL_010c;
		}
	}
	{
		// loops++;
		int32_t L_36 = __this->get_U3CloopsU3E5__4_6();
		V_8 = L_36;
		int32_t L_37 = V_8;
		__this->set_U3CloopsU3E5__4_6(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
	}

IL_010c:
	{
		// prevPos = currPos;
		int32_t L_38 = V_5;
		__this->set_U3CprevPosU3E5__6_8(L_38);
		// var currAbsPos = loops * micClip.samples + currPos;
		int32_t L_39 = __this->get_U3CloopsU3E5__4_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_40 = __this->get_U3CmicClipU3E5__2_4();
		NullCheck(L_40);
		int32_t L_41;
		L_41 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_40, /*hidden argument*/NULL);
		int32_t L_42 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_39, (int32_t)L_41)), (int32_t)L_42));
		// var nextReadAbsPos = readAbsPos + micTempTotal;
		int32_t L_43 = __this->get_U3CreadAbsPosU3E5__5_7();
		int32_t L_44 = __this->get_U3CmicTempTotalU3E5__7_9();
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44));
		// if (nextReadAbsPos < currAbsPos)
		int32_t L_45 = V_7;
		int32_t L_46 = V_6;
		if ((((int32_t)L_45) >= ((int32_t)L_46)))
		{
			goto IL_020d;
		}
	}
	{
		// micClip.GetData(temp, readAbsPos % micClip.samples);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_47 = __this->get_U3CmicClipU3E5__2_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_48 = __this->get_U3CtempU3E5__9_11();
		int32_t L_49 = __this->get_U3CreadAbsPosU3E5__5_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_50 = __this->get_U3CmicClipU3E5__2_4();
		NullCheck(L_50);
		int32_t L_51;
		L_51 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_50, /*hidden argument*/NULL);
		NullCheck(L_47);
		bool L_52;
		L_52 = AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0(L_47, L_48, ((int32_t)((int32_t)L_49%(int32_t)L_51)), /*hidden argument*/NULL);
		// float levelMax = 0;
		V_9 = (0.0f);
		// int sampleIndex = 0;
		V_10 = 0;
		// for (int i = 0; i < temp.Length; i++)
		V_11 = 0;
		goto IL_01ca;
	}

IL_0176:
	{
		// float wavePeak = temp[i] * temp[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_53 = __this->get_U3CtempU3E5__9_11();
		int32_t L_54 = V_11;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		float L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_57 = __this->get_U3CtempU3E5__9_11();
		int32_t L_58 = V_11;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		float L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_12 = ((float)il2cpp_codegen_multiply((float)L_56, (float)L_60));
		// if (levelMax < wavePeak)
		float L_61 = V_9;
		float L_62 = V_12;
		if ((!(((float)L_61) < ((float)L_62))))
		{
			goto IL_0195;
		}
	}
	{
		// levelMax = wavePeak;
		float L_63 = V_12;
		V_9 = L_63;
	}

IL_0195:
	{
		// if (i % micDif == 0 && sampleIndex < sample.Length)
		int32_t L_64 = V_11;
		int32_t L_65 = __this->get_U3CmicDifU3E5__8_10();
		if (((int32_t)((int32_t)L_64%(int32_t)L_65)))
		{
			goto IL_01c4;
		}
	}
	{
		int32_t L_66 = V_10;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_67 = __this->get_U3CsampleU3E5__3_5();
		NullCheck(L_67);
		if ((((int32_t)L_66) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_67)->max_length))))))
		{
			goto IL_01c4;
		}
	}
	{
		// sample[sampleIndex] = temp[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_68 = __this->get_U3CsampleU3E5__3_5();
		int32_t L_69 = V_10;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_70 = __this->get_U3CtempU3E5__9_11();
		int32_t L_71 = V_11;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		float L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (float)L_73);
		// sampleIndex++;
		int32_t L_74 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_01c4:
	{
		// for (int i = 0; i < temp.Length; i++)
		int32_t L_75 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_01ca:
	{
		// for (int i = 0; i < temp.Length; i++)
		int32_t L_76 = V_11;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_77 = __this->get_U3CtempU3E5__9_11();
		NullCheck(L_77);
		if ((((int32_t)L_76) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length))))))
		{
			goto IL_0176;
		}
	}
	{
		// _sampleCount++;
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_78 = V_1;
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_79 = V_1;
		NullCheck(L_79);
		int32_t L_80 = L_79->get__sampleCount_10();
		NullCheck(L_78);
		L_78->set__sampleCount_10(((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1)));
		// OnSampleReady?.Invoke(_sampleCount, sample, levelMax);
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_81 = V_1;
		NullCheck(L_81);
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_82 = L_81->get_OnSampleReady_7();
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_83 = L_82;
		G_B20_0 = L_83;
		if (L_83)
		{
			G_B21_0 = L_83;
			goto IL_01f0;
		}
	}
	{
		goto IL_0203;
	}

IL_01f0:
	{
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_84 = V_1;
		NullCheck(L_84);
		int32_t L_85 = L_84->get__sampleCount_10();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_86 = __this->get_U3CsampleU3E5__3_5();
		float L_87 = V_9;
		NullCheck(G_B21_0);
		Action_3_Invoke_m47D2C5913168372CE923323D0ACFC4D3275148D2(G_B21_0, L_85, L_86, L_87, /*hidden argument*/Action_3_Invoke_m47D2C5913168372CE923323D0ACFC4D3275148D2_RuntimeMethod_var);
	}

IL_0203:
	{
		// readAbsPos = nextReadAbsPos;
		int32_t L_88 = V_7;
		__this->set_U3CreadAbsPosU3E5__5_7(L_88);
		// }
		goto IL_0210;
	}

IL_020d:
	{
		// isNewDataAvailable = false;
		V_4 = (bool)0;
	}

IL_0210:
	{
		// while (isNewDataAvailable && micClip != null)
		bool L_89 = V_4;
		if (!L_89)
		{
			goto IL_0225;
		}
	}
	{
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_90 = __this->get_U3CmicClipU3E5__2_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_91;
		L_91 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_90, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_91)
		{
			goto IL_00e8;
		}
	}

IL_0225:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0235:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_023c:
	{
		// while (micClip != null && IsMicListening && IsRecording)
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_92 = __this->get_U3CmicClipU3E5__2_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_92, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_025d;
		}
	}
	{
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_94 = V_1;
		NullCheck(L_94);
		bool L_95;
		L_95 = VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean Meta.WitAi.Lib.MicBase::get_IsMicListening() */, L_94);
		if (!L_95)
		{
			goto IL_025d;
		}
	}
	{
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_96 = V_1;
		NullCheck(L_96);
		bool L_97;
		L_97 = MicBase_get_IsRecording_m9653297BD38DF78902CE71DF65D75A13FAB388F5_inline(L_96, /*hidden argument*/NULL);
		if (L_97)
		{
			goto IL_00e0;
		}
	}

IL_025d:
	{
		// if (IsRecording)
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_98 = V_1;
		NullCheck(L_98);
		bool L_99;
		L_99 = MicBase_get_IsRecording_m9653297BD38DF78902CE71DF65D75A13FAB388F5_inline(L_98, /*hidden argument*/NULL);
		if (!L_99)
		{
			goto IL_026b;
		}
	}
	{
		// StopRecording();
		MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * L_100 = V_1;
		NullCheck(L_100);
		VirtActionInvoker0::Invoke(26 /* System.Void Meta.WitAi.Lib.MicBase::StopRecording() */, L_100);
	}

IL_026b:
	{
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReadRawAudioU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFDF656197604795521E31E3F6C8F252DE43FA3E3 (U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadRawAudioU3Ed__33_System_Collections_IEnumerator_Reset_mE6753986B2A1F0BCFF0717D9C1BCB83C2B65A2F9 (U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadRawAudioU3Ed__33_System_Collections_IEnumerator_Reset_mE6753986B2A1F0BCFF0717D9C1BCB83C2B65A2F9_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.Lib.MicBase/<ReadRawAudio>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReadRawAudioU3Ed__33_System_Collections_IEnumerator_get_Current_mC5E93DFEE6D0A780844B70C0D0136F4FB528801D (U3CReadRawAudioU3Ed__33_t09B2FBA12AE8EF1DC74D1AB02EEDB75C19361C68 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MicBase_get_IsRecording_m9653297BD38DF78902CE71DF65D75A13FAB388F5_inline (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; }
		bool L_0 = __this->get_U3CIsRecordingU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MicBase_set_IsRecording_m7F6A7BEB5C0FA240D11813543334392DCFF6CF63_inline (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsRecordingU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * MicBase_get_AudioEncoding_mCD63963F7E43E120B8AAA338363B16CCAA2AABD5_inline (MicBase_t98B382C409D0A7B06C4D360328A1C708D09158D6 * __this, const RuntimeMethod* method)
{
	{
		// public AudioEncoding AudioEncoding { get; set; } = new AudioEncoding();
		AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * L_0 = __this->get_U3CAudioEncodingU3Ek__BackingField_9();
		return L_0;
	}
}
