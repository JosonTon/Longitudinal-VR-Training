﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// Meta.Conduit.ConduitAssemblyAttribute
struct ConduitAssemblyAttribute_t6626115E4FCA563208711AA592066A808C55B60E;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// UnityEngine.ExecuteAlways
struct ExecuteAlways_tF6C3132EB025F81EAA1C682801417AE96BEBF84B;
// UnityEngine.HeaderAttribute
struct HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB;
// UnityEngine.MultilineAttribute
struct MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;
// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B;
// Meta.WitAi.ValidatePartialIntent
struct ValidatePartialIntent_tA861F3BA89A4514F2ADF1D6EC0F3F6EBC043F7F0;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Meta.Conduit.ConduitActionAttribute
struct ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Meta.Conduit.ConduitActionAttribute::<Intent>k__BackingField
	String_t* ___U3CIntentU3Ek__BackingField_0;
	// System.Single Meta.Conduit.ConduitActionAttribute::<MinConfidence>k__BackingField
	float ___U3CMinConfidenceU3Ek__BackingField_1;
	// System.Single Meta.Conduit.ConduitActionAttribute::<MaxConfidence>k__BackingField
	float ___U3CMaxConfidenceU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitActionAttribute::<Aliases>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CAliasesU3Ek__BackingField_5;
	// System.Boolean Meta.Conduit.ConduitActionAttribute::<ValidatePartial>k__BackingField
	bool ___U3CValidatePartialU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CIntentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B, ___U3CIntentU3Ek__BackingField_0)); }
	inline String_t* get_U3CIntentU3Ek__BackingField_0() const { return ___U3CIntentU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIntentU3Ek__BackingField_0() { return &___U3CIntentU3Ek__BackingField_0; }
	inline void set_U3CIntentU3Ek__BackingField_0(String_t* value)
	{
		___U3CIntentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIntentU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMinConfidenceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B, ___U3CMinConfidenceU3Ek__BackingField_1)); }
	inline float get_U3CMinConfidenceU3Ek__BackingField_1() const { return ___U3CMinConfidenceU3Ek__BackingField_1; }
	inline float* get_address_of_U3CMinConfidenceU3Ek__BackingField_1() { return &___U3CMinConfidenceU3Ek__BackingField_1; }
	inline void set_U3CMinConfidenceU3Ek__BackingField_1(float value)
	{
		___U3CMinConfidenceU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaxConfidenceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B, ___U3CMaxConfidenceU3Ek__BackingField_3)); }
	inline float get_U3CMaxConfidenceU3Ek__BackingField_3() const { return ___U3CMaxConfidenceU3Ek__BackingField_3; }
	inline float* get_address_of_U3CMaxConfidenceU3Ek__BackingField_3() { return &___U3CMaxConfidenceU3Ek__BackingField_3; }
	inline void set_U3CMaxConfidenceU3Ek__BackingField_3(float value)
	{
		___U3CMaxConfidenceU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAliasesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B, ___U3CAliasesU3Ek__BackingField_5)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CAliasesU3Ek__BackingField_5() const { return ___U3CAliasesU3Ek__BackingField_5; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CAliasesU3Ek__BackingField_5() { return &___U3CAliasesU3Ek__BackingField_5; }
	inline void set_U3CAliasesU3Ek__BackingField_5(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CAliasesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAliasesU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValidatePartialU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B, ___U3CValidatePartialU3Ek__BackingField_6)); }
	inline bool get_U3CValidatePartialU3Ek__BackingField_6() const { return ___U3CValidatePartialU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CValidatePartialU3Ek__BackingField_6() { return &___U3CValidatePartialU3Ek__BackingField_6; }
	inline void set_U3CValidatePartialU3Ek__BackingField_6(bool value)
	{
		___U3CValidatePartialU3Ek__BackingField_6 = value;
	}
};


// Meta.Conduit.ConduitAssemblyAttribute
struct ConduitAssemblyAttribute_t6626115E4FCA563208711AA592066A808C55B60E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// UnityEngine.ExecuteAlways
struct ExecuteAlways_tF6C3132EB025F81EAA1C682801417AE96BEBF84B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// UnityEngine.HeaderAttribute
struct HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.HeaderAttribute::header
	String_t* ___header_0;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB, ___header_0)); }
	inline String_t* get_header_0() const { return ___header_0; }
	inline String_t** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(String_t* value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___header_0), (void*)value);
	}
};


// UnityEngine.MultilineAttribute
struct MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.Int32 UnityEngine.MultilineAttribute::lines
	int32_t ___lines_0;

public:
	inline static int32_t get_offset_of_lines_0() { return static_cast<int32_t>(offsetof(MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291, ___lines_0)); }
	inline int32_t get_lines_0() const { return ___lines_0; }
	inline int32_t* get_address_of_lines_0() { return &___lines_0; }
	inline void set_lines_0(int32_t value)
	{
		___lines_0 = value;
	}
};


// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tooltip_0), (void*)value);
	}
};


// Meta.WitAi.ValidatePartialIntent
struct ValidatePartialIntent_tA861F3BA89A4514F2ADF1D6EC0F3F6EBC043F7F0  : public ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B
{
public:

public:
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void Meta.Conduit.ConduitAssemblyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitAssemblyAttribute__ctor_m2F65A7E2DFE83EE810C4AC8D54EDA18D7D4BE87A (ConduitAssemblyAttribute_t6626115E4FCA563208711AA592066A808C55B60E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.HeaderAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * __this, String_t* ___header0, const RuntimeMethod* method);
// System.Void UnityEngine.MultilineAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilineAttribute__ctor_m353DC377C95D4C341F5DDD0F9894878F64E5703E (MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.ValidatePartialIntent::.ctor(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidatePartialIntent__ctor_m758A8FE3B77A8789090AA7BF7D1D36D675904CA7 (ValidatePartialIntent_tA861F3BA89A4514F2ADF1D6EC0F3F6EBC043F7F0 * __this, String_t* ___intent0, float ___minConfidence1, float ___maxConfidence2, const RuntimeMethod* method);
// System.Void UnityEngine.ExecuteAlways::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteAlways__ctor_mDB73D23637E65E57DE87C7BAAFE4CE694AE9BEE0 (ExecuteAlways_tF6C3132EB025F81EAA1C682801417AE96BEBF84B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042 (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * __this, String_t* ___tooltip0, const RuntimeMethod* method);
static void Oculus_Voice_Demo_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[0];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[1];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[2];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
	{
		ConduitAssemblyAttribute_t6626115E4FCA563208711AA592066A808C55B60E * tmp = (ConduitAssemblyAttribute_t6626115E4FCA563208711AA592066A808C55B60E *)cache->attributes[3];
		ConduitAssemblyAttribute__ctor_m2F65A7E2DFE83EE810C4AC8D54EDA18D7D4BE87A(tmp, NULL);
	}
}
static void ButtonEventWatcher_t9C89DF1FEB93786FA968A3E0AF58652813C862DE_CustomAttributesCacheGenerator__keys(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03_CustomAttributesCacheGenerator_freshStateText(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x66\x61\x75\x6C\x74\x20\x53\x74\x61\x74\x65\x73"), NULL);
	}
	{
		MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291 * tmp = (MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291 *)cache->attributes[1];
		MultilineAttribute__ctor_m353DC377C95D4C341F5DDD0F9894878F64E5703E(tmp, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[2];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03_CustomAttributesCacheGenerator_textArea(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[1];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x49"), NULL);
	}
}
static void InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03_CustomAttributesCacheGenerator_showJson(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03_CustomAttributesCacheGenerator_appVoiceExperience(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x56\x6F\x69\x63\x65"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03_CustomAttributesCacheGenerator_InteractionHandler_U3COnRequestStartedU3Eb__9_0_mE88FBE7A317B58B24795F37305346DDCD8698485(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7_CustomAttributesCacheGenerator__shapeContainer(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x53\x68\x61\x70\x65\x20\x53\x65\x74\x74\x69\x6E\x67\x73"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7_CustomAttributesCacheGenerator__colorOverride(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x43\x6F\x6C\x6F\x72\x20\x53\x65\x74\x74\x69\x6E\x67\x73"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7_CustomAttributesCacheGenerator_ShortResponseColorHandler_OnValidateShapeSelect_m589075DE55D221B582AA8117D0454042205BD88F(CustomAttributesCache* cache)
{
	{
		ValidatePartialIntent_tA861F3BA89A4514F2ADF1D6EC0F3F6EBC043F7F0 * tmp = (ValidatePartialIntent_tA861F3BA89A4514F2ADF1D6EC0F3F6EBC043F7F0 *)cache->attributes[0];
		ValidatePartialIntent__ctor_m758A8FE3B77A8789090AA7BF7D1D36D675904CA7(tmp, il2cpp_codegen_string_new_wrapper("\x73\x68\x61\x70\x65\x5F\x73\x65\x6C\x65\x63\x74"), 0.800000012f, 1.0f, NULL);
	}
}
static void ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7_CustomAttributesCacheGenerator_ShortResponseColorHandler_OnValidateColorSet_mF200E49CCD20FF3BCB944335EBD6ECFF7478D3C0(CustomAttributesCache* cache)
{
	{
		ValidatePartialIntent_tA861F3BA89A4514F2ADF1D6EC0F3F6EBC043F7F0 * tmp = (ValidatePartialIntent_tA861F3BA89A4514F2ADF1D6EC0F3F6EBC043F7F0 *)cache->attributes[0];
		ValidatePartialIntent__ctor_m758A8FE3B77A8789090AA7BF7D1D36D675904CA7(tmp, il2cpp_codegen_string_new_wrapper("\x63\x6F\x6C\x6F\x72\x5F\x73\x65\x74"), 0.800000012f, 1.0f, NULL);
	}
}
static void U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ShortResponseInstructions_tC0E9F4B232971495F5879DC44FB93E825DB6BD23_CustomAttributesCacheGenerator__instructionsLabel(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[1];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x49\x20\x53\x65\x74\x74\x69\x6E\x67\x73"), NULL);
	}
}
static void ShortResponseInstructions_tC0E9F4B232971495F5879DC44FB93E825DB6BD23_CustomAttributesCacheGenerator__shapeMissingText(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x54\x65\x78\x74\x20\x53\x65\x74\x74\x69\x6E\x67\x73"), NULL);
	}
}
static void ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC_CustomAttributesCacheGenerator__requests(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x54\x72\x61\x6E\x73\x63\x72\x69\x70\x74\x20\x52\x65\x71\x75\x65\x73\x74\x73"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC_CustomAttributesCacheGenerator__voiceService(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x56\x6F\x69\x63\x65"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExecuteAlways_tF6C3132EB025F81EAA1C682801417AE96BEBF84B * tmp = (ExecuteAlways_tF6C3132EB025F81EAA1C682801417AE96BEBF84B *)cache->attributes[0];
		ExecuteAlways__ctor_mDB73D23637E65E57DE87C7BAAFE4CE694AE9BEE0(tmp, NULL);
	}
}
static void Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_CustomAttributesCacheGenerator_instructionText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void TimerController_t3035005099318E93DA2D8388A795CD05B604417D_CustomAttributesCacheGenerator_logText(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x55\x49\x20\x74\x65\x78\x74\x20\x65\x6C\x65\x6D\x65\x6E\x74\x20\x74\x6F\x20\x73\x68\x6F\x77\x20\x61\x70\x70\x20\x6D\x65\x73\x73\x61\x67\x65\x73\x2E"), NULL);
	}
}
static void TimerController_t3035005099318E93DA2D8388A795CD05B604417D_CustomAttributesCacheGenerator_timesUpSounds(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x74\x69\x6D\x65\x72\x20\x72\x69\x6E\x67\x20\x73\x6F\x75\x6E\x64\x2E"), NULL);
	}
}
static void U3CPrivateImplementationDetailsU3E_tDEA6A2962102C60FC2730249F235FB6C73550394_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Oculus_Voice_Demo_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Oculus_Voice_Demo_AttributeGenerators[22] = 
{
	U3CU3Ec__DisplayClass11_0_tF0616A5F3CC3C382B7B62800D6ECBACE3CBB4F92_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass14_0_t9BB701D9125401F2AF5633748689ABE2ED9F721B_CustomAttributesCacheGenerator,
	Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_tDEA6A2962102C60FC2730249F235FB6C73550394_CustomAttributesCacheGenerator,
	ButtonEventWatcher_t9C89DF1FEB93786FA968A3E0AF58652813C862DE_CustomAttributesCacheGenerator__keys,
	InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03_CustomAttributesCacheGenerator_freshStateText,
	InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03_CustomAttributesCacheGenerator_textArea,
	InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03_CustomAttributesCacheGenerator_showJson,
	InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03_CustomAttributesCacheGenerator_appVoiceExperience,
	ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7_CustomAttributesCacheGenerator__shapeContainer,
	ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7_CustomAttributesCacheGenerator__colorOverride,
	ShortResponseInstructions_tC0E9F4B232971495F5879DC44FB93E825DB6BD23_CustomAttributesCacheGenerator__instructionsLabel,
	ShortResponseInstructions_tC0E9F4B232971495F5879DC44FB93E825DB6BD23_CustomAttributesCacheGenerator__shapeMissingText,
	ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC_CustomAttributesCacheGenerator__requests,
	ParallelTranscriptHandler_t1F9B8272B2E9654606D4231397320487075D7FAC_CustomAttributesCacheGenerator__voiceService,
	Instructions_tF065B9ED0B2453A1060751EEF83F991F390591D5_CustomAttributesCacheGenerator_instructionText,
	TimerController_t3035005099318E93DA2D8388A795CD05B604417D_CustomAttributesCacheGenerator_logText,
	TimerController_t3035005099318E93DA2D8388A795CD05B604417D_CustomAttributesCacheGenerator_timesUpSounds,
	InteractionHandler_t4FFA3451A92898C717FC21AF73FEF0CAFB30CF03_CustomAttributesCacheGenerator_InteractionHandler_U3COnRequestStartedU3Eb__9_0_mE88FBE7A317B58B24795F37305346DDCD8698485,
	ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7_CustomAttributesCacheGenerator_ShortResponseColorHandler_OnValidateShapeSelect_m589075DE55D221B582AA8117D0454042205BD88F,
	ShortResponseColorHandler_t81BB1B641FB0CEA74152EB14F3C3C31902209AF7_CustomAttributesCacheGenerator_ShortResponseColorHandler_OnValidateColorSet_mF200E49CCD20FF3BCB944335EBD6ECFF7478D3C0,
	Oculus_Voice_Demo_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
