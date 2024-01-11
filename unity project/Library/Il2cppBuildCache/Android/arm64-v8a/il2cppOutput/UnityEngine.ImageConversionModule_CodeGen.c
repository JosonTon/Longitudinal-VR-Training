#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
extern void ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED (void);
// 0x00000002 System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
extern void ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641 (void);
// 0x00000003 System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D)
extern void ImageConversion_EncodeToJPG_m75581ECC85FF41720A0CCB7602EF6E1D037C909F (void);
static Il2CppMethodPointer s_methodPointers[3] = 
{
	ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED,
	ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641,
	ImageConversion_EncodeToJPG_m75581ECC85FF41720A0CCB7602EF6E1D037C909F,
};
static const int32_t s_InvokerIndices[3] = 
{
	5721,
	5288,
	5721,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_ImageConversionModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_ImageConversionModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_ImageConversionModule_CodeGenModule = 
{
	"UnityEngine.ImageConversionModule.dll",
	3,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_ImageConversionModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
