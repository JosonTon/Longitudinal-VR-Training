#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState>
struct Action_2_t8182C0EB3D5D7D4CA9560C86B40DD8BE98EC60DA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>
struct Dictionary_2_t00FA1A66FF8D52795C3169E70D4DDA06384B0AF5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Data.TTSClipData>
struct Queue_1_tAE0CC4242EC498B1C13BB35894E1B6C38A6D3A79;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityEvent_1_t31532545A41373305C8F6E28BD3D85FC9D4FF7CF;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Meta.WitAi.TTS.Data.TTSClipData[]
struct TTSClipDataU5BU5D_tE290C2E9DB96A57E86FE55170A45AB4FCBF8B8D1;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Security.Cryptography.SHA256
struct SHA256_t7F98FBD5AA9E2F4AC1A5C13FF7122AFF1A920452;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Meta.WitAi.TTS.Samples.TTSCacheToggle
struct TTSCacheToggle_tF5C354A8DB5237B41A43323496C55E5A3FC04161;
// Meta.WitAi.TTS.Data.TTSClipData
struct TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2;
// Meta.WitAi.TTS.Integrations.TTSDiskCache
struct TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472;
// Meta.WitAi.TTS.Data.TTSDiskCacheSettings
struct TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6;
// Meta.WitAi.TTS.Samples.TTSErrorText
struct TTSErrorText_t5AA9862123002E0918DD13AC7E0B9A9033D90BE7;
// Meta.WitAi.TTS.TTSService
struct TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E;
// Meta.WitAi.TTS.Events.TTSServiceEvents
struct TTSServiceEvents_t6EEF9AD76CB77E4E92991946E1AD54A7C95AE4F6;
// Meta.WitAi.TTS.Utilities.TTSSpeaker
struct TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF;
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent
struct TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333;
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent
struct TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E;
// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent
struct TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B;
// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents
struct TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D;
// Meta.WitAi.TTS.Samples.TTSSpeakerInput
struct TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87;
// Meta.WitAi.TTS.Utilities.TTSSpeakerTextEvent
struct TTSSpeakerTextEvent_tD6341690189CFB72C87DB54FEA4080880F323D3B;
// Meta.WitAi.TTS.Samples.TTSStatusLabel
struct TTSStatusLabel_t57618A1CC100528A44441999123F0E926458D457;
// Meta.WitAi.TTS.Events.TTSStreamEvents
struct TTSStreamEvents_tB2DB55FE94A0C2C544ED7ED8DAE9426284F41312;
// Meta.WitAi.TTS.Data.TTSVoiceSettings
struct TTSVoiceSettings_t98B9537EB1F41581A8C72FE8AA60EF594C8DFBB5;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipLoadState_t9C443BDB293BCD9EF961D0F380B19B0E8A19CB06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSDiskCacheLocation_tDDAFCDEE31F0F848DF7029E31CA2129F2445B365_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral29DD95531FCE94DCE288DF8BD4349F991A445F02;
IL2CPP_EXTERN_C String_t* _stringLiteral623378871EFD071EE67F1698CC4581C5B10D22A0;
IL2CPP_EXTERN_C String_t* _stringLiteral77235CB916AB2431DB5346DEF4FF7A991FCFF985;
IL2CPP_EXTERN_C String_t* _stringLiteral88DB3D9039D7A91BC9644BF5B94CBB1C4378DA18;
IL2CPP_EXTERN_C String_t* _stringLiteralAA5E057E9C43D8BE035AEBD4EDE90FC16636B277;
IL2CPP_EXTERN_C String_t* _stringLiteralFB707AD1232B0ECA35F52C45D2C3321F121FBD53;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisTTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472_m680C04C8EBDFC330BDDB6BDD02E65797FED25D96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSCacheToggle_ToggleCache_m6A9F6089E1453FD51B2941124032B9FA3ED86D17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSSpeakerInput_SpeakClick_m1CC30E1CCF5A2F976CD10E296E1963005C984F8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSSpeakerInput_SpeakQueuedClick_m9454262C63ABDF8B91DFD0679136FE4AD34FD37A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSSpeakerInput_StopClick_mDEFC0C8979EF05328E44AD5C45273155597350E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TTSClipDataU5BU5D_tE290C2E9DB96A57E86FE55170A45AB4FCBF8B8D1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t03D7584FC1903096444C69675EEE897E0261B041 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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


// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents
struct TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D  : public RuntimeObject
{
public:
	// Meta.WitAi.TTS.Utilities.TTSSpeakerTextEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnTextPlaybackStart
	TTSSpeakerTextEvent_tD6341690189CFB72C87DB54FEA4080880F323D3B * ___OnTextPlaybackStart_0;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerTextEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnTextPlaybackFinished
	TTSSpeakerTextEvent_tD6341690189CFB72C87DB54FEA4080880F323D3B * ___OnTextPlaybackFinished_1;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerTextEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnTextPlaybackCancelled
	TTSSpeakerTextEvent_tD6341690189CFB72C87DB54FEA4080880F323D3B * ___OnTextPlaybackCancelled_2;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnAudioClipPlaybackReady
	TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E * ___OnAudioClipPlaybackReady_3;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnAudioClipPlaybackStart
	TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E * ___OnAudioClipPlaybackStart_4;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnAudioClipPlaybackFinished
	TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E * ___OnAudioClipPlaybackFinished_5;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnAudioClipPlaybackCancelled
	TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E * ___OnAudioClipPlaybackCancelled_6;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataQueued
	TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * ___OnClipDataQueued_7;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataLoadBegin
	TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * ___OnClipDataLoadBegin_8;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataLoadFailed
	TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * ___OnClipDataLoadFailed_9;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataLoadSuccess
	TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * ___OnClipDataLoadSuccess_10;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataLoadAbort
	TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * ___OnClipDataLoadAbort_11;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataPlaybackReady
	TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * ___OnClipDataPlaybackReady_12;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataPlaybackStart
	TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * ___OnClipDataPlaybackStart_13;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataPlaybackFinished
	TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * ___OnClipDataPlaybackFinished_14;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataPlaybackCancelled
	TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * ___OnClipDataPlaybackCancelled_15;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnStartSpeaking
	TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * ___OnStartSpeaking_16;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnFinishedSpeaking
	TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * ___OnFinishedSpeaking_17;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnCancelledSpeaking
	TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * ___OnCancelledSpeaking_18;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadBegin
	TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * ___OnClipLoadBegin_19;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadFailed
	TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * ___OnClipLoadFailed_20;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadSuccess
	TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * ___OnClipLoadSuccess_21;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadAbort
	TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * ___OnClipLoadAbort_22;

public:
	inline static int32_t get_offset_of_OnTextPlaybackStart_0() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnTextPlaybackStart_0)); }
	inline TTSSpeakerTextEvent_tD6341690189CFB72C87DB54FEA4080880F323D3B * get_OnTextPlaybackStart_0() const { return ___OnTextPlaybackStart_0; }
	inline TTSSpeakerTextEvent_tD6341690189CFB72C87DB54FEA4080880F323D3B ** get_address_of_OnTextPlaybackStart_0() { return &___OnTextPlaybackStart_0; }
	inline void set_OnTextPlaybackStart_0(TTSSpeakerTextEvent_tD6341690189CFB72C87DB54FEA4080880F323D3B * value)
	{
		___OnTextPlaybackStart_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTextPlaybackStart_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnTextPlaybackFinished_1() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnTextPlaybackFinished_1)); }
	inline TTSSpeakerTextEvent_tD6341690189CFB72C87DB54FEA4080880F323D3B * get_OnTextPlaybackFinished_1() const { return ___OnTextPlaybackFinished_1; }
	inline TTSSpeakerTextEvent_tD6341690189CFB72C87DB54FEA4080880F323D3B ** get_address_of_OnTextPlaybackFinished_1() { return &___OnTextPlaybackFinished_1; }
	inline void set_OnTextPlaybackFinished_1(TTSSpeakerTextEvent_tD6341690189CFB72C87DB54FEA4080880F323D3B * value)
	{
		___OnTextPlaybackFinished_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTextPlaybackFinished_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnTextPlaybackCancelled_2() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnTextPlaybackCancelled_2)); }
	inline TTSSpeakerTextEvent_tD6341690189CFB72C87DB54FEA4080880F323D3B * get_OnTextPlaybackCancelled_2() const { return ___OnTextPlaybackCancelled_2; }
	inline TTSSpeakerTextEvent_tD6341690189CFB72C87DB54FEA4080880F323D3B ** get_address_of_OnTextPlaybackCancelled_2() { return &___OnTextPlaybackCancelled_2; }
	inline void set_OnTextPlaybackCancelled_2(TTSSpeakerTextEvent_tD6341690189CFB72C87DB54FEA4080880F323D3B * value)
	{
		___OnTextPlaybackCancelled_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTextPlaybackCancelled_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnAudioClipPlaybackReady_3() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnAudioClipPlaybackReady_3)); }
	inline TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E * get_OnAudioClipPlaybackReady_3() const { return ___OnAudioClipPlaybackReady_3; }
	inline TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E ** get_address_of_OnAudioClipPlaybackReady_3() { return &___OnAudioClipPlaybackReady_3; }
	inline void set_OnAudioClipPlaybackReady_3(TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E * value)
	{
		___OnAudioClipPlaybackReady_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioClipPlaybackReady_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAudioClipPlaybackStart_4() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnAudioClipPlaybackStart_4)); }
	inline TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E * get_OnAudioClipPlaybackStart_4() const { return ___OnAudioClipPlaybackStart_4; }
	inline TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E ** get_address_of_OnAudioClipPlaybackStart_4() { return &___OnAudioClipPlaybackStart_4; }
	inline void set_OnAudioClipPlaybackStart_4(TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E * value)
	{
		___OnAudioClipPlaybackStart_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioClipPlaybackStart_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAudioClipPlaybackFinished_5() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnAudioClipPlaybackFinished_5)); }
	inline TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E * get_OnAudioClipPlaybackFinished_5() const { return ___OnAudioClipPlaybackFinished_5; }
	inline TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E ** get_address_of_OnAudioClipPlaybackFinished_5() { return &___OnAudioClipPlaybackFinished_5; }
	inline void set_OnAudioClipPlaybackFinished_5(TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E * value)
	{
		___OnAudioClipPlaybackFinished_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioClipPlaybackFinished_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAudioClipPlaybackCancelled_6() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnAudioClipPlaybackCancelled_6)); }
	inline TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E * get_OnAudioClipPlaybackCancelled_6() const { return ___OnAudioClipPlaybackCancelled_6; }
	inline TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E ** get_address_of_OnAudioClipPlaybackCancelled_6() { return &___OnAudioClipPlaybackCancelled_6; }
	inline void set_OnAudioClipPlaybackCancelled_6(TTSSpeakerClipEvent_tD49252F77968811ABEFB50EA4065984ABF28954E * value)
	{
		___OnAudioClipPlaybackCancelled_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioClipPlaybackCancelled_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnClipDataQueued_7() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnClipDataQueued_7)); }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * get_OnClipDataQueued_7() const { return ___OnClipDataQueued_7; }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 ** get_address_of_OnClipDataQueued_7() { return &___OnClipDataQueued_7; }
	inline void set_OnClipDataQueued_7(TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * value)
	{
		___OnClipDataQueued_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipDataQueued_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnClipDataLoadBegin_8() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnClipDataLoadBegin_8)); }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * get_OnClipDataLoadBegin_8() const { return ___OnClipDataLoadBegin_8; }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 ** get_address_of_OnClipDataLoadBegin_8() { return &___OnClipDataLoadBegin_8; }
	inline void set_OnClipDataLoadBegin_8(TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * value)
	{
		___OnClipDataLoadBegin_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipDataLoadBegin_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnClipDataLoadFailed_9() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnClipDataLoadFailed_9)); }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * get_OnClipDataLoadFailed_9() const { return ___OnClipDataLoadFailed_9; }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 ** get_address_of_OnClipDataLoadFailed_9() { return &___OnClipDataLoadFailed_9; }
	inline void set_OnClipDataLoadFailed_9(TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * value)
	{
		___OnClipDataLoadFailed_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipDataLoadFailed_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnClipDataLoadSuccess_10() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnClipDataLoadSuccess_10)); }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * get_OnClipDataLoadSuccess_10() const { return ___OnClipDataLoadSuccess_10; }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 ** get_address_of_OnClipDataLoadSuccess_10() { return &___OnClipDataLoadSuccess_10; }
	inline void set_OnClipDataLoadSuccess_10(TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * value)
	{
		___OnClipDataLoadSuccess_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipDataLoadSuccess_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnClipDataLoadAbort_11() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnClipDataLoadAbort_11)); }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * get_OnClipDataLoadAbort_11() const { return ___OnClipDataLoadAbort_11; }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 ** get_address_of_OnClipDataLoadAbort_11() { return &___OnClipDataLoadAbort_11; }
	inline void set_OnClipDataLoadAbort_11(TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * value)
	{
		___OnClipDataLoadAbort_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipDataLoadAbort_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnClipDataPlaybackReady_12() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnClipDataPlaybackReady_12)); }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * get_OnClipDataPlaybackReady_12() const { return ___OnClipDataPlaybackReady_12; }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 ** get_address_of_OnClipDataPlaybackReady_12() { return &___OnClipDataPlaybackReady_12; }
	inline void set_OnClipDataPlaybackReady_12(TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * value)
	{
		___OnClipDataPlaybackReady_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipDataPlaybackReady_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnClipDataPlaybackStart_13() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnClipDataPlaybackStart_13)); }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * get_OnClipDataPlaybackStart_13() const { return ___OnClipDataPlaybackStart_13; }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 ** get_address_of_OnClipDataPlaybackStart_13() { return &___OnClipDataPlaybackStart_13; }
	inline void set_OnClipDataPlaybackStart_13(TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * value)
	{
		___OnClipDataPlaybackStart_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipDataPlaybackStart_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnClipDataPlaybackFinished_14() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnClipDataPlaybackFinished_14)); }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * get_OnClipDataPlaybackFinished_14() const { return ___OnClipDataPlaybackFinished_14; }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 ** get_address_of_OnClipDataPlaybackFinished_14() { return &___OnClipDataPlaybackFinished_14; }
	inline void set_OnClipDataPlaybackFinished_14(TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * value)
	{
		___OnClipDataPlaybackFinished_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipDataPlaybackFinished_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnClipDataPlaybackCancelled_15() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnClipDataPlaybackCancelled_15)); }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * get_OnClipDataPlaybackCancelled_15() const { return ___OnClipDataPlaybackCancelled_15; }
	inline TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 ** get_address_of_OnClipDataPlaybackCancelled_15() { return &___OnClipDataPlaybackCancelled_15; }
	inline void set_OnClipDataPlaybackCancelled_15(TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * value)
	{
		___OnClipDataPlaybackCancelled_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipDataPlaybackCancelled_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartSpeaking_16() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnStartSpeaking_16)); }
	inline TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * get_OnStartSpeaking_16() const { return ___OnStartSpeaking_16; }
	inline TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B ** get_address_of_OnStartSpeaking_16() { return &___OnStartSpeaking_16; }
	inline void set_OnStartSpeaking_16(TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * value)
	{
		___OnStartSpeaking_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartSpeaking_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnFinishedSpeaking_17() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnFinishedSpeaking_17)); }
	inline TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * get_OnFinishedSpeaking_17() const { return ___OnFinishedSpeaking_17; }
	inline TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B ** get_address_of_OnFinishedSpeaking_17() { return &___OnFinishedSpeaking_17; }
	inline void set_OnFinishedSpeaking_17(TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * value)
	{
		___OnFinishedSpeaking_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFinishedSpeaking_17), (void*)value);
	}

	inline static int32_t get_offset_of_OnCancelledSpeaking_18() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnCancelledSpeaking_18)); }
	inline TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * get_OnCancelledSpeaking_18() const { return ___OnCancelledSpeaking_18; }
	inline TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B ** get_address_of_OnCancelledSpeaking_18() { return &___OnCancelledSpeaking_18; }
	inline void set_OnCancelledSpeaking_18(TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * value)
	{
		___OnCancelledSpeaking_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCancelledSpeaking_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnClipLoadBegin_19() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnClipLoadBegin_19)); }
	inline TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * get_OnClipLoadBegin_19() const { return ___OnClipLoadBegin_19; }
	inline TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B ** get_address_of_OnClipLoadBegin_19() { return &___OnClipLoadBegin_19; }
	inline void set_OnClipLoadBegin_19(TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * value)
	{
		___OnClipLoadBegin_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipLoadBegin_19), (void*)value);
	}

	inline static int32_t get_offset_of_OnClipLoadFailed_20() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnClipLoadFailed_20)); }
	inline TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * get_OnClipLoadFailed_20() const { return ___OnClipLoadFailed_20; }
	inline TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B ** get_address_of_OnClipLoadFailed_20() { return &___OnClipLoadFailed_20; }
	inline void set_OnClipLoadFailed_20(TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * value)
	{
		___OnClipLoadFailed_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipLoadFailed_20), (void*)value);
	}

	inline static int32_t get_offset_of_OnClipLoadSuccess_21() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnClipLoadSuccess_21)); }
	inline TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * get_OnClipLoadSuccess_21() const { return ___OnClipLoadSuccess_21; }
	inline TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B ** get_address_of_OnClipLoadSuccess_21() { return &___OnClipLoadSuccess_21; }
	inline void set_OnClipLoadSuccess_21(TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * value)
	{
		___OnClipLoadSuccess_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipLoadSuccess_21), (void*)value);
	}

	inline static int32_t get_offset_of_OnClipLoadAbort_22() { return static_cast<int32_t>(offsetof(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D, ___OnClipLoadAbort_22)); }
	inline TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * get_OnClipLoadAbort_22() const { return ___OnClipLoadAbort_22; }
	inline TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B ** get_address_of_OnClipLoadAbort_22() { return &___OnClipLoadAbort_22; }
	inline void set_OnClipLoadAbort_22(TTSSpeakerEvent_tE2B2D171E5763165517031D6FC55602B7554225B * value)
	{
		___OnClipLoadAbort_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipLoadAbort_22), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityEvent_1_t31532545A41373305C8F6E28BD3D85FC9D4FF7CF  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t31532545A41373305C8F6E28BD3D85FC9D4FF7CF, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.AudioType
struct AudioType_t11F5C6E305A5801D3D966A871C0AE858EECA585C 
{
public:
	// System.Int32 UnityEngine.AudioType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioType_t11F5C6E305A5801D3D966A871C0AE858EECA585C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
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

// Meta.WitAi.TTS.Data.TTSClipLoadState
struct TTSClipLoadState_t9C443BDB293BCD9EF961D0F380B19B0E8A19CB06 
{
public:
	// System.Int32 Meta.WitAi.TTS.Data.TTSClipLoadState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TTSClipLoadState_t9C443BDB293BCD9EF961D0F380B19B0E8A19CB06, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Meta.WitAi.TTS.Data.TTSDiskCacheLocation
struct TTSDiskCacheLocation_tDDAFCDEE31F0F848DF7029E31CA2129F2445B365 
{
public:
	// System.Int32 Meta.WitAi.TTS.Data.TTSDiskCacheLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TTSDiskCacheLocation_tDDAFCDEE31F0F848DF7029E31CA2129F2445B365, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent
struct TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333  : public UnityEvent_1_t31532545A41373305C8F6E28BD3D85FC9D4FF7CF
{
public:

public:
};


// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// Meta.WitAi.TTS.Data.TTSClipData
struct TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2  : public RuntimeObject
{
public:
	// System.String Meta.WitAi.TTS.Data.TTSClipData::textToSpeak
	String_t* ___textToSpeak_0;
	// System.String Meta.WitAi.TTS.Data.TTSClipData::clipID
	String_t* ___clipID_1;
	// UnityEngine.AudioType Meta.WitAi.TTS.Data.TTSClipData::audioType
	int32_t ___audioType_2;
	// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.Data.TTSClipData::voiceSettings
	TTSVoiceSettings_t98B9537EB1F41581A8C72FE8AA60EF594C8DFBB5 * ___voiceSettings_3;
	// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Data.TTSClipData::diskCacheSettings
	TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6 * ___diskCacheSettings_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.TTS.Data.TTSClipData::queryParameters
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___queryParameters_5;
	// UnityEngine.AudioClip Meta.WitAi.TTS.Data.TTSClipData::clip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip_6;
	// Meta.WitAi.TTS.Data.TTSClipLoadState Meta.WitAi.TTS.Data.TTSClipData::loadState
	int32_t ___loadState_7;
	// System.Single Meta.WitAi.TTS.Data.TTSClipData::loadProgress
	float ___loadProgress_8;
	// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState> Meta.WitAi.TTS.Data.TTSClipData::onStateChange
	Action_2_t8182C0EB3D5D7D4CA9560C86B40DD8BE98EC60DA * ___onStateChange_9;
	// System.Action`1<System.String> Meta.WitAi.TTS.Data.TTSClipData::onPlaybackReady
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onPlaybackReady_10;
	// System.Action`1<System.String> Meta.WitAi.TTS.Data.TTSClipData::onDownloadComplete
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onDownloadComplete_11;

public:
	inline static int32_t get_offset_of_textToSpeak_0() { return static_cast<int32_t>(offsetof(TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2, ___textToSpeak_0)); }
	inline String_t* get_textToSpeak_0() const { return ___textToSpeak_0; }
	inline String_t** get_address_of_textToSpeak_0() { return &___textToSpeak_0; }
	inline void set_textToSpeak_0(String_t* value)
	{
		___textToSpeak_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textToSpeak_0), (void*)value);
	}

	inline static int32_t get_offset_of_clipID_1() { return static_cast<int32_t>(offsetof(TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2, ___clipID_1)); }
	inline String_t* get_clipID_1() const { return ___clipID_1; }
	inline String_t** get_address_of_clipID_1() { return &___clipID_1; }
	inline void set_clipID_1(String_t* value)
	{
		___clipID_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipID_1), (void*)value);
	}

	inline static int32_t get_offset_of_audioType_2() { return static_cast<int32_t>(offsetof(TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2, ___audioType_2)); }
	inline int32_t get_audioType_2() const { return ___audioType_2; }
	inline int32_t* get_address_of_audioType_2() { return &___audioType_2; }
	inline void set_audioType_2(int32_t value)
	{
		___audioType_2 = value;
	}

	inline static int32_t get_offset_of_voiceSettings_3() { return static_cast<int32_t>(offsetof(TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2, ___voiceSettings_3)); }
	inline TTSVoiceSettings_t98B9537EB1F41581A8C72FE8AA60EF594C8DFBB5 * get_voiceSettings_3() const { return ___voiceSettings_3; }
	inline TTSVoiceSettings_t98B9537EB1F41581A8C72FE8AA60EF594C8DFBB5 ** get_address_of_voiceSettings_3() { return &___voiceSettings_3; }
	inline void set_voiceSettings_3(TTSVoiceSettings_t98B9537EB1F41581A8C72FE8AA60EF594C8DFBB5 * value)
	{
		___voiceSettings_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceSettings_3), (void*)value);
	}

	inline static int32_t get_offset_of_diskCacheSettings_4() { return static_cast<int32_t>(offsetof(TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2, ___diskCacheSettings_4)); }
	inline TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6 * get_diskCacheSettings_4() const { return ___diskCacheSettings_4; }
	inline TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6 ** get_address_of_diskCacheSettings_4() { return &___diskCacheSettings_4; }
	inline void set_diskCacheSettings_4(TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6 * value)
	{
		___diskCacheSettings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diskCacheSettings_4), (void*)value);
	}

	inline static int32_t get_offset_of_queryParameters_5() { return static_cast<int32_t>(offsetof(TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2, ___queryParameters_5)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_queryParameters_5() const { return ___queryParameters_5; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_queryParameters_5() { return &___queryParameters_5; }
	inline void set_queryParameters_5(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___queryParameters_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queryParameters_5), (void*)value);
	}

	inline static int32_t get_offset_of_clip_6() { return static_cast<int32_t>(offsetof(TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2, ___clip_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_clip_6() const { return ___clip_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_clip_6() { return &___clip_6; }
	inline void set_clip_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___clip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clip_6), (void*)value);
	}

	inline static int32_t get_offset_of_loadState_7() { return static_cast<int32_t>(offsetof(TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2, ___loadState_7)); }
	inline int32_t get_loadState_7() const { return ___loadState_7; }
	inline int32_t* get_address_of_loadState_7() { return &___loadState_7; }
	inline void set_loadState_7(int32_t value)
	{
		___loadState_7 = value;
	}

	inline static int32_t get_offset_of_loadProgress_8() { return static_cast<int32_t>(offsetof(TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2, ___loadProgress_8)); }
	inline float get_loadProgress_8() const { return ___loadProgress_8; }
	inline float* get_address_of_loadProgress_8() { return &___loadProgress_8; }
	inline void set_loadProgress_8(float value)
	{
		___loadProgress_8 = value;
	}

	inline static int32_t get_offset_of_onStateChange_9() { return static_cast<int32_t>(offsetof(TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2, ___onStateChange_9)); }
	inline Action_2_t8182C0EB3D5D7D4CA9560C86B40DD8BE98EC60DA * get_onStateChange_9() const { return ___onStateChange_9; }
	inline Action_2_t8182C0EB3D5D7D4CA9560C86B40DD8BE98EC60DA ** get_address_of_onStateChange_9() { return &___onStateChange_9; }
	inline void set_onStateChange_9(Action_2_t8182C0EB3D5D7D4CA9560C86B40DD8BE98EC60DA * value)
	{
		___onStateChange_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStateChange_9), (void*)value);
	}

	inline static int32_t get_offset_of_onPlaybackReady_10() { return static_cast<int32_t>(offsetof(TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2, ___onPlaybackReady_10)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onPlaybackReady_10() const { return ___onPlaybackReady_10; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onPlaybackReady_10() { return &___onPlaybackReady_10; }
	inline void set_onPlaybackReady_10(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onPlaybackReady_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlaybackReady_10), (void*)value);
	}

	inline static int32_t get_offset_of_onDownloadComplete_11() { return static_cast<int32_t>(offsetof(TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2, ___onDownloadComplete_11)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onDownloadComplete_11() const { return ___onDownloadComplete_11; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onDownloadComplete_11() { return &___onDownloadComplete_11; }
	inline void set_onDownloadComplete_11(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onDownloadComplete_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDownloadComplete_11), (void*)value);
	}
};


// Meta.WitAi.TTS.Data.TTSDiskCacheSettings
struct TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6  : public RuntimeObject
{
public:
	// Meta.WitAi.TTS.Data.TTSDiskCacheLocation Meta.WitAi.TTS.Data.TTSDiskCacheSettings::DiskCacheLocation
	int32_t ___DiskCacheLocation_0;

public:
	inline static int32_t get_offset_of_DiskCacheLocation_0() { return static_cast<int32_t>(offsetof(TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6, ___DiskCacheLocation_0)); }
	inline int32_t get_DiskCacheLocation_0() const { return ___DiskCacheLocation_0; }
	inline int32_t* get_address_of_DiskCacheLocation_0() { return &___DiskCacheLocation_0; }
	inline void set_DiskCacheLocation_0(int32_t value)
	{
		___DiskCacheLocation_0 = value;
	}
};


// UnityEngine.Events.UnityAction`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B  : public MulticastDelegate_t
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


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Meta.WitAi.TTS.Samples.TTSCacheToggle
struct TTSCacheToggle_tF5C354A8DB5237B41A43323496C55E5A3FC04161  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Meta.WitAi.TTS.Integrations.TTSDiskCache Meta.WitAi.TTS.Samples.TTSCacheToggle::_diskCache
	TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472 * ____diskCache_4;
	// UnityEngine.UI.Text Meta.WitAi.TTS.Samples.TTSCacheToggle::_cacheLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____cacheLabel_5;
	// UnityEngine.UI.Button Meta.WitAi.TTS.Samples.TTSCacheToggle::_button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ____button_6;
	// Meta.WitAi.TTS.Data.TTSDiskCacheLocation Meta.WitAi.TTS.Samples.TTSCacheToggle::_cacheLocation
	int32_t ____cacheLocation_7;

public:
	inline static int32_t get_offset_of__diskCache_4() { return static_cast<int32_t>(offsetof(TTSCacheToggle_tF5C354A8DB5237B41A43323496C55E5A3FC04161, ____diskCache_4)); }
	inline TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472 * get__diskCache_4() const { return ____diskCache_4; }
	inline TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472 ** get_address_of__diskCache_4() { return &____diskCache_4; }
	inline void set__diskCache_4(TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472 * value)
	{
		____diskCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____diskCache_4), (void*)value);
	}

	inline static int32_t get_offset_of__cacheLabel_5() { return static_cast<int32_t>(offsetof(TTSCacheToggle_tF5C354A8DB5237B41A43323496C55E5A3FC04161, ____cacheLabel_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__cacheLabel_5() const { return ____cacheLabel_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__cacheLabel_5() { return &____cacheLabel_5; }
	inline void set__cacheLabel_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____cacheLabel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cacheLabel_5), (void*)value);
	}

	inline static int32_t get_offset_of__button_6() { return static_cast<int32_t>(offsetof(TTSCacheToggle_tF5C354A8DB5237B41A43323496C55E5A3FC04161, ____button_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get__button_6() const { return ____button_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of__button_6() { return &____button_6; }
	inline void set__button_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		____button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____button_6), (void*)value);
	}

	inline static int32_t get_offset_of__cacheLocation_7() { return static_cast<int32_t>(offsetof(TTSCacheToggle_tF5C354A8DB5237B41A43323496C55E5A3FC04161, ____cacheLocation_7)); }
	inline int32_t get__cacheLocation_7() const { return ____cacheLocation_7; }
	inline int32_t* get_address_of__cacheLocation_7() { return &____cacheLocation_7; }
	inline void set__cacheLocation_7(int32_t value)
	{
		____cacheLocation_7 = value;
	}
};


// Meta.WitAi.TTS.Integrations.TTSDiskCache
struct TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Meta.WitAi.TTS.Integrations.TTSDiskCache::_diskPath
	String_t* ____diskPath_4;
	// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Integrations.TTSDiskCache::_defaultSettings
	TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6 * ____defaultSettings_5;
	// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Integrations.TTSDiskCache::_events
	TTSStreamEvents_tB2DB55FE94A0C2C544ED7ED8DAE9426284F41312 * ____events_6;
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest> Meta.WitAi.TTS.Integrations.TTSDiskCache::_streamRequests
	Dictionary_2_t00FA1A66FF8D52795C3169E70D4DDA06384B0AF5 * ____streamRequests_7;

public:
	inline static int32_t get_offset_of__diskPath_4() { return static_cast<int32_t>(offsetof(TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472, ____diskPath_4)); }
	inline String_t* get__diskPath_4() const { return ____diskPath_4; }
	inline String_t** get_address_of__diskPath_4() { return &____diskPath_4; }
	inline void set__diskPath_4(String_t* value)
	{
		____diskPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____diskPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__defaultSettings_5() { return static_cast<int32_t>(offsetof(TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472, ____defaultSettings_5)); }
	inline TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6 * get__defaultSettings_5() const { return ____defaultSettings_5; }
	inline TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6 ** get_address_of__defaultSettings_5() { return &____defaultSettings_5; }
	inline void set__defaultSettings_5(TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6 * value)
	{
		____defaultSettings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultSettings_5), (void*)value);
	}

	inline static int32_t get_offset_of__events_6() { return static_cast<int32_t>(offsetof(TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472, ____events_6)); }
	inline TTSStreamEvents_tB2DB55FE94A0C2C544ED7ED8DAE9426284F41312 * get__events_6() const { return ____events_6; }
	inline TTSStreamEvents_tB2DB55FE94A0C2C544ED7ED8DAE9426284F41312 ** get_address_of__events_6() { return &____events_6; }
	inline void set__events_6(TTSStreamEvents_tB2DB55FE94A0C2C544ED7ED8DAE9426284F41312 * value)
	{
		____events_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____events_6), (void*)value);
	}

	inline static int32_t get_offset_of__streamRequests_7() { return static_cast<int32_t>(offsetof(TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472, ____streamRequests_7)); }
	inline Dictionary_2_t00FA1A66FF8D52795C3169E70D4DDA06384B0AF5 * get__streamRequests_7() const { return ____streamRequests_7; }
	inline Dictionary_2_t00FA1A66FF8D52795C3169E70D4DDA06384B0AF5 ** get_address_of__streamRequests_7() { return &____streamRequests_7; }
	inline void set__streamRequests_7(Dictionary_2_t00FA1A66FF8D52795C3169E70D4DDA06384B0AF5 * value)
	{
		____streamRequests_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____streamRequests_7), (void*)value);
	}
};


// Meta.WitAi.TTS.Samples.TTSErrorText
struct TTSErrorText_t5AA9862123002E0918DD13AC7E0B9A9033D90BE7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Meta.WitAi.TTS.Samples.TTSErrorText::_errorLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____errorLabel_4;
	// System.String Meta.WitAi.TTS.Samples.TTSErrorText::_error
	String_t* ____error_5;

public:
	inline static int32_t get_offset_of__errorLabel_4() { return static_cast<int32_t>(offsetof(TTSErrorText_t5AA9862123002E0918DD13AC7E0B9A9033D90BE7, ____errorLabel_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__errorLabel_4() const { return ____errorLabel_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__errorLabel_4() { return &____errorLabel_4; }
	inline void set__errorLabel_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____errorLabel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____errorLabel_4), (void*)value);
	}

	inline static int32_t get_offset_of__error_5() { return static_cast<int32_t>(offsetof(TTSErrorText_t5AA9862123002E0918DD13AC7E0B9A9033D90BE7, ____error_5)); }
	inline String_t* get__error_5() const { return ____error_5; }
	inline String_t** get_address_of__error_5() { return &____error_5; }
	inline void set__error_5(String_t* value)
	{
		____error_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_5), (void*)value);
	}
};


// Meta.WitAi.TTS.TTSService
struct TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Meta.WitAi.TTS.Events.TTSServiceEvents Meta.WitAi.TTS.TTSService::_events
	TTSServiceEvents_t6EEF9AD76CB77E4E92991946E1AD54A7C95AE4F6 * ____events_5;
	// System.Boolean Meta.WitAi.TTS.TTSService::_delegates
	bool ____delegates_6;
	// System.Security.Cryptography.SHA256 Meta.WitAi.TTS.TTSService::CLIP_HASH
	SHA256_t7F98FBD5AA9E2F4AC1A5C13FF7122AFF1A920452 * ___CLIP_HASH_8;

public:
	inline static int32_t get_offset_of__events_5() { return static_cast<int32_t>(offsetof(TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E, ____events_5)); }
	inline TTSServiceEvents_t6EEF9AD76CB77E4E92991946E1AD54A7C95AE4F6 * get__events_5() const { return ____events_5; }
	inline TTSServiceEvents_t6EEF9AD76CB77E4E92991946E1AD54A7C95AE4F6 ** get_address_of__events_5() { return &____events_5; }
	inline void set__events_5(TTSServiceEvents_t6EEF9AD76CB77E4E92991946E1AD54A7C95AE4F6 * value)
	{
		____events_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____events_5), (void*)value);
	}

	inline static int32_t get_offset_of__delegates_6() { return static_cast<int32_t>(offsetof(TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E, ____delegates_6)); }
	inline bool get__delegates_6() const { return ____delegates_6; }
	inline bool* get_address_of__delegates_6() { return &____delegates_6; }
	inline void set__delegates_6(bool value)
	{
		____delegates_6 = value;
	}

	inline static int32_t get_offset_of_CLIP_HASH_8() { return static_cast<int32_t>(offsetof(TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E, ___CLIP_HASH_8)); }
	inline SHA256_t7F98FBD5AA9E2F4AC1A5C13FF7122AFF1A920452 * get_CLIP_HASH_8() const { return ___CLIP_HASH_8; }
	inline SHA256_t7F98FBD5AA9E2F4AC1A5C13FF7122AFF1A920452 ** get_address_of_CLIP_HASH_8() { return &___CLIP_HASH_8; }
	inline void set_CLIP_HASH_8(SHA256_t7F98FBD5AA9E2F4AC1A5C13FF7122AFF1A920452 * value)
	{
		___CLIP_HASH_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CLIP_HASH_8), (void*)value);
	}
};

struct TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E_StaticFields
{
public:
	// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService::_instance
	TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E_StaticFields, ____instance_4)); }
	inline TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E * get__instance_4() const { return ____instance_4; }
	inline TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}
};


// Meta.WitAi.TTS.Utilities.TTSSpeaker
struct TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::presetVoiceID
	String_t* ___presetVoiceID_4;
	// UnityEngine.AudioSource Meta.WitAi.TTS.Utilities.TTSSpeaker::AudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___AudioSource_5;
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::prependedText
	String_t* ___prependedText_6;
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::appendedText
	String_t* ___appendedText_7;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents Meta.WitAi.TTS.Utilities.TTSSpeaker::_events
	TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * ____events_8;
	// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakingClip>k__BackingField
	TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * ___U3CSpeakingClipU3Ek__BackingField_9;
	// System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Data.TTSClipData> Meta.WitAi.TTS.Utilities.TTSSpeaker::_queuedClips
	Queue_1_tAE0CC4242EC498B1C13BB35894E1B6C38A6D3A79 * ____queuedClips_10;
	// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.Utilities.TTSSpeaker::_tts
	TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E * ____tts_11;
	// UnityEngine.Coroutine Meta.WitAi.TTS.Utilities.TTSSpeaker::_waitForCompletion
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____waitForCompletion_12;

public:
	inline static int32_t get_offset_of_presetVoiceID_4() { return static_cast<int32_t>(offsetof(TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF, ___presetVoiceID_4)); }
	inline String_t* get_presetVoiceID_4() const { return ___presetVoiceID_4; }
	inline String_t** get_address_of_presetVoiceID_4() { return &___presetVoiceID_4; }
	inline void set_presetVoiceID_4(String_t* value)
	{
		___presetVoiceID_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___presetVoiceID_4), (void*)value);
	}

	inline static int32_t get_offset_of_AudioSource_5() { return static_cast<int32_t>(offsetof(TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF, ___AudioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_AudioSource_5() const { return ___AudioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_AudioSource_5() { return &___AudioSource_5; }
	inline void set_AudioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___AudioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AudioSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_prependedText_6() { return static_cast<int32_t>(offsetof(TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF, ___prependedText_6)); }
	inline String_t* get_prependedText_6() const { return ___prependedText_6; }
	inline String_t** get_address_of_prependedText_6() { return &___prependedText_6; }
	inline void set_prependedText_6(String_t* value)
	{
		___prependedText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prependedText_6), (void*)value);
	}

	inline static int32_t get_offset_of_appendedText_7() { return static_cast<int32_t>(offsetof(TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF, ___appendedText_7)); }
	inline String_t* get_appendedText_7() const { return ___appendedText_7; }
	inline String_t** get_address_of_appendedText_7() { return &___appendedText_7; }
	inline void set_appendedText_7(String_t* value)
	{
		___appendedText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appendedText_7), (void*)value);
	}

	inline static int32_t get_offset_of__events_8() { return static_cast<int32_t>(offsetof(TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF, ____events_8)); }
	inline TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * get__events_8() const { return ____events_8; }
	inline TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D ** get_address_of__events_8() { return &____events_8; }
	inline void set__events_8(TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * value)
	{
		____events_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____events_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSpeakingClipU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF, ___U3CSpeakingClipU3Ek__BackingField_9)); }
	inline TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * get_U3CSpeakingClipU3Ek__BackingField_9() const { return ___U3CSpeakingClipU3Ek__BackingField_9; }
	inline TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 ** get_address_of_U3CSpeakingClipU3Ek__BackingField_9() { return &___U3CSpeakingClipU3Ek__BackingField_9; }
	inline void set_U3CSpeakingClipU3Ek__BackingField_9(TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * value)
	{
		___U3CSpeakingClipU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpeakingClipU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of__queuedClips_10() { return static_cast<int32_t>(offsetof(TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF, ____queuedClips_10)); }
	inline Queue_1_tAE0CC4242EC498B1C13BB35894E1B6C38A6D3A79 * get__queuedClips_10() const { return ____queuedClips_10; }
	inline Queue_1_tAE0CC4242EC498B1C13BB35894E1B6C38A6D3A79 ** get_address_of__queuedClips_10() { return &____queuedClips_10; }
	inline void set__queuedClips_10(Queue_1_tAE0CC4242EC498B1C13BB35894E1B6C38A6D3A79 * value)
	{
		____queuedClips_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____queuedClips_10), (void*)value);
	}

	inline static int32_t get_offset_of__tts_11() { return static_cast<int32_t>(offsetof(TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF, ____tts_11)); }
	inline TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E * get__tts_11() const { return ____tts_11; }
	inline TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E ** get_address_of__tts_11() { return &____tts_11; }
	inline void set__tts_11(TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E * value)
	{
		____tts_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tts_11), (void*)value);
	}

	inline static int32_t get_offset_of__waitForCompletion_12() { return static_cast<int32_t>(offsetof(TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF, ____waitForCompletion_12)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__waitForCompletion_12() const { return ____waitForCompletion_12; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__waitForCompletion_12() { return &____waitForCompletion_12; }
	inline void set__waitForCompletion_12(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____waitForCompletion_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____waitForCompletion_12), (void*)value);
	}
};


// Meta.WitAi.TTS.Samples.TTSSpeakerInput
struct TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Meta.WitAi.TTS.Samples.TTSSpeakerInput::_title
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____title_4;
	// UnityEngine.UI.InputField Meta.WitAi.TTS.Samples.TTSSpeakerInput::_input
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ____input_5;
	// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.WitAi.TTS.Samples.TTSSpeakerInput::_speaker
	TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * ____speaker_6;
	// UnityEngine.UI.Button Meta.WitAi.TTS.Samples.TTSSpeakerInput::_stopButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ____stopButton_7;
	// UnityEngine.UI.Button Meta.WitAi.TTS.Samples.TTSSpeakerInput::_speakButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ____speakButton_8;
	// UnityEngine.UI.Button Meta.WitAi.TTS.Samples.TTSSpeakerInput::_speakQueuedButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ____speakQueuedButton_9;
	// System.String[] Meta.WitAi.TTS.Samples.TTSSpeakerInput::_queuedText
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____queuedText_10;
	// System.Boolean Meta.WitAi.TTS.Samples.TTSSpeakerInput::_loading
	bool ____loading_11;
	// System.Boolean Meta.WitAi.TTS.Samples.TTSSpeakerInput::_speaking
	bool ____speaking_12;

public:
	inline static int32_t get_offset_of__title_4() { return static_cast<int32_t>(offsetof(TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87, ____title_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__title_4() const { return ____title_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__title_4() { return &____title_4; }
	inline void set__title_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____title_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____title_4), (void*)value);
	}

	inline static int32_t get_offset_of__input_5() { return static_cast<int32_t>(offsetof(TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87, ____input_5)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get__input_5() const { return ____input_5; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of__input_5() { return &____input_5; }
	inline void set__input_5(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		____input_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____input_5), (void*)value);
	}

	inline static int32_t get_offset_of__speaker_6() { return static_cast<int32_t>(offsetof(TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87, ____speaker_6)); }
	inline TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * get__speaker_6() const { return ____speaker_6; }
	inline TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF ** get_address_of__speaker_6() { return &____speaker_6; }
	inline void set__speaker_6(TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * value)
	{
		____speaker_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____speaker_6), (void*)value);
	}

	inline static int32_t get_offset_of__stopButton_7() { return static_cast<int32_t>(offsetof(TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87, ____stopButton_7)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get__stopButton_7() const { return ____stopButton_7; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of__stopButton_7() { return &____stopButton_7; }
	inline void set__stopButton_7(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		____stopButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stopButton_7), (void*)value);
	}

	inline static int32_t get_offset_of__speakButton_8() { return static_cast<int32_t>(offsetof(TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87, ____speakButton_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get__speakButton_8() const { return ____speakButton_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of__speakButton_8() { return &____speakButton_8; }
	inline void set__speakButton_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		____speakButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____speakButton_8), (void*)value);
	}

	inline static int32_t get_offset_of__speakQueuedButton_9() { return static_cast<int32_t>(offsetof(TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87, ____speakQueuedButton_9)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get__speakQueuedButton_9() const { return ____speakQueuedButton_9; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of__speakQueuedButton_9() { return &____speakQueuedButton_9; }
	inline void set__speakQueuedButton_9(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		____speakQueuedButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____speakQueuedButton_9), (void*)value);
	}

	inline static int32_t get_offset_of__queuedText_10() { return static_cast<int32_t>(offsetof(TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87, ____queuedText_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__queuedText_10() const { return ____queuedText_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__queuedText_10() { return &____queuedText_10; }
	inline void set__queuedText_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____queuedText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____queuedText_10), (void*)value);
	}

	inline static int32_t get_offset_of__loading_11() { return static_cast<int32_t>(offsetof(TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87, ____loading_11)); }
	inline bool get__loading_11() const { return ____loading_11; }
	inline bool* get_address_of__loading_11() { return &____loading_11; }
	inline void set__loading_11(bool value)
	{
		____loading_11 = value;
	}

	inline static int32_t get_offset_of__speaking_12() { return static_cast<int32_t>(offsetof(TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87, ____speaking_12)); }
	inline bool get__speaking_12() const { return ____speaking_12; }
	inline bool* get_address_of__speaking_12() { return &____speaking_12; }
	inline void set__speaking_12(bool value)
	{
		____speaking_12 = value;
	}
};


// Meta.WitAi.TTS.Samples.TTSStatusLabel
struct TTSStatusLabel_t57618A1CC100528A44441999123F0E926458D457  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.WitAi.TTS.Samples.TTSStatusLabel::_speaker
	TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * ____speaker_4;
	// UnityEngine.UI.Text Meta.WitAi.TTS.Samples.TTSStatusLabel::_label
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____label_5;

public:
	inline static int32_t get_offset_of__speaker_4() { return static_cast<int32_t>(offsetof(TTSStatusLabel_t57618A1CC100528A44441999123F0E926458D457, ____speaker_4)); }
	inline TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * get__speaker_4() const { return ____speaker_4; }
	inline TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF ** get_address_of__speaker_4() { return &____speaker_4; }
	inline void set__speaker_4(TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * value)
	{
		____speaker_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____speaker_4), (void*)value);
	}

	inline static int32_t get_offset_of__label_5() { return static_cast<int32_t>(offsetof(TTSStatusLabel_t57618A1CC100528A44441999123F0E926458D457, ____label_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__label_5() const { return ____label_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__label_5() { return &____label_5; }
	inline void set__label_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____label_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____label_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_44;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_45;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_46;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_47;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_48;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_49;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_50;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_51;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_52;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_53;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_54;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_58;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_61;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_62;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_63;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_64;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_65;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_66;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_67;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_69;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_35)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_42)); }
	inline bool get_m_ShouldActivateOnSelect_42() const { return ___m_ShouldActivateOnSelect_42; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_42() { return &___m_ShouldActivateOnSelect_42; }
	inline void set_m_ShouldActivateOnSelect_42(bool value)
	{
		___m_ShouldActivateOnSelect_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_43)); }
	inline int32_t get_m_CaretPosition_43() const { return ___m_CaretPosition_43; }
	inline int32_t* get_address_of_m_CaretPosition_43() { return &___m_CaretPosition_43; }
	inline void set_m_CaretPosition_43(int32_t value)
	{
		___m_CaretPosition_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_44)); }
	inline int32_t get_m_CaretSelectPosition_44() const { return ___m_CaretSelectPosition_44; }
	inline int32_t* get_address_of_m_CaretSelectPosition_44() { return &___m_CaretSelectPosition_44; }
	inline void set_m_CaretSelectPosition_44(int32_t value)
	{
		___m_CaretSelectPosition_44 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_45)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_45() const { return ___caretRectTrans_45; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_45() { return &___caretRectTrans_45; }
	inline void set_caretRectTrans_45(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_46)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_46() const { return ___m_CursorVerts_46; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_46() { return &___m_CursorVerts_46; }
	inline void set_m_CursorVerts_46(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_47)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_47() const { return ___m_InputTextCache_47; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_47() { return &___m_InputTextCache_47; }
	inline void set_m_InputTextCache_47(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_48)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_48() const { return ___m_CachedInputRenderer_48; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_48() { return &___m_CachedInputRenderer_48; }
	inline void set_m_CachedInputRenderer_48(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_49)); }
	inline bool get_m_PreventFontCallback_49() const { return ___m_PreventFontCallback_49; }
	inline bool* get_address_of_m_PreventFontCallback_49() { return &___m_PreventFontCallback_49; }
	inline void set_m_PreventFontCallback_49(bool value)
	{
		___m_PreventFontCallback_49 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_50)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_50() const { return ___m_Mesh_50; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_50() { return &___m_Mesh_50; }
	inline void set_m_Mesh_50(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_51)); }
	inline bool get_m_AllowInput_51() const { return ___m_AllowInput_51; }
	inline bool* get_address_of_m_AllowInput_51() { return &___m_AllowInput_51; }
	inline void set_m_AllowInput_51(bool value)
	{
		___m_AllowInput_51 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_52)); }
	inline bool get_m_ShouldActivateNextUpdate_52() const { return ___m_ShouldActivateNextUpdate_52; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_52() { return &___m_ShouldActivateNextUpdate_52; }
	inline void set_m_ShouldActivateNextUpdate_52(bool value)
	{
		___m_ShouldActivateNextUpdate_52 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_53)); }
	inline bool get_m_UpdateDrag_53() const { return ___m_UpdateDrag_53; }
	inline bool* get_address_of_m_UpdateDrag_53() { return &___m_UpdateDrag_53; }
	inline void set_m_UpdateDrag_53(bool value)
	{
		___m_UpdateDrag_53 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_54)); }
	inline bool get_m_DragPositionOutOfBounds_54() const { return ___m_DragPositionOutOfBounds_54; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_54() { return &___m_DragPositionOutOfBounds_54; }
	inline void set_m_DragPositionOutOfBounds_54(bool value)
	{
		___m_DragPositionOutOfBounds_54 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_57() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_57)); }
	inline bool get_m_CaretVisible_57() const { return ___m_CaretVisible_57; }
	inline bool* get_address_of_m_CaretVisible_57() { return &___m_CaretVisible_57; }
	inline void set_m_CaretVisible_57(bool value)
	{
		___m_CaretVisible_57 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_58)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_58() const { return ___m_BlinkCoroutine_58; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_58() { return &___m_BlinkCoroutine_58; }
	inline void set_m_BlinkCoroutine_58(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_59)); }
	inline float get_m_BlinkStartTime_59() const { return ___m_BlinkStartTime_59; }
	inline float* get_address_of_m_BlinkStartTime_59() { return &___m_BlinkStartTime_59; }
	inline void set_m_BlinkStartTime_59(float value)
	{
		___m_BlinkStartTime_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_60)); }
	inline int32_t get_m_DrawStart_60() const { return ___m_DrawStart_60; }
	inline int32_t* get_address_of_m_DrawStart_60() { return &___m_DrawStart_60; }
	inline void set_m_DrawStart_60(int32_t value)
	{
		___m_DrawStart_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_61)); }
	inline int32_t get_m_DrawEnd_61() const { return ___m_DrawEnd_61; }
	inline int32_t* get_address_of_m_DrawEnd_61() { return &___m_DrawEnd_61; }
	inline void set_m_DrawEnd_61(int32_t value)
	{
		___m_DrawEnd_61 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_62)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_62() const { return ___m_DragCoroutine_62; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_62() { return &___m_DragCoroutine_62; }
	inline void set_m_DragCoroutine_62(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_63)); }
	inline String_t* get_m_OriginalText_63() const { return ___m_OriginalText_63; }
	inline String_t** get_address_of_m_OriginalText_63() { return &___m_OriginalText_63; }
	inline void set_m_OriginalText_63(String_t* value)
	{
		___m_OriginalText_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_64)); }
	inline bool get_m_WasCanceled_64() const { return ___m_WasCanceled_64; }
	inline bool* get_address_of_m_WasCanceled_64() { return &___m_WasCanceled_64; }
	inline void set_m_WasCanceled_64(bool value)
	{
		___m_WasCanceled_64 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_65)); }
	inline bool get_m_HasDoneFocusTransition_65() const { return ___m_HasDoneFocusTransition_65; }
	inline bool* get_address_of_m_HasDoneFocusTransition_65() { return &___m_HasDoneFocusTransition_65; }
	inline void set_m_HasDoneFocusTransition_65(bool value)
	{
		___m_HasDoneFocusTransition_65 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_66)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_66() const { return ___m_WaitForSecondsRealtime_66; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_66() { return &___m_WaitForSecondsRealtime_66; }
	inline void set_m_WaitForSecondsRealtime_66(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_67)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_67() const { return ___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return &___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_67(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_67 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_69() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_69)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_69() const { return ___m_ProcessingEvent_69; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_69() { return &___m_ProcessingEvent_69; }
	inline void set_m_ProcessingEvent_69(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_69), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Meta.WitAi.TTS.Data.TTSClipData[]
struct TTSClipDataU5BU5D_tE290C2E9DB96A57E86FE55170A45AB4FCBF8B8D1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * m_Items[1];

public:
	inline TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Meta.WitAi.TTS.Integrations.TTSDiskCache>()
inline TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472 * Object_FindObjectOfType_TisTTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472_m680C04C8EBDFC330BDDB6BDD02E65797FED25D96 (const RuntimeMethod* method)
{
	return ((  TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void Meta.WitAi.TTS.Samples.TTSCacheToggle::RefreshLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSCacheToggle_RefreshLocation_mD1D61BB17E637F359619B462CD48786AF98FFABE (TTSCacheToggle_tF5C354A8DB5237B41A43323496C55E5A3FC04161 * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Integrations.TTSDiskCache::get_DiskCacheDefaultSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6 * TTSDiskCache_get_DiskCacheDefaultSettings_m0A8E964BFB6B007C25442A9C49CE7691215D63B1_inline (TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472 * __this, const RuntimeMethod* method);
// Meta.WitAi.TTS.Data.TTSDiskCacheLocation Meta.WitAi.TTS.Samples.TTSCacheToggle::GetCurrentCacheLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TTSCacheToggle_GetCurrentCacheLocation_mA907E0F580159904DFB2F52A96BC74D8F558DA44 (TTSCacheToggle_tF5C354A8DB5237B41A43323496C55E5A3FC04161 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E * TTSService_get_Instance_mE72A097D36E67D1908710341F9A15ACABF470490 (const RuntimeMethod* method);
// System.Void Meta.WitAi.TTS.TTSService::UnloadAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_UnloadAll_m68CF3EEDD39EE5C1DC3057E3EF0FF89CDBAADBFC (TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void Meta.WitAi.TTS.Samples.TTSSpeakerInput::RefreshButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput_RefreshButtons_mF3B33F5036DC342DB3BBE21280883F5605278334 (TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Speak_m67FDF458E27FCC0526E8216BF453955F606B3465 (TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * __this, String_t* ___textToSpeak0, const RuntimeMethod* method);
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakQueued(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_SpeakQueued_m4BC73F70E335F2737B59FA494128239B675F7B1E (TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * __this, String_t* ___textToSpeak0, const RuntimeMethod* method);
// UnityEngine.UI.Graphic UnityEngine.UI.InputField::get_placeholder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * InputField_get_placeholder_mFA1B993866F8CD89D76AA238D8CFF2D48AC3970B_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::get_IsLoading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsLoading_m83D17623A17FB47FB8E2958C1FB315542F1A8BBD (TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * __this, const RuntimeMethod* method);
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::get_IsSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsSpeaking_mD5FF91C082058F3A137679B62A0FF5DBA9BE6539 (TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Meta.WitAi.TTS.Samples.TTSStatusLabel::RefreshLabel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStatusLabel_RefreshLabel_mCA1F653ACA07E379310BA0B0384A4BC17868FB3D (TTSStatusLabel_t57618A1CC100528A44441999123F0E926458D457 * __this, const RuntimeMethod* method);
// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents Meta.WitAi.TTS.Utilities.TTSSpeaker::get_Events()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline (TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.TTS.Data.TTSClipData>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235 (UnityEvent_1_t31532545A41373305C8F6E28BD3D85FC9D4FF7CF * __this, UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t31532545A41373305C8F6E28BD3D85FC9D4FF7CF *, UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004 (UnityEvent_1_t31532545A41373305C8F6E28BD3D85FC9D4FF7CF * __this, UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t31532545A41373305C8F6E28BD3D85FC9D4FF7CF *, UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Utilities.TTSSpeaker::get_SpeakingClip()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * TTSSpeaker_get_SpeakingClip_mC87194C9A66B666B52805CD279ED4509AC0242EB_inline (TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// Meta.WitAi.TTS.Data.TTSClipData[] Meta.WitAi.TTS.Utilities.TTSSpeaker::get_QueuedClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipDataU5BU5D_tE290C2E9DB96A57E86FE55170A45AB4FCBF8B8D1* TTSSpeaker_get_QueuedClips_mE1E7748A3E9F4934E5F249E92758DD41947569D4 (TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Insert_m2B101CF8B6D47CFC7602CBABC101569E513D234F (StringBuilder_t * __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E (StringBuilder_t * __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
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
// System.Void Meta.WitAi.TTS.Samples.TTSCacheToggle::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSCacheToggle_OnEnable_m8B7645BD0D7C1E44129AD6D46D496FA055C03BB1 (TTSCacheToggle_tF5C354A8DB5237B41A43323496C55E5A3FC04161 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisTTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472_m680C04C8EBDFC330BDDB6BDD02E65797FED25D96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSCacheToggle_ToggleCache_m6A9F6089E1453FD51B2941124032B9FA3ED86D17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_diskCache == null)
		TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472 * L_0 = __this->get__diskCache_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _diskCache = GameObject.FindObjectOfType<TTSDiskCache>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472 * L_2;
		L_2 = Object_FindObjectOfType_TisTTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472_m680C04C8EBDFC330BDDB6BDD02E65797FED25D96(/*hidden argument*/Object_FindObjectOfType_TisTTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472_m680C04C8EBDFC330BDDB6BDD02E65797FED25D96_RuntimeMethod_var);
		__this->set__diskCache_4(L_2);
	}

IL_0019:
	{
		// RefreshLocation();
		TTSCacheToggle_RefreshLocation_mD1D61BB17E637F359619B462CD48786AF98FFABE(__this, /*hidden argument*/NULL);
		// _button.onClick.AddListener(ToggleCache);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get__button_6();
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)TTSCacheToggle_ToggleCache_m6A9F6089E1453FD51B2941124032B9FA3ED86D17_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Meta.WitAi.TTS.Data.TTSDiskCacheLocation Meta.WitAi.TTS.Samples.TTSCacheToggle::GetCurrentCacheLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TTSCacheToggle_GetCurrentCacheLocation_mA907E0F580159904DFB2F52A96BC74D8F558DA44 (TTSCacheToggle_tF5C354A8DB5237B41A43323496C55E5A3FC04161 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private TTSDiskCacheLocation GetCurrentCacheLocation() => _diskCache == null ? TTSDiskCacheLocation.Stream : _diskCache.DiskCacheDefaultSettings.DiskCacheLocation;
		TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472 * L_0 = __this->get__diskCache_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472 * L_2 = __this->get__diskCache_4();
		NullCheck(L_2);
		TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6 * L_3;
		L_3 = TTSDiskCache_get_DiskCacheDefaultSettings_m0A8E964BFB6B007C25442A9C49CE7691215D63B1_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = L_3->get_DiskCacheLocation_0();
		return L_4;
	}

IL_001f:
	{
		return (int32_t)(0);
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSCacheToggle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSCacheToggle_Update_mAB97318AF9612D67E46BB4235C9D3C926564EF0D (TTSCacheToggle_tF5C354A8DB5237B41A43323496C55E5A3FC04161 * __this, const RuntimeMethod* method)
{
	{
		// if (_cacheLocation != GetCurrentCacheLocation())
		int32_t L_0 = __this->get__cacheLocation_7();
		int32_t L_1;
		L_1 = TTSCacheToggle_GetCurrentCacheLocation_mA907E0F580159904DFB2F52A96BC74D8F558DA44(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		// RefreshLocation();
		TTSCacheToggle_RefreshLocation_mD1D61BB17E637F359619B462CD48786AF98FFABE(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSCacheToggle::RefreshLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSCacheToggle_RefreshLocation_mD1D61BB17E637F359619B462CD48786AF98FFABE (TTSCacheToggle_tF5C354A8DB5237B41A43323496C55E5A3FC04161 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDiskCacheLocation_tDDAFCDEE31F0F848DF7029E31CA2129F2445B365_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA5E057E9C43D8BE035AEBD4EDE90FC16636B277);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _cacheLocation = GetCurrentCacheLocation();
		int32_t L_0;
		L_0 = TTSCacheToggle_GetCurrentCacheLocation_mA907E0F580159904DFB2F52A96BC74D8F558DA44(__this, /*hidden argument*/NULL);
		__this->set__cacheLocation_7(L_0);
		// _cacheLabel.text = $"Disk Cache: {_cacheLocation}";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get__cacheLabel_5();
		int32_t L_2 = __this->get__cacheLocation_7();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(TTSDiskCacheLocation_tDDAFCDEE31F0F848DF7029E31CA2129F2445B365_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralAA5E057E9C43D8BE035AEBD4EDE90FC16636B277, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSCacheToggle::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSCacheToggle_OnDisable_mCEA23FDF573FFAE7620A99B2C332B178A040D612 (TTSCacheToggle_tF5C354A8DB5237B41A43323496C55E5A3FC04161 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSCacheToggle_ToggleCache_m6A9F6089E1453FD51B2941124032B9FA3ED86D17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _button.onClick.RemoveListener(ToggleCache);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get__button_6();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)TTSCacheToggle_ToggleCache_m6A9F6089E1453FD51B2941124032B9FA3ED86D17_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSCacheToggle::ToggleCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSCacheToggle_ToggleCache_m6A9F6089E1453FD51B2941124032B9FA3ED86D17 (TTSCacheToggle_tF5C354A8DB5237B41A43323496C55E5A3FC04161 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// TTSDiskCacheLocation cacheLocation = GetCurrentCacheLocation();
		int32_t L_0;
		L_0 = TTSCacheToggle_GetCurrentCacheLocation_mA907E0F580159904DFB2F52A96BC74D8F558DA44(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0023;
			}
		}
	}
	{
		goto IL_002b;
	}

IL_001f:
	{
		// cacheLocation = TTSDiskCacheLocation.Temporary;
		V_0 = 3;
		// break;
		goto IL_002d;
	}

IL_0023:
	{
		// cacheLocation = TTSDiskCacheLocation.Persistent;
		V_0 = 2;
		// break;
		goto IL_002d;
	}

IL_0027:
	{
		// cacheLocation = TTSDiskCacheLocation.Preload;
		V_0 = 1;
		// break;
		goto IL_002d;
	}

IL_002b:
	{
		// cacheLocation = TTSDiskCacheLocation.Stream;
		V_0 = 0;
	}

IL_002d:
	{
		// _diskCache.DiskCacheDefaultSettings.DiskCacheLocation = cacheLocation;
		TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472 * L_2 = __this->get__diskCache_4();
		NullCheck(L_2);
		TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6 * L_3;
		L_3 = TTSDiskCache_get_DiskCacheDefaultSettings_m0A8E964BFB6B007C25442A9C49CE7691215D63B1_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		L_3->set_DiskCacheLocation_0(L_4);
		// TTSService.Instance.UnloadAll();
		TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E * L_5;
		L_5 = TTSService_get_Instance_mE72A097D36E67D1908710341F9A15ACABF470490(/*hidden argument*/NULL);
		NullCheck(L_5);
		TTSService_UnloadAll_m68CF3EEDD39EE5C1DC3057E3EF0FF89CDBAADBFC(L_5, /*hidden argument*/NULL);
		// RefreshLocation();
		TTSCacheToggle_RefreshLocation_mD1D61BB17E637F359619B462CD48786AF98FFABE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSCacheToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSCacheToggle__ctor_m19DDBCEA2EBDA8263F216FB0363D45A97CEC7C59 (TTSCacheToggle_tF5C354A8DB5237B41A43323496C55E5A3FC04161 * __this, const RuntimeMethod* method)
{
	{
		// private TTSDiskCacheLocation _cacheLocation = (TTSDiskCacheLocation) (-1);
		__this->set__cacheLocation_7((-1));
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
// System.Void Meta.WitAi.TTS.Samples.TTSErrorText::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSErrorText_Update_mC3100270D81C9DC51B82D8375F4C07F116633F8D (TTSErrorText_t5AA9862123002E0918DD13AC7E0B9A9033D90BE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral623378871EFD071EE67F1698CC4581C5B10D22A0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (TTSService.Instance != null)
		TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E * L_0;
		L_0 = TTSService_get_Instance_mE72A097D36E67D1908710341F9A15ACABF470490(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		// string invalidError = TTSService.Instance.GetInvalidError();
		TTSService_tF29287357A78A2BA282A3D48A87DD2F9C63B396E * L_2;
		L_2 = TTSService_get_Instance_mE72A097D36E67D1908710341F9A15ACABF470490(/*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String Meta.WitAi.TTS.TTSService::GetInvalidError() */, L_2);
		V_0 = L_3;
		// if (!string.Equals(invalidError, _error))
		String_t* L_4 = V_0;
		String_t* L_5 = __this->get__error_5();
		bool L_6;
		L_6 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0066;
		}
	}
	{
		// _error = invalidError;
		String_t* L_7 = V_0;
		__this->set__error_5(L_7);
		// if (string.IsNullOrEmpty(_error))
		String_t* L_8 = __this->get__error_5();
		bool L_9;
		L_9 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		// _errorLabel.text = string.Empty;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get__errorLabel_4();
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		// }
		return;
	}

IL_004b:
	{
		// _errorLabel.text = $"TTS Service Error: {_error}";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get__errorLabel_4();
		String_t* L_13 = __this->get__error_5();
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral623378871EFD071EE67F1698CC4581C5B10D22A0, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_14);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSErrorText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSErrorText__ctor_mB4938D4669C649A5F0963A27847063E370431BFC (TTSErrorText_t5AA9862123002E0918DD13AC7E0B9A9033D90BE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _error = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__error_5(L_0);
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
// System.Void Meta.WitAi.TTS.Samples.TTSSpeakerInput::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput_OnEnable_m90D1B30178D72AB31B0E9500E204F4A61CD51CE8 (TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerInput_SpeakClick_m1CC30E1CCF5A2F976CD10E296E1963005C984F8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerInput_SpeakQueuedClick_m9454262C63ABDF8B91DFD0679136FE4AD34FD37A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerInput_StopClick_mDEFC0C8979EF05328E44AD5C45273155597350E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RefreshButtons();
		TTSSpeakerInput_RefreshButtons_mF3B33F5036DC342DB3BBE21280883F5605278334(__this, /*hidden argument*/NULL);
		// _stopButton.onClick.AddListener(StopClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get__stopButton_7();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)TTSSpeakerInput_StopClick_mDEFC0C8979EF05328E44AD5C45273155597350E0_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_1, L_2, /*hidden argument*/NULL);
		// _speakButton.onClick.AddListener(SpeakClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get__speakButton_8();
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)TTSSpeakerInput_SpeakClick_m1CC30E1CCF5A2F976CD10E296E1963005C984F8E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// _speakQueuedButton.onClick.AddListener(SpeakQueuedClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get__speakQueuedButton_9();
		NullCheck(L_6);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_7;
		L_7 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_6, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_8, __this, (intptr_t)((intptr_t)TTSSpeakerInput_SpeakQueuedClick_m9454262C63ABDF8B91DFD0679136FE4AD34FD37A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSSpeakerInput::StopClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput_StopClick_mDEFC0C8979EF05328E44AD5C45273155597350E0 (TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87 * __this, const RuntimeMethod* method)
{
	{
		// private void StopClick() => _speaker.Stop();
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_0 = __this->get__speaker_6();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Stop() */, L_0);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSSpeakerInput::SpeakClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput_SpeakClick_m1CC30E1CCF5A2F976CD10E296E1963005C984F8E (TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87 * __this, const RuntimeMethod* method)
{
	{
		// private void SpeakClick() => _speaker.Speak(_input.text);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_0 = __this->get__speaker_6();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1 = __this->get__input_5();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		TTSSpeaker_Speak_m67FDF458E27FCC0526E8216BF453955F606B3465(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSSpeakerInput::SpeakQueuedClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput_SpeakQueuedClick_m9454262C63ABDF8B91DFD0679136FE4AD34FD37A (TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87 * __this, const RuntimeMethod* method)
{
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// foreach (var text in _queuedText)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get__queuedText_10();
		V_0 = L_0;
		V_1 = 0;
		goto IL_001f;
	}

IL_000b:
	{
		// foreach (var text in _queuedText)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// _speaker.SpeakQueued(text);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_5 = __this->get__speaker_6();
		String_t* L_6 = V_2;
		NullCheck(L_5);
		TTSSpeaker_SpeakQueued_m4BC73F70E335F2737B59FA494128239B675F7B1E(L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001f:
	{
		// foreach (var text in _queuedText)
		int32_t L_8 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// _speaker.SpeakQueued(_input.text);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_10 = __this->get__speaker_6();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_11 = __this->get__input_5();
		NullCheck(L_11);
		String_t* L_12;
		L_12 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		TTSSpeaker_SpeakQueued_m4BC73F70E335F2737B59FA494128239B675F7B1E(L_10, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSSpeakerInput::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput_OnDisable_m2F26BD935E1D02937393642B80107EF48DDEFFB1 (TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerInput_SpeakClick_m1CC30E1CCF5A2F976CD10E296E1963005C984F8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerInput_SpeakQueuedClick_m9454262C63ABDF8B91DFD0679136FE4AD34FD37A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerInput_StopClick_mDEFC0C8979EF05328E44AD5C45273155597350E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _stopButton.onClick.RemoveListener(StopClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get__stopButton_7();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)TTSSpeakerInput_StopClick_mDEFC0C8979EF05328E44AD5C45273155597350E0_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_1, L_2, /*hidden argument*/NULL);
		// _speakButton.onClick.RemoveListener(SpeakClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get__speakButton_8();
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)TTSSpeakerInput_SpeakClick_m1CC30E1CCF5A2F976CD10E296E1963005C984F8E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_4, L_5, /*hidden argument*/NULL);
		// _speakQueuedButton.onClick.RemoveListener(SpeakQueuedClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get__speakQueuedButton_9();
		NullCheck(L_6);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_7;
		L_7 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_6, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_8, __this, (intptr_t)((intptr_t)TTSSpeakerInput_SpeakQueuedClick_m9454262C63ABDF8B91DFD0679136FE4AD34FD37A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSSpeakerInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput_Update_mDE6A7679DC8A9CF9F79CF287AB3EDAB3F876919F (TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29DD95531FCE94DCE288DF8BD4349F991A445F02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77235CB916AB2431DB5346DEF4FF7A991FCFF985);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!string.Equals(_title.text, _speaker.presetVoiceID))
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__title_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_2 = __this->get__speaker_6();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_presetVoiceID_4();
		bool L_4;
		L_4 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_1, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		// _title.text = _speaker.presetVoiceID;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get__title_4();
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_6 = __this->get__speaker_6();
		NullCheck(L_6);
		String_t* L_7 = L_6->get_presetVoiceID_4();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// _input.placeholder.GetComponent<Text>().text = $"Write something to say in {_speaker.presetVoiceID}'s voice";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_8 = __this->get__input_5();
		NullCheck(L_8);
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_9;
		L_9 = InputField_get_placeholder_mFA1B993866F8CD89D76AA238D8CFF2D48AC3970B_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10;
		L_10 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_9, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_11 = __this->get__speaker_6();
		NullCheck(L_11);
		String_t* L_12 = L_11->get_presetVoiceID_4();
		String_t* L_13;
		L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral77235CB916AB2431DB5346DEF4FF7A991FCFF985, L_12, _stringLiteral29DD95531FCE94DCE288DF8BD4349F991A445F02, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
	}

IL_0062:
	{
		// if (_loading != _speaker.IsLoading)
		bool L_14 = __this->get__loading_11();
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_15 = __this->get__speaker_6();
		NullCheck(L_15);
		bool L_16;
		L_16 = TTSSpeaker_get_IsLoading_m83D17623A17FB47FB8E2958C1FB315542F1A8BBD(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)L_16)))
		{
			goto IL_008c;
		}
	}
	{
		// _loading = _speaker.IsLoading;
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_17 = __this->get__speaker_6();
		NullCheck(L_17);
		bool L_18;
		L_18 = TTSSpeaker_get_IsLoading_m83D17623A17FB47FB8E2958C1FB315542F1A8BBD(L_17, /*hidden argument*/NULL);
		__this->set__loading_11(L_18);
		// RefreshButtons();
		TTSSpeakerInput_RefreshButtons_mF3B33F5036DC342DB3BBE21280883F5605278334(__this, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// if (_speaking != _speaker.IsSpeaking)
		bool L_19 = __this->get__speaking_12();
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_20 = __this->get__speaker_6();
		NullCheck(L_20);
		bool L_21;
		L_21 = TTSSpeaker_get_IsSpeaking_mD5FF91C082058F3A137679B62A0FF5DBA9BE6539(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_19) == ((int32_t)L_21)))
		{
			goto IL_00b6;
		}
	}
	{
		// _speaking = _speaker.IsSpeaking;
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_22 = __this->get__speaker_6();
		NullCheck(L_22);
		bool L_23;
		L_23 = TTSSpeaker_get_IsSpeaking_mD5FF91C082058F3A137679B62A0FF5DBA9BE6539(L_22, /*hidden argument*/NULL);
		__this->set__speaking_12(L_23);
		// RefreshButtons();
		TTSSpeakerInput_RefreshButtons_mF3B33F5036DC342DB3BBE21280883F5605278334(__this, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSSpeakerInput::RefreshButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput_RefreshButtons_mF3B33F5036DC342DB3BBE21280883F5605278334 (TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87 * __this, const RuntimeMethod* method)
{
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * G_B2_0 = NULL;
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * G_B3_1 = NULL;
	{
		// _stopButton.interactable = _loading || _speaking;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get__stopButton_7();
		bool L_1 = __this->get__loading_11();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		bool L_2 = __this->get__speaking_12();
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(G_B3_1, (bool)G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSSpeakerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput__ctor_m2B3084E8FB99942EC8AC3FE501B46A80DF8E2F4E (TTSSpeakerInput_t40B64F11444A610AD0EEA400DB37F4F51416CF87 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void Meta.WitAi.TTS.Samples.TTSStatusLabel::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStatusLabel_OnEnable_m84650CF9BB5CC1E280B092C53A98A7CB9DA00AFD (TTSStatusLabel_t57618A1CC100528A44441999123F0E926458D457 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RefreshLabel();
		TTSStatusLabel_RefreshLabel_mCA1F653ACA07E379310BA0B0384A4BC17868FB3D(__this, /*hidden argument*/NULL);
		// _speaker.Events.OnClipDataLoadBegin.AddListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_0 = __this->get__speaker_4();
		NullCheck(L_0);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_1;
		L_1 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_2 = L_1->get_OnClipDataLoadBegin_8();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_3 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_3, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_2);
		UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235(L_2, L_3, /*hidden argument*/UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235_RuntimeMethod_var);
		// _speaker.Events.OnClipDataLoadAbort.AddListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_4 = __this->get__speaker_4();
		NullCheck(L_4);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_5;
		L_5 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_6 = L_5->get_OnClipDataLoadAbort_11();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_7 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_7, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_6);
		UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235(L_6, L_7, /*hidden argument*/UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235_RuntimeMethod_var);
		// _speaker.Events.OnClipDataLoadFailed.AddListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_8 = __this->get__speaker_4();
		NullCheck(L_8);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_9;
		L_9 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_10 = L_9->get_OnClipDataLoadFailed_9();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_11 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_11, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_10);
		UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235(L_10, L_11, /*hidden argument*/UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235_RuntimeMethod_var);
		// _speaker.Events.OnClipDataLoadSuccess.AddListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_12 = __this->get__speaker_4();
		NullCheck(L_12);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_13;
		L_13 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_14 = L_13->get_OnClipDataLoadSuccess_10();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_15 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_15, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_14);
		UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235(L_14, L_15, /*hidden argument*/UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235_RuntimeMethod_var);
		// _speaker.Events.OnClipDataQueued.AddListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_16 = __this->get__speaker_4();
		NullCheck(L_16);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_17;
		L_17 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_18 = L_17->get_OnClipDataQueued_7();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_19 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_19, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_18);
		UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235(L_18, L_19, /*hidden argument*/UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235_RuntimeMethod_var);
		// _speaker.Events.OnClipDataPlaybackReady.AddListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_20 = __this->get__speaker_4();
		NullCheck(L_20);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_21;
		L_21 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_22 = L_21->get_OnClipDataPlaybackReady_12();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_23 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_23, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_22);
		UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235(L_22, L_23, /*hidden argument*/UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235_RuntimeMethod_var);
		// _speaker.Events.OnClipDataPlaybackStart.AddListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_24 = __this->get__speaker_4();
		NullCheck(L_24);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_25;
		L_25 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_26 = L_25->get_OnClipDataPlaybackStart_13();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_27 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_27, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_26);
		UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235(L_26, L_27, /*hidden argument*/UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235_RuntimeMethod_var);
		// _speaker.Events.OnClipDataPlaybackFinished.AddListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_28 = __this->get__speaker_4();
		NullCheck(L_28);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_29;
		L_29 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_30 = L_29->get_OnClipDataPlaybackFinished_14();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_31 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_31, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_30);
		UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235(L_30, L_31, /*hidden argument*/UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235_RuntimeMethod_var);
		// _speaker.Events.OnClipDataPlaybackCancelled.AddListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_32 = __this->get__speaker_4();
		NullCheck(L_32);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_33;
		L_33 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_34 = L_33->get_OnClipDataPlaybackCancelled_15();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_35 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_35, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_34);
		UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235(L_34, L_35, /*hidden argument*/UnityEvent_1_AddListener_m9DB2CB455213D6483197A1A68299F582DF621235_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSStatusLabel::OnClipRefresh(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4 (TTSStatusLabel_t57618A1CC100528A44441999123F0E926458D457 * __this, TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * ___clipData0, const RuntimeMethod* method)
{
	{
		// RefreshLabel();
		TTSStatusLabel_RefreshLabel_mCA1F653ACA07E379310BA0B0384A4BC17868FB3D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSStatusLabel::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStatusLabel_OnDisable_mEACBFBBB1C1CBD29F1C106E381B32DD0C04A3160 (TTSStatusLabel_t57618A1CC100528A44441999123F0E926458D457 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _speaker.Events.OnClipDataQueued.RemoveListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_0 = __this->get__speaker_4();
		NullCheck(L_0);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_1;
		L_1 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_2 = L_1->get_OnClipDataQueued_7();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_3 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_3, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004(L_2, L_3, /*hidden argument*/UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004_RuntimeMethod_var);
		// _speaker.Events.OnClipDataLoadBegin.RemoveListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_4 = __this->get__speaker_4();
		NullCheck(L_4);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_5;
		L_5 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_6 = L_5->get_OnClipDataLoadBegin_8();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_7 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_7, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004(L_6, L_7, /*hidden argument*/UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004_RuntimeMethod_var);
		// _speaker.Events.OnClipDataLoadAbort.RemoveListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_8 = __this->get__speaker_4();
		NullCheck(L_8);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_9;
		L_9 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_10 = L_9->get_OnClipDataLoadAbort_11();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_11 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_11, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_10);
		UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004(L_10, L_11, /*hidden argument*/UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004_RuntimeMethod_var);
		// _speaker.Events.OnClipDataLoadFailed.RemoveListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_12 = __this->get__speaker_4();
		NullCheck(L_12);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_13;
		L_13 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_14 = L_13->get_OnClipDataLoadFailed_9();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_15 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_15, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_14);
		UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004(L_14, L_15, /*hidden argument*/UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004_RuntimeMethod_var);
		// _speaker.Events.OnClipDataLoadSuccess.RemoveListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_16 = __this->get__speaker_4();
		NullCheck(L_16);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_17;
		L_17 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_18 = L_17->get_OnClipDataLoadSuccess_10();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_19 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_19, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_18);
		UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004(L_18, L_19, /*hidden argument*/UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004_RuntimeMethod_var);
		// _speaker.Events.OnClipDataPlaybackReady.RemoveListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_20 = __this->get__speaker_4();
		NullCheck(L_20);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_21;
		L_21 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_22 = L_21->get_OnClipDataPlaybackReady_12();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_23 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_23, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_22);
		UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004(L_22, L_23, /*hidden argument*/UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004_RuntimeMethod_var);
		// _speaker.Events.OnClipDataPlaybackStart.RemoveListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_24 = __this->get__speaker_4();
		NullCheck(L_24);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_25;
		L_25 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_26 = L_25->get_OnClipDataPlaybackStart_13();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_27 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_27, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_26);
		UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004(L_26, L_27, /*hidden argument*/UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004_RuntimeMethod_var);
		// _speaker.Events.OnClipDataPlaybackFinished.RemoveListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_28 = __this->get__speaker_4();
		NullCheck(L_28);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_29;
		L_29 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_30 = L_29->get_OnClipDataPlaybackFinished_14();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_31 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_31, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_30);
		UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004(L_30, L_31, /*hidden argument*/UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004_RuntimeMethod_var);
		// _speaker.Events.OnClipDataPlaybackCancelled.RemoveListener(OnClipRefresh);
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_32 = __this->get__speaker_4();
		NullCheck(L_32);
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_33;
		L_33 = TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		TTSSpeakerClipDataEvent_t030FE0EAF7042F7E42315C395583F2C6AEF49333 * L_34 = L_33->get_OnClipDataPlaybackCancelled_15();
		UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B * L_35 = (UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B *)il2cpp_codegen_object_new(UnityAction_1_t5E24023BA4D90B7A342564A3403C0838AE37BC7B_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C(L_35, __this, (intptr_t)((intptr_t)TTSStatusLabel_OnClipRefresh_m9C713E50F577CC766970B95B410727C9902026D4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m2C3F270EFB4F72E85CBDE44165B4329279CD598C_RuntimeMethod_var);
		NullCheck(L_34);
		UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004(L_34, L_35, /*hidden argument*/UnityEvent_1_RemoveListener_mE4688B31D3C7A32BFC9C44CA30AE20C55039E004_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSStatusLabel::RefreshLabel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStatusLabel_RefreshLabel_mCA1F653ACA07E379310BA0B0384A4BC17868FB3D (TTSStatusLabel_t57618A1CC100528A44441999123F0E926458D457 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipLoadState_t9C443BDB293BCD9EF961D0F380B19B0E8A19CB06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DB3D9039D7A91BC9644BF5B94CBB1C4378DA18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB707AD1232B0ECA35F52C45D2C3321F121FBD53);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	TTSClipDataU5BU5D_tE290C2E9DB96A57E86FE55170A45AB4FCBF8B8D1* V_2 = NULL;
	int32_t V_3 = 0;
	TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * V_4 = NULL;
	{
		// StringBuilder status = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (_speaker.SpeakingClip != null)
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_1 = __this->get__speaker_4();
		NullCheck(L_1);
		TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * L_2;
		L_2 = TTSSpeaker_get_SpeakingClip_mC87194C9A66B666B52805CD279ED4509AC0242EB_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// status.AppendLine($"Speaking: {_speaker.IsSpeaking}");
		StringBuilder_t * L_3 = V_0;
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_4 = __this->get__speaker_4();
		NullCheck(L_4);
		bool L_5;
		L_5 = TTSSpeaker_get_IsSpeaking_mD5FF91C082058F3A137679B62A0FF5DBA9BE6539(L_4, /*hidden argument*/NULL);
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralFB707AD1232B0ECA35F52C45D2C3321F121FBD53, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_3, L_8, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// int index = 0;
		V_1 = 0;
		// foreach (var clip in _speaker.QueuedClips)
		TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * L_10 = __this->get__speaker_4();
		NullCheck(L_10);
		TTSClipDataU5BU5D_tE290C2E9DB96A57E86FE55170A45AB4FCBF8B8D1* L_11;
		L_11 = TTSSpeaker_get_QueuedClips_mE1E7748A3E9F4934E5F249E92758DD41947569D4(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		V_3 = 0;
		goto IL_007d;
	}

IL_0046:
	{
		// foreach (var clip in _speaker.QueuedClips)
		TTSClipDataU5BU5D_tE290C2E9DB96A57E86FE55170A45AB4FCBF8B8D1* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		// status.Insert(0, $"Queue[{index}]: {clip.loadState.ToString()}\n");
		StringBuilder_t * L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * L_20 = V_4;
		NullCheck(L_20);
		int32_t* L_21 = L_20->get_address_of_loadState_7();
		RuntimeObject * L_22 = Box(TTSClipLoadState_t9C443BDB293BCD9EF961D0F380B19B0E8A19CB06_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		*L_21 = *(int32_t*)UnBox(L_22);
		String_t* L_24;
		L_24 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral88DB3D9039D7A91BC9644BF5B94CBB1C4378DA18, L_19, L_23, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_t * L_25;
		L_25 = StringBuilder_Insert_m2B101CF8B6D47CFC7602CBABC101569E513D234F(L_16, 0, L_24, /*hidden argument*/NULL);
		// index++;
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_007d:
	{
		// foreach (var clip in _speaker.QueuedClips)
		int32_t L_28 = V_3;
		TTSClipDataU5BU5D_tE290C2E9DB96A57E86FE55170A45AB4FCBF8B8D1* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_0046;
		}
	}
	{
		// if (status.Length > 0)
		StringBuilder_t * L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_30, /*hidden argument*/NULL);
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		// status.Remove(status.Length - 1, 1);
		StringBuilder_t * L_32 = V_0;
		StringBuilder_t * L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		StringBuilder_t * L_35;
		L_35 = StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E(L_32, ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1)), 1, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// _label.text = status.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_36 = __this->get__label_5();
		StringBuilder_t * L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		NullCheck(L_36);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_38);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSStatusLabel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStatusLabel__ctor_m7E9AB7EE2D9294B5C7F9B07EDF666DCEF20DE27A (TTSStatusLabel_t57618A1CC100528A44441999123F0E926458D457 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6 * TTSDiskCache_get_DiskCacheDefaultSettings_m0A8E964BFB6B007C25442A9C49CE7691215D63B1_inline (TTSDiskCache_t15F86BF922F7FEAD8881BA4E3D59E37D75AE8472 * __this, const RuntimeMethod* method)
{
	{
		// public TTSDiskCacheSettings DiskCacheDefaultSettings => _defaultSettings;
		TTSDiskCacheSettings_tC0FC536DF0011202EA7CA1D24B13D4A886A21ED6 * L_0 = __this->get__defaultSettings_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// return m_Text;
		String_t* L_0 = __this->get_m_Text_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * InputField_get_placeholder_mFA1B993866F8CD89D76AA238D8CFF2D48AC3970B_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// public Graphic placeholder { get { return m_Placeholder; } set { SetPropertyUtility.SetClass(ref m_Placeholder, value); } }
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0 = __this->get_m_Placeholder_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * TTSSpeaker_get_Events_mE6B2A60010ABDFFA32F37C37ED5C6436794E4959_inline (TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * __this, const RuntimeMethod* method)
{
	{
		// public TTSSpeakerEvents Events => _events;
		TTSSpeakerEvents_t86164DD97EF270C83E565E1F2C9E48C44E68930D * L_0 = __this->get__events_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * TTSSpeaker_get_SpeakingClip_mC87194C9A66B666B52805CD279ED4509AC0242EB_inline (TTSSpeaker_tD9F732DECF105BD86EA14966E42F4906B907DCCF * __this, const RuntimeMethod* method)
{
	{
		// public TTSClipData SpeakingClip { get; private set; }
		TTSClipData_t40A0CA829B6867024246DF80F66B60296CB997B2 * L_0 = __this->get_U3CSpeakingClipU3Ek__BackingField_9();
		return L_0;
	}
}
