﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
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
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D;
// UnityEngine.Networking.DownloadHandlerFile
struct DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0202811166757AF262261201E48B89F6244FAE6C;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05;
IL2CPP_EXTERN_C String_t* _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral181774C9FD7066AB56B07158FF3537A8A549567D;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral225454A90D745E7A7A5DE5C12169566FBC05370D;
IL2CPP_EXTERN_C String_t* _stringLiteral275BCC65ABB6A0370BA5E466908369480EADCC46;
IL2CPP_EXTERN_C String_t* _stringLiteral350138951CA76BFC65A77EA2D223A8D476B10BC5;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84;
IL2CPP_EXTERN_C String_t* _stringLiteral5AD0071445300544C945A4235FF5EE2237930AF6;
IL2CPP_EXTERN_C String_t* _stringLiteral5CE7A1E1E42333BF53E138868B7E6871FD1FC571;
IL2CPP_EXTERN_C String_t* _stringLiteral5E56E678035E4A801BA617E16F57410976493BFB;
IL2CPP_EXTERN_C String_t* _stringLiteral60B2FD8A0C53C7E76D3CD315D91BD05F5EFAF33A;
IL2CPP_EXTERN_C String_t* _stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral716D4DCF03C354CF6AC6FB6BDBEC2E94AAE7139E;
IL2CPP_EXTERN_C String_t* _stringLiteral7D2659B30CD7065E2E3DAAE5ABDCFE4A0B66782E;
IL2CPP_EXTERN_C String_t* _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15;
IL2CPP_EXTERN_C String_t* _stringLiteral830D3B1988207AD90E6500EFD5191F802329C898;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8DA696190A9052B3303D45C87CA50BEDCFA7494C;
IL2CPP_EXTERN_C String_t* _stringLiteral9305B29342F3BC0993F85105BB6141FF30569ED2;
IL2CPP_EXTERN_C String_t* _stringLiteral93CE1F3EEBFA5A5C2C336C37D31A01039231CA39;
IL2CPP_EXTERN_C String_t* _stringLiteral997F93B8223285BB571C83E7ACD6C6615F5EF04C;
IL2CPP_EXTERN_C String_t* _stringLiteralBC3A46521634BE1B34BB2F00154A05110A698F36;
IL2CPP_EXTERN_C String_t* _stringLiteralBCE49DFF590DB2AB94984A5C75EF18BDDD83FE69;
IL2CPP_EXTERN_C String_t* _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536;
IL2CPP_EXTERN_C String_t* _stringLiteralCFD59FD74BD22E570703A8BC6B77F6081661FEEB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8913AAC22D1B252D7BAE42D32E3D240D43456B27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DownloadHandlerFile_GetData_mFCC27E9D9A113B454EE78A3834E31FF5EB5BE019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DownloadHandlerFile_GetText_mCB2FB28FD5EF370814344C50D8EEF0B350B2AE9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_chunkedTransfer_mA743E172FDB5D5892DD6D3AA6836B66CD6233B5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_uri_mE33587B468A024826580F3F208E2B6B94640F9D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke;;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC81EA6223B5DC14CA590D1BADEDD82F8EB8B39EF 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCultureIgnoreCase_1), (void*)value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinal_2)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinal_2), (void*)value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinalIgnoreCase_3), (void*)value);
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

// UnityEngine.WWWForm
struct WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB  : public RuntimeObject
{
public:

public:
};


// UnityEngine.WWWTranscoder
struct WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771  : public RuntimeObject
{
public:

public:
};

struct WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields
{
public:
	// System.Byte[] UnityEngine.WWWTranscoder::ucHexChars
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ucHexChars_0;
	// System.Byte[] UnityEngine.WWWTranscoder::lcHexChars
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___lcHexChars_1;
	// System.Byte UnityEngine.WWWTranscoder::urlEscapeChar
	uint8_t ___urlEscapeChar_2;
	// System.Byte[] UnityEngine.WWWTranscoder::urlSpace
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___urlSpace_3;
	// System.Byte[] UnityEngine.WWWTranscoder::dataSpace
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dataSpace_4;
	// System.Byte[] UnityEngine.WWWTranscoder::urlForbidden
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___urlForbidden_5;
	// System.Byte UnityEngine.WWWTranscoder::qpEscapeChar
	uint8_t ___qpEscapeChar_6;
	// System.Byte[] UnityEngine.WWWTranscoder::qpSpace
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___qpSpace_7;
	// System.Byte[] UnityEngine.WWWTranscoder::qpForbidden
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___qpForbidden_8;

public:
	inline static int32_t get_offset_of_ucHexChars_0() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___ucHexChars_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_ucHexChars_0() const { return ___ucHexChars_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_ucHexChars_0() { return &___ucHexChars_0; }
	inline void set_ucHexChars_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___ucHexChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ucHexChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_lcHexChars_1() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___lcHexChars_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_lcHexChars_1() const { return ___lcHexChars_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_lcHexChars_1() { return &___lcHexChars_1; }
	inline void set_lcHexChars_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___lcHexChars_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lcHexChars_1), (void*)value);
	}

	inline static int32_t get_offset_of_urlEscapeChar_2() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___urlEscapeChar_2)); }
	inline uint8_t get_urlEscapeChar_2() const { return ___urlEscapeChar_2; }
	inline uint8_t* get_address_of_urlEscapeChar_2() { return &___urlEscapeChar_2; }
	inline void set_urlEscapeChar_2(uint8_t value)
	{
		___urlEscapeChar_2 = value;
	}

	inline static int32_t get_offset_of_urlSpace_3() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___urlSpace_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_urlSpace_3() const { return ___urlSpace_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_urlSpace_3() { return &___urlSpace_3; }
	inline void set_urlSpace_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___urlSpace_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___urlSpace_3), (void*)value);
	}

	inline static int32_t get_offset_of_dataSpace_4() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___dataSpace_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_dataSpace_4() const { return ___dataSpace_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_dataSpace_4() { return &___dataSpace_4; }
	inline void set_dataSpace_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___dataSpace_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataSpace_4), (void*)value);
	}

	inline static int32_t get_offset_of_urlForbidden_5() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___urlForbidden_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_urlForbidden_5() const { return ___urlForbidden_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_urlForbidden_5() { return &___urlForbidden_5; }
	inline void set_urlForbidden_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___urlForbidden_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___urlForbidden_5), (void*)value);
	}

	inline static int32_t get_offset_of_qpEscapeChar_6() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___qpEscapeChar_6)); }
	inline uint8_t get_qpEscapeChar_6() const { return ___qpEscapeChar_6; }
	inline uint8_t* get_address_of_qpEscapeChar_6() { return &___qpEscapeChar_6; }
	inline void set_qpEscapeChar_6(uint8_t value)
	{
		___qpEscapeChar_6 = value;
	}

	inline static int32_t get_offset_of_qpSpace_7() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___qpSpace_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_qpSpace_7() const { return ___qpSpace_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_qpSpace_7() { return &___qpSpace_7; }
	inline void set_qpSpace_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___qpSpace_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qpSpace_7), (void*)value);
	}

	inline static int32_t get_offset_of_qpForbidden_8() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___qpForbidden_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_qpForbidden_8() const { return ___qpForbidden_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_qpForbidden_8() { return &___qpForbidden_8; }
	inline void set_qpForbidden_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___qpForbidden_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qpForbidden_8), (void*)value);
	}
};


// UnityEngineInternal.WebRequestUtils
struct WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_StaticFields, ___domainRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___domainRegex_0), (void*)value);
	}
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_14)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/Result
struct Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError
struct UnityWebRequestError_t01C779C192877A58EBDB44371C42F9A5831EB9F6 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/UnityWebRequestError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityWebRequestError_t01C779C192877A58EBDB44371C42F9A5831EB9F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod
struct UnityWebRequestMethod_tF538D9A75B76FFC81710E65697E38C1B12E4F7E5 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityWebRequestMethod_tF538D9A75B76FFC81710E65697E38C1B12E4F7E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
};

// UnityEngine.Networking.DownloadHandlerFile
struct DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerFile
struct DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerFile
struct DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
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

// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___caps_9;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___capnames_10;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___capslist_11;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_12;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * ___runnerref_13;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * ___replref_14;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * ___code_15;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_16;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_0), (void*)value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___factory_1)); }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_1), (void*)value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___internalMatchTimeout_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_9() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___caps_9)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_caps_9() const { return ___caps_9; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_caps_9() { return &___caps_9; }
	inline void set_caps_9(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___caps_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caps_9), (void*)value);
	}

	inline static int32_t get_offset_of_capnames_10() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capnames_10)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_capnames_10() const { return ___capnames_10; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_capnames_10() { return &___capnames_10; }
	inline void set_capnames_10(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___capnames_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capnames_10), (void*)value);
	}

	inline static int32_t get_offset_of_capslist_11() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capslist_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_capslist_11() const { return ___capslist_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_capslist_11() { return &___capslist_11; }
	inline void set_capslist_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___capslist_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capslist_11), (void*)value);
	}

	inline static int32_t get_offset_of_capsize_12() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capsize_12)); }
	inline int32_t get_capsize_12() const { return ___capsize_12; }
	inline int32_t* get_address_of_capsize_12() { return &___capsize_12; }
	inline void set_capsize_12(int32_t value)
	{
		___capsize_12 = value;
	}

	inline static int32_t get_offset_of_runnerref_13() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___runnerref_13)); }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * get_runnerref_13() const { return ___runnerref_13; }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 ** get_address_of_runnerref_13() { return &___runnerref_13; }
	inline void set_runnerref_13(ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * value)
	{
		___runnerref_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerref_13), (void*)value);
	}

	inline static int32_t get_offset_of_replref_14() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___replref_14)); }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * get_replref_14() const { return ___replref_14; }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 ** get_address_of_replref_14() { return &___replref_14; }
	inline void set_replref_14(SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * value)
	{
		___replref_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replref_14), (void*)value);
	}

	inline static int32_t get_offset_of_code_15() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___code_15)); }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * get_code_15() const { return ___code_15; }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 ** get_address_of_code_15() { return &___code_15; }
	inline void set_code_15(RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * value)
	{
		___code_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___code_15), (void*)value);
	}

	inline static int32_t get_offset_of_refsInitialized_16() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___refsInitialized_16)); }
	inline bool get_refsInitialized_16() const { return ___refsInitialized_16; }
	inline bool* get_address_of_refsInitialized_16() { return &___refsInitialized_16; }
	inline void set_refsInitialized_16(bool value)
	{
		___refsInitialized_16 = value;
	}
};

struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___FallbackDefaultMatchTimeout_7;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___DefaultMatchTimeout_8;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * ___livecode_17;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_18;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___FallbackDefaultMatchTimeout_7)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_FallbackDefaultMatchTimeout_7() const { return ___FallbackDefaultMatchTimeout_7; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_FallbackDefaultMatchTimeout_7() { return &___FallbackDefaultMatchTimeout_7; }
	inline void set_FallbackDefaultMatchTimeout_7(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___FallbackDefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_8() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___DefaultMatchTimeout_8)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_DefaultMatchTimeout_8() const { return ___DefaultMatchTimeout_8; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_DefaultMatchTimeout_8() { return &___DefaultMatchTimeout_8; }
	inline void set_DefaultMatchTimeout_8(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___DefaultMatchTimeout_8 = value;
	}

	inline static int32_t get_offset_of_livecode_17() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___livecode_17)); }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * get_livecode_17() const { return ___livecode_17; }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 ** get_address_of_livecode_17() { return &___livecode_17; }
	inline void set_livecode_17(LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * value)
	{
		___livecode_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livecode_17), (void*)value);
	}

	inline static int32_t get_offset_of_cacheSize_18() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___cacheSize_18)); }
	inline int32_t get_cacheSize_18() const { return ___cacheSize_18; }
	inline int32_t* get_address_of_cacheSize_18() { return &___cacheSize_18; }
	inline void set_cacheSize_18(int32_t value)
	{
		___cacheSize_18 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669  : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
};

// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
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


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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

IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_back(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_cleanup(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_back(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_cleanup(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_back(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_cleanup(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com_back(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com_cleanup(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com_back(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com_cleanup(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com_back(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com_cleanup(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_back(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_cleanup(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com_back(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com_cleanup(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD8CBF904F9521047E6C4EFEB652A8A41E4FFE522_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.CertificateHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_mAB0AA5ADCEC7681FF429DA0F0D3E7A650A02C376 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Text.Encoding UnityEngine.Networking.DownloadHandler::GetTextEncoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * DownloadHandler_GetTextEncoder_mEAABE10BCA8FFAADB30C5623A10A9072A21D002D (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::GetContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_GetContentType_m3B0EEFBDC91FF18736B3FC0BD7A6319104056A0D (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mAD7052CB25BA1D60A8F055AA89D09809F61233DB (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Trim(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimChars0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_GetEncoding_mD5352F1522341280E9025D16463E63916549F9E3 (String_t* ___name0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m8E441D5C617BA103B97FE41893F0A4A323701B0F (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::InternalCreateBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer_InternalCreateBuffer_mC53D69B05DEAEA785BD0187902DAD86C34EED256 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::InternalGetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandlerBuffer_InternalGetData_m69989D8688328151EF518F3E705C019D02C045C8 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___dh0, const RuntimeMethod* method);
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE (String_t* ___path0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A (String_t* ___path0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.DownloadHandlerFile::Create(UnityEngine.Networking.DownloadHandlerFile,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerFile_Create_mD4D6F775A20FF369232C54DE33FD0DB2A18C845B (DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F * ___obj0, String_t* ___path1, bool ___append2, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerFile::InternalCreateVFS(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerFile_InternalCreateVFS_mAC8EF001E1CEB768E3BEE950FC476031181A5301 (DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F * __this, String_t* ___path0, bool ___append1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeCertificateHandlerOnDispose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED (const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uri_mE33587B468A024826580F3F208E2B6B94640F9D1 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_DisposeHandlers_mA28A13FCE2CBA777049A6C1A3FABA079B3820771 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalDestroy_m9317079471CFF46A5274FFF1E360CA5237D9270D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * UnityWebRequest_get_uploadHandler_mFB108ADD5C75C440300BF85B87D4A730A158CC38 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Dispose_mC449C0EDAD6666DDE349A6F9796CEC7C86154F41 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * UnityWebRequest_get_certificateHandler_mACA97B9158F17FFBEF489753C6E42302EEDF057D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_m460859ACFE411145B199D8261B5ADDA4DECCA493 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::set_webRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3_inline (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___methodType0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C (int32_t ___err0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___customMethodName0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod UnityEngine.Networking.UnityWebRequest::GetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_GetMethod_m81D9C66D8543CE843703FE0B40C6EFFAD6F23BF1 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::GetCustomMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetCustomMethod_mE1FFAB6A67658A18CCE1B9C031881A00125C0CC0 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___methodType0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___customMethodName0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::GetHTTPStatusString(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetHTTPStatusString_m317BB359DAAE3592F55F8C989FC076FEA76BC7C0 (int64_t ___responseCode0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::GetError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_GetError_m6BF0FA43C1D180750DB0E955D0AE2DEB855C70F3 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::GetUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetUrl_mEFD2DC3DBFDCCCB5EE929CE879E8DF2D0C58E15A (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsAbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_OriginalString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String UnityEngineInternal.WebRequestUtils::MakeUriString(System.Uri,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeUriString_mD6C6C27478BADC8EDF42621924F2ACD6D1B21E7D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___targetUri0, String_t* ___targetUrl1, bool ___prependProtocol2, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::IsExecuting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_IsExecuting_m6666F1528213020025DDAE3CDD50FE0C13C688D4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.UnityWebRequest::GetUploadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_GetUploadProgress_m0D83B9BBA9B563715A3DB411DE06C9513A8450B6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.UnityWebRequest::GetDownloadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_GetDownloadProgress_mC606595011ACB62AF71EBA355A28CB91095DD031 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetChunked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetChunked_m173E726FCC4BF15CCC70BE65C66FAD0DCA58AC57 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___chunked0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.String[] UnityEngine.Networking.UnityWebRequest::GetResponseHeaderKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_m8913AAC22D1B252D7BAE42D32E3D240D43456B27 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mD8CBF904F9521047E6C4EFEB652A8A41E4FFE522_gshared)(__this, ___capacity0, ___comparer1, method);
}
// System.String UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___uh0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___dh0, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetTimeoutMsec(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___timeout0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.Uri,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mB3D228B1FB1F18C28FAC2C367BF6716612DA58EF (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, String_t* ___method1, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___downloadHandler2, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___uploadHandler3, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mAFD89E773DB9E7BB60372533AF252A7C93B0DD38 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, String_t* ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.AsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__ctor_mFC0E13622A23CD19A631B9ABBA506683B71A2E4A (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::InternalSetContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_InternalSetContentType_mD7BDE8CD2F2F06BA9959E478042A040DD015E27F (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, String_t* ___newContentType0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler__ctor_mC1A1A5EDEDD4F9D7A6A8E9854E0CC6943B51158F (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * ___self0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173 (const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::Decode(System.Byte[],System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_Decode_mB359AE9097B819D6E6909685B5BED52DDFA62D15 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___space2, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mCB4274FF375AD786CCED424E80B047E0DEC50938 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Boolean UnityEngine.WWWTranscoder::ByteSubArrayEquals(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteSubArrayEquals_mB3E4FBBAA9EAD2EE53DE8C31C5AAE9B2A8809126 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___index1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___comperand2, const RuntimeMethod* method);
// System.Byte UnityEngine.WWWTranscoder::Hex2Byte(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WWWTranscoder_Hex2Byte_m8FEDC476CA7F4A244169D3F4DF2A75B09BD602DA (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b0, int32_t ___offset1, const RuntimeMethod* method);
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689 (const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String,System.UriKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, int32_t ___uriKind1, const RuntimeMethod* method);
// System.String System.Uri::get_AbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri0, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___relativeUri1, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsFile_mCFA022C6E4641EBD7285A01056B7E201CEFD2C73 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsLoopback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsLoopback_m6988313CE348064A6A068347D878DDC51594B710 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_AbsolutePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_mB845A99D0CEB442AAF90B24A95EE7509C34C6306 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngineInternal.WebRequestUtils::URLDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_URLDecode_m1B0D9D85074E0B8390C890B9E56F389F4EC6C8DF (String_t* ___encoded0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mE87B9746FC40A7ECC0149A24685BD0713459FAF1 (StringBuilder_t * __this, String_t* ___value0, int32_t ___capacity1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.Uri::get_PathAndQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_PathAndQuery_m0FFF28F15DF953C5866C2A0DEEA2034ECE6A0F35 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Fragment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Fragment_m1734B2D3F27F38AA342CB65885DE732160501E72 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::URLDecode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_URLDecode_mFBF699CBF92B0184ED37E461550430B7454BD0FB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___toEncode0, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___pattern0, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_back(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_cleanup(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com_back(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com_cleanup(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.CertificateHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, const RuntimeMethod* method)
{
	typedef void (*CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495_ftn) (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E *);
	static CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.CertificateHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificate_mE76D686A7A10A86799FBF1F107EF3544D4A9D815 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___certificateData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificateNative(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificateNative_m7AA7136975CEB1635B201B08BB9B04059E7D0D16 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___certificateData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___certificateData0;
		bool L_1;
		L_1 = VirtFuncInvoker1< bool, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(4 /* System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[]) */, __this, L_0);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_m460859ACFE411145B199D8261B5ADDA4DECCA493 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
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
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_back(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_cleanup(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com_back(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com_cleanup(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.DownloadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	typedef void (*DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA_ftn) (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *);
	static DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m8E441D5C617BA103B97FE41893F0A4A323701B0F (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Finalize_m433AE11AD2DCBB21800F0ED5497FD3B762098202 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		DownloadHandler_Dispose_mAB0AA5ADCEC7681FF429DA0F0D3E7A650A02C376(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_mAB0AA5ADCEC7681FF429DA0F0D3E7A650A02C376 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
		return;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(5 /* System.Byte[] UnityEngine.Networking.DownloadHandler::GetData() */, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.Networking.DownloadHandler::GetText() */, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_GetData_mBBC1BE90737613B3C322E4C1B3E971729924D62B (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		V_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = V_0;
		return L_0;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::GetText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_GetText_mF8C51EFA7A82C9C198A3207D0FED84EEB8ED373F (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(5 /* System.Byte[] UnityEngine.Networking.DownloadHandler::GetData() */, __this);
		V_0 = L_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		NullCheck(L_2);
		G_B3_0 = ((!(((uint32_t)(((RuntimeArray*)L_2)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_4;
		L_4 = DownloadHandler_GetTextEncoder_mEAABE10BCA8FFAADB30C5623A10A9072A21D002D(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		NullCheck(L_6);
		NullCheck(L_4);
		String_t* L_7;
		L_7 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
		V_2 = L_7;
		goto IL_0034;
	}

IL_002b:
	{
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0034;
	}

IL_0034:
	{
		String_t* L_8 = V_2;
		return L_8;
	}
}
// System.Text.Encoding UnityEngine.Networking.DownloadHandler::GetTextEncoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * DownloadHandler_GetTextEncoder_mEAABE10BCA8FFAADB30C5623A10A9072A21D002D (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CE7A1E1E42333BF53E138868B7E6871FD1FC571);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_9 = NULL;
	ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * V_10 = NULL;
	NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		String_t* L_0;
		L_0 = DownloadHandler_GetContentType_m3B0EEFBDC91FF18736B3FC0BD7A6319104056A0D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00e7;
		}
	}
	{
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA(L_4, _stringLiteral5CE7A1E1E42333BF53E138868B7E6871FD1FC571, 5, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		V_3 = (bool)((((int32_t)L_6) > ((int32_t)(-1)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = String_IndexOf_mAD7052CB25BA1D60A8F055AA89D09809F61233DB(L_8, ((int32_t)61), L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		int32_t L_11 = V_4;
		V_5 = (bool)((((int32_t)L_11) > ((int32_t)(-1)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_13 = V_0;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_15, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_17 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18 = L_17;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)39));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_19 = L_18;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)34));
		NullCheck(L_16);
		String_t* L_20;
		L_20 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_16, L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_20, /*hidden argument*/NULL);
		V_6 = L_21;
		String_t* L_22 = V_6;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_22, ((int32_t)59), /*hidden argument*/NULL);
		V_7 = L_23;
		int32_t L_24 = V_7;
		V_8 = (bool)((((int32_t)L_24) > ((int32_t)(-1)))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_0099;
		}
	}
	{
		String_t* L_26 = V_6;
		int32_t L_27 = V_7;
		NullCheck(L_26);
		String_t* L_28;
		L_28 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_26, 0, L_27, /*hidden argument*/NULL);
		V_6 = L_28;
	}

IL_0099:
	{
	}

IL_009a:
	try
	{ // begin try (depth: 1)
		String_t* L_29 = V_6;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_30;
		L_30 = Encoding_GetEncoding_mD5352F1522341280E9025D16463E63916549F9E3(L_29, /*hidden argument*/NULL);
		V_9 = L_30;
		goto IL_00f0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a6;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c5;
		}
		throw e;
	}

CATCH_00a6:
	{ // begin catch(System.ArgumentException)
		V_10 = ((ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *));
		String_t* L_31 = V_6;
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_32 = V_10;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_32);
		String_t* L_34;
		L_34 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DA696190A9052B3303D45C87CA50BEDCFA7494C)), L_31, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_34, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e4;
	} // end catch (depth: 1)

CATCH_00c5:
	{ // begin catch(System.NotSupportedException)
		V_11 = ((NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)IL2CPP_GET_ACTIVE_EXCEPTION(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *));
		String_t* L_35 = V_6;
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_36 = V_11;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_36);
		String_t* L_38;
		L_38 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DA696190A9052B3303D45C87CA50BEDCFA7494C)), L_35, L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_38, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e4;
	} // end catch (depth: 1)

IL_00e4:
	{
	}

IL_00e5:
	{
	}

IL_00e6:
	{
	}

IL_00e7:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_39;
		L_39 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		V_9 = L_39;
		goto IL_00f0;
	}

IL_00f0:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_40 = V_9;
		return L_40;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::GetContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_GetContentType_m3B0EEFBDC91FF18736B3FC0BD7A6319104056A0D (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	typedef String_t* (*DownloadHandler_GetContentType_m3B0EEFBDC91FF18736B3FC0BD7A6319104056A0D_ftn) (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *);
	static DownloadHandler_GetContentType_m3B0EEFBDC91FF18736B3FC0BD7A6319104056A0D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_GetContentType_m3B0EEFBDC91FF18736B3FC0BD7A6319104056A0D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::GetContentType()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.DownloadHandler::ReceiveContentLengthHeader(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_ReceiveContentLengthHeader_mD3B607EDDF946896B9877C91DE1EDD6C39B16CF3 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, uint64_t ___contentLength0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___contentLength0;
		VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Networking.DownloadHandler::ReceiveContentLength(System.Int32) */, __this, ((int32_t)((int32_t)L_0)));
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::ReceiveContentLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_ReceiveContentLength_m7788739919D3BB09DBF3EEE1AE211C2701672316 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, int32_t ___contentLength0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___dh0, const RuntimeMethod* method)
{
	typedef ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC_ftn) (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *);
	static DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)");
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* icallRetVal = _il2cpp_icall_func(___dh0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_pinvoke(const DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D& unmarshaled, DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_pinvoke_back(const DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke& marshaled, DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_pinvoke_cleanup(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_com(const DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D& unmarshaled, DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_com_back(const DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com& marshaled, DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_com_cleanup(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com& marshaled)
{
}
// System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (*DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA_ftn) (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *);
	static DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::InternalCreateBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer_InternalCreateBuffer_mC53D69B05DEAEA785BD0187902DAD86C34EED256 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0;
		L_0 = DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA(__this, /*hidden argument*/NULL);
		((DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *)__this)->set_m_Ptr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method)
{
	{
		DownloadHandler__ctor_m8E441D5C617BA103B97FE41893F0A4A323701B0F(__this, /*hidden argument*/NULL);
		DownloadHandlerBuffer_InternalCreateBuffer_mC53D69B05DEAEA785BD0187902DAD86C34EED256(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandlerBuffer_GetData_mAFE5BF2E12AE24B162769E9B736280A802E1A3AB (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = DownloadHandlerBuffer_InternalGetData_m69989D8688328151EF518F3E705C019D02C045C8(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::InternalGetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandlerBuffer_InternalGetData_m69989D8688328151EF518F3E705C019D02C045C8 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		return L_1;
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
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerFile
IL2CPP_EXTERN_C void DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F_marshal_pinvoke(const DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F& unmarshaled, DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F_marshal_pinvoke_back(const DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F_marshaled_pinvoke& marshaled, DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerFile
IL2CPP_EXTERN_C void DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F_marshal_pinvoke_cleanup(DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerFile
IL2CPP_EXTERN_C void DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F_marshal_com(const DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F& unmarshaled, DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F_marshal_com_back(const DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F_marshaled_com& marshaled, DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerFile
IL2CPP_EXTERN_C void DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F_marshal_com_cleanup(DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F_marshaled_com& marshaled)
{
}
// System.IntPtr UnityEngine.Networking.DownloadHandlerFile::Create(UnityEngine.Networking.DownloadHandlerFile,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerFile_Create_mD4D6F775A20FF369232C54DE33FD0DB2A18C845B (DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F * ___obj0, String_t* ___path1, bool ___append2, const RuntimeMethod* method)
{
	typedef intptr_t (*DownloadHandlerFile_Create_mD4D6F775A20FF369232C54DE33FD0DB2A18C845B_ftn) (DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F *, String_t*, bool);
	static DownloadHandlerFile_Create_mD4D6F775A20FF369232C54DE33FD0DB2A18C845B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerFile_Create_mD4D6F775A20FF369232C54DE33FD0DB2A18C845B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerFile::Create(UnityEngine.Networking.DownloadHandlerFile,System.String,System.Boolean)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0, ___path1, ___append2);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.DownloadHandlerFile::InternalCreateVFS(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerFile_InternalCreateVFS_mAC8EF001E1CEB768E3BEE950FC476031181A5301 (DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F * __this, String_t* ___path0, bool ___append1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		String_t* L_0 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_5 = V_0;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_6;
		L_6 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_5, /*hidden argument*/NULL);
	}

IL_001c:
	{
		String_t* L_7 = ___path0;
		bool L_8 = ___append1;
		intptr_t L_9;
		L_9 = DownloadHandlerFile_Create_mD4D6F775A20FF369232C54DE33FD0DB2A18C845B(__this, L_7, L_8, /*hidden argument*/NULL);
		((DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *)__this)->set_m_Ptr_0((intptr_t)L_9);
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandlerFile::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerFile__ctor_m71D490A9553AB9386607DA4BFC41432D039AAC6B (DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F * __this, String_t* ___path0, bool ___append1, const RuntimeMethod* method)
{
	{
		DownloadHandler__ctor_m8E441D5C617BA103B97FE41893F0A4A323701B0F(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___path0;
		bool L_1 = ___append1;
		DownloadHandlerFile_InternalCreateVFS_mAC8EF001E1CEB768E3BEE950FC476031181A5301(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerFile::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandlerFile_GetData_mFCC27E9D9A113B454EE78A3834E31FF5EB5BE019 (DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral275BCC65ABB6A0370BA5E466908369480EADCC46)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DownloadHandlerFile_GetData_mFCC27E9D9A113B454EE78A3834E31FF5EB5BE019_RuntimeMethod_var)));
	}
}
// System.String UnityEngine.Networking.DownloadHandlerFile::GetText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandlerFile_GetText_mCB2FB28FD5EF370814344C50D8EEF0B350B2AE9C (DownloadHandlerFile_t1E4BE748B2FD3D72F273E7B3BA8C902B9E958B3F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181774C9FD7066AB56B07158FF3537A8A549567D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DownloadHandlerFile_GetText_mCB2FB28FD5EF370814344C50D8EEF0B350B2AE9C_RuntimeMethod_var)));
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






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_back(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_cleanup(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled)
{
}






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com_back(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com_cleanup(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled)
{
}
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C (int32_t ___err0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C_ftn) (int32_t);
	static UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)");
	String_t* icallRetVal = _il2cpp_icall_func(___err0);
	return icallRetVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::GetHTTPStatusString(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetHTTPStatusString_m317BB359DAAE3592F55F8C989FC076FEA76BC7C0 (int64_t ___responseCode0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetHTTPStatusString_m317BB359DAAE3592F55F8C989FC076FEA76BC7C0_ftn) (int64_t);
	static UnityWebRequest_GetHTTPStatusString_m317BB359DAAE3592F55F8C989FC076FEA76BC7C0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetHTTPStatusString_m317BB359DAAE3592F55F8C989FC076FEA76BC7C0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetHTTPStatusString(System.Int64)");
	String_t* icallRetVal = _il2cpp_icall_func(___responseCode0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeCertificateHandlerOnDispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED (const RuntimeMethod* method)
{
	typedef intptr_t (*UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED_ftn) ();
	static UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Create()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef void (*UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalDestroy_m9317079471CFF46A5274FFF1E360CA5237D9270D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28(__this, /*hidden argument*/NULL);
		UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0030:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	{
		UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B_inline(__this, (bool)1, /*hidden argument*/NULL);
		UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397_inline(__this, (bool)1, /*hidden argument*/NULL);
		UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_inline(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mAFD89E773DB9E7BB60372533AF252A7C93B0DD38 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, String_t* ___method1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0;
		L_0 = UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED(/*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C(__this, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = ___uri0;
		UnityWebRequest_set_uri_mE33587B468A024826580F3F208E2B6B94640F9D1(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___method1;
		UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.Uri,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mB3D228B1FB1F18C28FAC2C367BF6716612DA58EF (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, String_t* ___method1, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___downloadHandler2, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___uploadHandler3, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0;
		L_0 = UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED(/*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C(__this, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = ___uri0;
		UnityWebRequest_set_uri_mE33587B468A024826580F3F208E2B6B94640F9D1(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___method1;
		UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7(__this, L_2, /*hidden argument*/NULL);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_3 = ___downloadHandler2;
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(__this, L_3, /*hidden argument*/NULL);
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_4 = ___uploadHandler3;
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Finalize_m0E1202F2844C73C643D8B8DA23794FC9948A6D92 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		UnityWebRequest_DisposeHandlers_mA28A13FCE2CBA777049A6C1A3FABA079B3820771(__this, /*hidden argument*/NULL);
		UnityWebRequest_InternalDestroy_m9317079471CFF46A5274FFF1E360CA5237D9270D(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x1A, FINALLY_0012);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0012;
	}

FINALLY_0012:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(18)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(18)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m8032472F6BC2EC4FEE017DE7E4C440078BC4E1C8 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityWebRequest_DisposeHandlers_mA28A13FCE2CBA777049A6C1A3FABA079B3820771(__this, /*hidden argument*/NULL);
		UnityWebRequest_InternalDestroy_m9317079471CFF46A5274FFF1E360CA5237D9270D(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_DisposeHandlers_mA28A13FCE2CBA777049A6C1A3FABA079B3820771 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * V_7 = NULL;
	bool V_8 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_2;
		L_2 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_5 = V_1;
		NullCheck(L_5);
		DownloadHandler_Dispose_mAB0AA5ADCEC7681FF429DA0F0D3E7A650A02C376(L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
	}

IL_0025:
	{
		bool L_6;
		L_6 = UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B_inline(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_8;
		L_8 = UnityWebRequest_get_uploadHandler_mFB108ADD5C75C440300BF85B87D4A730A158CC38(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_9 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *)L_9) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_11 = V_4;
		NullCheck(L_11);
		UploadHandler_Dispose_mC449C0EDAD6666DDE349A6F9796CEC7C86154F41(L_11, /*hidden argument*/NULL);
	}

IL_004d:
	{
	}

IL_004e:
	{
		bool L_12;
		L_12 = UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0_inline(__this, /*hidden argument*/NULL);
		V_6 = L_12;
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_14;
		L_14 = UnityWebRequest_get_certificateHandler_mACA97B9158F17FFBEF489753C6E42302EEDF057D(__this, /*hidden argument*/NULL);
		V_7 = L_14;
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_15 = V_7;
		V_8 = (bool)((!(((RuntimeObject*)(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_17 = V_7;
		NullCheck(L_17);
		CertificateHandler_Dispose_m460859ACFE411145B199D8261B5ADDA4DECCA493(L_17, /*hidden argument*/NULL);
	}

IL_0078:
	{
	}

IL_0079:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * (*UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::BeginWebRequest()");
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * V_0 = NULL;
	bool V_1 = false;
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * V_2 = NULL;
	{
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_0;
		L_0 = UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_3 = V_0;
		NullCheck(L_3);
		UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3_inline(L_3, __this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_4 = V_0;
		V_2 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_5 = V_2;
		return L_5;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef void (*UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Abort()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___methodType0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, int32_t);
	static UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___methodType0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___methodType0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral716D4DCF03C354CF6AC6FB6BDBEC2E94AAE7139E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___methodType0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___customMethodName0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*);
	static UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___customMethodName0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___customMethodName0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral716D4DCF03C354CF6AC6FB6BDBEC2E94AAE7139E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA_RuntimeMethod_var)));
	}

IL_0019:
	{
		String_t* L_3 = ___customMethodName0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod UnityEngine.Networking.UnityWebRequest::GetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_GetMethod_m81D9C66D8543CE843703FE0B40C6EFFAD6F23BF1 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_GetMethod_m81D9C66D8543CE843703FE0B40C6EFFAD6F23BF1_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_GetMethod_m81D9C66D8543CE843703FE0B40C6EFFAD6F23BF1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetMethod_m81D9C66D8543CE843703FE0B40C6EFFAD6F23BF1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetMethod()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::GetCustomMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetCustomMethod_mE1FFAB6A67658A18CCE1B9C031881A00125C0CC0 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetCustomMethod_mE1FFAB6A67658A18CCE1B9C031881A00125C0CC0_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_GetCustomMethod_mE1FFAB6A67658A18CCE1B9C031881A00125C0CC0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetCustomMethod_mE1FFAB6A67658A18CCE1B9C031881A00125C0CC0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetCustomMethod()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::get_method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_method_mDEB685B259E296FAE2484B504108AA384A3E0A4F (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAC516092AE075D549759FBFE57497622D29F15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		int32_t L_0;
		L_0 = UnityWebRequest_GetMethod_m81D9C66D8543CE843703FE0B40C6EFFAD6F23BF1(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0024;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_0044;
	}

IL_0024:
	{
		V_3 = _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
		goto IL_004d;
	}

IL_002c:
	{
		V_3 = _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
		goto IL_004d;
	}

IL_0034:
	{
		V_3 = _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
		goto IL_004d;
	}

IL_003c:
	{
		V_3 = _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15;
		goto IL_004d;
	}

IL_0044:
	{
		String_t* L_4;
		L_4 = UnityWebRequest_GetCustomMethod_mE1FFAB6A67658A18CCE1B9C031881A00125C0CC0(__this, /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_004d;
	}

IL_004d:
	{
		String_t* L_5 = V_3;
		return L_5;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAC516092AE075D549759FBFE57497622D29F15);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7D2659B30CD7065E2E3DAAE5ABDCFE4A0B66782E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7_RuntimeMethod_var)));
	}

IL_0017:
	{
		String_t* L_4 = ___value0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		String_t* L_6 = V_2;
		V_1 = L_6;
		String_t* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0081;
		}
	}
	{
		String_t* L_8 = V_1;
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_10 = V_1;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_12 = V_1;
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0077;
		}
	}
	{
		goto IL_0081;
	}

IL_0059:
	{
		UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB(__this, 0, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0063:
	{
		UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB(__this, 1, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_006d:
	{
		UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB(__this, 2, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0077:
	{
		UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB(__this, 3, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0081:
	{
		String_t* L_16 = ___value0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A(L_16, /*hidden argument*/NULL);
		UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA(__this, L_17, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0090:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::GetError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_GetError_m6BF0FA43C1D180750DB0E955D0AE2DEB855C70F3 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_GetError_m6BF0FA43C1D180750DB0E955D0AE2DEB855C70F3_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_GetError_m6BF0FA43C1D180750DB0E955D0AE2DEB855C70F3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetError_m6BF0FA43C1D180750DB0E955D0AE2DEB855C70F3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetError()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral997F93B8223285BB571C83E7ACD6C6615F5EF04C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) > ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_003d;
	}

IL_0016:
	{
		V_2 = (String_t*)NULL;
		goto IL_004b;
	}

IL_001a:
	{
		int64_t L_4;
		L_4 = UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753(__this, /*hidden argument*/NULL);
		int64_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_5);
		int64_t L_7;
		L_7 = UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753(__this, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = UnityWebRequest_GetHTTPStatusString_m317BB359DAAE3592F55F8C989FC076FEA76BC7C0(L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral997F93B8223285BB571C83E7ACD6C6615F5EF04C, L_6, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		goto IL_004b;
	}

IL_003d:
	{
		int32_t L_10;
		L_10 = UnityWebRequest_GetError_m6BF0FA43C1D180750DB0E955D0AE2DEB855C70F3(__this, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		goto IL_004b;
	}

IL_004b:
	{
		String_t* L_12 = V_2;
		return L_12;
	}
}
// System.Uri UnityEngine.Networking.UnityWebRequest::get_uri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * UnityWebRequest_get_uri_m53B2929A9D7C637BF75BA7DCBB4810AA8447D60C (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_0 = NULL;
	{
		String_t* L_0;
		L_0 = UnityWebRequest_GetUrl_mEFD2DC3DBFDCCCB5EE929CE879E8DF2D0C58E15A(__this, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_uri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uri_mE33587B468A024826580F3F208E2B6B94640F9D1 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___value0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral830D3B1988207AD90E6500EFD5191F802329C898)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_uri_mE33587B468A024826580F3F208E2B6B94640F9D1_RuntimeMethod_var)));
	}

IL_0019:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = ___value0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_5 = ___value0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = WebRequestUtils_MakeUriString_mD6C6C27478BADC8EDF42621924F2ACD6D1B21E7D(L_4, L_6, (bool)0, /*hidden argument*/NULL);
		UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25(__this, L_7, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_8 = ___value0;
		__this->set_m_Uri_4(L_8);
		return;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::GetUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetUrl_mEFD2DC3DBFDCCCB5EE929CE879E8DF2D0C58E15A (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetUrl_mEFD2DC3DBFDCCCB5EE929CE879E8DF2D0C58E15A_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_GetUrl_mEFD2DC3DBFDCCCB5EE929CE879E8DF2D0C58E15A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetUrl_mEFD2DC3DBFDCCCB5EE929CE879E8DF2D0C58E15A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetUrl()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*);
	static UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___url0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AD0071445300544C945A4235FF5EE2237930AF6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25_RuntimeMethod_var)));
	}

IL_0019:
	{
		String_t* L_3 = ___url0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef int64_t (*UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_responseCode()");
	int64_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Networking.UnityWebRequest::GetUploadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_GetUploadProgress_m0D83B9BBA9B563715A3DB411DE06C9513A8450B6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef float (*UnityWebRequest_GetUploadProgress_m0D83B9BBA9B563715A3DB411DE06C9513A8450B6_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_GetUploadProgress_m0D83B9BBA9B563715A3DB411DE06C9513A8450B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetUploadProgress_m0D83B9BBA9B563715A3DB411DE06C9513A8450B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetUploadProgress()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::IsExecuting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_IsExecuting_m6666F1528213020025DDAE3CDD50FE0C13C688D4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_IsExecuting_m6666F1528213020025DDAE3CDD50FE0C13C688D4_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_IsExecuting_m6666F1528213020025DDAE3CDD50FE0C13C688D4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_IsExecuting_m6666F1528213020025DDAE3CDD50FE0C13C688D4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::IsExecuting()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Networking.UnityWebRequest::get_uploadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_get_uploadProgress_m3B4D421CFB5D452DB687D438872DD72FA4A445AA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = UnityWebRequest_IsExecuting_m6666F1528213020025DDAE3CDD50FE0C13C688D4(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1;
		L_1 = UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD(__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = (-1.0f);
		goto IL_002a;
	}

IL_0021:
	{
		float L_3;
		L_3 = UnityWebRequest_GetUploadProgress_m0D83B9BBA9B563715A3DB411DE06C9513A8450B6(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_002a;
	}

IL_002a:
	{
		float L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isModifiable()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(__this, /*hidden argument*/NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_result()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Networking.UnityWebRequest::GetDownloadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_GetDownloadProgress_mC606595011ACB62AF71EBA355A28CB91095DD031 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef float (*UnityWebRequest_GetDownloadProgress_mC606595011ACB62AF71EBA355A28CB91095DD031_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_GetDownloadProgress_mC606595011ACB62AF71EBA355A28CB91095DD031_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetDownloadProgress_mC606595011ACB62AF71EBA355A28CB91095DD031_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetDownloadProgress()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Networking.UnityWebRequest::get_downloadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_get_downloadProgress_m364504584506899F3E60F0D67017C290526D5636 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = UnityWebRequest_IsExecuting_m6666F1528213020025DDAE3CDD50FE0C13C688D4(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1;
		L_1 = UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD(__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = (-1.0f);
		goto IL_002a;
	}

IL_0021:
	{
		float L_3;
		L_3 = UnityWebRequest_GetDownloadProgress_mC606595011ACB62AF71EBA355A28CB91095DD031(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_002a;
	}

IL_002a:
	{
		float L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetChunked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetChunked_m173E726FCC4BF15CCC70BE65C66FAD0DCA58AC57 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___chunked0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetChunked_m173E726FCC4BF15CCC70BE65C66FAD0DCA58AC57_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, bool);
	static UnityWebRequest_SetChunked_m173E726FCC4BF15CCC70BE65C66FAD0DCA58AC57_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetChunked_m173E726FCC4BF15CCC70BE65C66FAD0DCA58AC57_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetChunked(System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___chunked0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_chunkedTransfer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_chunkedTransfer_mA743E172FDB5D5892DD6D3AA6836B66CD6233B5B (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral60B2FD8A0C53C7E76D3CD315D91BD05F5EFAF33A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_chunkedTransfer_mA743E172FDB5D5892DD6D3AA6836B66CD6233B5B_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_3 = ___value0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetChunked_m173E726FCC4BF15CCC70BE65C66FAD0DCA58AC57(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_chunkedTransfer_mA743E172FDB5D5892DD6D3AA6836B66CD6233B5B_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*, String_t*);
	static UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___name0, ___value1);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral350138951CA76BFC65A77EA2D223A8D476B10BC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = ___value1;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9305B29342F3BC0993F85105BB6141FF30569ED2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var)));
	}

IL_0029:
	{
		bool L_7;
		L_7 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCE49DFF590DB2AB94984A5C75EF18BDDD83FE69)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var)));
	}

IL_0041:
	{
		String_t* L_10 = ___name0;
		String_t* L_11 = ___value1;
		int32_t L_12;
		L_12 = UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE(__this, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = V_0;
		V_4 = (bool)((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_15 = V_0;
		String_t* L_16;
		L_16 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_15, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_17 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var)));
	}

IL_0060:
	{
		return;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*);
	static UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___name0);
	return icallRetVal;
}
// System.String[] UnityEngine.Networking.UnityWebRequest::GetResponseHeaderKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetResponseHeaderKeys()");
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Networking.UnityWebRequest::GetResponseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * UnityWebRequest_GetResponseHeaders_mD42F316C2E0B8A8AD0F9E6F3A3D4103CAB92FB23 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8913AAC22D1B252D7BAE42D32E3D240D43456B27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_1 = NULL;
	bool V_2 = false;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_0;
		NullCheck(L_2);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_2)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		V_3 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL;
		goto IL_0061;
	}

IL_001c:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_5;
		L_5 = StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline(/*hidden argument*/NULL);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8913AAC22D1B252D7BAE42D32E3D240D43456B27(L_6, ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), L_5, /*hidden argument*/Dictionary_2__ctor_m8913AAC22D1B252D7BAE42D32E3D240D43456B27_RuntimeMethod_var);
		V_1 = L_6;
		V_4 = 0;
		goto IL_0050;
	}

IL_002f:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_0;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		String_t* L_11;
		L_11 = UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF(__this, L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_12 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = V_0;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		String_t* L_17 = V_5;
		NullCheck(L_12);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_12, L_16, L_17, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_19 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = V_0;
		NullCheck(L_20);
		V_6 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))? 1 : 0);
		bool L_21 = V_6;
		if (L_21)
		{
			goto IL_002f;
		}
	}
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_22 = V_1;
		V_3 = L_22;
		goto IL_0061;
	}

IL_0061:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_23 = V_3;
		return L_23;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___uh0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *);
	static UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___uh0);
	return icallRetVal;
}
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * UnityWebRequest_get_uploadHandler_mFB108ADD5C75C440300BF85B87D4A730A158CC38 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * V_0 = NULL;
	{
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_0 = __this->get_m_UploadHandler_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral93CE1F3EEBFA5A5C2C336C37D31A01039231CA39)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA_RuntimeMethod_var)));
	}

IL_0019:
	{
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_3 = ___value0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA_RuntimeMethod_var)));
	}

IL_0035:
	{
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_10 = ___value0;
		__this->set_m_UploadHandler_2(L_10);
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___dh0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *);
	static UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___dh0);
	return icallRetVal;
}
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * V_0 = NULL;
	{
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_0 = __this->get_m_DownloadHandler_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC3A46521634BE1B34BB2F00154A05110A698F36)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2_RuntimeMethod_var)));
	}

IL_0019:
	{
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_3 = ___value0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2_RuntimeMethod_var)));
	}

IL_0035:
	{
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_10 = ___value0;
		__this->set_m_DownloadHandler_1(L_10);
		return;
	}
}
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * UnityWebRequest_get_certificateHandler_mACA97B9158F17FFBEF489753C6E42302EEDF057D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * V_0 = NULL;
	{
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_0 = __this->get_m_CertificateHandler_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetTimeoutMsec(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___timeout0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, int32_t);
	static UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetTimeoutMsec(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___timeout0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFD59FD74BD22E570703A8BC6B77F6081661FEEB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_3, 0, /*hidden argument*/NULL);
		___value0 = L_4;
		int32_t L_5 = ___value0;
		int32_t L_6;
		L_6 = UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)1000))), /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		V_2 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_9 = V_0;
		String_t* L_10;
		L_10 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_9, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_11 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90_RuntimeMethod_var)));
	}

IL_0044:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m97AEA36B0D50510FDFD13B12AB5F470586C30157 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_0 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_1 = NULL;
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___uri0;
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_1 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_1, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mB3D228B1FB1F18C28FAC2C367BF6716612DA58EF(L_2, L_0, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, L_1, (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_3 = V_0;
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Head(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Head_m543AEE756ECCAE92556E593B71F441941D41C94A (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAC516092AE075D549759FBFE57497622D29F15);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_0 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_1 = NULL;
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___uri0;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mAFD89E773DB9E7BB60372533AF252A7C93B0DD38(L_1, L_0, _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15, /*hidden argument*/NULL);
		V_0 = L_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = V_0;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_3 = V_1;
		return L_3;
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


// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_pinvoke(const UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396& unmarshaled, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_pinvoke_back(const UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke& marshaled, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396& unmarshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_pinvoke_cleanup(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_com(const UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396& unmarshaled, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com& marshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_com_back(const UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com& marshaled, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396& unmarshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_com_cleanup(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::set_webRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3 (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___value0, const RuntimeMethod* method)
{
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___value0;
		__this->set_U3CwebRequestU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation__ctor_m9A74EA34FBE3BA2B4E4D8FAB3B44301ECEDBCB62 (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, const RuntimeMethod* method)
{
	{
		AsyncOperation__ctor_mFC0E13622A23CD19A631B9ABBA506683B71A2E4A(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_back(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_cleanup(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com_back(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com_cleanup(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UploadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method)
{
	typedef void (*UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8_ftn) (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *);
	static UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UploadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler__ctor_mC1A1A5EDEDD4F9D7A6A8E9854E0CC6943B51158F (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Finalize_mE43816DF1E8AFC6EA32518CE8C30A5EF99F06934 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		UploadHandler_Dispose_mC449C0EDAD6666DDE349A6F9796CEC7C86154F41(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Dispose_mC449C0EDAD6666DDE349A6F9796CEC7C86154F41 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_set_contentType_mAECD24AB554541300BD126E01C65329F0A29A328 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.Networking.UploadHandler::SetContentType(System.String) */, __this, L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::SetContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_SetContentType_m95EBCDCE4E8BF9AB78953B37C89B7F4BB6F75DA7 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, String_t* ___newContentType0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___newContentType0;
		UploadHandler_InternalSetContentType_mD7BDE8CD2F2F06BA9959E478042A040DD015E27F(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::InternalSetContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_InternalSetContentType_mD7BDE8CD2F2F06BA9959E478042A040DD015E27F (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, String_t* ___newContentType0, const RuntimeMethod* method)
{
	typedef void (*UploadHandler_InternalSetContentType_mD7BDE8CD2F2F06BA9959E478042A040DD015E27F_ftn) (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *, String_t*);
	static UploadHandler_InternalSetContentType_mD7BDE8CD2F2F06BA9959E478042A040DD015E27F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandler_InternalSetContentType_mD7BDE8CD2F2F06BA9959E478042A040DD015E27F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandler::InternalSetContentType(System.String)");
	_il2cpp_icall_func(__this, ___newContentType0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_pinvoke(const UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669& unmarshaled, UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_pinvoke_back(const UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke& marshaled, UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_pinvoke_cleanup(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_com(const UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669& unmarshaled, UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_com_back(const UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com& marshaled, UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_com_cleanup(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com& marshaled)
{
}
// System.IntPtr UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * ___self0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method)
{
	typedef intptr_t (*UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01_ftn) (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*);
	static UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___self0, ___data1);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UploadHandler__ctor_mC1A1A5EDEDD4F9D7A6A8E9854E0CC6943B51158F(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E56E678035E4A801BA617E16F57410976493BFB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9_RuntimeMethod_var)));
	}

IL_0022:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___data0;
		intptr_t L_5;
		L_5 = UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01(__this, L_4, /*hidden argument*/NULL);
		((UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *)__this)->set_m_Ptr_0((intptr_t)L_5);
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
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689 (const RuntimeMethod* method)
{
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_0 = NULL;
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1 = V_0;
		return L_1;
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
// System.Byte UnityEngine.WWWTranscoder::Hex2Byte(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WWWTranscoder_Hex2Byte_m8FEDC476CA7F4A244169D3F4DF2A75B09BD602DA (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b0, int32_t ___offset1, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	uint8_t V_7 = 0x0;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	{
		V_0 = (uint8_t)0;
		int32_t L_0 = ___offset1;
		V_1 = L_0;
		goto IL_0082;
	}

IL_0007:
	{
		uint8_t L_1 = V_0;
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)16)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___b0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_7 = V_2;
		G_B4_0 = ((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
	}

IL_0022:
	{
		V_3 = (bool)G_B4_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)48)));
		goto IL_0065;
	}

IL_002d:
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_11 = V_2;
		G_B9_0 = ((((int32_t)((((int32_t)L_11) > ((int32_t)((int32_t)75)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003d;
	}

IL_003c:
	{
		G_B9_0 = 0;
	}

IL_003d:
	{
		V_4 = (bool)G_B9_0;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)55)));
		goto IL_0065;
	}

IL_004a:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)97))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_15 = V_2;
		G_B14_0 = ((((int32_t)((((int32_t)L_15) > ((int32_t)((int32_t)102)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005a;
	}

IL_0059:
	{
		G_B14_0 = 0;
	}

IL_005a:
	{
		V_5 = (bool)G_B14_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)((int32_t)87)));
	}

IL_0065:
	{
		int32_t L_18 = V_2;
		V_6 = (bool)((((int32_t)L_18) > ((int32_t)((int32_t)15)))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		V_7 = (uint8_t)((int32_t)63);
		goto IL_0096;
	}

IL_0077:
	{
		uint8_t L_20 = V_0;
		int32_t L_21 = V_2;
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)((int32_t)((uint8_t)L_21))))));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0082:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = ___offset1;
		V_8 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)2))))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_0007;
		}
	}
	{
		uint8_t L_26 = V_0;
		V_7 = L_26;
		goto IL_0096;
	}

IL_0096:
	{
		uint8_t L_27 = V_7;
		return L_27;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLDecode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_URLDecode_mFBF699CBF92B0184ED37E461550430B7454BD0FB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___toEncode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___toEncode0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_urlEscapeChar_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_urlSpace_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = WWWTranscoder_Decode_mB359AE9097B819D6E6909685B5BED52DDFA62D15(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteSubArrayEquals(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteSubArrayEquals_mB3E4FBBAA9EAD2EE53DE8C31C5AAE9B2A8809126 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___index1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___comperand2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		NullCheck(L_0);
		int32_t L_1 = ___index1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___comperand2;
		NullCheck(L_2);
		V_0 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)L_1))) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0040;
	}

IL_0013:
	{
		V_2 = 0;
		goto IL_0030;
	}

IL_0017:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		int32_t L_5 = ___index1;
		int32_t L_6 = V_2;
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6));
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___comperand2;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_002c;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0040;
	}

IL_002c:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_15 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___comperand2;
		NullCheck(L_16);
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0017;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0040;
	}

IL_0040:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Decode(System.Byte[],System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_Decode_mB359AE9097B819D6E6909685B5BED52DDFA62D15 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___space2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B7_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___input0;
		NullCheck(L_0);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mCB4274FF375AD786CCED424E80B047E0DEC50938(L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0071;
		}

IL_000f:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___input0;
			int32_t L_3 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___space2;
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = WWWTranscoder_ByteSubArrayEquals_mB3E4FBBAA9EAD2EE53DE8C31C5AAE9B2A8809126(L_2, L_3, L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_0031;
			}
		}

IL_001c:
		{
			int32_t L_7 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___space2;
			NullCheck(L_8);
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), (int32_t)1))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_9 = V_0;
			NullCheck(L_9);
			VirtActionInvoker1< uint8_t >::Invoke(29 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_9, (uint8_t)((int32_t)32));
			goto IL_006c;
		}

IL_0031:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___input0;
			int32_t L_11 = V_1;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			uint8_t L_14 = ___escapeChar1;
			if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
			{
				goto IL_0041;
			}
		}

IL_0037:
		{
			int32_t L_15 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___input0;
			NullCheck(L_16);
			G_B7_0 = ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)2))) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))? 1 : 0);
			goto IL_0042;
		}

IL_0041:
		{
			G_B7_0 = 0;
		}

IL_0042:
		{
			V_3 = (bool)G_B7_0;
			bool L_17 = V_3;
			if (!L_17)
			{
				goto IL_0060;
			}
		}

IL_0046:
		{
			int32_t L_18 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_19 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = ___input0;
			int32_t L_21 = V_1;
			int32_t L_22 = L_21;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
			uint8_t L_23;
			L_23 = WWWTranscoder_Hex2Byte_m8FEDC476CA7F4A244169D3F4DF2A75B09BD602DA(L_20, L_22, /*hidden argument*/NULL);
			NullCheck(L_19);
			VirtActionInvoker1< uint8_t >::Invoke(29 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_19, L_23);
			goto IL_006c;
		}

IL_0060:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_24 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = ___input0;
			int32_t L_26 = V_1;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			NullCheck(L_24);
			VirtActionInvoker1< uint8_t >::Invoke(29 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_24, L_28);
		}

IL_006c:
		{
			int32_t L_29 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		}

IL_0071:
		{
			int32_t L_30 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = ___input0;
			NullCheck(L_31);
			V_4 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))? 1 : 0);
			bool L_32 = V_4;
			if (L_32)
			{
				goto IL_000f;
			}
		}

IL_007d:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_33 = V_0;
			NullCheck(L_33);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34;
			L_34 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_33);
			V_5 = L_34;
			IL2CPP_LEAVE(0x92, FINALLY_0087);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_35 = V_0;
			if (!L_35)
			{
				goto IL_0091;
			}
		}

IL_008a:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_36 = V_0;
			NullCheck(L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_36);
		}

IL_0091:
		{
			IL2CPP_END_FINALLY(135)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x92, IL_0092)
	}

IL_0092:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = V_5;
		return L_37;
	}
}
// System.Void UnityEngine.WWWTranscoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder__cctor_mA3A2027DC5C23C8D8DDC8DDF795EE263B8B24C2F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_ucHexChars_0(L_1);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2;
		L_2 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_lcHexChars_1(L_3);
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_urlEscapeChar_2((uint8_t)((int32_t)37));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)43));
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_urlSpace_3(L_5);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_6;
		L_6 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_dataSpace_4(L_7);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_8;
		L_8 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, _stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_urlForbidden_5(L_9);
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_qpEscapeChar_6((uint8_t)((int32_t)61));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)95));
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_qpSpace_7(L_11);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_12;
		L_12 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_qpForbidden_8(L_13);
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
// System.String UnityEngineInternal.WebRequestUtils::RedirectTo(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_RedirectTo_m0E8715D4658E15C9775C6D06E1891267CB3C852F (String_t* ___baseUri0, String_t* ___redirectUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_0 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_1 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		String_t* L_0 = ___redirectUri1;
		NullCheck(L_0);
		Il2CppChar L_1;
		L_1 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_0, 0, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)47)))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_3 = ___redirectUri1;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF(L_4, L_3, 2, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0022;
	}

IL_001a:
	{
		String_t* L_5 = ___redirectUri1;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_6 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF(L_6, L_5, 0, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0022:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		goto IL_0052;
	}

IL_0038:
	{
		String_t* L_12 = ___baseUri0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_13 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF(L_13, L_12, 1, /*hidden argument*/NULL);
		V_1 = L_13;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_14 = V_1;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_15 = V_0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_16 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18(L_16, L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_17 = V_2;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA(L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		goto IL_0052;
	}

IL_0052:
	{
		String_t* L_19 = V_5;
		return L_19;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::MakeUriString(System.Uri,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeUriString_mD6C6C27478BADC8EDF42621924F2ACD6D1B21E7D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___targetUri0, String_t* ___targetUrl1, bool ___prependProtocol2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral225454A90D745E7A7A5DE5C12169566FBC05370D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	StringBuilder_t * V_8 = NULL;
	bool V_9 = false;
	String_t* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B23_0 = 0;
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___targetUri0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Uri_get_IsFile_mCFA022C6E4641EBD7285A01056B7E201CEFD2C73(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0083;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_3 = ___targetUri0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Uri_get_IsLoopback_m6988313CE348064A6A068347D878DDC51594B710(L_3, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_6 = ___targetUri0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		goto IL_01c1;
	}

IL_0026:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_8 = ___targetUri0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Uri_get_AbsolutePath_mB845A99D0CEB442AAF90B24A95EE7509C34C6306(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		String_t* L_10 = V_2;
		NullCheck(L_10);
		bool L_11;
		L_11 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_10, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, /*hidden argument*/NULL);
		V_5 = L_11;
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = WebRequestUtils_URLDecode_m1B0D9D85074E0B8390C890B9E56F389F4EC6C8DF(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
	}

IL_0045:
	{
		String_t* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_17 = V_2;
		NullCheck(L_17);
		Il2CppChar L_18;
		L_18 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_17, 0, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)((((int32_t)L_18) == ((int32_t)((int32_t)47)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B8_0 = 0;
	}

IL_005f:
	{
		V_6 = (bool)G_B8_0;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_20 = V_2;
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_0071:
	{
		String_t* L_22 = V_2;
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		goto IL_01c1;
	}

IL_0083:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_24 = ___targetUri0;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		bool L_26 = ___prependProtocol2;
		if (L_26)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_27 = ___targetUrl1;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_27, /*hidden argument*/NULL);
		String_t* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)2)))))
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_31 = ___targetUrl1;
		String_t* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		Il2CppChar L_34;
		L_34 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_31, ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1)), /*hidden argument*/NULL);
		G_B15_0 = ((((int32_t)((((int32_t)L_34) == ((int32_t)((int32_t)47)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B15_0 = 0;
	}

IL_00b5:
	{
		V_7 = (bool)G_B15_0;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_019c;
		}
	}
	{
		String_t* L_36 = V_0;
		String_t* L_37 = ___targetUrl1;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_37, /*hidden argument*/NULL);
		StringBuilder_t * L_39 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mE87B9746FC40A7ECC0149A24685BD0713459FAF1(L_39, L_36, L_38, /*hidden argument*/NULL);
		V_8 = L_39;
		StringBuilder_t * L_40 = V_8;
		NullCheck(L_40);
		StringBuilder_t * L_41;
		L_41 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_40, ((int32_t)58), /*hidden argument*/NULL);
		String_t* L_42 = V_0;
		bool L_43;
		L_43 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_42, _stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A, /*hidden argument*/NULL);
		V_9 = L_43;
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_0175;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_45 = ___targetUri0;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = Uri_get_AbsolutePath_mB845A99D0CEB442AAF90B24A95EE7509C34C6306(L_45, /*hidden argument*/NULL);
		V_10 = L_46;
		String_t* L_47 = V_10;
		NullCheck(L_47);
		bool L_48;
		L_48 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_47, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, /*hidden argument*/NULL);
		V_11 = L_48;
		bool L_49 = V_11;
		if (!L_49)
		{
			goto IL_010f;
		}
	}
	{
		String_t* L_50 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		String_t* L_51;
		L_51 = WebRequestUtils_URLDecode_m1B0D9D85074E0B8390C890B9E56F389F4EC6C8DF(L_50, /*hidden argument*/NULL);
		V_10 = L_51;
	}

IL_010f:
	{
		String_t* L_52 = V_10;
		NullCheck(L_52);
		bool L_53;
		L_53 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_52, _stringLiteral225454A90D745E7A7A5DE5C12169566FBC05370D, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_54 = V_10;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_54, /*hidden argument*/NULL);
		if ((((int32_t)L_55) <= ((int32_t)6)))
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_56 = V_10;
		NullCheck(L_56);
		Il2CppChar L_57;
		L_57 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_56, 6, /*hidden argument*/NULL);
		G_B23_0 = ((((int32_t)((((int32_t)L_57) == ((int32_t)((int32_t)47)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0139;
	}

IL_0138:
	{
		G_B23_0 = 0;
	}

IL_0139:
	{
		V_12 = (bool)G_B23_0;
		bool L_58 = V_12;
		if (!L_58)
		{
			goto IL_0160;
		}
	}
	{
		StringBuilder_t * L_59 = V_8;
		NullCheck(L_59);
		StringBuilder_t * L_60;
		L_60 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_59, _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, /*hidden argument*/NULL);
		StringBuilder_t * L_61 = V_8;
		String_t* L_62 = V_10;
		NullCheck(L_62);
		String_t* L_63;
		L_63 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_62, 5, /*hidden argument*/NULL);
		NullCheck(L_61);
		StringBuilder_t * L_64;
		L_64 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_61, L_63, /*hidden argument*/NULL);
		goto IL_016a;
	}

IL_0160:
	{
		StringBuilder_t * L_65 = V_8;
		String_t* L_66 = V_10;
		NullCheck(L_65);
		StringBuilder_t * L_67;
		L_67 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_65, L_66, /*hidden argument*/NULL);
	}

IL_016a:
	{
		StringBuilder_t * L_68 = V_8;
		NullCheck(L_68);
		String_t* L_69;
		L_69 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_68);
		V_4 = L_69;
		goto IL_01c1;
	}

IL_0175:
	{
		StringBuilder_t * L_70 = V_8;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_71 = ___targetUri0;
		NullCheck(L_71);
		String_t* L_72;
		L_72 = Uri_get_PathAndQuery_m0FFF28F15DF953C5866C2A0DEEA2034ECE6A0F35(L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		StringBuilder_t * L_73;
		L_73 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_70, L_72, /*hidden argument*/NULL);
		StringBuilder_t * L_74 = V_8;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_75 = ___targetUri0;
		NullCheck(L_75);
		String_t* L_76;
		L_76 = Uri_get_Fragment_m1734B2D3F27F38AA342CB65885DE732160501E72(L_75, /*hidden argument*/NULL);
		NullCheck(L_74);
		StringBuilder_t * L_77;
		L_77 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_74, L_76, /*hidden argument*/NULL);
		StringBuilder_t * L_78 = V_8;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_78);
		V_4 = L_79;
		goto IL_01c1;
	}

IL_019c:
	{
		String_t* L_80 = ___targetUrl1;
		NullCheck(L_80);
		bool L_81;
		L_81 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_80, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, /*hidden argument*/NULL);
		V_13 = L_81;
		bool L_82 = V_13;
		if (!L_82)
		{
			goto IL_01b7;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_83 = ___targetUri0;
		NullCheck(L_83);
		String_t* L_84;
		L_84 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_83, /*hidden argument*/NULL);
		V_4 = L_84;
		goto IL_01c1;
	}

IL_01b7:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_85 = ___targetUri0;
		NullCheck(L_85);
		String_t* L_86;
		L_86 = Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA(L_85, /*hidden argument*/NULL);
		V_4 = L_86;
		goto IL_01c1;
	}

IL_01c1:
	{
		String_t* L_87 = V_4;
		return L_87;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::URLDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_URLDecode_m1B0D9D85074E0B8390C890B9E56F389F4EC6C8DF (String_t* ___encoded0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_1 = ___encoded0;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = WWWTranscoder_URLDecode_mFBF699CBF92B0184ED37E461550430B7454BD0FB(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_5;
		L_5 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(31 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_5, L_6);
		V_2 = L_7;
		goto IL_0022;
	}

IL_0022:
	{
		String_t* L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngineInternal.WebRequestUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestUtils__cctor_mD79D1BBF154F1968AB3E32B710D8CE7583105600 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E(L_0, _stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F, /*hidden argument*/NULL);
		((WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var))->set_domainRegex_0(L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3_inline (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___value0, const RuntimeMethod* method)
{
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___value0;
		__this->set_U3CwebRequestU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = ((StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var))->get__ordinalIgnoreCase_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
