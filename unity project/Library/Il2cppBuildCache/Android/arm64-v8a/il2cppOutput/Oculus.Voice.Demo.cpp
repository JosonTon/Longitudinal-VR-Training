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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.Renderer>
struct Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`1<Meta.WitAi.WitRequest>
struct Action_1_t8956C826A49866445E54956164D36A98DE3362FF;
// System.Action`2<System.Object,UnityEngine.Color>
struct Action_2_tA115706E18DF04DC2FE89DB5AE302F7A84C851CA;
// System.Action`2<UnityEngine.Renderer,UnityEngine.Color>
struct Action_2_tDD41BF9527852576A44BA15E01C3429A9A570526;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]>
struct ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Predicate`1<Oculus.Voice.Demo.ColorOverride>
struct Predicate_1_tC6D65BBAC452AF0762A8FF6E76272DB772374484;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<UnityEngine.Renderer>
struct Predicate_1_t58D599511F2F3E1464A13143153C4F4026C73237;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.WitRequest>
struct UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>
struct UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD;
// UnityEngine.Events.UnityAction`2<System.String,System.String>
struct UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>
struct UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>
struct UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582;
// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Oculus.Voice.Demo.ColorOverride[]
struct ColorOverrideU5BU5D_t954B9F311E1E955135B1DE9F8BB97484D9873A82;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Renderer[]
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Meta.WitAi.Data.Info.WitEntityInfo[]
struct WitEntityInfoU5BU5D_tF35266071D8F3C655816FAFED44519D56A649835;
// Meta.WitAi.Data.Info.WitIntentInfo[]
struct WitIntentInfoU5BU5D_t907483605F080B17229D8E2F5CC2F3C9327739DB;
// Meta.WitAi.Data.Info.WitTraitInfo[]
struct WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5;
// Meta.WitAi.Data.Info.WitVoiceInfo[]
struct WitVoiceInfoU5BU5D_t6945BFE4B715F90280C64B87231A49D3145E1282;
// Meta.WitAi.WitRequest/QueryParam[]
struct QueryParamU5BU5D_tC49DD13C0D037FF80FBDED054267C06217457CB3;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Oculus.Voice.Demo.LightTraitsDemo.ActivateButton
struct ActivateButton_t2211FEBF2AB632CB1AF25B56240266F39B0FF21E;
// Oculus.Voice.AppVoiceExperience
struct AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// Meta.WitAi.Data.AudioEncoding
struct AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Oculus.Voice.Demo.ButtonEventWatcher
struct ButtonEventWatcher_t9C89DF1FEB93786FA968A3E0AF58652813C862DE;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Oculus.Voice.Demo.UIShapesDemo.ColorChanger
struct ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Meta.WitAi.Interfaces.CustomTranscriptionProvider
struct CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Meta.Conduit.IConduitDispatcher
struct IConduitDispatcher_t60BBCAD31980E43542AF8E98ECBAEE51A8AEC9B5;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Meta.Conduit.IParameterProvider
struct IParameterProvider_t24DAEC91D61D987886A2207BDB533BC16D57A4AC;
// Oculus.Voice.Interfaces.IPlatformVoiceService
struct IPlatformVoiceService_tFC1D07648D3588DD6E8E03B3F1FB1CD692E529BE;
// Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger
struct IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B;
// Meta.WitAi.IVoiceService
struct IVoiceService_tB1A49A13D5D10B0DF0202DC659BB63C3E9682466;
// Meta.WitAi.IWitRequestConfiguration
struct IWitRequestConfiguration_t2F1179B108AD6D02195074EC08CC30B7DF8FCA67;
// Meta.WitAi.IWitRuntimeConfigProvider
struct IWitRuntimeConfigProvider_t742527BC01D15F9398C4AD1EDE74C0A0DCDC6AB3;
// Oculus.Voice.Demo.UIShapesDemo.Instructions
struct Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5;
// Oculus.Voice.Demo.InteractionHandler
struct InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// Oculus.Voice.Demo.LightTraitsDemo.LightToggler
struct LightToggler_tC5145942CCFBA6A3CD13B50B4B5049667A13A504;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Oculus.Voice.Demo.UIShapesDemo.ParallelTranscriptHandler
struct ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Oculus.Voice.Demo.ShortResponseColorHandler
struct ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7;
// Oculus.Voice.Demo.ShortResponseInstructions
struct ShortResponseInstructions_tC0E9F4B232971495F5879DC44FB93E825DB6BD23;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Oculus.Voice.Demo.BuiltInDemo.TimerController
struct TimerController_t3035005099318E93DA2D8388A795CD05B604417D;
// Oculus.Voice.Demo.BuiltInDemo.TimerDisplay
struct TimerDisplay_t57B43DA79696BE27F3049ACEF3BAF716198EE7CD;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D;
// Meta.WitAi.VoiceService
struct VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D;
// Meta.WitAi.Data.VoiceSession
struct VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Meta.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34;
// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564;
// Meta.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F;
// Meta.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B;
// Meta.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B;
// Meta.WitAi.WitRequest
struct WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D;
// Meta.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759;
// Meta.WitAi.Events.WitRequestOptionsEvent
struct WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E;
// Meta.WitAi.Events.WitResponseEvent
struct WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705;
// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537;
// Meta.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975;
// Meta.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8;
// Meta.WitAi.Events.WitValidationEvent
struct WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// Meta.WitAi.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Oculus.Voice.Demo.ShortResponseColorHandler/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92;
// Oculus.Voice.Demo.ShortResponseColorHandler/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B;
// Meta.WitAi.WitRequest/OnCustomizeUriEvent
struct OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7;
// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent
struct OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB;
// Meta.WitAi.WitRequest/PreSendRequestDelegate
struct PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWitRuntimeConfigProvider_t742527BC01D15F9398C4AD1EDE74C0A0DCDC6AB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LightState_tC4100BA801E62B356C33A7A964AA4E5831BA11F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t58D599511F2F3E1464A13143153C4F4026C73237_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tC6D65BBAC452AF0762A8FF6E76272DB772374484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDEA6A2962102C60FC2730249F235FB6C73550394____FBC2FB414C8563ACAF804065DA6998D2D92E7C966A37DE63A42566708F3E0F70_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06055A31D913616225C8AA9808676FAD9AA4549A;
IL2CPP_EXTERN_C String_t* _stringLiteral0A5D08C7E98DA121F009B7BFC331E06EE804C90A;
IL2CPP_EXTERN_C String_t* _stringLiteral0FD3D6735BD711DE4722F8D1FEB48E7E5238AC46;
IL2CPP_EXTERN_C String_t* _stringLiteral11B7DBC79AE1731C98022861F51963665A1692FF;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2E05E96B31736576CB72C40C4D79B2AC1E69E8E6;
IL2CPP_EXTERN_C String_t* _stringLiteral34073A77D1FC0099E5D4E1AA07A1A3995BF30CF5;
IL2CPP_EXTERN_C String_t* _stringLiteral377C585B1B1DFB2354530C907FF3AF34F921983D;
IL2CPP_EXTERN_C String_t* _stringLiteral39CCECF27122D10050A5606AD517A96F5CCF55CA;
IL2CPP_EXTERN_C String_t* _stringLiteral3DFAD45D6A8DA43B5B1B588751F66ED962320CBC;
IL2CPP_EXTERN_C String_t* _stringLiteral41EC8CF96484907F34E81AEF7F803DDBBE6FC97F;
IL2CPP_EXTERN_C String_t* _stringLiteral42D42C9A89C43F231A03A99D76113732701039EB;
IL2CPP_EXTERN_C String_t* _stringLiteral4E3F3CE7F088199C5A9ADB690290F91F45814107;
IL2CPP_EXTERN_C String_t* _stringLiteral50FD7CB5C781AA1CB1598D172D99D573C3F2BB9F;
IL2CPP_EXTERN_C String_t* _stringLiteral560ED8D4B879A92BD23CB10540270C39C3E19D78;
IL2CPP_EXTERN_C String_t* _stringLiteral593C48B5B64125B2A87743E68909883CFDF40C2A;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA98721A021E8397CACDA83A653C9CD0A53A441;
IL2CPP_EXTERN_C String_t* _stringLiteral674D566FF6101DD0EF36AC986DEF66156B7E9A54;
IL2CPP_EXTERN_C String_t* _stringLiteral6C2779828DB4F6FD0BAFA174EC8935FB45601490;
IL2CPP_EXTERN_C String_t* _stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5;
IL2CPP_EXTERN_C String_t* _stringLiteral76518E7DE5882197CD91E9F2E6826A3C0B9F493C;
IL2CPP_EXTERN_C String_t* _stringLiteral7FDD57A554F4937B1372DCDFBB149567C0704967;
IL2CPP_EXTERN_C String_t* _stringLiteral84D00B228D10C715DA89DB12080F9DA6C37464B3;
IL2CPP_EXTERN_C String_t* _stringLiteral8682956BC4320075709B4B2396B4F890B21B525E;
IL2CPP_EXTERN_C String_t* _stringLiteral900D12FD6EE1407168379DF0B561E5206790E8AF;
IL2CPP_EXTERN_C String_t* _stringLiteral982EB241688495C1AF6152F618833411DB4F9B35;
IL2CPP_EXTERN_C String_t* _stringLiteral984058CED8B3C72D22A95708F196F8A38804B395;
IL2CPP_EXTERN_C String_t* _stringLiteral9D6B66BF93AFC12DE5805D06BA0ABBD6C3659968;
IL2CPP_EXTERN_C String_t* _stringLiteralA11693ECE42265DD88A2D3772568D86192C06050;
IL2CPP_EXTERN_C String_t* _stringLiteralA4249AEA5B1AE9E78829F6D9A0EFE24DE7967450;
IL2CPP_EXTERN_C String_t* _stringLiteralA83B8EF1A0DD0928ED5318216A030FC69A13643E;
IL2CPP_EXTERN_C String_t* _stringLiteralB46971E487185F55C44F40E1807F8CFF6C46F543;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralCC2A5334237FF8576DD07245EB919757BF72CBA9;
IL2CPP_EXTERN_C String_t* _stringLiteralD05B8149A77D8E3214C75319FBFF76C72FAC315A;
IL2CPP_EXTERN_C String_t* _stringLiteralD2A5212C71D031E67C453835AC07A6181980EF40;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D1658DF3541A4A8F4FDBB6BD782A1F6BB2636D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2750208B187414250C881D4F336CE8A3F84BFDA;
IL2CPP_EXTERN_C String_t* _stringLiteralE84F498776F6C20BBE955ABF1908A5D218FD8026;
IL2CPP_EXTERN_C String_t* _stringLiteralF3AED789946AED0395215D1DE21BCD5437046CAE;
IL2CPP_EXTERN_C String_t* _stringLiteralFC9AEAA9B8ED2A1EF2F08E10DE610AA75B1AC318;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m13B8DB1478196597FC916A14A32B81672D8503D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2BD82FEFED0E285B9502402C56960CD5EE5C1627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mDF69B63FCBD755DA1B0CF7D137033E8469DF1A91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindIndex_TisColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_mC12AD37EEB3B12F7091B9796B14A588A2230C621_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindIndex_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m6308BCD6B880CCB6694AFF154ED9F04089FFB602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIWitRuntimeConfigProvider_t742527BC01D15F9398C4AD1EDE74C0A0DCDC6AB3_mC0CF146802E31527A9E809AF182B65D1F40B26E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m1A95B452BAE19475E5A65028964BF91500D30E24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7_m530BF3105BA7083936B9483A289059EF19B0D442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_OnListenForcedStop_m715C1B7C1028750D6AD4562BC5AF16EAAF2C0950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_OnListenStart_m3E8855565042818E914FAA276376CF5638D68EBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_OnListenStop_mF0963F52D52DEA32E3EF3BB9A82BA7620C847538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_OnRequestError_m2023B78E66D807338FDB8F5982B2ABB8AB8C1D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_OnRequestResponse_mB3EE6BE72168D0741B26AC29BE8F75D1242883DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_OnRequestStarted_m10FE76CFC232A5BA550AFC2FD5D025139B5A999C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionHandler_U3COnRequestStartedU3Eb__9_0_mE88FBE7A317B58B24795F37305346DDCD8698485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisVoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D_m39470EE990B168E843C798C76C4AFC16DF238893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m5AAC315615DCE530D4BAEE32EE54B2AF6364F6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_mA9A1FD27024ABA6B165129A16A6992FD77CD2083_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShortResponseInstructions_ShapeSelected_m89BF7419D397B5172812960E745F5E950A6DAAF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimerController_ParseTime_m1CCD2091A91F28CFF4813F8F49E56A396F96CB0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CTryGetShapeIndexU3Eb__0_mEFA7F4B1E45623021B179FAAAB40B35BB7603FE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CTryGetColorU3Eb__0_m177DA10E6FCB92E8F5D9DD5BAFFADD434246AE8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m3BCE2ACA358FF0A7E8934FC0A7315E4E7FA1E4B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mDB4B2173C6BD726C9FE55A13D202EB2D93C5D8FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m48C2EAC451A98179DBAC5115E564E23474929959_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mE0E5D20F36DB24948363D3BB67BFB3DD12CE5164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_m3E022579578FE256EB77167A33F3003A4FC63B06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_RemoveListener_m23EE42492565C29932813AA8242EC48E5C5CCF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* LightState_tC4100BA801E62B356C33A7A964AA4E5831BA11F8_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1_marshaled_com;
struct WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1_marshaled_pinvoke;
struct WitIntentInfo_t4B4BFE3F8E57C8AD2521619DBF59EACC73CCD320_marshaled_com;
struct WitIntentInfo_t4B4BFE3F8E57C8AD2521619DBF59EACC73CCD320_marshaled_pinvoke;
struct WitVoiceInfo_tF5D8D9777CC854E844F0080BEF2773CD586D81F6_marshaled_com;
struct WitVoiceInfo_tF5D8D9777CC854E844F0080BEF2773CD586D81F6_marshaled_pinvoke;

struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
struct ColorOverrideU5BU5D_t954B9F311E1E955135B1DE9F8BB97484D9873A82;
struct KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD074FD2CDC563C011312199F2FF5725F50737094 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Meta.WitAi.Events.EventRegistry
struct EventRegistry_t7FCE15ECC05DF338C701E788D137969E5EEB66B9  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacks
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ____overriddenCallbacks_0;
	// System.Collections.Generic.HashSet`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacksHash
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ____overriddenCallbacksHash_1;

public:
	inline static int32_t get_offset_of__overriddenCallbacks_0() { return static_cast<int32_t>(offsetof(EventRegistry_t7FCE15ECC05DF338C701E788D137969E5EEB66B9, ____overriddenCallbacks_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get__overriddenCallbacks_0() const { return ____overriddenCallbacks_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of__overriddenCallbacks_0() { return &____overriddenCallbacks_0; }
	inline void set__overriddenCallbacks_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		____overriddenCallbacks_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____overriddenCallbacks_0), (void*)value);
	}

	inline static int32_t get_offset_of__overriddenCallbacksHash_1() { return static_cast<int32_t>(offsetof(EventRegistry_t7FCE15ECC05DF338C701E788D137969E5EEB66B9, ____overriddenCallbacksHash_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get__overriddenCallbacksHash_1() const { return ____overriddenCallbacksHash_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of__overriddenCallbacksHash_1() { return &____overriddenCallbacksHash_1; }
	inline void set__overriddenCallbacksHash_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		____overriddenCallbacksHash_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____overriddenCallbacksHash_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// Meta.WitAi.Data.VoiceSession
struct VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F  : public RuntimeObject
{
public:
	// Meta.WitAi.VoiceService Meta.WitAi.Data.VoiceSession::service
	VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * ___service_0;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Data.VoiceSession::response
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___response_1;
	// System.Boolean Meta.WitAi.Data.VoiceSession::validResponse
	bool ___validResponse_2;

public:
	inline static int32_t get_offset_of_service_0() { return static_cast<int32_t>(offsetof(VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F, ___service_0)); }
	inline VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * get_service_0() const { return ___service_0; }
	inline VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D ** get_address_of_service_0() { return &___service_0; }
	inline void set_service_0(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * value)
	{
		___service_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___service_0), (void*)value);
	}

	inline static int32_t get_offset_of_response_1() { return static_cast<int32_t>(offsetof(VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F, ___response_1)); }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * get_response_1() const { return ___response_1; }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 ** get_address_of_response_1() { return &___response_1; }
	inline void set_response_1(WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * value)
	{
		___response_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___response_1), (void*)value);
	}

	inline static int32_t get_offset_of_validResponse_2() { return static_cast<int32_t>(offsetof(VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F, ___validResponse_2)); }
	inline bool get_validResponse_2() const { return ___validResponse_2; }
	inline bool* get_address_of_validResponse_2() { return &___validResponse_2; }
	inline void set_validResponse_2(bool value)
	{
		___validResponse_2 = value;
	}
};


// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537  : public RuntimeObject
{
public:

public:
};


// Meta.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975  : public RuntimeObject
{
public:
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.Configuration.WitRuntimeConfiguration::witConfiguration
	WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ___witConfiguration_0;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveVolume
	float ___minKeepAliveVolume_1;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveTimeInSeconds
	float ___minKeepAliveTimeInSeconds_2;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::minTranscriptionKeepAliveTimeInSeconds
	float ___minTranscriptionKeepAliveTimeInSeconds_3;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::maxRecordingTime
	float ___maxRecordingTime_4;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::soundWakeThreshold
	float ___soundWakeThreshold_5;
	// System.Int32 Meta.WitAi.Configuration.WitRuntimeConfiguration::sampleLengthInMs
	int32_t ___sampleLengthInMs_6;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::micBufferLengthInSeconds
	float ___micBufferLengthInSeconds_7;
	// System.Int32 Meta.WitAi.Configuration.WitRuntimeConfiguration::maxConcurrentRequests
	int32_t ___maxConcurrentRequests_8;
	// System.Boolean Meta.WitAi.Configuration.WitRuntimeConfiguration::sendAudioToWit
	bool ___sendAudioToWit_9;
	// Meta.WitAi.Interfaces.CustomTranscriptionProvider Meta.WitAi.Configuration.WitRuntimeConfiguration::customTranscriptionProvider
	CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342 * ___customTranscriptionProvider_10;
	// System.Boolean Meta.WitAi.Configuration.WitRuntimeConfiguration::alwaysRecord
	bool ___alwaysRecord_11;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::preferredActivationOffset
	float ___preferredActivationOffset_12;

public:
	inline static int32_t get_offset_of_witConfiguration_0() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___witConfiguration_0)); }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * get_witConfiguration_0() const { return ___witConfiguration_0; }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 ** get_address_of_witConfiguration_0() { return &___witConfiguration_0; }
	inline void set_witConfiguration_0(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * value)
	{
		___witConfiguration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___witConfiguration_0), (void*)value);
	}

	inline static int32_t get_offset_of_minKeepAliveVolume_1() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___minKeepAliveVolume_1)); }
	inline float get_minKeepAliveVolume_1() const { return ___minKeepAliveVolume_1; }
	inline float* get_address_of_minKeepAliveVolume_1() { return &___minKeepAliveVolume_1; }
	inline void set_minKeepAliveVolume_1(float value)
	{
		___minKeepAliveVolume_1 = value;
	}

	inline static int32_t get_offset_of_minKeepAliveTimeInSeconds_2() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___minKeepAliveTimeInSeconds_2)); }
	inline float get_minKeepAliveTimeInSeconds_2() const { return ___minKeepAliveTimeInSeconds_2; }
	inline float* get_address_of_minKeepAliveTimeInSeconds_2() { return &___minKeepAliveTimeInSeconds_2; }
	inline void set_minKeepAliveTimeInSeconds_2(float value)
	{
		___minKeepAliveTimeInSeconds_2 = value;
	}

	inline static int32_t get_offset_of_minTranscriptionKeepAliveTimeInSeconds_3() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___minTranscriptionKeepAliveTimeInSeconds_3)); }
	inline float get_minTranscriptionKeepAliveTimeInSeconds_3() const { return ___minTranscriptionKeepAliveTimeInSeconds_3; }
	inline float* get_address_of_minTranscriptionKeepAliveTimeInSeconds_3() { return &___minTranscriptionKeepAliveTimeInSeconds_3; }
	inline void set_minTranscriptionKeepAliveTimeInSeconds_3(float value)
	{
		___minTranscriptionKeepAliveTimeInSeconds_3 = value;
	}

	inline static int32_t get_offset_of_maxRecordingTime_4() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___maxRecordingTime_4)); }
	inline float get_maxRecordingTime_4() const { return ___maxRecordingTime_4; }
	inline float* get_address_of_maxRecordingTime_4() { return &___maxRecordingTime_4; }
	inline void set_maxRecordingTime_4(float value)
	{
		___maxRecordingTime_4 = value;
	}

	inline static int32_t get_offset_of_soundWakeThreshold_5() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___soundWakeThreshold_5)); }
	inline float get_soundWakeThreshold_5() const { return ___soundWakeThreshold_5; }
	inline float* get_address_of_soundWakeThreshold_5() { return &___soundWakeThreshold_5; }
	inline void set_soundWakeThreshold_5(float value)
	{
		___soundWakeThreshold_5 = value;
	}

	inline static int32_t get_offset_of_sampleLengthInMs_6() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___sampleLengthInMs_6)); }
	inline int32_t get_sampleLengthInMs_6() const { return ___sampleLengthInMs_6; }
	inline int32_t* get_address_of_sampleLengthInMs_6() { return &___sampleLengthInMs_6; }
	inline void set_sampleLengthInMs_6(int32_t value)
	{
		___sampleLengthInMs_6 = value;
	}

	inline static int32_t get_offset_of_micBufferLengthInSeconds_7() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___micBufferLengthInSeconds_7)); }
	inline float get_micBufferLengthInSeconds_7() const { return ___micBufferLengthInSeconds_7; }
	inline float* get_address_of_micBufferLengthInSeconds_7() { return &___micBufferLengthInSeconds_7; }
	inline void set_micBufferLengthInSeconds_7(float value)
	{
		___micBufferLengthInSeconds_7 = value;
	}

	inline static int32_t get_offset_of_maxConcurrentRequests_8() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___maxConcurrentRequests_8)); }
	inline int32_t get_maxConcurrentRequests_8() const { return ___maxConcurrentRequests_8; }
	inline int32_t* get_address_of_maxConcurrentRequests_8() { return &___maxConcurrentRequests_8; }
	inline void set_maxConcurrentRequests_8(int32_t value)
	{
		___maxConcurrentRequests_8 = value;
	}

	inline static int32_t get_offset_of_sendAudioToWit_9() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___sendAudioToWit_9)); }
	inline bool get_sendAudioToWit_9() const { return ___sendAudioToWit_9; }
	inline bool* get_address_of_sendAudioToWit_9() { return &___sendAudioToWit_9; }
	inline void set_sendAudioToWit_9(bool value)
	{
		___sendAudioToWit_9 = value;
	}

	inline static int32_t get_offset_of_customTranscriptionProvider_10() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___customTranscriptionProvider_10)); }
	inline CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342 * get_customTranscriptionProvider_10() const { return ___customTranscriptionProvider_10; }
	inline CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342 ** get_address_of_customTranscriptionProvider_10() { return &___customTranscriptionProvider_10; }
	inline void set_customTranscriptionProvider_10(CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342 * value)
	{
		___customTranscriptionProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customTranscriptionProvider_10), (void*)value);
	}

	inline static int32_t get_offset_of_alwaysRecord_11() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___alwaysRecord_11)); }
	inline bool get_alwaysRecord_11() const { return ___alwaysRecord_11; }
	inline bool* get_address_of_alwaysRecord_11() { return &___alwaysRecord_11; }
	inline void set_alwaysRecord_11(bool value)
	{
		___alwaysRecord_11 = value;
	}

	inline static int32_t get_offset_of_preferredActivationOffset_12() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___preferredActivationOffset_12)); }
	inline float get_preferredActivationOffset_12() const { return ___preferredActivationOffset_12; }
	inline float* get_address_of_preferredActivationOffset_12() { return &___preferredActivationOffset_12; }
	inline void set_preferredActivationOffset_12(float value)
	{
		___preferredActivationOffset_12 = value;
	}
};


// Oculus.Voice.Demo.ShortResponseColorHandler/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92  : public RuntimeObject
{
public:
	// System.String Oculus.Voice.Demo.ShortResponseColorHandler/<>c__DisplayClass11_0::shapeName
	String_t* ___shapeName_0;

public:
	inline static int32_t get_offset_of_shapeName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92, ___shapeName_0)); }
	inline String_t* get_shapeName_0() const { return ___shapeName_0; }
	inline String_t** get_address_of_shapeName_0() { return &___shapeName_0; }
	inline void set_shapeName_0(String_t* value)
	{
		___shapeName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shapeName_0), (void*)value);
	}
};


// Oculus.Voice.Demo.ShortResponseColorHandler/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B  : public RuntimeObject
{
public:
	// System.String Oculus.Voice.Demo.ShortResponseColorHandler/<>c__DisplayClass14_0::colorName
	String_t* ___colorName_0;

public:
	inline static int32_t get_offset_of_colorName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B, ___colorName_0)); }
	inline String_t* get_colorName_0() const { return ___colorName_0; }
	inline String_t** get_address_of_colorName_0() { return &___colorName_0; }
	inline void set_colorName_0(String_t* value)
	{
		___colorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorName_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>
struct UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>
struct UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4, ___m_InvokeArray_3)); }
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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


// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D  : public EventRegistry_t7FCE15ECC05DF338C701E788D137969E5EEB66B9
{
public:
	// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.VoiceEvents::OnResponse
	WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * ___OnResponse_7;
	// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.VoiceEvents::OnPartialResponse
	WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * ___OnPartialResponse_8;
	// Meta.WitAi.Events.WitValidationEvent Meta.WitAi.Events.VoiceEvents::OnValidatePartialResponse
	WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D * ___OnValidatePartialResponse_9;
	// Meta.WitAi.Events.WitErrorEvent Meta.WitAi.Events.VoiceEvents::OnError
	WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * ___OnError_10;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnAborting
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnAborting_11;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnAborted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnAborted_12;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnRequestCompleted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnRequestCompleted_13;
	// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.VoiceEvents::OnMicLevelChanged
	WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * ___OnMicLevelChanged_14;
	// Meta.WitAi.Events.WitRequestOptionsEvent Meta.WitAi.Events.VoiceEvents::OnRequestOptionSetup
	WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E * ___OnRequestOptionSetup_15;
	// Meta.WitAi.Events.WitRequestCreatedEvent Meta.WitAi.Events.VoiceEvents::OnRequestCreated
	WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * ___OnRequestCreated_16;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnStartListening
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStartListening_17;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnStoppedListening
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListening_18;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnStoppedListeningDueToInactivity
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListeningDueToInactivity_19;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnStoppedListeningDueToTimeout
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListeningDueToTimeout_20;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnStoppedListeningDueToDeactivation
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListeningDueToDeactivation_21;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnMicDataSent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnMicDataSent_22;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnMinimumWakeThresholdHit
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnMinimumWakeThresholdHit_23;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.VoiceEvents::onPartialTranscription
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * ___onPartialTranscription_24;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.VoiceEvents::onFullTranscription
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * ___onFullTranscription_25;
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::OnByteDataReady
	WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * ___OnByteDataReady_26;
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::OnByteDataSent
	WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * ___OnByteDataSent_27;

public:
	inline static int32_t get_offset_of_OnResponse_7() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnResponse_7)); }
	inline WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * get_OnResponse_7() const { return ___OnResponse_7; }
	inline WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 ** get_address_of_OnResponse_7() { return &___OnResponse_7; }
	inline void set_OnResponse_7(WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * value)
	{
		___OnResponse_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnResponse_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnPartialResponse_8() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnPartialResponse_8)); }
	inline WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * get_OnPartialResponse_8() const { return ___OnPartialResponse_8; }
	inline WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 ** get_address_of_OnPartialResponse_8() { return &___OnPartialResponse_8; }
	inline void set_OnPartialResponse_8(WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * value)
	{
		___OnPartialResponse_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPartialResponse_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnValidatePartialResponse_9() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnValidatePartialResponse_9)); }
	inline WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D * get_OnValidatePartialResponse_9() const { return ___OnValidatePartialResponse_9; }
	inline WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D ** get_address_of_OnValidatePartialResponse_9() { return &___OnValidatePartialResponse_9; }
	inline void set_OnValidatePartialResponse_9(WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D * value)
	{
		___OnValidatePartialResponse_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnValidatePartialResponse_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_10() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnError_10)); }
	inline WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * get_OnError_10() const { return ___OnError_10; }
	inline WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B ** get_address_of_OnError_10() { return &___OnError_10; }
	inline void set_OnError_10(WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * value)
	{
		___OnError_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnAborting_11() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnAborting_11)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnAborting_11() const { return ___OnAborting_11; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnAborting_11() { return &___OnAborting_11; }
	inline void set_OnAborting_11(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnAborting_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAborting_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnAborted_12() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnAborted_12)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnAborted_12() const { return ___OnAborted_12; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnAborted_12() { return &___OnAborted_12; }
	inline void set_OnAborted_12(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnAborted_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAborted_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnRequestCompleted_13() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnRequestCompleted_13)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnRequestCompleted_13() const { return ___OnRequestCompleted_13; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnRequestCompleted_13() { return &___OnRequestCompleted_13; }
	inline void set_OnRequestCompleted_13(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnRequestCompleted_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRequestCompleted_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnMicLevelChanged_14() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnMicLevelChanged_14)); }
	inline WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * get_OnMicLevelChanged_14() const { return ___OnMicLevelChanged_14; }
	inline WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B ** get_address_of_OnMicLevelChanged_14() { return &___OnMicLevelChanged_14; }
	inline void set_OnMicLevelChanged_14(WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * value)
	{
		___OnMicLevelChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMicLevelChanged_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnRequestOptionSetup_15() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnRequestOptionSetup_15)); }
	inline WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E * get_OnRequestOptionSetup_15() const { return ___OnRequestOptionSetup_15; }
	inline WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E ** get_address_of_OnRequestOptionSetup_15() { return &___OnRequestOptionSetup_15; }
	inline void set_OnRequestOptionSetup_15(WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E * value)
	{
		___OnRequestOptionSetup_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRequestOptionSetup_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnRequestCreated_16() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnRequestCreated_16)); }
	inline WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * get_OnRequestCreated_16() const { return ___OnRequestCreated_16; }
	inline WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 ** get_address_of_OnRequestCreated_16() { return &___OnRequestCreated_16; }
	inline void set_OnRequestCreated_16(WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * value)
	{
		___OnRequestCreated_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRequestCreated_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartListening_17() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnStartListening_17)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStartListening_17() const { return ___OnStartListening_17; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStartListening_17() { return &___OnStartListening_17; }
	inline void set_OnStartListening_17(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStartListening_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartListening_17), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListening_18() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnStoppedListening_18)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListening_18() const { return ___OnStoppedListening_18; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListening_18() { return &___OnStoppedListening_18; }
	inline void set_OnStoppedListening_18(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListening_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListening_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListeningDueToInactivity_19() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnStoppedListeningDueToInactivity_19)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListeningDueToInactivity_19() const { return ___OnStoppedListeningDueToInactivity_19; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListeningDueToInactivity_19() { return &___OnStoppedListeningDueToInactivity_19; }
	inline void set_OnStoppedListeningDueToInactivity_19(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListeningDueToInactivity_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListeningDueToInactivity_19), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListeningDueToTimeout_20() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnStoppedListeningDueToTimeout_20)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListeningDueToTimeout_20() const { return ___OnStoppedListeningDueToTimeout_20; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListeningDueToTimeout_20() { return &___OnStoppedListeningDueToTimeout_20; }
	inline void set_OnStoppedListeningDueToTimeout_20(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListeningDueToTimeout_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListeningDueToTimeout_20), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListeningDueToDeactivation_21() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnStoppedListeningDueToDeactivation_21)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListeningDueToDeactivation_21() const { return ___OnStoppedListeningDueToDeactivation_21; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListeningDueToDeactivation_21() { return &___OnStoppedListeningDueToDeactivation_21; }
	inline void set_OnStoppedListeningDueToDeactivation_21(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListeningDueToDeactivation_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListeningDueToDeactivation_21), (void*)value);
	}

	inline static int32_t get_offset_of_OnMicDataSent_22() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnMicDataSent_22)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnMicDataSent_22() const { return ___OnMicDataSent_22; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnMicDataSent_22() { return &___OnMicDataSent_22; }
	inline void set_OnMicDataSent_22(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnMicDataSent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMicDataSent_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnMinimumWakeThresholdHit_23() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnMinimumWakeThresholdHit_23)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnMinimumWakeThresholdHit_23() const { return ___OnMinimumWakeThresholdHit_23; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnMinimumWakeThresholdHit_23() { return &___OnMinimumWakeThresholdHit_23; }
	inline void set_OnMinimumWakeThresholdHit_23(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnMinimumWakeThresholdHit_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMinimumWakeThresholdHit_23), (void*)value);
	}

	inline static int32_t get_offset_of_onPartialTranscription_24() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___onPartialTranscription_24)); }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * get_onPartialTranscription_24() const { return ___onPartialTranscription_24; }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 ** get_address_of_onPartialTranscription_24() { return &___onPartialTranscription_24; }
	inline void set_onPartialTranscription_24(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * value)
	{
		___onPartialTranscription_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPartialTranscription_24), (void*)value);
	}

	inline static int32_t get_offset_of_onFullTranscription_25() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___onFullTranscription_25)); }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * get_onFullTranscription_25() const { return ___onFullTranscription_25; }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 ** get_address_of_onFullTranscription_25() { return &___onFullTranscription_25; }
	inline void set_onFullTranscription_25(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * value)
	{
		___onFullTranscription_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFullTranscription_25), (void*)value);
	}

	inline static int32_t get_offset_of_OnByteDataReady_26() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnByteDataReady_26)); }
	inline WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * get_OnByteDataReady_26() const { return ___OnByteDataReady_26; }
	inline WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 ** get_address_of_OnByteDataReady_26() { return &___OnByteDataReady_26; }
	inline void set_OnByteDataReady_26(WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * value)
	{
		___OnByteDataReady_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnByteDataReady_26), (void*)value);
	}

	inline static int32_t get_offset_of_OnByteDataSent_27() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ___OnByteDataSent_27)); }
	inline WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * get_OnByteDataSent_27() const { return ___OnByteDataSent_27; }
	inline WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 ** get_address_of_OnByteDataSent_27() { return &___OnByteDataSent_27; }
	inline void set_OnByteDataSent_27(WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * value)
	{
		___OnByteDataSent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnByteDataSent_27), (void*)value);
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tAB20EA26C59BC897932FDF198DFE01E7FF4A4A07 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tAB20EA26C59BC897932FDF198DFE01E7FF4A4A07__padding[12];
	};

public:
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tDEA6A2962102C60FC2730249F235FB6C73550394  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tDEA6A2962102C60FC2730249F235FB6C73550394_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::FBC2FB414C8563ACAF804065DA6998D2D92E7C966A37DE63A42566708F3E0F70
	__StaticArrayInitTypeSizeU3D12_tAB20EA26C59BC897932FDF198DFE01E7FF4A4A07  ___FBC2FB414C8563ACAF804065DA6998D2D92E7C966A37DE63A42566708F3E0F70_0;

public:
	inline static int32_t get_offset_of_FBC2FB414C8563ACAF804065DA6998D2D92E7C966A37DE63A42566708F3E0F70_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tDEA6A2962102C60FC2730249F235FB6C73550394_StaticFields, ___FBC2FB414C8563ACAF804065DA6998D2D92E7C966A37DE63A42566708F3E0F70_0)); }
	inline __StaticArrayInitTypeSizeU3D12_tAB20EA26C59BC897932FDF198DFE01E7FF4A4A07  get_FBC2FB414C8563ACAF804065DA6998D2D92E7C966A37DE63A42566708F3E0F70_0() const { return ___FBC2FB414C8563ACAF804065DA6998D2D92E7C966A37DE63A42566708F3E0F70_0; }
	inline __StaticArrayInitTypeSizeU3D12_tAB20EA26C59BC897932FDF198DFE01E7FF4A4A07 * get_address_of_FBC2FB414C8563ACAF804065DA6998D2D92E7C966A37DE63A42566708F3E0F70_0() { return &___FBC2FB414C8563ACAF804065DA6998D2D92E7C966A37DE63A42566708F3E0F70_0; }
	inline void set_FBC2FB414C8563ACAF804065DA6998D2D92E7C966A37DE63A42566708F3E0F70_0(__StaticArrayInitTypeSizeU3D12_tAB20EA26C59BC897932FDF198DFE01E7FF4A4A07  value)
	{
		___FBC2FB414C8563ACAF804065DA6998D2D92E7C966A37DE63A42566708F3E0F70_0 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Voice.Demo.ColorOverride
struct ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7 
{
public:
	// System.String Oculus.Voice.Demo.ColorOverride::colorID
	String_t* ___colorID_0;
	// UnityEngine.Color Oculus.Voice.Demo.ColorOverride::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;

public:
	inline static int32_t get_offset_of_colorID_0() { return static_cast<int32_t>(offsetof(ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7, ___colorID_0)); }
	inline String_t* get_colorID_0() const { return ___colorID_0; }
	inline String_t** get_address_of_colorID_0() { return &___colorID_0; }
	inline void set_colorID_0(String_t* value)
	{
		___colorID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorID_0), (void*)value);
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Oculus.Voice.Demo.ColorOverride
struct ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_marshaled_pinvoke
{
	char* ___colorID_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
};
// Native definition for COM marshalling of Oculus.Voice.Demo.ColorOverride
struct ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_marshaled_com
{
	Il2CppChar* ___colorID_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
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

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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


// Meta.WitAi.Data.Info.WitAppTrainingStatus
struct WitAppTrainingStatus_tE1AD40C115731E5AFCF95CA2B2E50AA975EA8CA6 
{
public:
	// System.Int32 Meta.WitAi.Data.Info.WitAppTrainingStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WitAppTrainingStatus_tE1AD40C115731E5AFCF95CA2B2E50AA975EA8CA6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Meta.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B  : public UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4
{
public:

public:
};


// Meta.WitAi.WitRequest
struct WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D  : public RuntimeObject
{
public:
	// Meta.WitAi.IWitRequestConfiguration Meta.WitAi.WitRequest::configuration
	RuntimeObject* ___configuration_7;
	// System.Boolean Meta.WitAi.WitRequest::shouldPost
	bool ___shouldPost_8;
	// System.String Meta.WitAi.WitRequest::command
	String_t* ___command_9;
	// System.String Meta.WitAi.WitRequest::path
	String_t* ___path_10;
	// Meta.WitAi.WitRequest/QueryParam[] Meta.WitAi.WitRequest::queryParams
	QueryParamU5BU5D_tC49DD13C0D037FF80FBDED054267C06217457CB3* ___queryParams_11;
	// System.Net.HttpWebRequest Meta.WitAi.WitRequest::_request
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ____request_12;
	// System.IO.Stream Meta.WitAi.WitRequest::_writeStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____writeStream_13;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.WitRequest::responseData
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___responseData_14;
	// System.Boolean Meta.WitAi.WitRequest::isActive
	bool ___isActive_15;
	// System.Boolean Meta.WitAi.WitRequest::responseStarted
	bool ___responseStarted_16;
	// System.Byte[] Meta.WitAi.WitRequest::postData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___postData_17;
	// System.String Meta.WitAi.WitRequest::postContentType
	String_t* ___postContentType_18;
	// System.String Meta.WitAi.WitRequest::requestIdOverride
	String_t* ___requestIdOverride_19;
	// System.String Meta.WitAi.WitRequest::forcedHttpMethodType
	String_t* ___forcedHttpMethodType_20;
	// System.Object Meta.WitAi.WitRequest::streamLock
	RuntimeObject * ___streamLock_21;
	// System.Int32 Meta.WitAi.WitRequest::bytesWritten
	int32_t ___bytesWritten_22;
	// System.Boolean Meta.WitAi.WitRequest::requestRequiresBody
	bool ___requestRequiresBody_23;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.WitRequest::onPartialResponse
	Action_1_t8956C826A49866445E54956164D36A98DE3362FF * ___onPartialResponse_24;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.WitRequest::onResponse
	Action_1_t8956C826A49866445E54956164D36A98DE3362FF * ___onResponse_25;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.WitRequest::onInputStreamReady
	Action_1_t8956C826A49866445E54956164D36A98DE3362FF * ___onInputStreamReady_26;
	// System.Action`1<System.String> Meta.WitAi.WitRequest::onRawResponse
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onRawResponse_27;
	// System.Action`1<System.String> Meta.WitAi.WitRequest::onPartialTranscription
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onPartialTranscription_28;
	// System.Action`1<System.String> Meta.WitAi.WitRequest::onFullTranscription
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onFullTranscription_29;
	// Meta.WitAi.WitRequest/OnCustomizeUriEvent Meta.WitAi.WitRequest::onCustomizeUri
	OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * ___onCustomizeUri_31;
	// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent Meta.WitAi.WitRequest::onProvideCustomHeaders
	OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * ___onProvideCustomHeaders_32;
	// Meta.WitAi.Data.AudioEncoding Meta.WitAi.WitRequest::audioEncoding
	AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * ___audioEncoding_33;
	// System.Int32 Meta.WitAi.WitRequest::statusCode
	int32_t ___statusCode_34;
	// System.String Meta.WitAi.WitRequest::statusDescription
	String_t* ___statusDescription_35;
	// System.Boolean Meta.WitAi.WitRequest::isRequestStreamActive
	bool ___isRequestStreamActive_36;
	// System.Boolean Meta.WitAi.WitRequest::isServerAuthRequired
	bool ___isServerAuthRequired_37;
	// System.Int32 Meta.WitAi.WitRequest::_timeoutMs
	int32_t ____timeoutMs_38;
	// System.Boolean Meta.WitAi.WitRequest::configurationRequired
	bool ___configurationRequired_39;
	// System.String Meta.WitAi.WitRequest::callingStackTrace
	String_t* ___callingStackTrace_40;
	// System.DateTime Meta.WitAi.WitRequest::requestStartTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___requestStartTime_41;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]> Meta.WitAi.WitRequest::writeBuffer
	ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 * ___writeBuffer_42;
	// Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.WitRequest::_performer
	CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F * ____performer_43;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Action> Meta.WitAi.WitRequest::_mainThreadCallbacks
	ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * ____mainThreadCallbacks_44;

public:
	inline static int32_t get_offset_of_configuration_7() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___configuration_7)); }
	inline RuntimeObject* get_configuration_7() const { return ___configuration_7; }
	inline RuntimeObject** get_address_of_configuration_7() { return &___configuration_7; }
	inline void set_configuration_7(RuntimeObject* value)
	{
		___configuration_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configuration_7), (void*)value);
	}

	inline static int32_t get_offset_of_shouldPost_8() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___shouldPost_8)); }
	inline bool get_shouldPost_8() const { return ___shouldPost_8; }
	inline bool* get_address_of_shouldPost_8() { return &___shouldPost_8; }
	inline void set_shouldPost_8(bool value)
	{
		___shouldPost_8 = value;
	}

	inline static int32_t get_offset_of_command_9() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___command_9)); }
	inline String_t* get_command_9() const { return ___command_9; }
	inline String_t** get_address_of_command_9() { return &___command_9; }
	inline void set_command_9(String_t* value)
	{
		___command_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___command_9), (void*)value);
	}

	inline static int32_t get_offset_of_path_10() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___path_10)); }
	inline String_t* get_path_10() const { return ___path_10; }
	inline String_t** get_address_of_path_10() { return &___path_10; }
	inline void set_path_10(String_t* value)
	{
		___path_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_10), (void*)value);
	}

	inline static int32_t get_offset_of_queryParams_11() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___queryParams_11)); }
	inline QueryParamU5BU5D_tC49DD13C0D037FF80FBDED054267C06217457CB3* get_queryParams_11() const { return ___queryParams_11; }
	inline QueryParamU5BU5D_tC49DD13C0D037FF80FBDED054267C06217457CB3** get_address_of_queryParams_11() { return &___queryParams_11; }
	inline void set_queryParams_11(QueryParamU5BU5D_tC49DD13C0D037FF80FBDED054267C06217457CB3* value)
	{
		___queryParams_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queryParams_11), (void*)value);
	}

	inline static int32_t get_offset_of__request_12() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____request_12)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get__request_12() const { return ____request_12; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of__request_12() { return &____request_12; }
	inline void set__request_12(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		____request_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____request_12), (void*)value);
	}

	inline static int32_t get_offset_of__writeStream_13() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____writeStream_13)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__writeStream_13() const { return ____writeStream_13; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__writeStream_13() { return &____writeStream_13; }
	inline void set__writeStream_13(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____writeStream_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writeStream_13), (void*)value);
	}

	inline static int32_t get_offset_of_responseData_14() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___responseData_14)); }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * get_responseData_14() const { return ___responseData_14; }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 ** get_address_of_responseData_14() { return &___responseData_14; }
	inline void set_responseData_14(WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * value)
	{
		___responseData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseData_14), (void*)value);
	}

	inline static int32_t get_offset_of_isActive_15() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___isActive_15)); }
	inline bool get_isActive_15() const { return ___isActive_15; }
	inline bool* get_address_of_isActive_15() { return &___isActive_15; }
	inline void set_isActive_15(bool value)
	{
		___isActive_15 = value;
	}

	inline static int32_t get_offset_of_responseStarted_16() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___responseStarted_16)); }
	inline bool get_responseStarted_16() const { return ___responseStarted_16; }
	inline bool* get_address_of_responseStarted_16() { return &___responseStarted_16; }
	inline void set_responseStarted_16(bool value)
	{
		___responseStarted_16 = value;
	}

	inline static int32_t get_offset_of_postData_17() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___postData_17)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_postData_17() const { return ___postData_17; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_postData_17() { return &___postData_17; }
	inline void set_postData_17(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___postData_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postData_17), (void*)value);
	}

	inline static int32_t get_offset_of_postContentType_18() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___postContentType_18)); }
	inline String_t* get_postContentType_18() const { return ___postContentType_18; }
	inline String_t** get_address_of_postContentType_18() { return &___postContentType_18; }
	inline void set_postContentType_18(String_t* value)
	{
		___postContentType_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postContentType_18), (void*)value);
	}

	inline static int32_t get_offset_of_requestIdOverride_19() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___requestIdOverride_19)); }
	inline String_t* get_requestIdOverride_19() const { return ___requestIdOverride_19; }
	inline String_t** get_address_of_requestIdOverride_19() { return &___requestIdOverride_19; }
	inline void set_requestIdOverride_19(String_t* value)
	{
		___requestIdOverride_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestIdOverride_19), (void*)value);
	}

	inline static int32_t get_offset_of_forcedHttpMethodType_20() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___forcedHttpMethodType_20)); }
	inline String_t* get_forcedHttpMethodType_20() const { return ___forcedHttpMethodType_20; }
	inline String_t** get_address_of_forcedHttpMethodType_20() { return &___forcedHttpMethodType_20; }
	inline void set_forcedHttpMethodType_20(String_t* value)
	{
		___forcedHttpMethodType_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forcedHttpMethodType_20), (void*)value);
	}

	inline static int32_t get_offset_of_streamLock_21() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___streamLock_21)); }
	inline RuntimeObject * get_streamLock_21() const { return ___streamLock_21; }
	inline RuntimeObject ** get_address_of_streamLock_21() { return &___streamLock_21; }
	inline void set_streamLock_21(RuntimeObject * value)
	{
		___streamLock_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___streamLock_21), (void*)value);
	}

	inline static int32_t get_offset_of_bytesWritten_22() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___bytesWritten_22)); }
	inline int32_t get_bytesWritten_22() const { return ___bytesWritten_22; }
	inline int32_t* get_address_of_bytesWritten_22() { return &___bytesWritten_22; }
	inline void set_bytesWritten_22(int32_t value)
	{
		___bytesWritten_22 = value;
	}

	inline static int32_t get_offset_of_requestRequiresBody_23() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___requestRequiresBody_23)); }
	inline bool get_requestRequiresBody_23() const { return ___requestRequiresBody_23; }
	inline bool* get_address_of_requestRequiresBody_23() { return &___requestRequiresBody_23; }
	inline void set_requestRequiresBody_23(bool value)
	{
		___requestRequiresBody_23 = value;
	}

	inline static int32_t get_offset_of_onPartialResponse_24() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onPartialResponse_24)); }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF * get_onPartialResponse_24() const { return ___onPartialResponse_24; }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF ** get_address_of_onPartialResponse_24() { return &___onPartialResponse_24; }
	inline void set_onPartialResponse_24(Action_1_t8956C826A49866445E54956164D36A98DE3362FF * value)
	{
		___onPartialResponse_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPartialResponse_24), (void*)value);
	}

	inline static int32_t get_offset_of_onResponse_25() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onResponse_25)); }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF * get_onResponse_25() const { return ___onResponse_25; }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF ** get_address_of_onResponse_25() { return &___onResponse_25; }
	inline void set_onResponse_25(Action_1_t8956C826A49866445E54956164D36A98DE3362FF * value)
	{
		___onResponse_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onResponse_25), (void*)value);
	}

	inline static int32_t get_offset_of_onInputStreamReady_26() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onInputStreamReady_26)); }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF * get_onInputStreamReady_26() const { return ___onInputStreamReady_26; }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF ** get_address_of_onInputStreamReady_26() { return &___onInputStreamReady_26; }
	inline void set_onInputStreamReady_26(Action_1_t8956C826A49866445E54956164D36A98DE3362FF * value)
	{
		___onInputStreamReady_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onInputStreamReady_26), (void*)value);
	}

	inline static int32_t get_offset_of_onRawResponse_27() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onRawResponse_27)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onRawResponse_27() const { return ___onRawResponse_27; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onRawResponse_27() { return &___onRawResponse_27; }
	inline void set_onRawResponse_27(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onRawResponse_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRawResponse_27), (void*)value);
	}

	inline static int32_t get_offset_of_onPartialTranscription_28() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onPartialTranscription_28)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onPartialTranscription_28() const { return ___onPartialTranscription_28; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onPartialTranscription_28() { return &___onPartialTranscription_28; }
	inline void set_onPartialTranscription_28(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onPartialTranscription_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPartialTranscription_28), (void*)value);
	}

	inline static int32_t get_offset_of_onFullTranscription_29() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onFullTranscription_29)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onFullTranscription_29() const { return ___onFullTranscription_29; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onFullTranscription_29() { return &___onFullTranscription_29; }
	inline void set_onFullTranscription_29(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onFullTranscription_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFullTranscription_29), (void*)value);
	}

	inline static int32_t get_offset_of_onCustomizeUri_31() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onCustomizeUri_31)); }
	inline OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * get_onCustomizeUri_31() const { return ___onCustomizeUri_31; }
	inline OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 ** get_address_of_onCustomizeUri_31() { return &___onCustomizeUri_31; }
	inline void set_onCustomizeUri_31(OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * value)
	{
		___onCustomizeUri_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCustomizeUri_31), (void*)value);
	}

	inline static int32_t get_offset_of_onProvideCustomHeaders_32() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onProvideCustomHeaders_32)); }
	inline OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * get_onProvideCustomHeaders_32() const { return ___onProvideCustomHeaders_32; }
	inline OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB ** get_address_of_onProvideCustomHeaders_32() { return &___onProvideCustomHeaders_32; }
	inline void set_onProvideCustomHeaders_32(OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * value)
	{
		___onProvideCustomHeaders_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onProvideCustomHeaders_32), (void*)value);
	}

	inline static int32_t get_offset_of_audioEncoding_33() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___audioEncoding_33)); }
	inline AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * get_audioEncoding_33() const { return ___audioEncoding_33; }
	inline AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C ** get_address_of_audioEncoding_33() { return &___audioEncoding_33; }
	inline void set_audioEncoding_33(AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * value)
	{
		___audioEncoding_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioEncoding_33), (void*)value);
	}

	inline static int32_t get_offset_of_statusCode_34() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___statusCode_34)); }
	inline int32_t get_statusCode_34() const { return ___statusCode_34; }
	inline int32_t* get_address_of_statusCode_34() { return &___statusCode_34; }
	inline void set_statusCode_34(int32_t value)
	{
		___statusCode_34 = value;
	}

	inline static int32_t get_offset_of_statusDescription_35() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___statusDescription_35)); }
	inline String_t* get_statusDescription_35() const { return ___statusDescription_35; }
	inline String_t** get_address_of_statusDescription_35() { return &___statusDescription_35; }
	inline void set_statusDescription_35(String_t* value)
	{
		___statusDescription_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statusDescription_35), (void*)value);
	}

	inline static int32_t get_offset_of_isRequestStreamActive_36() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___isRequestStreamActive_36)); }
	inline bool get_isRequestStreamActive_36() const { return ___isRequestStreamActive_36; }
	inline bool* get_address_of_isRequestStreamActive_36() { return &___isRequestStreamActive_36; }
	inline void set_isRequestStreamActive_36(bool value)
	{
		___isRequestStreamActive_36 = value;
	}

	inline static int32_t get_offset_of_isServerAuthRequired_37() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___isServerAuthRequired_37)); }
	inline bool get_isServerAuthRequired_37() const { return ___isServerAuthRequired_37; }
	inline bool* get_address_of_isServerAuthRequired_37() { return &___isServerAuthRequired_37; }
	inline void set_isServerAuthRequired_37(bool value)
	{
		___isServerAuthRequired_37 = value;
	}

	inline static int32_t get_offset_of__timeoutMs_38() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____timeoutMs_38)); }
	inline int32_t get__timeoutMs_38() const { return ____timeoutMs_38; }
	inline int32_t* get_address_of__timeoutMs_38() { return &____timeoutMs_38; }
	inline void set__timeoutMs_38(int32_t value)
	{
		____timeoutMs_38 = value;
	}

	inline static int32_t get_offset_of_configurationRequired_39() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___configurationRequired_39)); }
	inline bool get_configurationRequired_39() const { return ___configurationRequired_39; }
	inline bool* get_address_of_configurationRequired_39() { return &___configurationRequired_39; }
	inline void set_configurationRequired_39(bool value)
	{
		___configurationRequired_39 = value;
	}

	inline static int32_t get_offset_of_callingStackTrace_40() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___callingStackTrace_40)); }
	inline String_t* get_callingStackTrace_40() const { return ___callingStackTrace_40; }
	inline String_t** get_address_of_callingStackTrace_40() { return &___callingStackTrace_40; }
	inline void set_callingStackTrace_40(String_t* value)
	{
		___callingStackTrace_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callingStackTrace_40), (void*)value);
	}

	inline static int32_t get_offset_of_requestStartTime_41() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___requestStartTime_41)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_requestStartTime_41() const { return ___requestStartTime_41; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_requestStartTime_41() { return &___requestStartTime_41; }
	inline void set_requestStartTime_41(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___requestStartTime_41 = value;
	}

	inline static int32_t get_offset_of_writeBuffer_42() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___writeBuffer_42)); }
	inline ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 * get_writeBuffer_42() const { return ___writeBuffer_42; }
	inline ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 ** get_address_of_writeBuffer_42() { return &___writeBuffer_42; }
	inline void set_writeBuffer_42(ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 * value)
	{
		___writeBuffer_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeBuffer_42), (void*)value);
	}

	inline static int32_t get_offset_of__performer_43() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____performer_43)); }
	inline CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F * get__performer_43() const { return ____performer_43; }
	inline CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F ** get_address_of__performer_43() { return &____performer_43; }
	inline void set__performer_43(CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F * value)
	{
		____performer_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____performer_43), (void*)value);
	}

	inline static int32_t get_offset_of__mainThreadCallbacks_44() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____mainThreadCallbacks_44)); }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * get__mainThreadCallbacks_44() const { return ____mainThreadCallbacks_44; }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE ** get_address_of__mainThreadCallbacks_44() { return &____mainThreadCallbacks_44; }
	inline void set__mainThreadCallbacks_44(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * value)
	{
		____mainThreadCallbacks_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainThreadCallbacks_44), (void*)value);
	}
};

struct WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D_StaticFields
{
public:
	// Meta.WitAi.WitRequest/PreSendRequestDelegate Meta.WitAi.WitRequest::onPreSendRequest
	PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * ___onPreSendRequest_30;

public:
	inline static int32_t get_offset_of_onPreSendRequest_30() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D_StaticFields, ___onPreSendRequest_30)); }
	inline PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * get_onPreSendRequest_30() const { return ___onPreSendRequest_30; }
	inline PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B ** get_address_of_onPreSendRequest_30() { return &___onPreSendRequest_30; }
	inline void set_onPreSendRequest_30(PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * value)
	{
		___onPreSendRequest_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreSendRequest_30), (void*)value);
	}
};


// Meta.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759  : public UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015
{
public:

public:
};


// Meta.WitAi.Events.WitResponseEvent
struct WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705  : public UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C
{
public:

public:
};


// Meta.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// Oculus.Voice.Demo.UIShapesDemo.Instructions/Step
struct Step_tE3B9639B7D0A1C67F35EA44B599C56025BDF5DF9 
{
public:
	// System.Int32 Oculus.Voice.Demo.UIShapesDemo.Instructions/Step::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Step_tE3B9639B7D0A1C67F35EA44B599C56025BDF5DF9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Voice.Demo.LightTraitsDemo.LightToggler/LightState
struct LightState_tC4100BA801E62B356C33A7A964AA4E5831BA11F8 
{
public:
	// System.Int32 Oculus.Voice.Demo.LightTraitsDemo.LightToggler/LightState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightState_tC4100BA801E62B356C33A7A964AA4E5831BA11F8, ___value___2)); }
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


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F 
{
public:
	// System.String Meta.WitAi.Data.Info.WitAppInfo::name
	String_t* ___name_0;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lang
	String_t* ___lang_2;
	// System.Boolean Meta.WitAi.Data.Info.WitAppInfo::isPrivate
	bool ___isPrivate_3;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::createdAt
	String_t* ___createdAt_4;
	// Meta.WitAi.Data.Info.WitAppTrainingStatus Meta.WitAi.Data.Info.WitAppInfo::trainingStatus
	int32_t ___trainingStatus_5;
	// System.Int32 Meta.WitAi.Data.Info.WitAppInfo::lastTrainDuration
	int32_t ___lastTrainDuration_6;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lastTrainedAt
	String_t* ___lastTrainedAt_7;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::nextTrainAt
	String_t* ___nextTrainAt_8;
	// Meta.WitAi.Data.Info.WitIntentInfo[] Meta.WitAi.Data.Info.WitAppInfo::intents
	WitIntentInfoU5BU5D_t907483605F080B17229D8E2F5CC2F3C9327739DB* ___intents_9;
	// Meta.WitAi.Data.Info.WitEntityInfo[] Meta.WitAi.Data.Info.WitAppInfo::entities
	WitEntityInfoU5BU5D_tF35266071D8F3C655816FAFED44519D56A649835* ___entities_10;
	// Meta.WitAi.Data.Info.WitTraitInfo[] Meta.WitAi.Data.Info.WitAppInfo::traits
	WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5* ___traits_11;
	// Meta.WitAi.Data.Info.WitVoiceInfo[] Meta.WitAi.Data.Info.WitAppInfo::voices
	WitVoiceInfoU5BU5D_t6945BFE4B715F90280C64B87231A49D3145E1282* ___voices_12;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}

	inline static int32_t get_offset_of_lang_2() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___lang_2)); }
	inline String_t* get_lang_2() const { return ___lang_2; }
	inline String_t** get_address_of_lang_2() { return &___lang_2; }
	inline void set_lang_2(String_t* value)
	{
		___lang_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lang_2), (void*)value);
	}

	inline static int32_t get_offset_of_isPrivate_3() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___isPrivate_3)); }
	inline bool get_isPrivate_3() const { return ___isPrivate_3; }
	inline bool* get_address_of_isPrivate_3() { return &___isPrivate_3; }
	inline void set_isPrivate_3(bool value)
	{
		___isPrivate_3 = value;
	}

	inline static int32_t get_offset_of_createdAt_4() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___createdAt_4)); }
	inline String_t* get_createdAt_4() const { return ___createdAt_4; }
	inline String_t** get_address_of_createdAt_4() { return &___createdAt_4; }
	inline void set_createdAt_4(String_t* value)
	{
		___createdAt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createdAt_4), (void*)value);
	}

	inline static int32_t get_offset_of_trainingStatus_5() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___trainingStatus_5)); }
	inline int32_t get_trainingStatus_5() const { return ___trainingStatus_5; }
	inline int32_t* get_address_of_trainingStatus_5() { return &___trainingStatus_5; }
	inline void set_trainingStatus_5(int32_t value)
	{
		___trainingStatus_5 = value;
	}

	inline static int32_t get_offset_of_lastTrainDuration_6() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___lastTrainDuration_6)); }
	inline int32_t get_lastTrainDuration_6() const { return ___lastTrainDuration_6; }
	inline int32_t* get_address_of_lastTrainDuration_6() { return &___lastTrainDuration_6; }
	inline void set_lastTrainDuration_6(int32_t value)
	{
		___lastTrainDuration_6 = value;
	}

	inline static int32_t get_offset_of_lastTrainedAt_7() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___lastTrainedAt_7)); }
	inline String_t* get_lastTrainedAt_7() const { return ___lastTrainedAt_7; }
	inline String_t** get_address_of_lastTrainedAt_7() { return &___lastTrainedAt_7; }
	inline void set_lastTrainedAt_7(String_t* value)
	{
		___lastTrainedAt_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastTrainedAt_7), (void*)value);
	}

	inline static int32_t get_offset_of_nextTrainAt_8() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___nextTrainAt_8)); }
	inline String_t* get_nextTrainAt_8() const { return ___nextTrainAt_8; }
	inline String_t** get_address_of_nextTrainAt_8() { return &___nextTrainAt_8; }
	inline void set_nextTrainAt_8(String_t* value)
	{
		___nextTrainAt_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextTrainAt_8), (void*)value);
	}

	inline static int32_t get_offset_of_intents_9() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___intents_9)); }
	inline WitIntentInfoU5BU5D_t907483605F080B17229D8E2F5CC2F3C9327739DB* get_intents_9() const { return ___intents_9; }
	inline WitIntentInfoU5BU5D_t907483605F080B17229D8E2F5CC2F3C9327739DB** get_address_of_intents_9() { return &___intents_9; }
	inline void set_intents_9(WitIntentInfoU5BU5D_t907483605F080B17229D8E2F5CC2F3C9327739DB* value)
	{
		___intents_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___intents_9), (void*)value);
	}

	inline static int32_t get_offset_of_entities_10() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___entities_10)); }
	inline WitEntityInfoU5BU5D_tF35266071D8F3C655816FAFED44519D56A649835* get_entities_10() const { return ___entities_10; }
	inline WitEntityInfoU5BU5D_tF35266071D8F3C655816FAFED44519D56A649835** get_address_of_entities_10() { return &___entities_10; }
	inline void set_entities_10(WitEntityInfoU5BU5D_tF35266071D8F3C655816FAFED44519D56A649835* value)
	{
		___entities_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entities_10), (void*)value);
	}

	inline static int32_t get_offset_of_traits_11() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___traits_11)); }
	inline WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5* get_traits_11() const { return ___traits_11; }
	inline WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5** get_address_of_traits_11() { return &___traits_11; }
	inline void set_traits_11(WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5* value)
	{
		___traits_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___traits_11), (void*)value);
	}

	inline static int32_t get_offset_of_voices_12() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___voices_12)); }
	inline WitVoiceInfoU5BU5D_t6945BFE4B715F90280C64B87231A49D3145E1282* get_voices_12() const { return ___voices_12; }
	inline WitVoiceInfoU5BU5D_t6945BFE4B715F90280C64B87231A49D3145E1282** get_address_of_voices_12() { return &___voices_12; }
	inline void set_voices_12(WitVoiceInfoU5BU5D_t6945BFE4B715F90280C64B87231A49D3145E1282* value)
	{
		___voices_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voices_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
	char* ___lang_2;
	int32_t ___isPrivate_3;
	char* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	char* ___lastTrainedAt_7;
	char* ___nextTrainAt_8;
	WitIntentInfo_t4B4BFE3F8E57C8AD2521619DBF59EACC73CCD320_marshaled_pinvoke* ___intents_9;
	WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1_marshaled_pinvoke* ___entities_10;
	WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5* ___traits_11;
	WitVoiceInfo_tF5D8D9777CC854E844F0080BEF2773CD586D81F6_marshaled_pinvoke* ___voices_12;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
	Il2CppChar* ___lang_2;
	int32_t ___isPrivate_3;
	Il2CppChar* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	Il2CppChar* ___lastTrainedAt_7;
	Il2CppChar* ___nextTrainAt_8;
	WitIntentInfo_t4B4BFE3F8E57C8AD2521619DBF59EACC73CCD320_marshaled_com* ___intents_9;
	WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1_marshaled_com* ___entities_10;
	WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5* ___traits_11;
	WitVoiceInfo_tF5D8D9777CC854E844F0080BEF2773CD586D81F6_marshaled_com* ___voices_12;
};

// System.Action`1<UnityEngine.Renderer>
struct Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<UnityEngine.Renderer,UnityEngine.Color>
struct Action_2_tDD41BF9527852576A44BA15E01C3429A9A570526  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<Oculus.Voice.Demo.ColorOverride>
struct Predicate_1_tC6D65BBAC452AF0762A8FF6E76272DB772374484  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<UnityEngine.Renderer>
struct Predicate_1_t58D599511F2F3E1464A13143153C4F4026C73237  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<Meta.WitAi.WitRequest>
struct UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>
struct UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.String,System.String>
struct UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC  : public MulticastDelegate_t
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_clientAccessToken
	String_t* ____clientAccessToken_4;
	// Meta.WitAi.Data.Info.WitAppInfo Meta.WitAi.Data.Configuration.WitConfiguration::_appInfo
	WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F  ____appInfo_5;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_configurationId
	String_t* ____configurationId_6;
	// System.Int32 Meta.WitAi.Data.Configuration.WitConfiguration::timeoutMS
	int32_t ___timeoutMS_7;
	// Meta.WitAi.Configuration.WitEndpointConfig Meta.WitAi.Data.Configuration.WitConfiguration::endpointConfiguration
	WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F * ___endpointConfiguration_8;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::isDemoOnly
	bool ___isDemoOnly_9;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::useConduit
	bool ___useConduit_10;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_manifestLocalPath
	String_t* ____manifestLocalPath_11;
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Data.Configuration.WitConfiguration::excludedAssemblies
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___excludedAssemblies_12;

public:
	inline static int32_t get_offset_of__clientAccessToken_4() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ____clientAccessToken_4)); }
	inline String_t* get__clientAccessToken_4() const { return ____clientAccessToken_4; }
	inline String_t** get_address_of__clientAccessToken_4() { return &____clientAccessToken_4; }
	inline void set__clientAccessToken_4(String_t* value)
	{
		____clientAccessToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clientAccessToken_4), (void*)value);
	}

	inline static int32_t get_offset_of__appInfo_5() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ____appInfo_5)); }
	inline WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F  get__appInfo_5() const { return ____appInfo_5; }
	inline WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F * get_address_of__appInfo_5() { return &____appInfo_5; }
	inline void set__appInfo_5(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F  value)
	{
		____appInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___id_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___lang_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___createdAt_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___lastTrainedAt_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___nextTrainAt_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___intents_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___entities_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___traits_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___voices_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__configurationId_6() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ____configurationId_6)); }
	inline String_t* get__configurationId_6() const { return ____configurationId_6; }
	inline String_t** get_address_of__configurationId_6() { return &____configurationId_6; }
	inline void set__configurationId_6(String_t* value)
	{
		____configurationId_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____configurationId_6), (void*)value);
	}

	inline static int32_t get_offset_of_timeoutMS_7() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___timeoutMS_7)); }
	inline int32_t get_timeoutMS_7() const { return ___timeoutMS_7; }
	inline int32_t* get_address_of_timeoutMS_7() { return &___timeoutMS_7; }
	inline void set_timeoutMS_7(int32_t value)
	{
		___timeoutMS_7 = value;
	}

	inline static int32_t get_offset_of_endpointConfiguration_8() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___endpointConfiguration_8)); }
	inline WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F * get_endpointConfiguration_8() const { return ___endpointConfiguration_8; }
	inline WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F ** get_address_of_endpointConfiguration_8() { return &___endpointConfiguration_8; }
	inline void set_endpointConfiguration_8(WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F * value)
	{
		___endpointConfiguration_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endpointConfiguration_8), (void*)value);
	}

	inline static int32_t get_offset_of_isDemoOnly_9() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___isDemoOnly_9)); }
	inline bool get_isDemoOnly_9() const { return ___isDemoOnly_9; }
	inline bool* get_address_of_isDemoOnly_9() { return &___isDemoOnly_9; }
	inline void set_isDemoOnly_9(bool value)
	{
		___isDemoOnly_9 = value;
	}

	inline static int32_t get_offset_of_useConduit_10() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___useConduit_10)); }
	inline bool get_useConduit_10() const { return ___useConduit_10; }
	inline bool* get_address_of_useConduit_10() { return &___useConduit_10; }
	inline void set_useConduit_10(bool value)
	{
		___useConduit_10 = value;
	}

	inline static int32_t get_offset_of__manifestLocalPath_11() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ____manifestLocalPath_11)); }
	inline String_t* get__manifestLocalPath_11() const { return ____manifestLocalPath_11; }
	inline String_t** get_address_of__manifestLocalPath_11() { return &____manifestLocalPath_11; }
	inline void set__manifestLocalPath_11(String_t* value)
	{
		____manifestLocalPath_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____manifestLocalPath_11), (void*)value);
	}

	inline static int32_t get_offset_of_excludedAssemblies_12() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___excludedAssemblies_12)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_excludedAssemblies_12() const { return ___excludedAssemblies_12; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_excludedAssemblies_12() { return &___excludedAssemblies_12; }
	inline void set_excludedAssemblies_12(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___excludedAssemblies_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___excludedAssemblies_12), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Oculus.Voice.Demo.LightTraitsDemo.ActivateButton
struct ActivateButton_t2211FEBF2AB632CB1AF25B56240266F39B0FF21E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Oculus.Voice.Demo.LightTraitsDemo.ActivateButton::_active
	bool ____active_4;
	// Oculus.Voice.AppVoiceExperience Oculus.Voice.Demo.LightTraitsDemo.ActivateButton::appVoiceExperience
	AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * ___appVoiceExperience_5;
	// UnityEngine.UI.Text Oculus.Voice.Demo.LightTraitsDemo.ActivateButton::_buttonLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____buttonLabel_6;

public:
	inline static int32_t get_offset_of__active_4() { return static_cast<int32_t>(offsetof(ActivateButton_t2211FEBF2AB632CB1AF25B56240266F39B0FF21E, ____active_4)); }
	inline bool get__active_4() const { return ____active_4; }
	inline bool* get_address_of__active_4() { return &____active_4; }
	inline void set__active_4(bool value)
	{
		____active_4 = value;
	}

	inline static int32_t get_offset_of_appVoiceExperience_5() { return static_cast<int32_t>(offsetof(ActivateButton_t2211FEBF2AB632CB1AF25B56240266F39B0FF21E, ___appVoiceExperience_5)); }
	inline AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * get_appVoiceExperience_5() const { return ___appVoiceExperience_5; }
	inline AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 ** get_address_of_appVoiceExperience_5() { return &___appVoiceExperience_5; }
	inline void set_appVoiceExperience_5(AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * value)
	{
		___appVoiceExperience_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appVoiceExperience_5), (void*)value);
	}

	inline static int32_t get_offset_of__buttonLabel_6() { return static_cast<int32_t>(offsetof(ActivateButton_t2211FEBF2AB632CB1AF25B56240266F39B0FF21E, ____buttonLabel_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__buttonLabel_6() const { return ____buttonLabel_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__buttonLabel_6() { return &____buttonLabel_6; }
	inline void set__buttonLabel_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____buttonLabel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buttonLabel_6), (void*)value);
	}
};


// Oculus.Voice.Demo.ButtonEventWatcher
struct ButtonEventWatcher_t9C89DF1FEB93786FA968A3E0AF58652813C862DE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.KeyCode[] Oculus.Voice.Demo.ButtonEventWatcher::_keys
	KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* ____keys_4;
	// UnityEngine.Events.UnityEvent Oculus.Voice.Demo.ButtonEventWatcher::OnButtonDown
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnButtonDown_5;
	// UnityEngine.Events.UnityEvent Oculus.Voice.Demo.ButtonEventWatcher::OnButtonUp
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnButtonUp_6;

public:
	inline static int32_t get_offset_of__keys_4() { return static_cast<int32_t>(offsetof(ButtonEventWatcher_t9C89DF1FEB93786FA968A3E0AF58652813C862DE, ____keys_4)); }
	inline KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* get__keys_4() const { return ____keys_4; }
	inline KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871** get_address_of__keys_4() { return &____keys_4; }
	inline void set__keys_4(KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* value)
	{
		____keys_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keys_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnButtonDown_5() { return static_cast<int32_t>(offsetof(ButtonEventWatcher_t9C89DF1FEB93786FA968A3E0AF58652813C862DE, ___OnButtonDown_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnButtonDown_5() const { return ___OnButtonDown_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnButtonDown_5() { return &___OnButtonDown_5; }
	inline void set_OnButtonDown_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnButtonDown_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnButtonDown_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnButtonUp_6() { return static_cast<int32_t>(offsetof(ButtonEventWatcher_t9C89DF1FEB93786FA968A3E0AF58652813C862DE, ___OnButtonUp_6)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnButtonUp_6() const { return ___OnButtonUp_6; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnButtonUp_6() { return &___OnButtonUp_6; }
	inline void set_OnButtonUp_6(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnButtonUp_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnButtonUp_6), (void*)value);
	}
};


// Oculus.Voice.Demo.UIShapesDemo.ColorChanger
struct ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Oculus.Voice.Demo.UIShapesDemo.Instructions
struct Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Oculus.Voice.Demo.UIShapesDemo.Instructions::instructionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___instructionText_5;
	// Oculus.Voice.Demo.UIShapesDemo.Instructions/Step Oculus.Voice.Demo.UIShapesDemo.Instructions::currentStep
	int32_t ___currentStep_6;

public:
	inline static int32_t get_offset_of_instructionText_5() { return static_cast<int32_t>(offsetof(Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5, ___instructionText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_instructionText_5() const { return ___instructionText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_instructionText_5() { return &___instructionText_5; }
	inline void set_instructionText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___instructionText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instructionText_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentStep_6() { return static_cast<int32_t>(offsetof(Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5, ___currentStep_6)); }
	inline int32_t get_currentStep_6() const { return ___currentStep_6; }
	inline int32_t* get_address_of_currentStep_6() { return &___currentStep_6; }
	inline void set_currentStep_6(int32_t value)
	{
		___currentStep_6 = value;
	}
};

struct Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_StaticFields
{
public:
	// System.String[] Oculus.Voice.Demo.UIShapesDemo.Instructions::steps
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___steps_4;

public:
	inline static int32_t get_offset_of_steps_4() { return static_cast<int32_t>(offsetof(Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_StaticFields, ___steps_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_steps_4() const { return ___steps_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_steps_4() { return &___steps_4; }
	inline void set_steps_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___steps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___steps_4), (void*)value);
	}
};


// Oculus.Voice.Demo.InteractionHandler
struct InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Oculus.Voice.Demo.InteractionHandler::freshStateText
	String_t* ___freshStateText_4;
	// UnityEngine.UI.Text Oculus.Voice.Demo.InteractionHandler::textArea
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textArea_5;
	// System.Boolean Oculus.Voice.Demo.InteractionHandler::showJson
	bool ___showJson_6;
	// Oculus.Voice.AppVoiceExperience Oculus.Voice.Demo.InteractionHandler::appVoiceExperience
	AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * ___appVoiceExperience_7;
	// System.Boolean Oculus.Voice.Demo.InteractionHandler::_active
	bool ____active_8;

public:
	inline static int32_t get_offset_of_freshStateText_4() { return static_cast<int32_t>(offsetof(InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03, ___freshStateText_4)); }
	inline String_t* get_freshStateText_4() const { return ___freshStateText_4; }
	inline String_t** get_address_of_freshStateText_4() { return &___freshStateText_4; }
	inline void set_freshStateText_4(String_t* value)
	{
		___freshStateText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___freshStateText_4), (void*)value);
	}

	inline static int32_t get_offset_of_textArea_5() { return static_cast<int32_t>(offsetof(InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03, ___textArea_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textArea_5() const { return ___textArea_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textArea_5() { return &___textArea_5; }
	inline void set_textArea_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textArea_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textArea_5), (void*)value);
	}

	inline static int32_t get_offset_of_showJson_6() { return static_cast<int32_t>(offsetof(InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03, ___showJson_6)); }
	inline bool get_showJson_6() const { return ___showJson_6; }
	inline bool* get_address_of_showJson_6() { return &___showJson_6; }
	inline void set_showJson_6(bool value)
	{
		___showJson_6 = value;
	}

	inline static int32_t get_offset_of_appVoiceExperience_7() { return static_cast<int32_t>(offsetof(InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03, ___appVoiceExperience_7)); }
	inline AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * get_appVoiceExperience_7() const { return ___appVoiceExperience_7; }
	inline AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 ** get_address_of_appVoiceExperience_7() { return &___appVoiceExperience_7; }
	inline void set_appVoiceExperience_7(AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * value)
	{
		___appVoiceExperience_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appVoiceExperience_7), (void*)value);
	}

	inline static int32_t get_offset_of__active_8() { return static_cast<int32_t>(offsetof(InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03, ____active_8)); }
	inline bool get__active_8() const { return ____active_8; }
	inline bool* get_address_of__active_8() { return &____active_8; }
	inline void set__active_8(bool value)
	{
		____active_8 = value;
	}
};


// Oculus.Voice.Demo.LightTraitsDemo.LightToggler
struct LightToggler_tC5145942CCFBA6A3CD13B50B4B5049667A13A504  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Oculus.Voice.Demo.LightTraitsDemo.LightToggler/LightState Oculus.Voice.Demo.LightTraitsDemo.LightToggler::_lightState
	int32_t ____lightState_6;
	// UnityEngine.Material Oculus.Voice.Demo.LightTraitsDemo.LightToggler::_material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____material_7;
	// UnityEngine.Color Oculus.Voice.Demo.LightTraitsDemo.LightToggler::_offColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____offColor_8;
	// UnityEngine.Color Oculus.Voice.Demo.LightTraitsDemo.LightToggler::_onColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____onColor_9;

public:
	inline static int32_t get_offset_of__lightState_6() { return static_cast<int32_t>(offsetof(LightToggler_tC5145942CCFBA6A3CD13B50B4B5049667A13A504, ____lightState_6)); }
	inline int32_t get__lightState_6() const { return ____lightState_6; }
	inline int32_t* get_address_of__lightState_6() { return &____lightState_6; }
	inline void set__lightState_6(int32_t value)
	{
		____lightState_6 = value;
	}

	inline static int32_t get_offset_of__material_7() { return static_cast<int32_t>(offsetof(LightToggler_tC5145942CCFBA6A3CD13B50B4B5049667A13A504, ____material_7)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__material_7() const { return ____material_7; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__material_7() { return &____material_7; }
	inline void set__material_7(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____material_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____material_7), (void*)value);
	}

	inline static int32_t get_offset_of__offColor_8() { return static_cast<int32_t>(offsetof(LightToggler_tC5145942CCFBA6A3CD13B50B4B5049667A13A504, ____offColor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__offColor_8() const { return ____offColor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__offColor_8() { return &____offColor_8; }
	inline void set__offColor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____offColor_8 = value;
	}

	inline static int32_t get_offset_of__onColor_9() { return static_cast<int32_t>(offsetof(LightToggler_tC5145942CCFBA6A3CD13B50B4B5049667A13A504, ____onColor_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__onColor_9() const { return ____onColor_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__onColor_9() { return &____onColor_9; }
	inline void set__onColor_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____onColor_9 = value;
	}
};


// Oculus.Voice.Demo.UIShapesDemo.ParallelTranscriptHandler
struct ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String[] Oculus.Voice.Demo.UIShapesDemo.ParallelTranscriptHandler::_requests
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____requests_4;
	// Meta.WitAi.VoiceService Oculus.Voice.Demo.UIShapesDemo.ParallelTranscriptHandler::_voiceService
	VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * ____voiceService_5;

public:
	inline static int32_t get_offset_of__requests_4() { return static_cast<int32_t>(offsetof(ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC, ____requests_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__requests_4() const { return ____requests_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__requests_4() { return &____requests_4; }
	inline void set__requests_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____requests_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____requests_4), (void*)value);
	}

	inline static int32_t get_offset_of__voiceService_5() { return static_cast<int32_t>(offsetof(ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC, ____voiceService_5)); }
	inline VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * get__voiceService_5() const { return ____voiceService_5; }
	inline VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D ** get_address_of__voiceService_5() { return &____voiceService_5; }
	inline void set__voiceService_5(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * value)
	{
		____voiceService_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____voiceService_5), (void*)value);
	}
};


// Oculus.Voice.Demo.ShortResponseColorHandler
struct ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Oculus.Voice.Demo.ShortResponseColorHandler::_shapeContainer
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____shapeContainer_4;
	// UnityEngine.Renderer[] Oculus.Voice.Demo.ShortResponseColorHandler::_shapes
	RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* ____shapes_5;
	// System.Int32 Oculus.Voice.Demo.ShortResponseColorHandler::_shapeSelected
	int32_t ____shapeSelected_6;
	// System.Action`1<UnityEngine.Renderer> Oculus.Voice.Demo.ShortResponseColorHandler::OnShapeSelected
	Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 * ___OnShapeSelected_7;
	// Oculus.Voice.Demo.ColorOverride[] Oculus.Voice.Demo.ShortResponseColorHandler::_colorOverride
	ColorOverrideU5BU5D_t954B9F311E1E955135B1DE9F8BB97484D9873A82* ____colorOverride_8;
	// System.Action`2<UnityEngine.Renderer,UnityEngine.Color> Oculus.Voice.Demo.ShortResponseColorHandler::OnShapeColorChanged
	Action_2_tDD41BF9527852576A44BA15E01C3429A9A570526 * ___OnShapeColorChanged_9;

public:
	inline static int32_t get_offset_of__shapeContainer_4() { return static_cast<int32_t>(offsetof(ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7, ____shapeContainer_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__shapeContainer_4() const { return ____shapeContainer_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__shapeContainer_4() { return &____shapeContainer_4; }
	inline void set__shapeContainer_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____shapeContainer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shapeContainer_4), (void*)value);
	}

	inline static int32_t get_offset_of__shapes_5() { return static_cast<int32_t>(offsetof(ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7, ____shapes_5)); }
	inline RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* get__shapes_5() const { return ____shapes_5; }
	inline RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7** get_address_of__shapes_5() { return &____shapes_5; }
	inline void set__shapes_5(RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* value)
	{
		____shapes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shapes_5), (void*)value);
	}

	inline static int32_t get_offset_of__shapeSelected_6() { return static_cast<int32_t>(offsetof(ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7, ____shapeSelected_6)); }
	inline int32_t get__shapeSelected_6() const { return ____shapeSelected_6; }
	inline int32_t* get_address_of__shapeSelected_6() { return &____shapeSelected_6; }
	inline void set__shapeSelected_6(int32_t value)
	{
		____shapeSelected_6 = value;
	}

	inline static int32_t get_offset_of_OnShapeSelected_7() { return static_cast<int32_t>(offsetof(ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7, ___OnShapeSelected_7)); }
	inline Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 * get_OnShapeSelected_7() const { return ___OnShapeSelected_7; }
	inline Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 ** get_address_of_OnShapeSelected_7() { return &___OnShapeSelected_7; }
	inline void set_OnShapeSelected_7(Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 * value)
	{
		___OnShapeSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnShapeSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of__colorOverride_8() { return static_cast<int32_t>(offsetof(ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7, ____colorOverride_8)); }
	inline ColorOverrideU5BU5D_t954B9F311E1E955135B1DE9F8BB97484D9873A82* get__colorOverride_8() const { return ____colorOverride_8; }
	inline ColorOverrideU5BU5D_t954B9F311E1E955135B1DE9F8BB97484D9873A82** get_address_of__colorOverride_8() { return &____colorOverride_8; }
	inline void set__colorOverride_8(ColorOverrideU5BU5D_t954B9F311E1E955135B1DE9F8BB97484D9873A82* value)
	{
		____colorOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnShapeColorChanged_9() { return static_cast<int32_t>(offsetof(ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7, ___OnShapeColorChanged_9)); }
	inline Action_2_tDD41BF9527852576A44BA15E01C3429A9A570526 * get_OnShapeColorChanged_9() const { return ___OnShapeColorChanged_9; }
	inline Action_2_tDD41BF9527852576A44BA15E01C3429A9A570526 ** get_address_of_OnShapeColorChanged_9() { return &___OnShapeColorChanged_9; }
	inline void set_OnShapeColorChanged_9(Action_2_tDD41BF9527852576A44BA15E01C3429A9A570526 * value)
	{
		___OnShapeColorChanged_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnShapeColorChanged_9), (void*)value);
	}
};


// Oculus.Voice.Demo.ShortResponseInstructions
struct ShortResponseInstructions_tC0E9F4B232971495F5879DC44FB93E825DB6BD23  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Oculus.Voice.Demo.ShortResponseInstructions::_instructionsLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____instructionsLabel_4;
	// Oculus.Voice.Demo.ShortResponseColorHandler Oculus.Voice.Demo.ShortResponseInstructions::_handler
	ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * ____handler_5;
	// System.String Oculus.Voice.Demo.ShortResponseInstructions::_shapeMissingText
	String_t* ____shapeMissingText_6;
	// System.String Oculus.Voice.Demo.ShortResponseInstructions::_shapeSelectedText
	String_t* ____shapeSelectedText_7;

public:
	inline static int32_t get_offset_of__instructionsLabel_4() { return static_cast<int32_t>(offsetof(ShortResponseInstructions_tC0E9F4B232971495F5879DC44FB93E825DB6BD23, ____instructionsLabel_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__instructionsLabel_4() const { return ____instructionsLabel_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__instructionsLabel_4() { return &____instructionsLabel_4; }
	inline void set__instructionsLabel_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____instructionsLabel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instructionsLabel_4), (void*)value);
	}

	inline static int32_t get_offset_of__handler_5() { return static_cast<int32_t>(offsetof(ShortResponseInstructions_tC0E9F4B232971495F5879DC44FB93E825DB6BD23, ____handler_5)); }
	inline ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * get__handler_5() const { return ____handler_5; }
	inline ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 ** get_address_of__handler_5() { return &____handler_5; }
	inline void set__handler_5(ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * value)
	{
		____handler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handler_5), (void*)value);
	}

	inline static int32_t get_offset_of__shapeMissingText_6() { return static_cast<int32_t>(offsetof(ShortResponseInstructions_tC0E9F4B232971495F5879DC44FB93E825DB6BD23, ____shapeMissingText_6)); }
	inline String_t* get__shapeMissingText_6() const { return ____shapeMissingText_6; }
	inline String_t** get_address_of__shapeMissingText_6() { return &____shapeMissingText_6; }
	inline void set__shapeMissingText_6(String_t* value)
	{
		____shapeMissingText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shapeMissingText_6), (void*)value);
	}

	inline static int32_t get_offset_of__shapeSelectedText_7() { return static_cast<int32_t>(offsetof(ShortResponseInstructions_tC0E9F4B232971495F5879DC44FB93E825DB6BD23, ____shapeSelectedText_7)); }
	inline String_t* get__shapeSelectedText_7() const { return ____shapeSelectedText_7; }
	inline String_t** get_address_of__shapeSelectedText_7() { return &____shapeSelectedText_7; }
	inline void set__shapeSelectedText_7(String_t* value)
	{
		____shapeSelectedText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shapeSelectedText_7), (void*)value);
	}
};


// Oculus.Voice.Demo.BuiltInDemo.TimerController
struct TimerController_t3035005099318E93DA2D8388A795CD05B604417D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Double Oculus.Voice.Demo.BuiltInDemo.TimerController::_time
	double ____time_4;
	// System.Boolean Oculus.Voice.Demo.BuiltInDemo.TimerController::_timerExist
	bool ____timerExist_5;
	// System.Boolean Oculus.Voice.Demo.BuiltInDemo.TimerController::_timerRunning
	bool ____timerRunning_6;
	// UnityEngine.UI.Text Oculus.Voice.Demo.BuiltInDemo.TimerController::logText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___logText_7;
	// UnityEngine.AudioClip[] Oculus.Voice.Demo.BuiltInDemo.TimerController::timesUpSounds
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___timesUpSounds_8;

public:
	inline static int32_t get_offset_of__time_4() { return static_cast<int32_t>(offsetof(TimerController_t3035005099318E93DA2D8388A795CD05B604417D, ____time_4)); }
	inline double get__time_4() const { return ____time_4; }
	inline double* get_address_of__time_4() { return &____time_4; }
	inline void set__time_4(double value)
	{
		____time_4 = value;
	}

	inline static int32_t get_offset_of__timerExist_5() { return static_cast<int32_t>(offsetof(TimerController_t3035005099318E93DA2D8388A795CD05B604417D, ____timerExist_5)); }
	inline bool get__timerExist_5() const { return ____timerExist_5; }
	inline bool* get_address_of__timerExist_5() { return &____timerExist_5; }
	inline void set__timerExist_5(bool value)
	{
		____timerExist_5 = value;
	}

	inline static int32_t get_offset_of__timerRunning_6() { return static_cast<int32_t>(offsetof(TimerController_t3035005099318E93DA2D8388A795CD05B604417D, ____timerRunning_6)); }
	inline bool get__timerRunning_6() const { return ____timerRunning_6; }
	inline bool* get_address_of__timerRunning_6() { return &____timerRunning_6; }
	inline void set__timerRunning_6(bool value)
	{
		____timerRunning_6 = value;
	}

	inline static int32_t get_offset_of_logText_7() { return static_cast<int32_t>(offsetof(TimerController_t3035005099318E93DA2D8388A795CD05B604417D, ___logText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_logText_7() const { return ___logText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_logText_7() { return &___logText_7; }
	inline void set_logText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___logText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logText_7), (void*)value);
	}

	inline static int32_t get_offset_of_timesUpSounds_8() { return static_cast<int32_t>(offsetof(TimerController_t3035005099318E93DA2D8388A795CD05B604417D, ___timesUpSounds_8)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_timesUpSounds_8() const { return ___timesUpSounds_8; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_timesUpSounds_8() { return &___timesUpSounds_8; }
	inline void set_timesUpSounds_8(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___timesUpSounds_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timesUpSounds_8), (void*)value);
	}
};


// Oculus.Voice.Demo.BuiltInDemo.TimerDisplay
struct TimerDisplay_t57B43DA79696BE27F3049ACEF3BAF716198EE7CD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Oculus.Voice.Demo.BuiltInDemo.TimerController Oculus.Voice.Demo.BuiltInDemo.TimerDisplay::timer
	TimerController_t3035005099318E93DA2D8388A795CD05B604417D * ___timer_4;
	// UnityEngine.UI.Text Oculus.Voice.Demo.BuiltInDemo.TimerDisplay::_uiText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____uiText_5;

public:
	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(TimerDisplay_t57B43DA79696BE27F3049ACEF3BAF716198EE7CD, ___timer_4)); }
	inline TimerController_t3035005099318E93DA2D8388A795CD05B604417D * get_timer_4() const { return ___timer_4; }
	inline TimerController_t3035005099318E93DA2D8388A795CD05B604417D ** get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(TimerController_t3035005099318E93DA2D8388A795CD05B604417D * value)
	{
		___timer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timer_4), (void*)value);
	}

	inline static int32_t get_offset_of__uiText_5() { return static_cast<int32_t>(offsetof(TimerDisplay_t57B43DA79696BE27F3049ACEF3BAF716198EE7CD, ____uiText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__uiText_5() const { return ____uiText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__uiText_5() { return &____uiText_5; }
	inline void set__uiText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____uiText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uiText_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Meta.WitAi.VoiceService
struct VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.VoiceService::_witConfiguration
	WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ____witConfiguration_4;
	// Meta.Conduit.IParameterProvider Meta.WitAi.VoiceService::conduitParameterProvider
	RuntimeObject* ___conduitParameterProvider_5;
	// Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::events
	VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * ___events_6;
	// Meta.Conduit.IConduitDispatcher Meta.WitAi.VoiceService::<ConduitDispatcher>k__BackingField
	RuntimeObject* ___U3CConduitDispatcherU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of__witConfiguration_4() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ____witConfiguration_4)); }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * get__witConfiguration_4() const { return ____witConfiguration_4; }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 ** get_address_of__witConfiguration_4() { return &____witConfiguration_4; }
	inline void set__witConfiguration_4(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * value)
	{
		____witConfiguration_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____witConfiguration_4), (void*)value);
	}

	inline static int32_t get_offset_of_conduitParameterProvider_5() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ___conduitParameterProvider_5)); }
	inline RuntimeObject* get_conduitParameterProvider_5() const { return ___conduitParameterProvider_5; }
	inline RuntimeObject** get_address_of_conduitParameterProvider_5() { return &___conduitParameterProvider_5; }
	inline void set_conduitParameterProvider_5(RuntimeObject* value)
	{
		___conduitParameterProvider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conduitParameterProvider_5), (void*)value);
	}

	inline static int32_t get_offset_of_events_6() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ___events_6)); }
	inline VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * get_events_6() const { return ___events_6; }
	inline VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D ** get_address_of_events_6() { return &___events_6; }
	inline void set_events_6(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * value)
	{
		___events_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConduitDispatcherU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ___U3CConduitDispatcherU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CConduitDispatcherU3Ek__BackingField_7() const { return ___U3CConduitDispatcherU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CConduitDispatcherU3Ek__BackingField_7() { return &___U3CConduitDispatcherU3Ek__BackingField_7; }
	inline void set_U3CConduitDispatcherU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CConduitDispatcherU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConduitDispatcherU3Ek__BackingField_7), (void*)value);
	}
};


// Oculus.Voice.AppVoiceExperience
struct AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12  : public VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D
{
public:
	// Meta.WitAi.Configuration.WitRuntimeConfiguration Oculus.Voice.AppVoiceExperience::witRuntimeConfiguration
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * ___witRuntimeConfiguration_8;
	// System.Boolean Oculus.Voice.AppVoiceExperience::usePlatformServices
	bool ___usePlatformServices_9;
	// System.Boolean Oculus.Voice.AppVoiceExperience::enableConsoleLogging
	bool ___enableConsoleLogging_10;
	// Oculus.Voice.Interfaces.IPlatformVoiceService Oculus.Voice.AppVoiceExperience::platformService
	RuntimeObject* ___platformService_11;
	// Meta.WitAi.IVoiceService Oculus.Voice.AppVoiceExperience::voiceServiceImpl
	RuntimeObject* ___voiceServiceImpl_12;
	// Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger Oculus.Voice.AppVoiceExperience::voiceSDKLoggerImpl
	RuntimeObject* ___voiceSDKLoggerImpl_13;
	// System.String Oculus.Voice.AppVoiceExperience::PACKAGE_VERSION
	String_t* ___PACKAGE_VERSION_14;
	// System.Action Oculus.Voice.AppVoiceExperience::OnInitialized
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnInitialized_15;

public:
	inline static int32_t get_offset_of_witRuntimeConfiguration_8() { return static_cast<int32_t>(offsetof(AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12, ___witRuntimeConfiguration_8)); }
	inline WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * get_witRuntimeConfiguration_8() const { return ___witRuntimeConfiguration_8; }
	inline WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 ** get_address_of_witRuntimeConfiguration_8() { return &___witRuntimeConfiguration_8; }
	inline void set_witRuntimeConfiguration_8(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * value)
	{
		___witRuntimeConfiguration_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___witRuntimeConfiguration_8), (void*)value);
	}

	inline static int32_t get_offset_of_usePlatformServices_9() { return static_cast<int32_t>(offsetof(AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12, ___usePlatformServices_9)); }
	inline bool get_usePlatformServices_9() const { return ___usePlatformServices_9; }
	inline bool* get_address_of_usePlatformServices_9() { return &___usePlatformServices_9; }
	inline void set_usePlatformServices_9(bool value)
	{
		___usePlatformServices_9 = value;
	}

	inline static int32_t get_offset_of_enableConsoleLogging_10() { return static_cast<int32_t>(offsetof(AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12, ___enableConsoleLogging_10)); }
	inline bool get_enableConsoleLogging_10() const { return ___enableConsoleLogging_10; }
	inline bool* get_address_of_enableConsoleLogging_10() { return &___enableConsoleLogging_10; }
	inline void set_enableConsoleLogging_10(bool value)
	{
		___enableConsoleLogging_10 = value;
	}

	inline static int32_t get_offset_of_platformService_11() { return static_cast<int32_t>(offsetof(AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12, ___platformService_11)); }
	inline RuntimeObject* get_platformService_11() const { return ___platformService_11; }
	inline RuntimeObject** get_address_of_platformService_11() { return &___platformService_11; }
	inline void set_platformService_11(RuntimeObject* value)
	{
		___platformService_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platformService_11), (void*)value);
	}

	inline static int32_t get_offset_of_voiceServiceImpl_12() { return static_cast<int32_t>(offsetof(AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12, ___voiceServiceImpl_12)); }
	inline RuntimeObject* get_voiceServiceImpl_12() const { return ___voiceServiceImpl_12; }
	inline RuntimeObject** get_address_of_voiceServiceImpl_12() { return &___voiceServiceImpl_12; }
	inline void set_voiceServiceImpl_12(RuntimeObject* value)
	{
		___voiceServiceImpl_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceServiceImpl_12), (void*)value);
	}

	inline static int32_t get_offset_of_voiceSDKLoggerImpl_13() { return static_cast<int32_t>(offsetof(AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12, ___voiceSDKLoggerImpl_13)); }
	inline RuntimeObject* get_voiceSDKLoggerImpl_13() const { return ___voiceSDKLoggerImpl_13; }
	inline RuntimeObject** get_address_of_voiceSDKLoggerImpl_13() { return &___voiceSDKLoggerImpl_13; }
	inline void set_voiceSDKLoggerImpl_13(RuntimeObject* value)
	{
		___voiceSDKLoggerImpl_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceSDKLoggerImpl_13), (void*)value);
	}

	inline static int32_t get_offset_of_PACKAGE_VERSION_14() { return static_cast<int32_t>(offsetof(AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12, ___PACKAGE_VERSION_14)); }
	inline String_t* get_PACKAGE_VERSION_14() const { return ___PACKAGE_VERSION_14; }
	inline String_t** get_address_of_PACKAGE_VERSION_14() { return &___PACKAGE_VERSION_14; }
	inline void set_PACKAGE_VERSION_14(String_t* value)
	{
		___PACKAGE_VERSION_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PACKAGE_VERSION_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnInitialized_15() { return static_cast<int32_t>(offsetof(AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12, ___OnInitialized_15)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnInitialized_15() const { return ___OnInitialized_15; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnInitialized_15() { return &___OnInitialized_15; }
	inline void set_OnInitialized_15(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnInitialized_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInitialized_15), (void*)value);
	}
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
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
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
// UnityEngine.Renderer[]
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * m_Items[1];

public:
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Oculus.Voice.Demo.ColorOverride[]
struct ColorOverrideU5BU5D_t954B9F311E1E955135B1DE9F8BB97484D9873A82  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7  m_Items[1];

public:
	inline ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colorID_0), (void*)NULL);
	}
	inline ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colorID_0), (void*)NULL);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * m_Items[1];

public:
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m8727842F47B6F77FCB70DE281A21C3E1DD2C7B5E_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`2<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_m03A808706EF8B435537D817F2A43FD453E639D6C_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`2<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_RemoveListener_mE340477D10D41DB3D0011507846998A5369C8E9F_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * ___call0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Array::FindIndex<System.Object>(!!0[],System.Predicate`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_FindIndex_TisRuntimeObject_mD65FAE01CBEDCE302FE10C124FF2C7037A32D959_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___match1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Predicate`1<Oculus.Voice.Demo.ColorOverride>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_mA9A1FD27024ABA6B165129A16A6992FD77CD2083_gshared (Predicate_1_tC6D65BBAC452AF0762A8FF6E76272DB772374484 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Array::FindIndex<Oculus.Voice.Demo.ColorOverride>(!!0[],System.Predicate`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_FindIndex_TisColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_mC12AD37EEB3B12F7091B9796B14A588A2230C621_gshared (ColorOverrideU5BU5D_t954B9F311E1E955135B1DE9F8BB97484D9873A82* ___array0, Predicate_1_tC6D65BBAC452AF0762A8FF6E76272DB772374484 * ___match1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Color>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m5D7201C1CF3F5439EC400FBDA3F0E2FD0F97DDD9_gshared (Action_2_tA115706E18DF04DC2FE89DB5AE302F7A84C851CA * __this, RuntimeObject * ___arg10, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___arg21, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Void Oculus.Voice.Demo.LightTraitsDemo.ActivateButton::SetButtonActiveState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateButton_SetButtonActiveState_mF0D8BE08E8DFD3B9BEF93D18F32513898B511981 (ActivateButton_t2211FEBF2AB632CB1AF25B56240266F39B0FF21E * __this, bool ___newActiveState0, const RuntimeMethod* method);
// System.Void Meta.WitAi.VoiceService::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceService_Activate_mC448877C589CFC320C96D0D8DC0C73D1F4EB780D (VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.String[] Meta.WitAi.WitResultUtilities::GetAllEntityValues(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* WitResultUtilities_GetAllEntityValues_m58B116BD71F20E5F1212C807549A21BA8B78ACCA (WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___witResponse0, String_t* ___name1, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::UpdateColor(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_UpdateColor_m4599597DF8842F6153F681C232F0D938A61B6D2B (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___colorNames0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___shapes1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::UpdateColorAllShapes(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_UpdateColorAllShapes_m2A7079248BDB39DD110FB8D3A7BC9FB48FFD43BB (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___colorNames0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ColorUtility::TryParseHtmlString(System.String,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorUtility_TryParseHtmlString_m69BEFAF655920930399471B79CF668FC3BAD4069 (String_t* ___htmlString0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___color1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::SetColor(UnityEngine.Transform,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_SetColor_m8D12B2E15896D811B757756E77C3A0B2864D9E2E (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trans0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.UIShapesDemo.Instructions::UpdateStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_UpdateStep_mBAC0AE9FB5A871406101119FC21F8A9E4C61FE1B (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.WitRequest>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78 (UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m3BCE2ACA358FF0A7E8934FC0A7315E4E7FA1E4B9 (UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015 * __this, UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015 *, UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.VoiceEvents::get_OnPartialTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * VoiceEvents_get_OnPartialTranscription_m4A589ADB077808B120CC86ACAD6AB198CB8F4672_inline (VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.VoiceEvents::get_OnFullTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * VoiceEvents_get_OnFullTranscription_m396F08D0ACDBDC1B1ADEC0182D99D93864333BC3_inline (VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E (UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mDB4B2173C6BD726C9FE55A13D202EB2D93C5D8FB (UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C * __this, UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C *, UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627 (UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m8727842F47B6F77FCB70DE281A21C3E1DD2C7B5E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.String>::AddListener(UnityEngine.Events.UnityAction`2<!0,!1>)
inline void UnityEvent_2_AddListener_m3E022579578FE256EB77167A33F3003A4FC63B06 (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 * __this, UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 *, UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC *, const RuntimeMethod*))UnityEvent_2_AddListener_m03A808706EF8B435537D817F2A43FD453E639D6C_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_mE0E5D20F36DB24948363D3BB67BFB3DD12CE5164 (UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015 * __this, UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015 *, UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m48C2EAC451A98179DBAC5115E564E23474929959 (UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C * __this, UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C *, UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.String>::RemoveListener(UnityEngine.Events.UnityAction`2<!0,!1>)
inline void UnityEvent_2_RemoveListener_m23EE42492565C29932813AA8242EC48E5C5CCF73 (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 * __this, UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 *, UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC *, const RuntimeMethod*))UnityEvent_2_RemoveListener_mE340477D10D41DB3D0011507846998A5369C8E9F_gshared)(__this, ___call0, method);
}
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnRequestComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnRequestComplete_m5BFD9A5110DB922AD347A765E0BB5B18D3814A27 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method);
// System.String Meta.WitAi.Json.WitResponseNode::op_Implicit(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitResponseNode_op_Implicit_m707713F185590005419A520D80203958658ADA85 (WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___d0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.InteractionHandler::SetActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_SetActivation_mFADFEE64C08FD1630B7268DFBC293D6B862842B9 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, bool ___toActivated0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.LightTraitsDemo.LightToggler::SetLightState(Oculus.Voice.Demo.LightTraitsDemo.LightToggler/LightState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightToggler_SetLightState_m1312DE1ADFD190EF8380B3B2B867EE04B23F2F97 (LightToggler_tC5145942CCFBA6A3CD13B50B4B5049667A13A504 * __this, int32_t ___newState0, const RuntimeMethod* method);
// System.String Meta.WitAi.WitResultUtilities::GetTraitValue(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitResultUtilities_GetTraitValue_mB208295CA814A143F0DEDD025FA8F94D78597138 (WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___witResponse0, String_t* ___name1, const RuntimeMethod* method);
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618 (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68 (Type_t * ___enumType0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void Meta.WitAi.VoiceService::Activate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceService_Activate_mC9A8BE16513B5E427E72D4A89FC8C90C10DD859F (VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * __this, String_t* ___text0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Meta.WitAi.VoiceService>()
inline VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * Object_FindObjectOfType_TisVoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D_m39470EE990B168E843C798C76C4AFC16DF238893 (const RuntimeMethod* method)
{
	return ((  VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Meta.WitAi.IWitRuntimeConfigProvider>()
inline RuntimeObject* Component_GetComponent_TisIWitRuntimeConfigProvider_t742527BC01D15F9398C4AD1EDE74C0A0DCDC6AB3_mC0CF146802E31527A9E809AF182B65D1F40B26E2 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Meta.WitAi.VLog::E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_E_m5E32FCA60BD2DC0202360DDBD512F6658501B316 (RuntimeObject * ___log0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
inline RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m1A95B452BAE19475E5A65028964BF91500D30E24 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared)(__this, ___includeInactive0, method);
}
// System.Void Oculus.Voice.Demo.ShortResponseColorHandler::SelectShape(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortResponseColorHandler_SelectShape_mB5EFF7E2E0E7713948235C57D25F06831F449A95 (ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * __this, int32_t ___shapeIndex0, const RuntimeMethod* method);
// System.Boolean Oculus.Voice.Demo.ShortResponseColorHandler::TryGetShapeIndex(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortResponseColorHandler_TryGetShapeIndex_m5AB81B71582972D5733801CA35400E70CB8A3FA5 (ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * __this, String_t* ___shapeName0, int32_t* ___index1, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.ShortResponseColorHandler/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mC3C08A84A38DE949A2486FE267910B21E18A9A9B (U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<UnityEngine.Renderer>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m5AAC315615DCE530D4BAEE32EE54B2AF6364F6B6 (Predicate_1_t58D599511F2F3E1464A13143153C4F4026C73237 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t58D599511F2F3E1464A13143153C4F4026C73237 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Array::FindIndex<UnityEngine.Renderer>(!!0[],System.Predicate`1<!!0>)
inline int32_t Array_FindIndex_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m6308BCD6B880CCB6694AFF154ED9F04089FFB602 (RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* ___array0, Predicate_1_t58D599511F2F3E1464A13143153C4F4026C73237 * ___match1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7*, Predicate_1_t58D599511F2F3E1464A13143153C4F4026C73237 *, const RuntimeMethod*))Array_FindIndex_TisRuntimeObject_mD65FAE01CBEDCE302FE10C124FF2C7037A32D959_gshared)(___array0, ___match1, method);
}
// System.Void System.Action`1<UnityEngine.Renderer>::Invoke(!0)
inline void Action_1_Invoke_m13B8DB1478196597FC916A14A32B81672D8503D9 (Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 *, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Boolean Oculus.Voice.Demo.ShortResponseColorHandler::TryGetColor(System.String,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortResponseColorHandler_TryGetColor_mDA136953D103A615E60DB8A7B6400F1A4EDE1DF4 (ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * __this, String_t* ___colorName0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___color1, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.ShortResponseColorHandler::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortResponseColorHandler_SetColor_mBBC0637C57F864E633B75551147485708BB8C770 (ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newColor0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.ShortResponseColorHandler/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m014F728DCC0B12EE89F058FADEED21BE59FAC8C6 (U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<Oculus.Voice.Demo.ColorOverride>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mA9A1FD27024ABA6B165129A16A6992FD77CD2083 (Predicate_1_tC6D65BBAC452AF0762A8FF6E76272DB772374484 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tC6D65BBAC452AF0762A8FF6E76272DB772374484 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_mA9A1FD27024ABA6B165129A16A6992FD77CD2083_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Array::FindIndex<Oculus.Voice.Demo.ColorOverride>(!!0[],System.Predicate`1<!!0>)
inline int32_t Array_FindIndex_TisColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_mC12AD37EEB3B12F7091B9796B14A588A2230C621 (ColorOverrideU5BU5D_t954B9F311E1E955135B1DE9F8BB97484D9873A82* ___array0, Predicate_1_tC6D65BBAC452AF0762A8FF6E76272DB772374484 * ___match1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ColorOverrideU5BU5D_t954B9F311E1E955135B1DE9F8BB97484D9873A82*, Predicate_1_tC6D65BBAC452AF0762A8FF6E76272DB772374484 *, const RuntimeMethod*))Array_FindIndex_TisColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_mC12AD37EEB3B12F7091B9796B14A588A2230C621_gshared)(___array0, ___match1, method);
}
// System.Void Oculus.Voice.Demo.ShortResponseColorHandler::SetColor(UnityEngine.Renderer,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortResponseColorHandler_SetColor_mC6631AB8A839AC0C6540FCA2525B858718E914C8 (ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___shape0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.Renderer,UnityEngine.Color>::Invoke(!0,!1)
inline void Action_2_Invoke_mDF69B63FCBD755DA1B0CF7D137033E8469DF1A91 (Action_2_tDD41BF9527852576A44BA15E01C3429A9A570526 * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___arg10, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tDD41BF9527852576A44BA15E01C3429A9A570526 *, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))Action_2_Invoke_m5D7201C1CF3F5439EC400FBDA3F0E2FD0F97DDD9_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Oculus.Voice.Demo.ShortResponseColorHandler>()
inline ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * GameObject_GetComponent_TisShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7_m530BF3105BA7083936B9483A289059EF19B0D442 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Oculus.Voice.Demo.ShortResponseInstructions::ShapeSelected(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortResponseInstructions_ShapeSelected_m89BF7419D397B5172812960E745F5E950A6DAAF7 (ShortResponseInstructions_tC0E9F4B232971495F5879DC44FB93E825DB6BD23 * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___newShape0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Renderer>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2BD82FEFED0E285B9502402C56960CD5EE5C1627 (Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::OnElapsedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_OnElapsedTime_m2BC82B0559903F75A55B590AC21931E0038DC7E3 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_m9E225CC4435215CDF7E8DECCD3D1CEFCCB82AC79 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Oculus.Voice.Demo.BuiltInDemo.TimerController::ParseTime(System.String[],System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimerController_ParseTime_m1CCD2091A91F28CFF4813F8F49E56A396F96CB0E (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___entityValues0, double* ___time1, const RuntimeMethod* method);
// System.String Oculus.Voice.Demo.BuiltInDemo.TimerController::GetFormattedTimeFromSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimerController_GetFormattedTimeFromSeconds_mC50D3B48CE9A906F63069E6D452CD0EFEA421BBA (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0 (double ___value0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalHours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalHours_mE58EBCC460F12B66CEFB7FBDF4F6ACCD5B4AF6FA (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Minutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Minutes_mF5A78108FEB64953C298CEC19637378380881202 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Seconds_m3324F3A1F96CA956DAEDDB69DB32CAA320A053F7 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Milliseconds_m7DCE7C8875295A46F8A3ED0326F498F30D1F9BEE (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0 (String_t* ___s0, double* ___result1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
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
// System.Void Oculus.Voice.Demo.LightTraitsDemo.ActivateButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateButton_Awake_m47D7B1F3EE240C89DF3D0FA5FD7D8053F08647CF (ActivateButton_t2211FEBF2AB632CB1AF25B56240266F39B0FF21E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _buttonLabel = GetComponentInChildren<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3(__this, /*hidden argument*/Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		__this->set__buttonLabel_6(L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.LightTraitsDemo.ActivateButton::ToggleActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateButton_ToggleActive_m93E44467EFFA46BD20020933C31FE7F3E7083EA9 (ActivateButton_t2211FEBF2AB632CB1AF25B56240266F39B0FF21E * __this, const RuntimeMethod* method)
{
	{
		// SetButtonActiveState(!_active);
		bool L_0 = __this->get__active_4();
		ActivateButton_SetButtonActiveState_mF0D8BE08E8DFD3B9BEF93D18F32513898B511981(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.LightTraitsDemo.ActivateButton::SetButtonActiveState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateButton_SetButtonActiveState_mF0D8BE08E8DFD3B9BEF93D18F32513898B511981 (ActivateButton_t2211FEBF2AB632CB1AF25B56240266F39B0FF21E * __this, bool ___newActiveState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FD3D6735BD711DE4722F8D1FEB48E7E5238AC46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76518E7DE5882197CD91E9F2E6826A3C0B9F493C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_active != newActiveState)
		bool L_0 = __this->get__active_4();
		bool L_1 = ___newActiveState0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_004f;
		}
	}
	{
		// _active = newActiveState;
		bool L_2 = ___newActiveState0;
		__this->set__active_4(L_2);
		// if (_active)
		bool L_3 = __this->get__active_4();
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// _buttonLabel.text = "Listening";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get__buttonLabel_6();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral0FD3D6735BD711DE4722F8D1FEB48E7E5238AC46);
		// appVoiceExperience.Activate();
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_5 = __this->get_appVoiceExperience_5();
		NullCheck(L_5);
		VoiceService_Activate_mC448877C589CFC320C96D0D8DC0C73D1F4EB780D(L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0034:
	{
		// _buttonLabel.text = "Activate";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get__buttonLabel_6();
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral76518E7DE5882197CD91E9F2E6826A3C0B9F493C);
		// appVoiceExperience.Deactivate();
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_7 = __this->get_appVoiceExperience_5();
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(30 /* System.Void Meta.WitAi.VoiceService::Deactivate() */, L_7);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.LightTraitsDemo.ActivateButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateButton__ctor_m7E8340CE01498F45BCB1074776C40EE3ABBCE1E6 (ActivateButton_t2211FEBF2AB632CB1AF25B56240266F39B0FF21E * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Voice.Demo.ButtonEventWatcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEventWatcher_Update_m2BDAEED8256DB446A86374B0D16D5A10946CC594 (ButtonEventWatcher_t9C89DF1FEB93786FA968A3E0AF58652813C862DE * __this, const RuntimeMethod* method)
{
	KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B4_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B3_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B8_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B7_0 = NULL;
	{
		// foreach (var key in _keys)
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_0 = __this->get__keys_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0047;
	}

IL_000b:
	{
		// foreach (var key in _keys)
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (int32_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (Input.GetKeyDown(key))
		int32_t L_5 = V_2;
		bool L_6;
		L_6 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		// OnButtonDown?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_7 = __this->get_OnButtonDown_5();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_8 = L_7;
		G_B3_0 = L_8;
		if (L_8)
		{
			G_B4_0 = L_8;
			goto IL_0023;
		}
	}
	{
		goto IL_0043;
	}

IL_0023:
	{
		NullCheck(G_B4_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B4_0, /*hidden argument*/NULL);
		// }
		goto IL_0043;
	}

IL_002a:
	{
		// else if (Input.GetKeyUp(key))
		int32_t L_9 = V_2;
		bool L_10;
		L_10 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		// OnButtonUp?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_11 = __this->get_OnButtonUp_6();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_12 = L_11;
		G_B7_0 = L_12;
		if (L_12)
		{
			G_B8_0 = L_12;
			goto IL_003e;
		}
	}
	{
		goto IL_0043;
	}

IL_003e:
	{
		NullCheck(G_B8_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B8_0, /*hidden argument*/NULL);
	}

IL_0043:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0047:
	{
		// foreach (var key in _keys)
		int32_t L_14 = V_1;
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.ButtonEventWatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEventWatcher__ctor_mA6F2E5DEECEFA121073245325DC0C5B34AE198F5 (ButtonEventWatcher_t9C89DF1FEB93786FA968A3E0AF58652813C862DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDEA6A2962102C60FC2730249F235FB6C73550394____FBC2FB414C8563ACAF804065DA6998D2D92E7C966A37DE63A42566708F3E0F70_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private KeyCode[] _keys = new KeyCode[] { KeyCode.Space, KeyCode.JoystickButton0, KeyCode.JoystickButton2 };
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_0 = (KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871*)(KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871*)SZArrayNew(KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDEA6A2962102C60FC2730249F235FB6C73550394____FBC2FB414C8563ACAF804065DA6998D2D92E7C966A37DE63A42566708F3E0F70_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		__this->set__keys_4(L_1);
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
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::SetColor(UnityEngine.Transform,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_SetColor_m8D12B2E15896D811B757756E77C3A0B2864D9E2E (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trans0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trans.GetComponent<Renderer>().material.color = color;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___trans0;
		NullCheck(L_0);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_0, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_1, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___color1;
		NullCheck(L_2);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::UpdateColor(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_UpdateColor_mB23F2CF482C7F0B6AB0B0EAA265A804F30A29337 (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___commandResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DFAD45D6A8DA43B5B1B588751F66ED962320CBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral982EB241688495C1AF6152F618833411DB4F9B35);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	{
		// string[] colorNames = commandResult.GetAllEntityValues("color:color");
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_0 = ___commandResult0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1;
		L_1 = WitResultUtilities_GetAllEntityValues_m58B116BD71F20E5F1212C807549A21BA8B78ACCA(L_0, _stringLiteral982EB241688495C1AF6152F618833411DB4F9B35, /*hidden argument*/NULL);
		V_0 = L_1;
		// string[] shapes = commandResult.GetAllEntityValues("shape:shape");
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_2 = ___commandResult0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = WitResultUtilities_GetAllEntityValues_m58B116BD71F20E5F1212C807549A21BA8B78ACCA(L_2, _stringLiteral3DFAD45D6A8DA43B5B1B588751F66ED962320CBC, /*hidden argument*/NULL);
		V_1 = L_3;
		// UpdateColor(colorNames, shapes);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_1;
		ColorChanger_UpdateColor_m4599597DF8842F6153F681C232F0D938A61B6D2B(__this, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::UpdateColor(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_UpdateColor_m4599597DF8842F6153F681C232F0D938A61B6D2B (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___colorNames0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___shapes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	{
		// if (shapes.Length != 0 && colorNames.Length != shapes.Length)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___shapes1;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_000d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___colorNames0;
		NullCheck(L_1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___shapes1;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// if (shapes.Length == 0 || shapes[0] == "color"){
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___shapes1;
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___shapes1;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0028;
		}
	}

IL_0020:
	{
		// UpdateColorAllShapes(colorNames);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = ___colorNames0;
		ColorChanger_UpdateColorAllShapes_m2A7079248BDB39DD110FB8D3A7BC9FB48FFD43BB(__this, L_8, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0028:
	{
		// for(var entity = 0; entity < colorNames.Length; entity++)
		V_0 = 0;
		goto IL_007b;
	}

IL_002c:
	{
		// if (!ColorUtility.TryParseHtmlString(colorNames[entity], out var color)) return;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = ___colorNames0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		bool L_13;
		L_13 = ColorUtility_TryParseHtmlString_m69BEFAF655920930399471B79CF668FC3BAD4069(L_12, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_1), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0039;
		}
	}
	{
		// if (!ColorUtility.TryParseHtmlString(colorNames[entity], out var color)) return;
		return;
	}

IL_0039:
	{
		// for (int i = 0; i < transform.childCount; i++)
		V_2 = 0;
		goto IL_0069;
	}

IL_003d:
	{
		// Transform child = transform.GetChild(i);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// if (String.Equals(shapes[entity], child.name,
		//         StringComparison.CurrentCultureIgnoreCase))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = ___shapes1;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		String_t* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = V_3;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_20, L_22, 1, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0065;
		}
	}
	{
		// SetColor(child, color);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = V_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = V_1;
		ColorChanger_SetColor_m8D12B2E15896D811B757756E77C3A0B2864D9E2E(__this, L_24, L_25, /*hidden argument*/NULL);
		// break;
		goto IL_0077;
	}

IL_0065:
	{
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0069:
	{
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_27 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_003d;
		}
	}

IL_0077:
	{
		// for(var entity = 0; entity < colorNames.Length; entity++)
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_007b:
	{
		// for(var entity = 0; entity < colorNames.Length; entity++)
		int32_t L_31 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = ___colorNames0;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::UpdateColorAllShapes(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_UpdateColorAllShapes_m2A7079248BDB39DD110FB8D3A7BC9FB48FFD43BB (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___colorNames0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// var unspecifiedShape = 0;
		V_0 = 0;
		// for(var entity = 0; entity < colorNames.Length; entity++)
		V_1 = 0;
		goto IL_0048;
	}

IL_0006:
	{
		// if (!ColorUtility.TryParseHtmlString(colorNames[entity], out var color)) return;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___colorNames0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4;
		L_4 = ColorUtility_TryParseHtmlString_m69BEFAF655920930399471B79CF668FC3BAD4069(L_3, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_2), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0013;
		}
	}
	{
		// if (!ColorUtility.TryParseHtmlString(colorNames[entity], out var color)) return;
		return;
	}

IL_0013:
	{
		// var splitLimit = (transform.childCount/colorNames.Length) * (entity+1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_5, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ___colorNames0;
		NullCheck(L_7);
		int32_t L_8 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_6/(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1))));
		goto IL_0040;
	}

IL_0029:
	{
		// SetColor(transform.GetChild(unspecifiedShape), color);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_9, L_10, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = V_2;
		ColorChanger_SetColor_m8D12B2E15896D811B757756E77C3A0B2864D9E2E(__this, L_11, L_12, /*hidden argument*/NULL);
		// unspecifiedShape++;
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0040:
	{
		// while (unspecifiedShape < splitLimit)
		int32_t L_14 = V_0;
		int32_t L_15 = V_3;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0029;
		}
	}
	{
		// for(var entity = 0; entity < colorNames.Length; entity++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0048:
	{
		// for(var entity = 0; entity < colorNames.Length; entity++)
		int32_t L_17 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = ___colorNames0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.ColorChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger__ctor_m0EA7C97D87273E387C3356771AFCDC12BAC1AC2E (ColorChanger_t66CBF1BAC32AC18914FED6D05CF53C3489A60495 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Oculus.Voice.Demo.ColorOverride
IL2CPP_EXTERN_C void ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_marshal_pinvoke(const ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7& unmarshaled, ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_marshaled_pinvoke& marshaled)
{
	marshaled.___colorID_0 = il2cpp_codegen_marshal_string(unmarshaled.get_colorID_0());
	marshaled.___color_1 = unmarshaled.get_color_1();
}
IL2CPP_EXTERN_C void ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_marshal_pinvoke_back(const ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_marshaled_pinvoke& marshaled, ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7& unmarshaled)
{
	unmarshaled.set_colorID_0(il2cpp_codegen_marshal_string_result(marshaled.___colorID_0));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  unmarshaled_color_temp_1;
	memset((&unmarshaled_color_temp_1), 0, sizeof(unmarshaled_color_temp_1));
	unmarshaled_color_temp_1 = marshaled.___color_1;
	unmarshaled.set_color_1(unmarshaled_color_temp_1);
}
// Conversion method for clean up from marshalling of: Oculus.Voice.Demo.ColorOverride
IL2CPP_EXTERN_C void ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_marshal_pinvoke_cleanup(ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___colorID_0);
	marshaled.___colorID_0 = NULL;
}
// Conversion methods for marshalling of: Oculus.Voice.Demo.ColorOverride
IL2CPP_EXTERN_C void ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_marshal_com(const ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7& unmarshaled, ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_marshaled_com& marshaled)
{
	marshaled.___colorID_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_colorID_0());
	marshaled.___color_1 = unmarshaled.get_color_1();
}
IL2CPP_EXTERN_C void ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_marshal_com_back(const ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_marshaled_com& marshaled, ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7& unmarshaled)
{
	unmarshaled.set_colorID_0(il2cpp_codegen_marshal_bstring_result(marshaled.___colorID_0));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  unmarshaled_color_temp_1;
	memset((&unmarshaled_color_temp_1), 0, sizeof(unmarshaled_color_temp_1));
	unmarshaled_color_temp_1 = marshaled.___color_1;
	unmarshaled.set_color_1(unmarshaled_color_temp_1);
}
// Conversion method for clean up from marshalling of: Oculus.Voice.Demo.ColorOverride
IL2CPP_EXTERN_C void ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_marshal_com_cleanup(ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___colorID_0);
	marshaled.___colorID_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Voice.Demo.UIShapesDemo.Instructions/Step Oculus.Voice.Demo.UIShapesDemo.Instructions::get_CurrentStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Instructions_get_CurrentStep_m7413B01B8FE8640786CFCE1B3534333DE097F8C3 (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method)
{
	{
		// internal Step CurrentStep => currentStep;
		int32_t L_0 = __this->get_currentStep_6();
		return L_0;
	}
}
// System.String Oculus.Voice.Demo.UIShapesDemo.Instructions::get_CurrentStepText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Instructions_get_CurrentStepText_m6E186BF7D3B3106A0919A624B119FBF4E3FDFBE0 (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal string CurrentStepText => steps[(int) currentStep];
		IL2CPP_RUNTIME_CLASS_INIT(Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ((Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_StaticFields*)il2cpp_codegen_static_fields_for(Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_il2cpp_TypeInfo_var))->get_steps_4();
		int32_t L_1 = __this->get_currentStep_6();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.Instructions::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_OnValidate_m02978D5B955BCD01F90EEA3ABEF6B684AF01D7BD (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method)
{
	{
		// UpdateStep();
		Instructions_UpdateStep_mBAC0AE9FB5A871406101119FC21F8A9E4C61FE1B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.Instructions::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_OnEnable_m7E8516B2EE27B23F479C7316E39CA35FA1903E05 (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method)
{
	{
		// UpdateStep();
		Instructions_UpdateStep_mBAC0AE9FB5A871406101119FC21F8A9E4C61FE1B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.Instructions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_Update_mC1343AA31C0BF4D668D889680A329BD4B2E76074 (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method)
{
	{
		// UpdateStep();
		Instructions_UpdateStep_mBAC0AE9FB5A871406101119FC21F8A9E4C61FE1B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.Instructions::UpdateStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_UpdateStep_mBAC0AE9FB5A871406101119FC21F8A9E4C61FE1B (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.Instructions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions__ctor_m5E4E498551B9F4C64CDC000A3934631F1D93D23A (Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5 * __this, const RuntimeMethod* method)
{
	{
		// private Step currentStep = Step.Ready;
		__this->set_currentStep_6(6);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.Instructions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions__cctor_m62F85D06085BB09CC60C40CC4F92C3509B1539A7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41EC8CF96484907F34E81AEF7F803DDBBE6FC97F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral560ED8D4B879A92BD23CB10540270C39C3E19D78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6B66BF93AFC12DE5805D06BA0ABBD6C3659968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA83B8EF1A0DD0928ED5318216A030FC69A13643E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB46971E487185F55C44F40E1807F8CFF6C46F543);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7D1658DF3541A4A8F4FDBB6BD782A1F6BB2636D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly string[] steps = new string[]
		// {
		//     "Create an application at https://wit.ai. You can import the \"shapes_demo - Wit.ai Config.zip\" in the Demo/Data directory to create it for you.\n\nConnect to the Wit.ai app by clicking Oculus>Voice SDK>Settings and copy the Server Access Token from the Wit.ai app's settings page.Next, create a new Wit configuration by clicking Create.",
		//     "Copy the Server Access Token from the Wit.ai app's settings page and paste it in field found in Oculus/Voice SDK/Settings.",
		//     "Wit configuration is missing a Client Access Token. Open the Wit configuration, expand Application Configuration, and click Refresh or paste a Client Access Token from your Wit.ai app settings page.",
		//     "Create a Wit configuration by clicking Assets/Create/Voice SDK/Configuration.",
		//     "The scene is missing the App Voice Experience component. Add it by clicking Assets/Create/Voice SDK/Add App Voice Experience to Scene.",
		//     "The App Voice Experience GameObject is missing its Wit configuration. Set the configuration to begin trying voice commands.",
		//     ""
		// };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral41EC8CF96484907F34E81AEF7F803DDBBE6FC97F);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral41EC8CF96484907F34E81AEF7F803DDBBE6FC97F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralD7D1658DF3541A4A8F4FDBB6BD782A1F6BB2636D);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD7D1658DF3541A4A8F4FDBB6BD782A1F6BB2636D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralA83B8EF1A0DD0928ED5318216A030FC69A13643E);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA83B8EF1A0DD0928ED5318216A030FC69A13643E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral560ED8D4B879A92BD23CB10540270C39C3E19D78);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral560ED8D4B879A92BD23CB10540270C39C3E19D78);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralB46971E487185F55C44F40E1807F8CFF6C46F543);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB46971E487185F55C44F40E1807F8CFF6C46F543);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral9D6B66BF93AFC12DE5805D06BA0ABBD6C3659968);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral9D6B66BF93AFC12DE5805D06BA0ABBD6C3659968);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		((Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_StaticFields*)il2cpp_codegen_static_fields_for(Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_il2cpp_TypeInfo_var))->set_steps_4(L_7);
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
// System.Boolean Oculus.Voice.Demo.InteractionHandler::get_IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionHandler_get_IsActive_m5E459FA37602698CA4E1C8264FD84F358FC8E311 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsActive => _active;
		bool L_0 = __this->get__active_8();
		return L_0;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnEnable_m5288C2230CB27FC490E3681F13C344A83410EBA8 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnListenForcedStop_m715C1B7C1028750D6AD4562BC5AF16EAAF2C0950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnListenStart_m3E8855565042818E914FAA276376CF5638D68EBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnListenStop_mF0963F52D52DEA32E3EF3BB9A82BA7620C847538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestError_m2023B78E66D807338FDB8F5982B2ABB8AB8C1D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestResponse_mB3EE6BE72168D0741B26AC29BE8F75D1242883DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestStarted_m10FE76CFC232A5BA550AFC2FD5D025139B5A999C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m3BCE2ACA358FF0A7E8934FC0A7315E4E7FA1E4B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mDB4B2173C6BD726C9FE55A13D202EB2D93C5D8FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_m3E022579578FE256EB77167A33F3003A4FC63B06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textArea.text = freshStateText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_textArea_5();
		String_t* L_1 = __this->get_freshStateText_4();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// appVoiceExperience.events.OnRequestCreated.AddListener(OnRequestStarted);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_2 = __this->get_appVoiceExperience_7();
		NullCheck(L_2);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_3 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_2)->get_events_6();
		NullCheck(L_3);
		WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * L_4 = L_3->get_OnRequestCreated_16();
		UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD * L_5 = (UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD *)il2cpp_codegen_object_new(UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78(L_5, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestStarted_m10FE76CFC232A5BA550AFC2FD5D025139B5A999C_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78_RuntimeMethod_var);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m3BCE2ACA358FF0A7E8934FC0A7315E4E7FA1E4B9(L_4, L_5, /*hidden argument*/UnityEvent_1_AddListener_m3BCE2ACA358FF0A7E8934FC0A7315E4E7FA1E4B9_RuntimeMethod_var);
		// appVoiceExperience.events.OnPartialTranscription.AddListener(OnRequestTranscript);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_6 = __this->get_appVoiceExperience_7();
		NullCheck(L_6);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_7 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_6)->get_events_6();
		NullCheck(L_7);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_8;
		L_8 = VoiceEvents_get_OnPartialTranscription_m4A589ADB077808B120CC86ACAD6AB198CB8F4672_inline(L_7, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_9 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_9, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_8);
		UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398(L_8, L_9, /*hidden argument*/UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		// appVoiceExperience.events.OnFullTranscription.AddListener(OnRequestTranscript);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_10 = __this->get_appVoiceExperience_7();
		NullCheck(L_10);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_11 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_10)->get_events_6();
		NullCheck(L_11);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_12;
		L_12 = VoiceEvents_get_OnFullTranscription_m396F08D0ACDBDC1B1ADEC0182D99D93864333BC3_inline(L_11, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_13 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_13, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_12);
		UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398(L_12, L_13, /*hidden argument*/UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		// appVoiceExperience.events.OnStartListening.AddListener(OnListenStart);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_14 = __this->get_appVoiceExperience_7();
		NullCheck(L_14);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_15 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_14)->get_events_6();
		NullCheck(L_15);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_16 = L_15->get_OnStartListening_17();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_17 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_17, __this, (intptr_t)((intptr_t)InteractionHandler_OnListenStart_m3E8855565042818E914FAA276376CF5638D68EBC_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_16, L_17, /*hidden argument*/NULL);
		// appVoiceExperience.events.OnStoppedListening.AddListener(OnListenStop);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_18 = __this->get_appVoiceExperience_7();
		NullCheck(L_18);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_19 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_18)->get_events_6();
		NullCheck(L_19);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_20 = L_19->get_OnStoppedListening_18();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_21 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_21, __this, (intptr_t)((intptr_t)InteractionHandler_OnListenStop_mF0963F52D52DEA32E3EF3BB9A82BA7620C847538_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_20, L_21, /*hidden argument*/NULL);
		// appVoiceExperience.events.OnStoppedListeningDueToDeactivation.AddListener(OnListenForcedStop);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_22 = __this->get_appVoiceExperience_7();
		NullCheck(L_22);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_23 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_22)->get_events_6();
		NullCheck(L_23);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_24 = L_23->get_OnStoppedListeningDueToDeactivation_21();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_25 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_25, __this, (intptr_t)((intptr_t)InteractionHandler_OnListenForcedStop_m715C1B7C1028750D6AD4562BC5AF16EAAF2C0950_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_24);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_24, L_25, /*hidden argument*/NULL);
		// appVoiceExperience.events.OnStoppedListeningDueToInactivity.AddListener(OnListenForcedStop);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_26 = __this->get_appVoiceExperience_7();
		NullCheck(L_26);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_27 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_26)->get_events_6();
		NullCheck(L_27);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_28 = L_27->get_OnStoppedListeningDueToInactivity_19();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_29 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_29, __this, (intptr_t)((intptr_t)InteractionHandler_OnListenForcedStop_m715C1B7C1028750D6AD4562BC5AF16EAAF2C0950_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_28);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_28, L_29, /*hidden argument*/NULL);
		// appVoiceExperience.events.OnResponse.AddListener(OnRequestResponse);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_30 = __this->get_appVoiceExperience_7();
		NullCheck(L_30);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_31 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_30)->get_events_6();
		NullCheck(L_31);
		WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * L_32 = L_31->get_OnResponse_7();
		UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 * L_33 = (UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 *)il2cpp_codegen_object_new(UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E(L_33, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestResponse_mB3EE6BE72168D0741B26AC29BE8F75D1242883DE_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E_RuntimeMethod_var);
		NullCheck(L_32);
		UnityEvent_1_AddListener_mDB4B2173C6BD726C9FE55A13D202EB2D93C5D8FB(L_32, L_33, /*hidden argument*/UnityEvent_1_AddListener_mDB4B2173C6BD726C9FE55A13D202EB2D93C5D8FB_RuntimeMethod_var);
		// appVoiceExperience.events.OnError.AddListener(OnRequestError);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_34 = __this->get_appVoiceExperience_7();
		NullCheck(L_34);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_35 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_34)->get_events_6();
		NullCheck(L_35);
		WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * L_36 = L_35->get_OnError_10();
		UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC * L_37 = (UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC *)il2cpp_codegen_object_new(UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627(L_37, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestError_m2023B78E66D807338FDB8F5982B2ABB8AB8C1D5F_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627_RuntimeMethod_var);
		NullCheck(L_36);
		UnityEvent_2_AddListener_m3E022579578FE256EB77167A33F3003A4FC63B06(L_36, L_37, /*hidden argument*/UnityEvent_2_AddListener_m3E022579578FE256EB77167A33F3003A4FC63B06_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnDisable_m0517AE8057707F19CED9037F87F8C64AF952909F (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnListenForcedStop_m715C1B7C1028750D6AD4562BC5AF16EAAF2C0950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnListenStart_m3E8855565042818E914FAA276376CF5638D68EBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnListenStop_mF0963F52D52DEA32E3EF3BB9A82BA7620C847538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestError_m2023B78E66D807338FDB8F5982B2ABB8AB8C1D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestResponse_mB3EE6BE72168D0741B26AC29BE8F75D1242883DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestStarted_m10FE76CFC232A5BA550AFC2FD5D025139B5A999C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m48C2EAC451A98179DBAC5115E564E23474929959_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mE0E5D20F36DB24948363D3BB67BFB3DD12CE5164_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_RemoveListener_m23EE42492565C29932813AA8242EC48E5C5CCF73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appVoiceExperience.events.OnRequestCreated.RemoveListener(OnRequestStarted);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_0 = __this->get_appVoiceExperience_7();
		NullCheck(L_0);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_1 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_0)->get_events_6();
		NullCheck(L_1);
		WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * L_2 = L_1->get_OnRequestCreated_16();
		UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD * L_3 = (UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD *)il2cpp_codegen_object_new(UnityAction_1_t95214639B6468CFF4F2482B26897EC5AC45A79FD_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78(L_3, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestStarted_m10FE76CFC232A5BA550AFC2FD5D025139B5A999C_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mF2F255B17D2B7D4C316D1E34FE48347ECB011E78_RuntimeMethod_var);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_mE0E5D20F36DB24948363D3BB67BFB3DD12CE5164(L_2, L_3, /*hidden argument*/UnityEvent_1_RemoveListener_mE0E5D20F36DB24948363D3BB67BFB3DD12CE5164_RuntimeMethod_var);
		// appVoiceExperience.events.OnPartialTranscription.RemoveListener(OnRequestTranscript);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_4 = __this->get_appVoiceExperience_7();
		NullCheck(L_4);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_5 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_4)->get_events_6();
		NullCheck(L_5);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_6;
		L_6 = VoiceEvents_get_OnPartialTranscription_m4A589ADB077808B120CC86ACAD6AB198CB8F4672_inline(L_5, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_7 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_7, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC(L_6, L_7, /*hidden argument*/UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var);
		// appVoiceExperience.events.OnFullTranscription.RemoveListener(OnRequestTranscript);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_8 = __this->get_appVoiceExperience_7();
		NullCheck(L_8);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_9 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_8)->get_events_6();
		NullCheck(L_9);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_10;
		L_10 = VoiceEvents_get_OnFullTranscription_m396F08D0ACDBDC1B1ADEC0182D99D93864333BC3_inline(L_9, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_11 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_11, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_10);
		UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC(L_10, L_11, /*hidden argument*/UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var);
		// appVoiceExperience.events.OnStartListening.RemoveListener(OnListenStart);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_12 = __this->get_appVoiceExperience_7();
		NullCheck(L_12);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_13 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_12)->get_events_6();
		NullCheck(L_13);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_14 = L_13->get_OnStartListening_17();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_15 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_15, __this, (intptr_t)((intptr_t)InteractionHandler_OnListenStart_m3E8855565042818E914FAA276376CF5638D68EBC_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_14, L_15, /*hidden argument*/NULL);
		// appVoiceExperience.events.OnStoppedListening.RemoveListener(OnListenStop);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_16 = __this->get_appVoiceExperience_7();
		NullCheck(L_16);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_17 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_16)->get_events_6();
		NullCheck(L_17);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_18 = L_17->get_OnStoppedListening_18();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_19 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_19, __this, (intptr_t)((intptr_t)InteractionHandler_OnListenStop_mF0963F52D52DEA32E3EF3BB9A82BA7620C847538_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_18);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_18, L_19, /*hidden argument*/NULL);
		// appVoiceExperience.events.OnStoppedListeningDueToDeactivation.RemoveListener(OnListenForcedStop);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_20 = __this->get_appVoiceExperience_7();
		NullCheck(L_20);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_21 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_20)->get_events_6();
		NullCheck(L_21);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_22 = L_21->get_OnStoppedListeningDueToDeactivation_21();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_23 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_23, __this, (intptr_t)((intptr_t)InteractionHandler_OnListenForcedStop_m715C1B7C1028750D6AD4562BC5AF16EAAF2C0950_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_22);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_22, L_23, /*hidden argument*/NULL);
		// appVoiceExperience.events.OnStoppedListeningDueToInactivity.RemoveListener(OnListenForcedStop);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_24 = __this->get_appVoiceExperience_7();
		NullCheck(L_24);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_25 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_24)->get_events_6();
		NullCheck(L_25);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_26 = L_25->get_OnStoppedListeningDueToInactivity_19();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_27 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_27, __this, (intptr_t)((intptr_t)InteractionHandler_OnListenForcedStop_m715C1B7C1028750D6AD4562BC5AF16EAAF2C0950_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_26);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_26, L_27, /*hidden argument*/NULL);
		// appVoiceExperience.events.OnResponse.RemoveListener(OnRequestResponse);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_28 = __this->get_appVoiceExperience_7();
		NullCheck(L_28);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_29 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_28)->get_events_6();
		NullCheck(L_29);
		WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * L_30 = L_29->get_OnResponse_7();
		UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 * L_31 = (UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0 *)il2cpp_codegen_object_new(UnityAction_1_tBE132E8A2DC6AC14D31E1FC8F6A4AF76CF5575D0_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E(L_31, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestResponse_mB3EE6BE72168D0741B26AC29BE8F75D1242883DE_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m04C31737D2E09C1AD392504BC3A21F823571F76E_RuntimeMethod_var);
		NullCheck(L_30);
		UnityEvent_1_RemoveListener_m48C2EAC451A98179DBAC5115E564E23474929959(L_30, L_31, /*hidden argument*/UnityEvent_1_RemoveListener_m48C2EAC451A98179DBAC5115E564E23474929959_RuntimeMethod_var);
		// appVoiceExperience.events.OnError.RemoveListener(OnRequestError);
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_32 = __this->get_appVoiceExperience_7();
		NullCheck(L_32);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_33 = ((VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D *)L_32)->get_events_6();
		NullCheck(L_33);
		WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * L_34 = L_33->get_OnError_10();
		UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC * L_35 = (UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC *)il2cpp_codegen_object_new(UnityAction_2_tED09E1FE30DBE393EF75B69D9204A4C3541FB4AC_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627(L_35, __this, (intptr_t)((intptr_t)InteractionHandler_OnRequestError_m2023B78E66D807338FDB8F5982B2ABB8AB8C1D5F_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_m3A7B071D44178CF5835B482DC594812F0D512627_RuntimeMethod_var);
		NullCheck(L_34);
		UnityEvent_2_RemoveListener_m23EE42492565C29932813AA8242EC48E5C5CCF73(L_34, L_35, /*hidden argument*/UnityEvent_2_RemoveListener_m23EE42492565C29932813AA8242EC48E5C5CCF73_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnRequestStarted(Meta.WitAi.WitRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnRequestStarted_m10FE76CFC232A5BA550AFC2FD5D025139B5A999C (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractionHandler_U3COnRequestStartedU3Eb__9_0_mE88FBE7A317B58B24795F37305346DDCD8698485_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showJson) r.onRawResponse = (response) => textArea.text = response;
		bool L_0 = __this->get_showJson_6();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// if (showJson) r.onRawResponse = (response) => textArea.text = response;
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_1 = ___r0;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_2, __this, (intptr_t)((intptr_t)InteractionHandler_U3COnRequestStartedU3Eb__9_0_mE88FBE7A317B58B24795F37305346DDCD8698485_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->set_onRawResponse_27(L_2);
	}

IL_001a:
	{
		// _active = true;
		__this->set__active_8((bool)1);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnRequestTranscript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnRequestTranscript_mA6E0212C3DC9912EDF9A7A0C01A03AE6D004AE89 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, String_t* ___transcript0, const RuntimeMethod* method)
{
	{
		// textArea.text = transcript;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_textArea_5();
		String_t* L_1 = ___transcript0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnListenStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnListenStart_m3E8855565042818E914FAA276376CF5638D68EBC (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4249AEA5B1AE9E78829F6D9A0EFE24DE7967450);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textArea.text = "Listening...";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_textArea_5();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralA4249AEA5B1AE9E78829F6D9A0EFE24DE7967450);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnListenStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnListenStop_mF0963F52D52DEA32E3EF3BB9A82BA7620C847538 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A5D08C7E98DA121F009B7BFC331E06EE804C90A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textArea.text = "Processing...";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_textArea_5();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral0A5D08C7E98DA121F009B7BFC331E06EE804C90A);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnListenForcedStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnListenForcedStop_m715C1B7C1028750D6AD4562BC5AF16EAAF2C0950 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	{
		// if (!showJson)
		bool L_0 = __this->get_showJson_6();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// textArea.text = freshStateText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_textArea_5();
		String_t* L_2 = __this->get_freshStateText_4();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
	}

IL_0019:
	{
		// OnRequestComplete();
		InteractionHandler_OnRequestComplete_m5BFD9A5110DB922AD347A765E0BB5B18D3814A27(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnRequestResponse(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnRequestResponse_mB3EE6BE72168D0741B26AC29BE8F75D1242883DE (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34073A77D1FC0099E5D4E1AA07A1A3995BF30CF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!showJson)
		bool L_0 = __this->get_showJson_6();
		if (L_0)
		{
			goto IL_0057;
		}
	}
	{
		// if (!string.IsNullOrEmpty(response["text"]))
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_1 = ___response0;
		NullCheck(L_1);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_2;
		L_2 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_1, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		String_t* L_3;
		L_3 = WitResponseNode_op_Implicit_m707713F185590005419A520D80203958658ADA85(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		// textArea.text = "I heard: " + response["text"];
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_textArea_5();
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_6 = ___response0;
		NullCheck(L_6);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_7;
		L_7 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_6, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		String_t* L_8;
		L_8 = WitResponseNode_op_Implicit_m707713F185590005419A520D80203958658ADA85(L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral34073A77D1FC0099E5D4E1AA07A1A3995BF30CF5, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		// }
		goto IL_0057;
	}

IL_0046:
	{
		// textArea.text = freshStateText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_textArea_5();
		String_t* L_11 = __this->get_freshStateText_4();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
	}

IL_0057:
	{
		// OnRequestComplete();
		InteractionHandler_OnRequestComplete_m5BFD9A5110DB922AD347A765E0BB5B18D3814A27(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnRequestError(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnRequestError_m2023B78E66D807338FDB8F5982B2ABB8AB8C1D5F (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, String_t* ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06055A31D913616225C8AA9808676FAD9AA4549A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!showJson)
		bool L_0 = __this->get_showJson_6();
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		// textArea.text = $"<color=\"red\">Error: {error}\n\n{message}</color>";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_textArea_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral06055A31D913616225C8AA9808676FAD9AA4549A);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral06055A31D913616225C8AA9808676FAD9AA4549A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		String_t* L_5 = ___error0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		String_t* L_8 = ___message1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		String_t* L_10;
		L_10 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_9, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_10);
	}

IL_003e:
	{
		// OnRequestComplete();
		InteractionHandler_OnRequestComplete_m5BFD9A5110DB922AD347A765E0BB5B18D3814A27(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::OnRequestComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_OnRequestComplete_m5BFD9A5110DB922AD347A765E0BB5B18D3814A27 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	{
		// _active = false;
		__this->set__active_8((bool)0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::ToggleActivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_ToggleActivation_mF760814E4A34F63FA860F05A77D1CBAC998C34FE (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	{
		// SetActivation(!_active);
		bool L_0 = __this->get__active_8();
		InteractionHandler_SetActivation_mFADFEE64C08FD1630B7268DFBC293D6B862842B9(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::SetActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_SetActivation_mFADFEE64C08FD1630B7268DFBC293D6B862842B9 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, bool ___toActivated0, const RuntimeMethod* method)
{
	{
		// if (_active != toActivated)
		bool L_0 = __this->get__active_8();
		bool L_1 = ___toActivated0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// _active = toActivated;
		bool L_2 = ___toActivated0;
		__this->set__active_8(L_2);
		// if (_active)
		bool L_3 = __this->get__active_8();
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// appVoiceExperience.Activate();
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_4 = __this->get_appVoiceExperience_7();
		NullCheck(L_4);
		VoiceService_Activate_mC448877C589CFC320C96D0D8DC0C73D1F4EB780D(L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0024:
	{
		// appVoiceExperience.Deactivate();
		AppVoiceExperience_t05933E577044FE2D4FCAFF4498819C5BCC0F2C12 * L_5 = __this->get_appVoiceExperience_7();
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(30 /* System.Void Meta.WitAi.VoiceService::Deactivate() */, L_5);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler__ctor_m82606BDB51FA43FA9EF2835E9683A4B85583683F (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2A5212C71D031E67C453835AC07A6181980EF40);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string freshStateText = "Try pressing the Activate button and saying \"Make the cube red\"";
		__this->set_freshStateText_4(_stringLiteralD2A5212C71D031E67C453835AC07A6181980EF40);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Voice.Demo.InteractionHandler::<OnRequestStarted>b__9_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionHandler_U3COnRequestStartedU3Eb__9_0_mE88FBE7A317B58B24795F37305346DDCD8698485 (InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03 * __this, String_t* ___response0, const RuntimeMethod* method)
{
	{
		// if (showJson) r.onRawResponse = (response) => textArea.text = response;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_textArea_5();
		String_t* L_1 = ___response0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
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
// System.Void Oculus.Voice.Demo.LightTraitsDemo.LightToggler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightToggler_Start_m08F59D29045E7E412B7E79581EA0BA7822EBCDDF (LightToggler_tC5145942CCFBA6A3CD13B50B4B5049667A13A504 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _material = GetComponent<Renderer>().material;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_0, /*hidden argument*/NULL);
		__this->set__material_7(L_1);
		// _onColor = _material.GetColor(EMISSION_COLOR);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get__material_7();
		NullCheck(L_2);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688(L_2, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, /*hidden argument*/NULL);
		__this->set__onColor_9(L_3);
		// SetLightState((LightState.Off));
		LightToggler_SetLightState_m1312DE1ADFD190EF8380B3B2B867EE04B23F2F97(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.LightTraitsDemo.LightToggler::OnResponse(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightToggler_OnResponse_mBCB67B7E5AD44104363D26E4B0707F2DC6EA6F41 (LightToggler_tC5145942CCFBA6A3CD13B50B4B5049667A13A504 * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___commandResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightState_tC4100BA801E62B356C33A7A964AA4E5831BA11F8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightState_tC4100BA801E62B356C33A7A964AA4E5831BA11F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E05E96B31736576CB72C40C4D79B2AC1E69E8E6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var traitValue = commandResult.GetTraitValue("wit$on_off").Replace('o', 'O');
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_0 = ___commandResult0;
		String_t* L_1;
		L_1 = WitResultUtilities_GetTraitValue_mB208295CA814A143F0DEDD025FA8F94D78597138(L_0, _stringLiteral2E05E96B31736576CB72C40C4D79B2AC1E69E8E6, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_1, ((int32_t)111), ((int32_t)79), /*hidden argument*/NULL);
		V_0 = L_2;
		// SetLightState((LightState)Enum.Parse(typeof(LightState), traitValue));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (LightState_tC4100BA801E62B356C33A7A964AA4E5831BA11F8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_6;
		L_6 = Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68(L_4, L_5, /*hidden argument*/NULL);
		LightToggler_SetLightState_m1312DE1ADFD190EF8380B3B2B867EE04B23F2F97(__this, ((*(int32_t*)((int32_t*)UnBox(L_6, LightState_tC4100BA801E62B356C33A7A964AA4E5831BA11F8_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.LightTraitsDemo.LightToggler::SetLightState(Oculus.Voice.Demo.LightTraitsDemo.LightToggler/LightState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightToggler_SetLightState_m1312DE1ADFD190EF8380B3B2B867EE04B23F2F97 (LightToggler_tC5145942CCFBA6A3CD13B50B4B5049667A13A504 * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___newState0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___newState0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0068;
	}

IL_0009:
	{
		// if (_lightState == LightState.On)
		int32_t L_2 = __this->get__lightState_6();
		if (!L_2)
		{
			goto IL_0068;
		}
	}
	{
		// _material.EnableKeyword(EMISSION);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get__material_7();
		NullCheck(L_3);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_3, _stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5, /*hidden argument*/NULL);
		// _material.SetColor(EMISSION_COLOR, _onColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get__material_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get__onColor_9();
		NullCheck(L_4);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_4, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_5, /*hidden argument*/NULL);
		// break;
		goto IL_0068;
	}

IL_0039:
	{
		// if (_lightState == LightState.Off)
		int32_t L_6 = __this->get__lightState_6();
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0068;
		}
	}
	{
		// _material.DisableKeyword(EMISSION);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get__material_7();
		NullCheck(L_7);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_7, _stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5, /*hidden argument*/NULL);
		// _material.SetColor(EMISSION_COLOR, _offColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = __this->get__material_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = __this->get__offColor_8();
		NullCheck(L_8);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_8, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_9, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// _lightState = newState;
		int32_t L_10 = ___newState0;
		__this->set__lightState_6(L_10);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.LightTraitsDemo.LightToggler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightToggler__ctor_mC22AEB364403A03B2F5F1C27F0CEA689B9CB06EE (LightToggler_tC5145942CCFBA6A3CD13B50B4B5049667A13A504 * __this, const RuntimeMethod* method)
{
	{
		// private Color _offColor = Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		__this->set__offColor_8(L_0);
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
// System.Void Oculus.Voice.Demo.UIShapesDemo.ParallelTranscriptHandler::SendParallelRequests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelTranscriptHandler_SendParallelRequests_mA3B97EC8CCD07ACB34839BA22442A5EB0BDCB54A (ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC * __this, const RuntimeMethod* method)
{
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// foreach (var request in _requests)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get__requests_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_001f;
	}

IL_000b:
	{
		// foreach (var request in _requests)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// _voiceService.Activate(request);
		VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * L_5 = __this->get__voiceService_5();
		String_t* L_6 = V_2;
		NullCheck(L_5);
		VoiceService_Activate_mC9A8BE16513B5E427E72D4A89FC8C90C10DD859F(L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001f:
	{
		// foreach (var request in _requests)
		int32_t L_8 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.UIShapesDemo.ParallelTranscriptHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelTranscriptHandler__ctor_m8DC63AEC5142D22BBA4C78E790EA1E694E39D064 (ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Voice.Demo.ShortResponseColorHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortResponseColorHandler_OnEnable_m4A5EB07BF4A1C0AC1CF1F4562F7B0322457C3AE9 (ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIWitRuntimeConfigProvider_t742527BC01D15F9398C4AD1EDE74C0A0DCDC6AB3_mC0CF146802E31527A9E809AF182B65D1F40B26E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m1A95B452BAE19475E5A65028964BF91500D30E24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWitRuntimeConfigProvider_t742527BC01D15F9398C4AD1EDE74C0A0DCDC6AB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisVoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D_m39470EE990B168E843C798C76C4AFC16DF238893_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD05B8149A77D8E3214C75319FBFF76C72FAC315A);
		s_Il2CppMethodInitialized = true;
	}
	VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * V_0 = NULL;
	WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * G_B6_0 = NULL;
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * G_B5_0 = NULL;
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * G_B4_0 = NULL;
	{
		// VoiceService service = GameObject.FindObjectOfType<VoiceService>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * L_0;
		L_0 = Object_FindObjectOfType_TisVoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D_m39470EE990B168E843C798C76C4AFC16DF238893(/*hidden argument*/Object_FindObjectOfType_TisVoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D_m39470EE990B168E843C798C76C4AFC16DF238893_RuntimeMethod_var);
		V_0 = L_0;
		// if (service != null)
		VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * L_1 = V_0;
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		// WitConfiguration configuration = service.GetComponent<IWitRuntimeConfigProvider>()?.RuntimeConfiguration?.witConfiguration;
		VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Component_GetComponent_TisIWitRuntimeConfigProvider_t742527BC01D15F9398C4AD1EDE74C0A0DCDC6AB3_mC0CF146802E31527A9E809AF182B65D1F40B26E2(L_3, /*hidden argument*/Component_GetComponent_TisIWitRuntimeConfigProvider_t742527BC01D15F9398C4AD1EDE74C0A0DCDC6AB3_mC0CF146802E31527A9E809AF182B65D1F40B26E2_RuntimeMethod_var);
		RuntimeObject* L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_001c;
		}
	}
	{
		G_B6_0 = ((WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 *)(NULL));
		goto IL_002d;
	}

IL_001c:
	{
		NullCheck(G_B3_0);
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_6;
		L_6 = InterfaceFuncInvoker0< WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * >::Invoke(0 /* Meta.WitAi.Configuration.WitRuntimeConfiguration Meta.WitAi.IWitRuntimeConfigProvider::get_RuntimeConfiguration() */, IWitRuntimeConfigProvider_t742527BC01D15F9398C4AD1EDE74C0A0DCDC6AB3_il2cpp_TypeInfo_var, G_B3_0);
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_7 = L_6;
		G_B4_0 = L_7;
		if (L_7)
		{
			G_B5_0 = L_7;
			goto IL_0028;
		}
	}
	{
		G_B6_0 = ((WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 *)(NULL));
		goto IL_002d;
	}

IL_0028:
	{
		NullCheck(G_B5_0);
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_8 = G_B5_0->get_witConfiguration_0();
		G_B6_0 = L_8;
	}

IL_002d:
	{
		V_1 = G_B6_0;
		// if (configuration != null && !configuration.useConduit)
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_11 = V_1;
		NullCheck(L_11);
		bool L_12 = L_11->get_useConduit_10();
		if (L_12)
		{
			goto IL_0049;
		}
	}
	{
		// VLog.E("ShortResponseDemo only works with Conduit!  Please enable Conduit on your wit configuration to try this demo.");
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_E_m5E32FCA60BD2DC0202360DDBD512F6658501B316(_stringLiteralD05B8149A77D8E3214C75319FBFF76C72FAC315A, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// if (_shapeContainer != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = __this->get__shapeContainer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		// _shapes = _shapeContainer.GetComponentsInChildren<Renderer>(true);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get__shapeContainer_4();
		NullCheck(L_15);
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_16;
		L_16 = Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m1A95B452BAE19475E5A65028964BF91500D30E24(L_15, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m1A95B452BAE19475E5A65028964BF91500D30E24_RuntimeMethod_var);
		__this->set__shapes_5(L_16);
	}

IL_0069:
	{
		// SelectShape(-1);
		ShortResponseColorHandler_SelectShape_mB5EFF7E2E0E7713948235C57D25F06831F449A95(__this, (-1), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.ShortResponseColorHandler::OnValidateShapeSelect(Meta.WitAi.Data.VoiceSession,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortResponseColorHandler_OnValidateShapeSelect_m589075DE55D221B582AA8117D0454042205BD88F (ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * __this, VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F * ___sessionData0, String_t* ___shape1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (TryGetShapeIndex(shape, out index))
		String_t* L_0 = ___shape1;
		bool L_1;
		L_1 = ShortResponseColorHandler_TryGetShapeIndex_m5AB81B71582972D5733801CA35400E70CB8A3FA5(__this, L_0, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// SelectShape(index);
		int32_t L_2 = V_0;
		ShortResponseColorHandler_SelectShape_mB5EFF7E2E0E7713948235C57D25F06831F449A95(__this, L_2, /*hidden argument*/NULL);
		// sessionData.validResponse = true;
		VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F * L_3 = ___sessionData0;
		NullCheck(L_3);
		L_3->set_validResponse_2((bool)1);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Voice.Demo.ShortResponseColorHandler::TryGetShapeIndex(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortResponseColorHandler_TryGetShapeIndex_m5AB81B71582972D5733801CA35400E70CB8A3FA5 (ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * __this, String_t* ___shapeName0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_FindIndex_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m6308BCD6B880CCB6694AFF154ED9F04089FFB602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m5AAC315615DCE530D4BAEE32EE54B2AF6364F6B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t58D599511F2F3E1464A13143153C4F4026C73237_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CTryGetShapeIndexU3Eb__0_mEFA7F4B1E45623021B179FAAAB40B35BB7603FE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92 * V_0 = NULL;
	int32_t* G_B2_0 = NULL;
	int32_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t* G_B3_1 = NULL;
	{
		U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92 * L_0 = (U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass11_0__ctor_mC3C08A84A38DE949A2486FE267910B21E18A9A9B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92 * L_1 = V_0;
		String_t* L_2 = ___shapeName0;
		NullCheck(L_1);
		L_1->set_shapeName_0(L_2);
		// index = _shapes == null ? -1 : Array.FindIndex(_shapes, (s) => string.Equals(s.gameObject.name, shapeName, StringComparison.CurrentCultureIgnoreCase));
		int32_t* L_3 = ___index1;
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_4 = __this->get__shapes_5();
		G_B1_0 = L_3;
		if (!L_4)
		{
			G_B2_0 = L_3;
			goto IL_002f;
		}
	}
	{
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_5 = __this->get__shapes_5();
		U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92 * L_6 = V_0;
		Predicate_1_t58D599511F2F3E1464A13143153C4F4026C73237 * L_7 = (Predicate_1_t58D599511F2F3E1464A13143153C4F4026C73237 *)il2cpp_codegen_object_new(Predicate_1_t58D599511F2F3E1464A13143153C4F4026C73237_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m5AAC315615DCE530D4BAEE32EE54B2AF6364F6B6(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass11_0_U3CTryGetShapeIndexU3Eb__0_mEFA7F4B1E45623021B179FAAAB40B35BB7603FE5_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m5AAC315615DCE530D4BAEE32EE54B2AF6364F6B6_RuntimeMethod_var);
		int32_t L_8;
		L_8 = Array_FindIndex_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m6308BCD6B880CCB6694AFF154ED9F04089FFB602(L_5, L_7, /*hidden argument*/Array_FindIndex_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m6308BCD6B880CCB6694AFF154ED9F04089FFB602_RuntimeMethod_var);
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		*((int32_t*)G_B3_1) = (int32_t)G_B3_0;
		// return index != -1;
		int32_t* L_9 = ___index1;
		int32_t L_10 = *((int32_t*)L_9);
		return (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Oculus.Voice.Demo.ShortResponseColorHandler::SelectShape(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortResponseColorHandler_SelectShape_mB5EFF7E2E0E7713948235C57D25F06831F449A95 (ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * __this, int32_t ___shapeIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m13B8DB1478196597FC916A14A32B81672D8503D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * V_0 = NULL;
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * G_B6_0 = NULL;
	Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 * G_B8_0 = NULL;
	Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 * G_B7_0 = NULL;
	{
		// if (_shapeSelected != shapeIndex)
		int32_t L_0 = __this->get__shapeSelected_6();
		int32_t L_1 = ___shapeIndex0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0053;
		}
	}
	{
		// _shapeSelected = shapeIndex;
		int32_t L_2 = ___shapeIndex0;
		__this->set__shapeSelected_6(L_2);
		// Renderer shape = _shapes != null && _shapeSelected >= 0 && _shapeSelected < _shapes.Length
		//     ? _shapes[_shapeSelected]
		//     : null;
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_3 = __this->get__shapes_5();
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = __this->get__shapeSelected_6();
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = __this->get__shapeSelected_6();
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_6 = __this->get__shapes_5();
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0034;
		}
	}

IL_0031:
	{
		G_B6_0 = ((Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)(NULL));
		goto IL_0041;
	}

IL_0034:
	{
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_7 = __this->get__shapes_5();
		int32_t L_8 = __this->get__shapeSelected_6();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		G_B6_0 = L_10;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		// OnShapeSelected?.Invoke(shape);
		Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 * L_11 = __this->get_OnShapeSelected_7();
		Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 * L_12 = L_11;
		G_B7_0 = L_12;
		if (L_12)
		{
			G_B8_0 = L_12;
			goto IL_004d;
		}
	}
	{
		return;
	}

IL_004d:
	{
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_13 = V_0;
		NullCheck(G_B8_0);
		Action_1_Invoke_m13B8DB1478196597FC916A14A32B81672D8503D9(G_B8_0, L_13, /*hidden argument*/Action_1_Invoke_m13B8DB1478196597FC916A14A32B81672D8503D9_RuntimeMethod_var);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.ShortResponseColorHandler::OnValidateColorSet(Meta.WitAi.Data.VoiceSession,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortResponseColorHandler_OnValidateColorSet_mF200E49CCD20FF3BCB944335EBD6ECFF7478D3C0 (ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * __this, VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F * ___sessionData0, String_t* ___color1, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (TryGetColor(color, out c))
		String_t* L_0 = ___color1;
		bool L_1;
		L_1 = ShortResponseColorHandler_TryGetColor_mDA136953D103A615E60DB8A7B6400F1A4EDE1DF4(__this, L_0, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// SetColor(c);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = V_0;
		ShortResponseColorHandler_SetColor_mBBC0637C57F864E633B75551147485708BB8C770(__this, L_2, /*hidden argument*/NULL);
		// sessionData.validResponse = true;
		VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F * L_3 = ___sessionData0;
		NullCheck(L_3);
		L_3->set_validResponse_2((bool)1);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Voice.Demo.ShortResponseColorHandler::TryGetColor(System.String,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortResponseColorHandler_TryGetColor_mDA136953D103A615E60DB8A7B6400F1A4EDE1DF4 (ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * __this, String_t* ___colorName0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_FindIndex_TisColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_mC12AD37EEB3B12F7091B9796B14A588A2230C621_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_mA9A1FD27024ABA6B165129A16A6992FD77CD2083_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tC6D65BBAC452AF0762A8FF6E76272DB772374484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CTryGetColorU3Eb__0_m177DA10E6FCB92E8F5D9DD5BAFFADD434246AE8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B * V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B * L_0 = (U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass14_0__ctor_m014F728DCC0B12EE89F058FADEED21BE59FAC8C6(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B * L_1 = V_0;
		String_t* L_2 = ___colorName0;
		NullCheck(L_1);
		L_1->set_colorName_0(L_2);
		// if (_colorOverride != null)
		ColorOverrideU5BU5D_t954B9F311E1E955135B1DE9F8BB97484D9873A82* L_3 = __this->get__colorOverride_8();
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		// int overrideIndex = Array.FindIndex(_colorOverride, (c) => string.Equals(c.colorID, colorName, StringComparison.CurrentCultureIgnoreCase));
		ColorOverrideU5BU5D_t954B9F311E1E955135B1DE9F8BB97484D9873A82* L_4 = __this->get__colorOverride_8();
		U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B * L_5 = V_0;
		Predicate_1_tC6D65BBAC452AF0762A8FF6E76272DB772374484 * L_6 = (Predicate_1_tC6D65BBAC452AF0762A8FF6E76272DB772374484 *)il2cpp_codegen_object_new(Predicate_1_tC6D65BBAC452AF0762A8FF6E76272DB772374484_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mA9A1FD27024ABA6B165129A16A6992FD77CD2083(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass14_0_U3CTryGetColorU3Eb__0_m177DA10E6FCB92E8F5D9DD5BAFFADD434246AE8E_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_mA9A1FD27024ABA6B165129A16A6992FD77CD2083_RuntimeMethod_var);
		int32_t L_7;
		L_7 = Array_FindIndex_TisColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_mC12AD37EEB3B12F7091B9796B14A588A2230C621(L_4, L_6, /*hidden argument*/Array_FindIndex_TisColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7_mC12AD37EEB3B12F7091B9796B14A588A2230C621_RuntimeMethod_var);
		V_1 = L_7;
		// if (overrideIndex != -1)
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_004a;
		}
	}
	{
		// color = _colorOverride[overrideIndex].color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_9 = ___color1;
		ColorOverrideU5BU5D_t954B9F311E1E955135B1DE9F8BB97484D9873A82* L_10 = __this->get__colorOverride_8();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_color_1();
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)L_9 = L_12;
		// return true;
		return (bool)1;
	}

IL_004a:
	{
		// if (ColorUtility.TryParseHtmlString(colorName, out color))
		U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = L_13->get_colorName_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_15 = ___color1;
		bool L_16;
		L_16 = ColorUtility_TryParseHtmlString_m69BEFAF655920930399471B79CF668FC3BAD4069(L_14, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_005a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_005a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Oculus.Voice.Demo.ShortResponseColorHandler::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortResponseColorHandler_SetColor_mBBC0637C57F864E633B75551147485708BB8C770 (ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newColor0, const RuntimeMethod* method)
{
	RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* V_0 = NULL;
	int32_t V_1 = 0;
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * V_2 = NULL;
	{
		// if (_shapes == null || _shapeSelected < 0 || _shapeSelected >= _shapes.Length)
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_0 = __this->get__shapes_5();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = __this->get__shapeSelected_6();
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = __this->get__shapeSelected_6();
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_3 = __this->get__shapes_5();
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0043;
		}
	}

IL_0021:
	{
		// foreach (var shape in _shapes)
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_4 = __this->get__shapes_5();
		V_0 = L_4;
		V_1 = 0;
		goto IL_003c;
	}

IL_002c:
	{
		// foreach (var shape in _shapes)
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// SetColor(shape, newColor);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_9 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10 = ___newColor0;
		ShortResponseColorHandler_SetColor_mC6631AB8A839AC0C6540FCA2525B858718E914C8(__this, L_9, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003c:
	{
		// foreach (var shape in _shapes)
		int32_t L_12 = V_1;
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		// }
		return;
	}

IL_0043:
	{
		// SetColor(_shapes[_shapeSelected], newColor);
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_14 = __this->get__shapes_5();
		int32_t L_15 = __this->get__shapeSelected_6();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18 = ___newColor0;
		ShortResponseColorHandler_SetColor_mC6631AB8A839AC0C6540FCA2525B858718E914C8(__this, L_17, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.ShortResponseColorHandler::SetColor(UnityEngine.Renderer,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortResponseColorHandler_SetColor_mC6631AB8A839AC0C6540FCA2525B858718E914C8 (ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___shape0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mDF69B63FCBD755DA1B0CF7D137033E8469DF1A91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tDD41BF9527852576A44BA15E01C3429A9A570526 * G_B3_0 = NULL;
	Action_2_tDD41BF9527852576A44BA15E01C3429A9A570526 * G_B2_0 = NULL;
	{
		// if (shape != null)
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0 = ___shape0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// shape.material.color = color;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_2 = ___shape0;
		NullCheck(L_2);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3;
		L_3 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_2, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ___color1;
		NullCheck(L_3);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_3, L_4, /*hidden argument*/NULL);
		// OnShapeColorChanged?.Invoke(shape, color);
		Action_2_tDD41BF9527852576A44BA15E01C3429A9A570526 * L_5 = __this->get_OnShapeColorChanged_9();
		Action_2_tDD41BF9527852576A44BA15E01C3429A9A570526 * L_6 = L_5;
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_7 = ___shape0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = ___color1;
		NullCheck(G_B3_0);
		Action_2_Invoke_mDF69B63FCBD755DA1B0CF7D137033E8469DF1A91(G_B3_0, L_7, L_8, /*hidden argument*/Action_2_Invoke_mDF69B63FCBD755DA1B0CF7D137033E8469DF1A91_RuntimeMethod_var);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.ShortResponseColorHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortResponseColorHandler__ctor_m9B39A8874A3CF8801E07B4C1628AB4CDC0E2F208 (ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * __this, const RuntimeMethod* method)
{
	{
		// private int _shapeSelected = -1;
		__this->set__shapeSelected_6((-1));
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
// System.Void Oculus.Voice.Demo.ShortResponseInstructions::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortResponseInstructions_OnEnable_m4600EFFC8F7F154941B569F838A69BDC882C3A09 (ShortResponseInstructions_tC0E9F4B232971495F5879DC44FB93E825DB6BD23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2BD82FEFED0E285B9502402C56960CD5EE5C1627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7_m530BF3105BA7083936B9483A289059EF19B0D442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShortResponseInstructions_ShapeSelected_m89BF7419D397B5172812960E745F5E950A6DAAF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_handler == null)
		ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * L_0 = __this->get__handler_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// _handler = gameObject.GetComponent<ShortResponseColorHandler>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * L_3;
		L_3 = GameObject_GetComponent_TisShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7_m530BF3105BA7083936B9483A289059EF19B0D442(L_2, /*hidden argument*/GameObject_GetComponent_TisShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7_m530BF3105BA7083936B9483A289059EF19B0D442_RuntimeMethod_var);
		__this->set__handler_5(L_3);
	}

IL_001f:
	{
		// ShapeSelected(null);
		ShortResponseInstructions_ShapeSelected_m89BF7419D397B5172812960E745F5E950A6DAAF7(__this, (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)NULL, /*hidden argument*/NULL);
		// if (_handler != null)
		ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * L_4 = __this->get__handler_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		// _handler.OnShapeSelected += ShapeSelected;
		ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * L_6 = __this->get__handler_5();
		ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * L_7 = L_6;
		NullCheck(L_7);
		Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 * L_8 = L_7->get_OnShapeSelected_7();
		Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 * L_9 = (Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 *)il2cpp_codegen_object_new(Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910_il2cpp_TypeInfo_var);
		Action_1__ctor_m2BD82FEFED0E285B9502402C56960CD5EE5C1627(L_9, __this, (intptr_t)((intptr_t)ShortResponseInstructions_ShapeSelected_m89BF7419D397B5172812960E745F5E950A6DAAF7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2BD82FEFED0E285B9502402C56960CD5EE5C1627_RuntimeMethod_var);
		Delegate_t * L_10;
		L_10 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_OnShapeSelected_7(((Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 *)CastclassSealed((RuntimeObject*)L_10, Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910_il2cpp_TypeInfo_var)));
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.ShortResponseInstructions::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortResponseInstructions_OnDisable_mBD68B648D10186C94077AE232D307ADE5A1B9862 (ShortResponseInstructions_tC0E9F4B232971495F5879DC44FB93E825DB6BD23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2BD82FEFED0E285B9502402C56960CD5EE5C1627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShortResponseInstructions_ShapeSelected_m89BF7419D397B5172812960E745F5E950A6DAAF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_handler != null)
		ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * L_0 = __this->get__handler_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// _handler.OnShapeSelected -= ShapeSelected;
		ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * L_2 = __this->get__handler_5();
		ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7 * L_3 = L_2;
		NullCheck(L_3);
		Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 * L_4 = L_3->get_OnShapeSelected_7();
		Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 * L_5 = (Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 *)il2cpp_codegen_object_new(Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910_il2cpp_TypeInfo_var);
		Action_1__ctor_m2BD82FEFED0E285B9502402C56960CD5EE5C1627(L_5, __this, (intptr_t)((intptr_t)ShortResponseInstructions_ShapeSelected_m89BF7419D397B5172812960E745F5E950A6DAAF7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2BD82FEFED0E285B9502402C56960CD5EE5C1627_RuntimeMethod_var);
		Delegate_t * L_6;
		L_6 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_OnShapeSelected_7(((Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910 *)CastclassSealed((RuntimeObject*)L_6, Action_1_t9CD5F486AD58B036E1A8732C8E1D7C25FA3B2910_il2cpp_TypeInfo_var)));
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.ShortResponseInstructions::ShapeSelected(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortResponseInstructions_ShapeSelected_m89BF7419D397B5172812960E745F5E950A6DAAF7 (ShortResponseInstructions_tC0E9F4B232971495F5879DC44FB93E825DB6BD23 * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___newShape0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2750208B187414250C881D4F336CE8A3F84BFDA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (newShape == null)
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0 = ___newShape0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// _instructionsLabel.text = _shapeMissingText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get__instructionsLabel_4();
		String_t* L_3 = __this->get__shapeMissingText_6();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}

IL_001b:
	{
		// string shapeName = newShape.gameObject.name;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_4 = ___newShape0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// _instructionsLabel.text = _shapeSelectedText.Replace(SHAPE_KEY, shapeName);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get__instructionsLabel_4();
		String_t* L_8 = __this->get__shapeSelectedText_7();
		String_t* L_9 = V_0;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_8, _stringLiteralE2750208B187414250C881D4F336CE8A3F84BFDA, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_10);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.ShortResponseInstructions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortResponseInstructions__ctor_m8BC1C23288256829F1C8AB2B1CB6E3B2950BD563 (ShortResponseInstructions_tC0E9F4B232971495F5879DC44FB93E825DB6BD23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42D42C9A89C43F231A03A99D76113732701039EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA11693ECE42265DD88A2D3772568D86192C06050);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _shapeMissingText = "Say a phrase to select a shape such as 'Select Cube'.";
		__this->set__shapeMissingText_6(_stringLiteral42D42C9A89C43F231A03A99D76113732701039EB);
		// private string _shapeSelectedText = $"{SHAPE_KEY} Selected.  Say a color to set the [SHAPE]'s color.";
		__this->set__shapeSelectedText_7(_stringLiteralA11693ECE42265DD88A2D3772568D86192C06050);
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
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_Update_mFED5C08DACF4F0E3EFA0617722587A51EC1EFD5B (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	{
		// if (_timerExist && _timerRunning)
		bool L_0 = __this->get__timerExist_5();
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		bool L_1 = __this->get__timerRunning_6();
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// _time -= Time.deltaTime;
		double L_2 = __this->get__time_4();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__time_4(((double)il2cpp_codegen_subtract((double)L_2, (double)((double)((double)L_3)))));
		// if (_time < 0)
		double L_4 = __this->get__time_4();
		if ((!(((double)L_4) < ((double)(0.0)))))
		{
			goto IL_003a;
		}
	}
	{
		// OnElapsedTime();
		TimerController_OnElapsedTime_m2BC82B0559903F75A55B590AC21931E0038DC7E3(__this, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(msg);
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
		// logText.text = msg;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_logText_7();
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::OnElapsedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_OnElapsedTime_m2BC82B0559903F75A55B590AC21931E0038DC7E3 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA98721A021E8397CACDA83A653C9CD0A53A441);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _time = 0;
		__this->set__time_4((0.0));
		// _timerRunning = false;
		__this->set__timerRunning_6((bool)0);
		// _timerExist = false;
		__this->set__timerExist_5((bool)0);
		// Log("Your timer is complete.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral5DA98721A021E8397CACDA83A653C9CD0A53A441, /*hidden argument*/NULL);
		// AudioClip timesUpSfx = timesUpSounds[UnityEngine.Random.Range(0, timesUpSounds.Length)];
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_0 = __this->get_timesUpSounds_8();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_1 = __this->get_timesUpSounds_8();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// AudioSource.PlayClipAtPoint(timesUpSfx, Vector3.zero);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m9E225CC4435215CDF7E8DECCD3D1CEFCCB82AC79(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::DeleteTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_DeleteTimer_m303448AA57AE8D124A2835B36ECBEE8601E6FE7C (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral593C48B5B64125B2A87743E68909883CFDF40C2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE84F498776F6C20BBE955ABF1908A5D218FD8026);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_timerExist)
		bool L_0 = __this->get__timerExist_5();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Log("Error: There is no timer to delete.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteralE84F498776F6C20BBE955ABF1908A5D218FD8026, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0014:
	{
		// _timerExist = false;
		__this->set__timerExist_5((bool)0);
		// _time = 0;
		__this->set__time_4((0.0));
		// _timerRunning = false;
		__this->set__timerRunning_6((bool)0);
		// Log("Timer deleted.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral593C48B5B64125B2A87743E68909883CFDF40C2A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::CreateTimer(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_CreateTimer_m723B3D4FD4CB5E24D6294A59BC3E5F2231544D49 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___entityValues0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11B7DBC79AE1731C98022861F51963665A1692FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E3F3CE7F088199C5A9ADB690290F91F45814107);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral674D566FF6101DD0EF36AC986DEF66156B7E9A54);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_timerExist)
		bool L_0 = __this->get__timerExist_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("A timer already exist.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral11B7DBC79AE1731C98022861F51963665A1692FF, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (ParseTime(entityValues, out _time))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___entityValues0;
		double* L_2 = __this->get_address_of__time_4();
		bool L_3;
		L_3 = TimerController_ParseTime_m1CCD2091A91F28CFF4813F8F49E56A396F96CB0E(__this, L_1, (double*)L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0065;
		}
	}
	{
		// _timerExist = true;
		__this->set__timerExist_5((bool)1);
		// _timerRunning = true;
		__this->set__timerRunning_6((bool)1);
		// Log($"Countdown Timer is set for {entityValues[0]} {entityValues[1]}(s).");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral674D566FF6101DD0EF36AC986DEF66156B7E9A54);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral674D566FF6101DD0EF36AC986DEF66156B7E9A54);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ___entityValues0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = ___entityValues0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral4E3F3CE7F088199C5A9ADB690290F91F45814107);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4E3F3CE7F088199C5A9ADB690290F91F45814107);
		String_t* L_16;
		L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_15, /*hidden argument*/NULL);
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, L_16, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::GetTimerIntent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_GetTimerIntent_m70A725B3A270D3A354D254AC21C9B81B3A199AB5 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	{
		// var msg = GetFormattedTimeFromSeconds();
		String_t* L_0;
		L_0 = TimerController_GetFormattedTimeFromSeconds_mC50D3B48CE9A906F63069E6D452CD0EFEA421BBA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::PauseTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_PauseTimer_m22DF952F353EA8EE30CF2AA946475101A0B7363F (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC2A5334237FF8576DD07245EB919757BF72CBA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _timerRunning = false;
		__this->set__timerRunning_6((bool)0);
		// Log("Timer paused.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteralCC2A5334237FF8576DD07245EB919757BF72CBA9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::ResumeTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_ResumeTimer_mE51AEE9B8E61F2776699A7E0235728FA06D119E2 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D12FD6EE1407168379DF0B561E5206790E8AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _timerRunning = true;
		__this->set__timerRunning_6((bool)1);
		// Log("Timer resumed.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral900D12FD6EE1407168379DF0B561E5206790E8AF, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::SubtractTimeTimer(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_SubtractTimeTimer_m93BDE34D272E8779A18368972DBC0A26DD3746D7 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___entityValues0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CCECF27122D10050A5606AD517A96F5CCF55CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50FD7CB5C781AA1CB1598D172D99D573C3F2BB9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8682956BC4320075709B4B2396B4F890B21B525E);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	String_t* V_1 = NULL;
	{
		// if (!_timerExist)
		bool L_0 = __this->get__timerExist_5();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Log("Error: No Timer is created.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral50FD7CB5C781AA1CB1598D172D99D573C3F2BB9F, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0014:
	{
		// if (ParseTime(entityValues, out var time))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___entityValues0;
		bool L_2;
		L_2 = TimerController_ParseTime_m1CCD2091A91F28CFF4813F8F49E56A396F96CB0E(__this, L_1, (double*)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0073;
		}
	}
	{
		// var msg = $"{entityValues[0]} {entityValues[1]}(s) were subtracted from the timer.";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___entityValues0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = ___entityValues0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		String_t* L_9;
		L_9 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_8, _stringLiteral39CCECF27122D10050A5606AD517A96F5CCF55CA, /*hidden argument*/NULL);
		V_1 = L_9;
		// _time -= time;
		double L_10 = __this->get__time_4();
		double L_11 = V_0;
		__this->set__time_4(((double)il2cpp_codegen_subtract((double)L_10, (double)L_11)));
		// if (_time < 0)
		double L_12 = __this->get__time_4();
		if ((!(((double)L_12) < ((double)(0.0)))))
		{
			goto IL_006b;
		}
	}
	{
		// _time = 0;
		__this->set__time_4((0.0));
		// Log(msg);
		String_t* L_13 = V_1;
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, L_13, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_006b:
	{
		// Log(msg);
		String_t* L_14 = V_1;
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, L_14, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0073:
	{
		// Log("Error in Subtract_time_timer(): Could not parse the wit reply.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral8682956BC4320075709B4B2396B4F890B21B525E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::AddTimeToTimer(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_AddTimeToTimer_m923F25F33F611F56A17565B1B0CA81255AEA80B8 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___entityValues0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50FD7CB5C781AA1CB1598D172D99D573C3F2BB9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3AED789946AED0395215D1DE21BCD5437046CAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC9AEAA9B8ED2A1EF2F08E10DE610AA75B1AC318);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	String_t* V_1 = NULL;
	{
		// if (!_timerExist)
		bool L_0 = __this->get__timerExist_5();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Log("Error: No Timer is created.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral50FD7CB5C781AA1CB1598D172D99D573C3F2BB9F, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0014:
	{
		// if (ParseTime(entityValues, out var time))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___entityValues0;
		bool L_2;
		L_2 = TimerController_ParseTime_m1CCD2091A91F28CFF4813F8F49E56A396F96CB0E(__this, L_1, (double*)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// _time += time;
		double L_3 = __this->get__time_4();
		double L_4 = V_0;
		__this->set__time_4(((double)il2cpp_codegen_add((double)L_3, (double)L_4)));
		// var msg = $"{entityValues[0]} {entityValues[1]}(s) were added to the timer.";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = ___entityValues0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = ___entityValues0;
		NullCheck(L_8);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		String_t* L_11;
		L_11 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_7, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_10, _stringLiteralFC9AEAA9B8ED2A1EF2F08E10DE610AA75B1AC318, /*hidden argument*/NULL);
		V_1 = L_11;
		// Log(msg);
		String_t* L_12 = V_1;
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004b:
	{
		// Log("Error in AddTimeToTimer(): Could not parse with reply.");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteralF3AED789946AED0395215D1DE21BCD5437046CAE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double Oculus.Voice.Demo.BuiltInDemo.TimerController::GetRemainingTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimerController_GetRemainingTime_m3F5C9164742269FBFC6A526583D700F4A3668D03 (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	{
		// return _time;
		double L_0 = __this->get__time_4();
		return L_0;
	}
}
// System.String Oculus.Voice.Demo.BuiltInDemo.TimerController::GetFormattedTimeFromSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimerController_GetFormattedTimeFromSeconds_mC50D3B48CE9A906F63069E6D452CD0EFEA421BBA (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral377C585B1B1DFB2354530C907FF3AF34F921983D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral984058CED8B3C72D22A95708F196F8A38804B395);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (_time >= TimeSpan.MaxValue.TotalSeconds)
		double L_0 = __this->get__time_4();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_MaxValue_20();
		V_1 = L_1;
		double L_2;
		L_2 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_1), /*hidden argument*/NULL);
		if ((!(((double)L_0) >= ((double)L_2))))
		{
			goto IL_003d;
		}
	}
	{
		// _time = TimeSpan.MaxValue.TotalSeconds - 1;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_MaxValue_20();
		V_1 = L_3;
		double L_4;
		L_4 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_1), /*hidden argument*/NULL);
		__this->set__time_4(((double)il2cpp_codegen_subtract((double)L_4, (double)(1.0))));
		// Log("Error: Hit max time");
		TimerController_Log_m0682C701656937ABDF845CF5F6F0BE42D586E5E4(__this, _stringLiteral984058CED8B3C72D22A95708F196F8A38804B395, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// TimeSpan span = TimeSpan.FromSeconds(_time);
		double L_5 = __this->get__time_4();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_6;
		L_6 = TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// return $"{Math.Floor(span.TotalHours)}:{span.Minutes:00}:{span.Seconds:00}.{Math.Floor(span.Milliseconds/100f)}";
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		double L_9;
		L_9 = TimeSpan_get_TotalHours_mE58EBCC460F12B66CEFB7FBDF4F6ACCD5B4AF6FA((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = floor(L_9);
		double L_11 = L_10;
		RuntimeObject * L_12 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_8;
		int32_t L_14;
		L_14 = TimeSpan_get_Minutes_mF5A78108FEB64953C298CEC19637378380881202((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		int32_t L_18;
		L_18 = TimeSpan_get_Seconds_m3324F3A1F96CA956DAEDDB69DB32CAA320A053F7((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_20);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = L_17;
		int32_t L_22;
		L_22 = TimeSpan_get_Milliseconds_m7DCE7C8875295A46F8A3ED0326F498F30D1F9BEE((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		double L_23;
		L_23 = floor(((double)((double)((float)((float)((float)((float)L_22))/(float)(100.0f))))));
		double L_24 = L_23;
		RuntimeObject * L_25 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_25);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		String_t* L_26;
		L_26 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral377C585B1B1DFB2354530C907FF3AF34F921983D, L_21, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Boolean Oculus.Voice.Demo.BuiltInDemo.TimerController::ParseTime(System.String[],System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimerController_ParseTime_m1CCD2091A91F28CFF4813F8F49E56A396F96CB0E (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___entityValues0, double* ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C2779828DB4F6FD0BAFA174EC8935FB45601490);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FDD57A554F4937B1372DCDFBB149567C0704967);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// time = _time;
		double* L_0 = ___time1;
		double L_1 = __this->get__time_4();
		*((double*)L_0) = (double)L_1;
		// if (entityValues.Length > 0 && double.TryParse(entityValues[0], out time))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___entityValues0;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0075;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___entityValues0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		double* L_6 = ___time1;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0(L_5, (double*)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		// if (entityValues.Length < 2)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = ___entityValues0;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))) >= ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		// throw new ArgumentException("Entities being parsed must include time value and unit.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D00B228D10C715DA89DB12080F9DA6C37464B3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimerController_ParseTime_m1CCD2091A91F28CFF4813F8F49E56A396F96CB0E_RuntimeMethod_var)));
	}

IL_0028:
	{
		// if (!string.IsNullOrEmpty(entityValues[1]))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = ___entityValues0;
		NullCheck(L_10);
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		bool L_13;
		L_13 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0073;
		}
	}
	{
		// switch (entityValues[1])
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = ___entityValues0;
		NullCheck(L_14);
		int32_t L_15 = 1;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = L_16;
		String_t* L_17 = V_0;
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_18 = V_0;
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral6C2779828DB4F6FD0BAFA174EC8935FB45601490, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_20 = V_0;
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteral7FDD57A554F4937B1372DCDFBB149567C0704967, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0073;
	}

IL_0055:
	{
		// time *= 60;
		double* L_22 = ___time1;
		double* L_23 = ___time1;
		double L_24 = *((double*)L_23);
		*((double*)L_22) = (double)((double)il2cpp_codegen_multiply((double)L_24, (double)(60.0)));
		// break;
		goto IL_0073;
	}

IL_0065:
	{
		// time *= 60 * 60;
		double* L_25 = ___time1;
		double* L_26 = ___time1;
		double L_27 = *((double*)L_26);
		*((double*)L_25) = (double)((double)il2cpp_codegen_multiply((double)L_27, (double)(3600.0)));
	}

IL_0073:
	{
		// return true;
		return (bool)1;
	}

IL_0075:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController__ctor_m73CB10D7342EE8D30456DE136C7040C6CB785C1B (TimerController_t3035005099318E93DA2D8388A795CD05B604417D * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerDisplay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerDisplay_Start_m2989259F59276166B1BDB70248C97F790009B3AF (TimerDisplay_t57B43DA79696BE27F3049ACEF3BAF716198EE7CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _uiText = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set__uiText_5(L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerDisplay_Update_m852DB87673493176197118E1166745CED5CD28BA (TimerDisplay_t57B43DA79696BE27F3049ACEF3BAF716198EE7CD * __this, const RuntimeMethod* method)
{
	{
		// _uiText.text = timer.GetFormattedTimeFromSeconds();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__uiText_5();
		TimerController_t3035005099318E93DA2D8388A795CD05B604417D * L_1 = __this->get_timer_4();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TimerController_GetFormattedTimeFromSeconds_mC50D3B48CE9A906F63069E6D452CD0EFEA421BBA(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Demo.BuiltInDemo.TimerDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerDisplay__ctor_m35858718740446D539F144C65E05E5144069D14B (TimerDisplay_t57B43DA79696BE27F3049ACEF3BAF716198EE7CD * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Voice.Demo.ShortResponseColorHandler/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mC3C08A84A38DE949A2486FE267910B21E18A9A9B (U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Oculus.Voice.Demo.ShortResponseColorHandler/<>c__DisplayClass11_0::<TryGetShapeIndex>b__0(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass11_0_U3CTryGetShapeIndexU3Eb__0_mEFA7F4B1E45623021B179FAAAB40B35BB7603FE5 (U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92 * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___s0, const RuntimeMethod* method)
{
	{
		// index = _shapes == null ? -1 : Array.FindIndex(_shapes, (s) => string.Equals(s.gameObject.name, shapeName, StringComparison.CurrentCultureIgnoreCase));
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0 = ___s0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_shapeName_0();
		bool L_4;
		L_4 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_2, L_3, 1, /*hidden argument*/NULL);
		return L_4;
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
// System.Void Oculus.Voice.Demo.ShortResponseColorHandler/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m014F728DCC0B12EE89F058FADEED21BE59FAC8C6 (U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Oculus.Voice.Demo.ShortResponseColorHandler/<>c__DisplayClass14_0::<TryGetColor>b__0(Oculus.Voice.Demo.ColorOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass14_0_U3CTryGetColorU3Eb__0_m177DA10E6FCB92E8F5D9DD5BAFFADD434246AE8E (U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B * __this, ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7  ___c0, const RuntimeMethod* method)
{
	{
		// int overrideIndex = Array.FindIndex(_colorOverride, (c) => string.Equals(c.colorID, colorName, StringComparison.CurrentCultureIgnoreCase));
		ColorOverride_tDF40B54596CF7B32E0C51CB8F55795C0535372F7  L_0 = ___c0;
		String_t* L_1 = L_0.get_colorID_0();
		String_t* L_2 = __this->get_colorName_0();
		bool L_3;
		L_3 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_1, L_2, 1, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * VoiceEvents_get_OnPartialTranscription_m4A589ADB077808B120CC86ACAD6AB198CB8F4672_inline (VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * __this, const RuntimeMethod* method)
{
	{
		// public WitTranscriptionEvent OnPartialTranscription => onPartialTranscription;
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_0 = __this->get_onPartialTranscription_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * VoiceEvents_get_OnFullTranscription_m396F08D0ACDBDC1B1ADEC0182D99D93864333BC3_inline (VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * __this, const RuntimeMethod* method)
{
	{
		// public WitTranscriptionEvent OnFullTranscription => onFullTranscription;
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_0 = __this->get_onFullTranscription_25();
		return L_0;
	}
}
