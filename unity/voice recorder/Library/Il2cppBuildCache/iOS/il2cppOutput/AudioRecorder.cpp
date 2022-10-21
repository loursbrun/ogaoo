#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// AudioRecorder.Recorder
struct Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.String
struct String_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// AudioRecorder.Recorder/OnError
struct OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6;
// AudioRecorder.Recorder/OnFinish
struct OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4;
// AudioRecorder.Recorder/OnInit
struct OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98;
// AudioRecorder.Recorder/OnSaved
struct OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90;
IL2CPP_EXTERN_C String_t* _stringLiteral145444492C9B16D07240F9B5E1C5F5496AD9DA42;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758;
IL2CPP_EXTERN_C String_t* _stringLiteral7CE10074DA4EDD547E37EFFF41398CD6AD4437FE;
IL2CPP_EXTERN_C String_t* _stringLiteral7E5DB8112F625899D02156F41AA88B0C3228E127;
IL2CPP_EXTERN_C String_t* _stringLiteral8602739E11EA82A3DB782F607B294D43A63CB65B;
IL2CPP_EXTERN_C String_t* _stringLiteral876BA9D37F5B3B86B1953A81D0C931AE6AFB2BED;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E;
IL2CPP_EXTERN_C String_t* _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F;
IL2CPP_EXTERN_C String_t* _stringLiteralC8597C371BE79BFB37C37BAAAFBE9E6A5E6ACDAB;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD6800828A7BAF52DFD5FDC72C279391FE935B967 
{
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// AudioRecorder.Recorder
struct Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C  : public RuntimeObject
{
	// System.Int32 AudioRecorder.Recorder::minFreq
	int32_t ___minFreq_5;
	// System.Int32 AudioRecorder.Recorder::maxFreq
	int32_t ___maxFreq_6;
	// System.Boolean AudioRecorder.Recorder::isRecorded
	bool ___isRecorded_7;
	// UnityEngine.AudioClip AudioRecorder.Recorder::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_8;
	// System.Boolean AudioRecorder.Recorder::isRecording
	bool ___isRecording_9;
	// System.Boolean AudioRecorder.Recorder::isReady
	bool ___isReady_10;
	// System.Int32 AudioRecorder.Recorder::deviceIndex
	int32_t ___deviceIndex_11;
};

struct Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields
{
	// AudioRecorder.Recorder/OnInit AudioRecorder.Recorder::onInitInvoker
	OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* ___onInitInvoker_1;
	// AudioRecorder.Recorder/OnFinish AudioRecorder.Recorder::onFinishInvoker
	OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* ___onFinishInvoker_2;
	// AudioRecorder.Recorder/OnError AudioRecorder.Recorder::onErrorInvoker
	OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* ___onErrorInvoker_3;
	// AudioRecorder.Recorder/OnSaved AudioRecorder.Recorder::onSavedInvoker
	OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* ___onSavedInvoker_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.Void
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

// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ____uwr_0;
};

// UnityEngine.AudioType
struct AudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B 
{
	// System.Int32 UnityEngine.AudioType::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileAccess
struct FileAccess_t3992FF4CCC61971B804DD291F06F696C3CF33C30 
{
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;
};

// System.IO.FileMode
struct FileMode_t111B48D5347628AEFCBF9A0EC2833827A302ECBA 
{
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E 
{
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;
};

// System.IO.SeekOrigin
struct SeekOrigin_t7EB9AD0EDF26368A40F48FA2098F02160B1E8000 
{
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;
};

// Interop/Sys/FileStatusFlags
struct FileStatusFlags_tB53E2B9A54305CDCEA49884DEEDB8C62C8ACC9C9 
{
	// System.Int32 Interop/Sys/FileStatusFlags::value__
	int32_t ___value___2;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// AudioRecorder.Recorder/OnError
struct OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6  : public MulticastDelegate_t
{
};

// AudioRecorder.Recorder/OnFinish
struct OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4  : public MulticastDelegate_t
{
};

// AudioRecorder.Recorder/OnInit
struct OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98  : public MulticastDelegate_t
{
};

// AudioRecorder.Recorder/OnSaved
struct OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;

// System.Void AudioRecorder.Recorder::AddHandler_onInit(AudioRecorder.Recorder/OnInit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_AddHandler_onInit_mF32812DDC877E6ED5021C70A5C6C038C6AB00368 (OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* ___value0, const RuntimeMethod* method) ;
// System.Void AudioRecorder.Recorder::RemoveHandler_onInit(AudioRecorder.Recorder/OnInit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_RemoveHandler_onInit_mE867E92ADE81E9A3678DF25B5D3C35FE04D3F2E1 (OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* ___value0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void AudioRecorder.Recorder::AddHandler_onFinish(AudioRecorder.Recorder/OnFinish)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_AddHandler_onFinish_m2BF34850F95C4D19877E29F3303B933BEF4CB3B1 (OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* ___value0, const RuntimeMethod* method) ;
// System.Void AudioRecorder.Recorder::RemoveHandler_onFinish(AudioRecorder.Recorder/OnFinish)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_RemoveHandler_onFinish_mB8A838C02F4ED7EC9A06FC911AD921183819BE1C (OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* ___value0, const RuntimeMethod* method) ;
// System.Void AudioRecorder.Recorder::AddHandler_onError(AudioRecorder.Recorder/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_AddHandler_onError_mE871DE92E3C07CCC14FA01309729FB867C5D7854 (OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* ___value0, const RuntimeMethod* method) ;
// System.Void AudioRecorder.Recorder::RemoveHandler_onError(AudioRecorder.Recorder/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_RemoveHandler_onError_mEF9A821AF87E6ABDF0057278FA28ED0257CD23F5 (OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* ___value0, const RuntimeMethod* method) ;
// System.Void AudioRecorder.Recorder::AddHandler_onSaved(AudioRecorder.Recorder/OnSaved)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_AddHandler_onSaved_m93058B9B2CBD4AE2F10D95F10AA5A3EBCA7D62A7 (OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* ___value0, const RuntimeMethod* method) ;
// System.Void AudioRecorder.Recorder::RemoveHandler_onSaved(AudioRecorder.Recorder/OnSaved)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_RemoveHandler_onSaved_mF02EFAF5985AB1D8E83A306183B7F3A5D0377C61 (OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* ___value0, const RuntimeMethod* method) ;
// System.Void AudioRecorder.Recorder::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_Init_m539475A53568365BB2CDBB05ECAEE6CE3F507AF3 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, int32_t ___deviceIndex0, const RuntimeMethod* method) ;
// System.String[] UnityEngine.Microphone::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Microphone_get_devices_mCD587533C5DBD8AE5C1D4E52143F7B6E9CAF181E (const RuntimeMethod* method) ;
// System.Void AudioRecorder.Recorder/OnError::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C_inline (OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* __this, String_t* ___err0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_mD4A096A929389C5C69906B4E2B27CE18091B28BA (String_t* ___deviceName0, int32_t* ___minFreq1, int32_t* ___maxFreq2, const RuntimeMethod* method) ;
// System.Void AudioRecorder.Recorder::PrepareForRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_PrepareForRecording_m71F35F5A65039F4719D3254006FF781FD15C180D (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, const RuntimeMethod* method) ;
// System.Void AudioRecorder.Recorder/OnInit::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnInit_Invoke_mC90E3F904CEB635D251EB8589D50D72B04933D6B_inline (OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* __this, bool ___success0, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_Start_m135193EDEA092BB393D75C728456523DC8E13BD9 (String_t* ___deviceName0, bool ___loop1, int32_t ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_m5FD3F1D82F93F5C7CAD4EF88F5EFF999AC0BDF4C (String_t* ___deviceName0, const RuntimeMethod* method) ;
// System.Void AudioRecorder.Recorder/OnFinish::Invoke(UnityEngine.AudioClip)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnFinish_Invoke_mB494729CCF9DD306D168EF2188932321EBB7B52C_inline (OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWW::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, String_t* ___url0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WWW::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWW_get_isDone_m7E88B666AD0E3903757043813B2811BBFCCCA52E (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean,System.Boolean,UnityEngine.AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* WWW_GetAudioClip_m38EFF82040D63C9424EC3A4EDA9E562FB0097116 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, bool ___threeD0, bool ___stream1, int32_t ___audioType2, const RuntimeMethod* method) ;
// UnityEngine.AudioClip AudioRecorder.Recorder::TrimSilence(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Recorder_TrimSilence_m5DD5CEE5FAED025563BF840DDDE83A373953E755 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___min1, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.FileStream AudioRecorder.Recorder::CreateEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* Recorder_CreateEmpty_m1D9AFB104D75F909E38A2944CA9541D0CFC33007 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, String_t* ___filepath0, const RuntimeMethod* method) ;
// System.Void AudioRecorder.Recorder::ConvertAndWrite(System.IO.FileStream,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_ConvertAndWrite_m3FF5CC291B46E542CBAC173ABB2043EBF9DB8B1A (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* ___fileStream0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, const RuntimeMethod* method) ;
// System.Void AudioRecorder.Recorder::WriteHeader(System.IO.FileStream,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_WriteHeader_m8AE124FD545C58794F4FAE988EC676E4564B44E7 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* ___fileStream0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, const RuntimeMethod* method) ;
// System.Void AudioRecorder.Recorder/OnSaved::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSaved_Invoke_m775D487D143B1F26110EF76FE1BA51C65F6B5A87_inline (OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F_gshared)(__this, ___collection0, method);
}
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip AudioRecorder.Recorder::TrimSilence(System.Collections.Generic.List`1<System.Single>,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Recorder_TrimSilence_m0351C59E4226A6C993608A949C3933B49D4F5B4D (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___samples0, float ___min1, int32_t ___channels2, int32_t ___hz3, const RuntimeMethod* method) ;
// UnityEngine.AudioClip AudioRecorder.Recorder::TrimSilence(System.Collections.Generic.List`1<System.Single>,System.Single,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Recorder_TrimSilence_mC837A4486824489BC84253DDED45AA180E0F7594 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___samples0, float ___min1, int32_t ___channels2, int32_t ___hz3, bool ___stream4, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_gshared)(__this, ___index0, ___count1, method);
}
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_m5E7AF900EC6FC5E80551724C87D8E6CB7F6ADFA8 (String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658_gshared)(__this, method);
}
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m28C9BCF1B7814E4E5283164D6E6A35FF789E4249 (int16_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m2C128EDCD9B369F1429E1A0B7F687C98526115BF (int64_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m1B3C2C0E976C781ACD76AFA80DDBCA844FC73D50 (uint16_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
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
// System.Void AudioRecorder.Recorder::add_onInit(AudioRecorder.Recorder/OnInit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_add_onInit_m7BCE40CD44C5493882999BAAB5D58A4AFEEDDD1D (OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* ___value0, const RuntimeMethod* method) 
{
	{
		OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* L_0 = ___value0;
		Recorder_AddHandler_onInit_mF32812DDC877E6ED5021C70A5C6C038C6AB00368(L_0, NULL);
		return;
	}
}
// System.Void AudioRecorder.Recorder::remove_onInit(AudioRecorder.Recorder/OnInit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_remove_onInit_m1BF3050F1979E9963367C18A6B564906B326EC75 (OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* ___value0, const RuntimeMethod* method) 
{
	{
		OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* L_0 = ___value0;
		Recorder_RemoveHandler_onInit_mE867E92ADE81E9A3678DF25B5D3C35FE04D3F2E1(L_0, NULL);
		return;
	}
}
// System.Void AudioRecorder.Recorder::AddHandler_onInit(AudioRecorder.Recorder/OnInit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_AddHandler_onInit_mF32812DDC877E6ED5021C70A5C6C038C6AB00368 (OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* L_0 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onInitInvoker_1;
		OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onInitInvoker_1 = ((OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98*)CastclassSealed((RuntimeObject*)L_2, OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onInitInvoker_1), (void*)((OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98*)CastclassSealed((RuntimeObject*)L_2, OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void AudioRecorder.Recorder::RemoveHandler_onInit(AudioRecorder.Recorder/OnInit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_RemoveHandler_onInit_mE867E92ADE81E9A3678DF25B5D3C35FE04D3F2E1 (OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* L_0 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onInitInvoker_1;
		OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onInitInvoker_1 = ((OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98*)CastclassSealed((RuntimeObject*)L_2, OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onInitInvoker_1), (void*)((OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98*)CastclassSealed((RuntimeObject*)L_2, OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void AudioRecorder.Recorder::add_onFinish(AudioRecorder.Recorder/OnFinish)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_add_onFinish_m1DEBCC692E55EFED2B2950C1F622FA2485188B95 (OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* ___value0, const RuntimeMethod* method) 
{
	{
		OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* L_0 = ___value0;
		Recorder_AddHandler_onFinish_m2BF34850F95C4D19877E29F3303B933BEF4CB3B1(L_0, NULL);
		return;
	}
}
// System.Void AudioRecorder.Recorder::remove_onFinish(AudioRecorder.Recorder/OnFinish)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_remove_onFinish_mB299F522102FD11F909490D46A1B33D6FAF1A98C (OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* ___value0, const RuntimeMethod* method) 
{
	{
		OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* L_0 = ___value0;
		Recorder_RemoveHandler_onFinish_mB8A838C02F4ED7EC9A06FC911AD921183819BE1C(L_0, NULL);
		return;
	}
}
// System.Void AudioRecorder.Recorder::AddHandler_onFinish(AudioRecorder.Recorder/OnFinish)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_AddHandler_onFinish_m2BF34850F95C4D19877E29F3303B933BEF4CB3B1 (OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* L_0 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onFinishInvoker_2;
		OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onFinishInvoker_2 = ((OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4*)CastclassSealed((RuntimeObject*)L_2, OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onFinishInvoker_2), (void*)((OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4*)CastclassSealed((RuntimeObject*)L_2, OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void AudioRecorder.Recorder::RemoveHandler_onFinish(AudioRecorder.Recorder/OnFinish)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_RemoveHandler_onFinish_mB8A838C02F4ED7EC9A06FC911AD921183819BE1C (OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* L_0 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onFinishInvoker_2;
		OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onFinishInvoker_2 = ((OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4*)CastclassSealed((RuntimeObject*)L_2, OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onFinishInvoker_2), (void*)((OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4*)CastclassSealed((RuntimeObject*)L_2, OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void AudioRecorder.Recorder::add_onError(AudioRecorder.Recorder/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_add_onError_m7BBE2A4A124520DDC6FC231C0DBD137797B15092 (OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* ___value0, const RuntimeMethod* method) 
{
	{
		OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* L_0 = ___value0;
		Recorder_AddHandler_onError_mE871DE92E3C07CCC14FA01309729FB867C5D7854(L_0, NULL);
		return;
	}
}
// System.Void AudioRecorder.Recorder::remove_onError(AudioRecorder.Recorder/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_remove_onError_m7D56BCA7BED674C886778AF7177F9C45436307AF (OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* ___value0, const RuntimeMethod* method) 
{
	{
		OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* L_0 = ___value0;
		Recorder_RemoveHandler_onError_mEF9A821AF87E6ABDF0057278FA28ED0257CD23F5(L_0, NULL);
		return;
	}
}
// System.Void AudioRecorder.Recorder::AddHandler_onError(AudioRecorder.Recorder/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_AddHandler_onError_mE871DE92E3C07CCC14FA01309729FB867C5D7854 (OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* L_0 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onErrorInvoker_3;
		OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onErrorInvoker_3 = ((OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6*)CastclassSealed((RuntimeObject*)L_2, OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onErrorInvoker_3), (void*)((OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6*)CastclassSealed((RuntimeObject*)L_2, OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void AudioRecorder.Recorder::RemoveHandler_onError(AudioRecorder.Recorder/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_RemoveHandler_onError_mEF9A821AF87E6ABDF0057278FA28ED0257CD23F5 (OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* L_0 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onErrorInvoker_3;
		OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onErrorInvoker_3 = ((OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6*)CastclassSealed((RuntimeObject*)L_2, OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onErrorInvoker_3), (void*)((OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6*)CastclassSealed((RuntimeObject*)L_2, OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void AudioRecorder.Recorder::add_onSaved(AudioRecorder.Recorder/OnSaved)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_add_onSaved_m28B398609A4B045AE1508B221332BEC5DAD1B715 (OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* ___value0, const RuntimeMethod* method) 
{
	{
		OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* L_0 = ___value0;
		Recorder_AddHandler_onSaved_m93058B9B2CBD4AE2F10D95F10AA5A3EBCA7D62A7(L_0, NULL);
		return;
	}
}
// System.Void AudioRecorder.Recorder::remove_onSaved(AudioRecorder.Recorder/OnSaved)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_remove_onSaved_mE0EEBE4026788B8C8E941575880E4DF49A248314 (OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* ___value0, const RuntimeMethod* method) 
{
	{
		OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* L_0 = ___value0;
		Recorder_RemoveHandler_onSaved_mF02EFAF5985AB1D8E83A306183B7F3A5D0377C61(L_0, NULL);
		return;
	}
}
// System.Void AudioRecorder.Recorder::AddHandler_onSaved(AudioRecorder.Recorder/OnSaved)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_AddHandler_onSaved_m93058B9B2CBD4AE2F10D95F10AA5A3EBCA7D62A7 (OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* L_0 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onSavedInvoker_4;
		OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onSavedInvoker_4 = ((OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A*)CastclassSealed((RuntimeObject*)L_2, OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onSavedInvoker_4), (void*)((OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A*)CastclassSealed((RuntimeObject*)L_2, OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void AudioRecorder.Recorder::RemoveHandler_onSaved(AudioRecorder.Recorder/OnSaved)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_RemoveHandler_onSaved_mF02EFAF5985AB1D8E83A306183B7F3A5D0377C61 (OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* L_0 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onSavedInvoker_4;
		OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onSavedInvoker_4 = ((OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A*)CastclassSealed((RuntimeObject*)L_2, OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onSavedInvoker_4), (void*)((OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A*)CastclassSealed((RuntimeObject*)L_2, OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Boolean AudioRecorder.Recorder::get_hasRecorded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_hasRecorded_m1970611A14279F206D747A846B14E3A39387CF96 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isRecorded_7;
		return L_0;
	}
}
// UnityEngine.AudioClip AudioRecorder.Recorder::get_Clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Recorder_get_Clip_m79B23322CA7C2ADC8926DEEC9B527681A7A0FE12 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, const RuntimeMethod* method) 
{
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->___clip_8;
		return L_0;
	}
}
// System.Boolean AudioRecorder.Recorder::get_IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_IsRecording_m0639DF326FAFB2940F19A74FB634378CB28F9253 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isRecording_9;
		return L_0;
	}
}
// System.Boolean AudioRecorder.Recorder::get_IsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_IsReady_m40FBDF8CA41AA8D740115CEF0E2E250645AB15DD (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isReady_10;
		return L_0;
	}
}
// System.Void AudioRecorder.Recorder::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_Init_mB5E3AA00DAA51896CF89FBDBD4105459B3BEC5EC (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, const RuntimeMethod* method) 
{
	{
		Recorder_Init_m539475A53568365BB2CDBB05ECAEE6CE3F507AF3(__this, 0, NULL);
		return;
	}
}
// System.Void AudioRecorder.Recorder::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_Init_m539475A53568365BB2CDBB05ECAEE6CE3F507AF3 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, int32_t ___deviceIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8597C371BE79BFB37C37BAAAFBE9E6A5E6ACDAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___deviceIndex0;
		__this->___deviceIndex_11 = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = Microphone_get_devices_mCD587533C5DBD8AE5C1D4E52143F7B6E9CAF181E(NULL);
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_002d;
		}
	}
	{
		OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* L_2 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onErrorInvoker_3;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* L_3 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onErrorInvoker_3;
		NullCheck(L_3);
		OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C_inline(L_3, _stringLiteralC8597C371BE79BFB37C37BAAAFBE9E6A5E6ACDAB, NULL);
	}

IL_0025:
	{
		__this->___isReady_10 = (bool)0;
		return;
	}

IL_002d:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = Microphone_get_devices_mCD587533C5DBD8AE5C1D4E52143F7B6E9CAF181E(NULL);
		int32_t L_5 = ___deviceIndex0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t* L_8 = (&__this->___minFreq_5);
		int32_t* L_9 = (&__this->___maxFreq_6);
		Microphone_GetDeviceCaps_mD4A096A929389C5C69906B4E2B27CE18091B28BA(L_7, L_8, L_9, NULL);
		Recorder_PrepareForRecording_m71F35F5A65039F4719D3254006FF781FD15C180D(__this, NULL);
		__this->___isReady_10 = (bool)1;
		OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* L_10 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onInitInvoker_1;
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* L_11 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onInitInvoker_1;
		NullCheck(L_11);
		OnInit_Invoke_mC90E3F904CEB635D251EB8589D50D72B04933D6B_inline(L_11, (bool)1, NULL);
	}

IL_0064:
	{
		return;
	}
}
// System.Void AudioRecorder.Recorder::PrepareForRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_PrepareForRecording_m71F35F5A65039F4719D3254006FF781FD15C180D (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Microphone_get_devices_mCD587533C5DBD8AE5C1D4E52143F7B6E9CAF181E(NULL);
		int32_t L_1 = __this->___deviceIndex_11;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4;
		L_4 = Microphone_Start_m135193EDEA092BB393D75C728456523DC8E13BD9(L_3, (bool)0, ((int32_t)10), ((int32_t)4400), NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = Microphone_get_devices_mCD587533C5DBD8AE5C1D4E52143F7B6E9CAF181E(NULL);
		int32_t L_6 = __this->___deviceIndex_11;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Microphone_End_m5FD3F1D82F93F5C7CAD4EF88F5EFF999AC0BDF4C(L_8, NULL);
		int32_t L_9 = __this->___minFreq_5;
		if (L_9)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_10 = __this->___maxFreq_6;
		if (L_10)
		{
			goto IL_0046;
		}
	}
	{
		__this->___maxFreq_6 = ((int32_t)44100);
	}

IL_0046:
	{
		return;
	}
}
// System.Void AudioRecorder.Recorder::StartRecording(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_StartRecording_mF7EC6EE21177F185A1C6D0D99F7B99950C41B3EB (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, bool ___isLoop0, int32_t ___lenInSec1, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Microphone_get_devices_mCD587533C5DBD8AE5C1D4E52143F7B6E9CAF181E(NULL);
		int32_t L_1 = __this->___deviceIndex_11;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4 = ___isLoop0;
		int32_t L_5 = ___lenInSec1;
		int32_t L_6 = __this->___maxFreq_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7;
		L_7 = Microphone_Start_m135193EDEA092BB393D75C728456523DC8E13BD9(L_3, L_4, L_5, L_6, NULL);
		__this->___clip_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clip_8), (void*)L_7);
		__this->___isRecording_9 = (bool)1;
		__this->___isRecorded_7 = (bool)0;
		return;
	}
}
// System.Void AudioRecorder.Recorder::StartRecording(System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_StartRecording_mD6E334A8F6A611C2B017CC0D0CC835AB5228DF38 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, bool ___isLoop0, int32_t ___lenInSec1, int32_t ___frequency2, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Microphone_get_devices_mCD587533C5DBD8AE5C1D4E52143F7B6E9CAF181E(NULL);
		int32_t L_1 = __this->___deviceIndex_11;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4 = ___isLoop0;
		int32_t L_5 = ___lenInSec1;
		int32_t L_6 = ___frequency2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7;
		L_7 = Microphone_Start_m135193EDEA092BB393D75C728456523DC8E13BD9(L_3, L_4, L_5, L_6, NULL);
		__this->___clip_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clip_8), (void*)L_7);
		__this->___isRecording_9 = (bool)1;
		__this->___isRecorded_7 = (bool)0;
		return;
	}
}
// System.Void AudioRecorder.Recorder::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_StopRecording_m6033ED3EC35E5F4548E7EBD32C45AD70C679FBF4 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Microphone_get_devices_mCD587533C5DBD8AE5C1D4E52143F7B6E9CAF181E(NULL);
		int32_t L_1 = __this->___deviceIndex_11;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Microphone_End_m5FD3F1D82F93F5C7CAD4EF88F5EFF999AC0BDF4C(L_3, NULL);
		__this->___isRecording_9 = (bool)0;
		__this->___isRecorded_7 = (bool)1;
		OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* L_4 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onFinishInvoker_2;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* L_5 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onFinishInvoker_2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = __this->___clip_8;
		NullCheck(L_5);
		OnFinish_Invoke_mB494729CCF9DD306D168EF2188932321EBB7B52C_inline(L_5, L_6, NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void AudioRecorder.Recorder::PlayRecorded(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_PlayRecorded_mA56F78A986527A725D1851DF710FCB625C001174 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___src0, const RuntimeMethod* method) 
{
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___src0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___clip_8;
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_1, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___src0;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		return;
	}
}
// System.Void AudioRecorder.Recorder::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_Dispose_m555EA08643D55E14DC7DC747A1ABC1BFA3D94031 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, const RuntimeMethod* method) 
{
	{
		__this->___clip_8 = (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clip_8), (void*)(AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL);
		__this->___isRecording_9 = (bool)0;
		__this->___isRecorded_7 = (bool)0;
		return;
	}
}
// System.Void AudioRecorder.Recorder::PlayAudio(System.String,UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_PlayAudio_m50BF4633DD3C90CB667266F491731306939E661D (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, String_t* ___filePath0, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral145444492C9B16D07240F9B5E1C5F5496AD9DA42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E5DB8112F625899D02156F41AA88B0C3228E127);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876BA9D37F5B3B86B1953A81D0C931AE6AFB2BED);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* V_1 = NULL;
	{
		String_t* L_0 = ___filePath0;
		bool L_1;
		L_1 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_0, NULL);
		if (!L_1)
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_2 = ___filePath0;
		V_0 = L_2;
		int32_t L_3;
		L_3 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral876BA9D37F5B3B86B1953A81D0C931AE6AFB2BED, L_4, NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_6, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90, NULL);
		V_0 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		String_t* L_8 = V_0;
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_8, NULL);
		V_0 = L_9;
	}

IL_003d:
	{
		String_t* L_10 = V_0;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_11 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)il2cpp_codegen_object_new(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D(L_11, L_10, NULL);
		V_1 = L_11;
	}

IL_0044:
	{
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_12 = V_1;
		NullCheck(L_12);
		bool L_13;
		L_13 = WWW_get_isDone_m7E88B666AD0E3903757043813B2811BBFCCCA52E(L_12, NULL);
		if (!L_13)
		{
			goto IL_0044;
		}
	}
	{
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_14 = V_1;
		NullCheck(L_14);
		bool L_15;
		L_15 = WWW_get_isDone_m7E88B666AD0E3903757043813B2811BBFCCCA52E(L_14, NULL);
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = ___source1;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_17 = V_1;
		NullCheck(L_17);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_18;
		L_18 = WWW_GetAudioClip_m38EFF82040D63C9424EC3A4EDA9E562FB0097116(L_17, (bool)0, (bool)0, ((int32_t)20), NULL);
		NullCheck(L_16);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_16, L_18, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_19 = ___source1;
		NullCheck(L_19);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_19, NULL);
		return;
	}

IL_006b:
	{
		OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* L_20 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onErrorInvoker_3;
		if (!L_20)
		{
			goto IL_009e;
		}
	}
	{
		OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* L_21 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onErrorInvoker_3;
		NullCheck(L_21);
		OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C_inline(L_21, _stringLiteral7E5DB8112F625899D02156F41AA88B0C3228E127, NULL);
		return;
	}

IL_0082:
	{
		OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* L_22 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onErrorInvoker_3;
		if (!L_22)
		{
			goto IL_009e;
		}
	}
	{
		OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* L_23 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onErrorInvoker_3;
		String_t* L_24 = ___filePath0;
		String_t* L_25;
		L_25 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral145444492C9B16D07240F9B5E1C5F5496AD9DA42, L_24, NULL);
		NullCheck(L_23);
		OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C_inline(L_23, L_25, NULL);
	}

IL_009e:
	{
		return;
	}
}
// System.Void AudioRecorder.Recorder::PlayAudio(UnityEngine.AudioClip,UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_PlayAudio_mB4281F9EFEB90991C9F58A9EE5B978835716B9BC (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source1, const RuntimeMethod* method) 
{
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___source1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___clip0;
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_1, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___source1;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		return;
	}
}
// System.Boolean AudioRecorder.Recorder::Save(System.String,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_Save_m9F49E57C829D1B960216C80AD55DDD56CBF9EE7E (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, String_t* ___filePath0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_1 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip1;
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1;
			L_1 = Recorder_TrimSilence_m5DD5CEE5FAED025563BF840DDDE83A373953E755(__this, L_0, (0.0f), NULL);
			V_1 = L_1;
			String_t* L_2 = ___filePath0;
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			String_t* L_3;
			L_3 = Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C(L_2, NULL);
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4;
			L_4 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_3, NULL);
			String_t* L_5 = ___filePath0;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6;
			L_6 = Recorder_CreateEmpty_m1D9AFB104D75F909E38A2944CA9541D0CFC33007(__this, L_5, NULL);
			V_2 = L_6;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0035_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = V_2;
						if (!L_7)
						{
							goto IL_003e_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8 = V_2;
						NullCheck(L_8);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
					}

IL_003e_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = V_2;
				AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10 = V_1;
				Recorder_ConvertAndWrite_m3FF5CC291B46E542CBAC173ABB2043EBF9DB8B1A(__this, L_9, L_10, NULL);
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_11 = V_2;
				AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12 = V_1;
				Recorder_WriteHeader_m8AE124FD545C58794F4FAE988EC676E4564B44E7(__this, L_11, L_12, NULL);
				goto IL_003f_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_003f_1:
		{
			OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* L_13 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onSavedInvoker_4;
			if (!L_13)
			{
				goto IL_0051_1;
			}
		}
		{
			OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* L_14 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))->___onSavedInvoker_4;
			String_t* L_15 = ___filePath0;
			NullCheck(L_14);
			OnSaved_Invoke_m775D487D143B1F26110EF76FE1BA51C65F6B5A87_inline(L_14, L_15, NULL);
		}

IL_0051_1:
		{
			V_0 = (bool)1;
			goto IL_007b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0055;
		}
		throw e;
	}

CATCH_0055:
	{// begin catch(System.Exception)
		{
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* L_16 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))))->___onErrorInvoker_3;
			if (!L_16)
			{
				goto IL_0077;
			}
		}
		{
			OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* L_17 = ((Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C_il2cpp_TypeInfo_var))))->___onErrorInvoker_3;
			Exception_t* L_18 = V_3;
			NullCheck(L_18);
			String_t* L_19;
			L_19 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_18);
			String_t* L_20;
			L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8602739E11EA82A3DB782F607B294D43A63CB65B)), L_19, NULL);
			NullCheck(L_17);
			OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C_inline(L_17, L_20, NULL);
		}

IL_0077:
		{
			V_0 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_007b;
		}
	}// end catch (depth: 1)

IL_007b:
	{
		bool L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.AudioClip AudioRecorder.Recorder::TrimSilence(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Recorder_TrimSilence_m5DD5CEE5FAED025563BF840DDDE83A373953E755 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___min1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(L_0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___clip0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D(L_3, L_4, 0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_7 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F(L_7, (RuntimeObject*)L_6, List_1__ctor_m8C289AC1BF84CD8ED45F520DC3005096E1A9A37F_RuntimeMethod_var);
		float L_8 = ___min1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = ___clip0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(L_9, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = ___clip0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B(L_11, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13;
		L_13 = Recorder_TrimSilence_m0351C59E4226A6C993608A949C3933B49D4F5B4D(__this, L_7, L_8, L_10, L_12, NULL);
		return L_13;
	}
}
// UnityEngine.AudioClip AudioRecorder.Recorder::TrimSilence(System.Collections.Generic.List`1<System.Single>,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Recorder_TrimSilence_m0351C59E4226A6C993608A949C3933B49D4F5B4D (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___samples0, float ___min1, int32_t ___channels2, int32_t ___hz3, const RuntimeMethod* method) 
{
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___samples0;
		float L_1 = ___min1;
		int32_t L_2 = ___channels2;
		int32_t L_3 = ___hz3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4;
		L_4 = Recorder_TrimSilence_mC837A4486824489BC84253DDED45AA180E0F7594(__this, L_0, L_1, L_2, L_3, (bool)0, NULL);
		return L_4;
	}
}
// UnityEngine.AudioClip AudioRecorder.Recorder::TrimSilence(System.Collections.Generic.List`1<System.Single>,System.Single,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Recorder_TrimSilence_mC837A4486824489BC84253DDED45AA180E0F7594 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___samples0, float ___min1, int32_t ___channels2, int32_t ___hz3, bool ___stream4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CE10074DA4EDD547E37EFFF41398CD6AD4437FE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___samples0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		float L_2;
		L_2 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_0, L_1, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4 = ___min1;
		if ((((float)L_3) > ((float)L_4)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0017:
	{
		int32_t L_6 = V_0;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_7 = ___samples0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_7, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}

IL_0020:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_9 = ___samples0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589(L_9, 0, L_10, List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_RuntimeMethod_var);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_11 = ___samples0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_11, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0046;
	}

IL_0033:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_13 = ___samples0;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		float L_15;
		L_15 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_13, L_14, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		float L_16;
		L_16 = fabsf(L_15);
		float L_17 = ___min1;
		if ((((float)L_16) > ((float)L_17)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0046:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_0033;
		}
	}

IL_004a:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_20 = ___samples0;
		int32_t L_21 = V_0;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_22 = ___samples0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_22, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		int32_t L_24 = V_0;
		NullCheck(L_20);
		List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589(L_20, L_21, ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_RuntimeMethod_var);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_25 = ___samples0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_25, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		int32_t L_27 = ___channels2;
		int32_t L_28 = ___hz3;
		bool L_29 = ___stream4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_30;
		L_30 = AudioClip_Create_m5E7AF900EC6FC5E80551724C87D8E6CB7F6ADFA8(_stringLiteral7CE10074DA4EDD547E37EFFF41398CD6AD4437FE, L_26, L_27, L_28, L_29, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_31 = L_30;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_32 = ___samples0;
		NullCheck(L_32);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33;
		L_33 = List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658(L_32, List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658_RuntimeMethod_var);
		NullCheck(L_31);
		bool L_34;
		L_34 = AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3(L_31, L_33, 0, NULL);
		return L_31;
	}
}
// System.IO.FileStream AudioRecorder.Recorder::CreateEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* Recorder_CreateEmpty_m1D9AFB104D75F909E38A2944CA9541D0CFC33007 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, String_t* ___filepath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___filepath0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_1, L_0, 2, NULL);
		V_0 = L_1;
		V_1 = (uint8_t)0;
		V_2 = 0;
		goto IL_0019;
	}

IL_000e:
	{
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
		uint8_t L_3 = V_1;
		NullCheck(L_2);
		VirtualActionInvoker1< uint8_t >::Invoke(26 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, L_3);
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0019:
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)44))))
		{
			goto IL_000e;
		}
	}
	{
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = V_0;
		return L_6;
	}
}
// System.Void AudioRecorder.Recorder::ConvertAndWrite(System.IO.FileStream,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_ConvertAndWrite_m3FF5CC291B46E542CBAC173ABB2043EBF9DB8B1A (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* ___fileStream0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(L_0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___clip1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D(L_3, L_4, 0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		NullCheck(L_6);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		V_1 = L_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = V_0;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_8)->max_length)), 2)));
		V_2 = L_9;
		V_3 = ((int32_t)32767);
		V_4 = 0;
		goto IL_0060;
	}

IL_0034:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = V_1;
		int32_t L_11 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = V_3;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int16_t)il2cpp_codegen_cast_double_to_int<int16_t>(((float)il2cpp_codegen_multiply(L_15, ((float)L_16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_18 = V_1;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int16_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = BitConverter_GetBytes_m28C9BCF1B7814E4E5283164D6E6A35FF789E4249(L_21, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		int32_t L_24 = V_4;
		NullCheck((RuntimeArray*)L_22);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_22, (RuntimeArray*)L_23, ((int32_t)il2cpp_codegen_multiply(L_24, 2)), NULL);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0060:
	{
		int32_t L_26 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0034;
		}
	}
	{
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_28 = ___fileStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_2;
		NullCheck(L_30);
		NullCheck(L_28);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_28, L_29, 0, ((int32_t)(((RuntimeArray*)L_30)->max_length)));
		return;
	}
}
// System.Void AudioRecorder.Recorder::WriteHeader(System.IO.FileStream,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_WriteHeader_m8AE124FD545C58794F4FAE988EC676E4564B44E7 (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* ___fileStream0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	uint16_t V_11 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_13 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_14 = NULL;
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B(L_0, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = ___clip1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(L_2, NULL);
		V_0 = L_3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = ___clip1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(L_4, NULL);
		V_1 = L_5;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = ___fileStream0;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_6, ((int64_t)0), 0);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		V_2 = L_9;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_10 = ___fileStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		NullCheck(L_10);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, 4);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12 = ___fileStream0;
		NullCheck(L_12);
		int64_t L_13;
		L_13 = VirtualFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_12);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = BitConverter_GetBytes_m2C128EDCD9B369F1429E1A0B7F687C98526115BF(((int64_t)il2cpp_codegen_subtract(L_13, ((int64_t)8))), NULL);
		V_3 = L_14;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_15 = ___fileStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_3;
		NullCheck(L_15);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_15, L_16, 0, 4);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_17, _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		V_4 = L_18;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_19 = ___fileStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_4;
		NullCheck(L_19);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_19, L_20, 0, 4);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_21;
		L_21 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_21, _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		V_5 = L_22;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_23 = ___fileStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		NullCheck(L_23);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(((int32_t)16), NULL);
		V_6 = L_25;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_26 = ___fileStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_6;
		NullCheck(L_26);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, 0, 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = BitConverter_GetBytes_m1B3C2C0E976C781ACD76AFA80DDBCA844FC73D50((uint16_t)1, NULL);
		V_7 = L_28;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_29 = ___fileStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_7;
		NullCheck(L_29);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_29, L_30, 0, 2);
		int32_t L_31 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(L_31, NULL);
		V_8 = L_32;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_33 = ___fileStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_8;
		NullCheck(L_33);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_33, L_34, 0, 2);
		int32_t L_35 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
		L_36 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(L_35, NULL);
		V_9 = L_36;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_37 = ___fileStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_9;
		NullCheck(L_37);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, 4);
		int32_t L_39 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_35, L_39)), 2)), NULL);
		V_10 = L_40;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_41 = ___fileStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_10;
		NullCheck(L_41);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_41, L_42, 0, 4);
		int32_t L_43 = V_0;
		V_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_multiply(L_43, 2)));
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_44 = ___fileStream0;
		uint16_t L_45 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = BitConverter_GetBytes_m1B3C2C0E976C781ACD76AFA80DDBCA844FC73D50(L_45, NULL);
		NullCheck(L_44);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_44, L_46, 0, 2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47;
		L_47 = BitConverter_GetBytes_m1B3C2C0E976C781ACD76AFA80DDBCA844FC73D50((uint16_t)((int32_t)16), NULL);
		V_12 = L_47;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_48 = ___fileStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_12;
		NullCheck(L_48);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_48, L_49, 0, 2);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_50;
		L_50 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_50);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51;
		L_51 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_50, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		V_13 = L_51;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_52 = ___fileStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_13;
		NullCheck(L_52);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_52, L_53, 0, 4);
		int32_t L_54 = V_1;
		int32_t L_55 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56;
		L_56 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_54, L_55)), 2)), NULL);
		V_14 = L_56;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_57 = ___fileStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_14;
		NullCheck(L_57);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_57, L_58, 0, 4);
		return;
	}
}
// System.Void AudioRecorder.Recorder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder__ctor_mB8BB790A2AF523E3AAC98D5AFEE77C481A0E747E (Recorder_tD446A20F5711B08ACCED920F8420A33DA3C97D1C* __this, const RuntimeMethod* method) 
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
void OnInit_Invoke_mC90E3F904CEB635D251EB8589D50D72B04933D6B_Multicast(OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* __this, bool ___success0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* currentDelegate = reinterpret_cast<OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___success0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnInit_Invoke_mC90E3F904CEB635D251EB8589D50D72B04933D6B_Open(OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* __this, bool ___success0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___success0, method);
}
void OnInit_Invoke_mC90E3F904CEB635D251EB8589D50D72B04933D6B_OpenStaticInvoker(OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* __this, bool ___success0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke(__this->___method_ptr_0, method, NULL, ___success0);
}
void OnInit_Invoke_mC90E3F904CEB635D251EB8589D50D72B04933D6B_ClosedStaticInvoker(OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* __this, bool ___success0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___success0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98 (OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* __this, bool ___success0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___success0));

}
// System.Void AudioRecorder.Recorder/OnInit::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnInit__ctor_mF325EFE48E4177688CDBE67DBA24BAB3A6F5470C (OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnInit_Invoke_mC90E3F904CEB635D251EB8589D50D72B04933D6B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnInit_Invoke_mC90E3F904CEB635D251EB8589D50D72B04933D6B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnInit_Invoke_mC90E3F904CEB635D251EB8589D50D72B04933D6B_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnInit_Invoke_mC90E3F904CEB635D251EB8589D50D72B04933D6B_Multicast;
}
// System.Void AudioRecorder.Recorder/OnInit::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnInit_Invoke_mC90E3F904CEB635D251EB8589D50D72B04933D6B (OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* __this, bool ___success0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___success0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult AudioRecorder.Recorder/OnInit::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnInit_BeginInvoke_m3ECFCACE352A8B3F69EEB1A1500DFE51A55A9DC5 (OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* __this, bool ___success0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___success0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void AudioRecorder.Recorder/OnInit::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnInit_EndInvoke_mE8E943191B24255715660BCF1D1EDB42C3AB9ACF (OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnFinish_Invoke_mB494729CCF9DD306D168EF2188932321EBB7B52C_Multicast(OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* currentDelegate = reinterpret_cast<OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___clip0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnFinish_Invoke_mB494729CCF9DD306D168EF2188932321EBB7B52C_Open(OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___clip0, method);
}
void OnFinish_Invoke_mB494729CCF9DD306D168EF2188932321EBB7B52C_OpenStaticInvoker(OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* >::Invoke(__this->___method_ptr_0, method, NULL, ___clip0);
}
void OnFinish_Invoke_mB494729CCF9DD306D168EF2188932321EBB7B52C_ClosedStaticInvoker(OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___clip0);
}
// System.Void AudioRecorder.Recorder/OnFinish::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFinish__ctor_m78BE3D6E20F9171AF09F5928BBB0D26D47ECE857 (OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnFinish_Invoke_mB494729CCF9DD306D168EF2188932321EBB7B52C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnFinish_Invoke_mB494729CCF9DD306D168EF2188932321EBB7B52C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnFinish_Invoke_mB494729CCF9DD306D168EF2188932321EBB7B52C_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnFinish_Invoke_mB494729CCF9DD306D168EF2188932321EBB7B52C_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnFinish_Invoke_mB494729CCF9DD306D168EF2188932321EBB7B52C_Multicast;
}
// System.Void AudioRecorder.Recorder/OnFinish::Invoke(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFinish_Invoke_mB494729CCF9DD306D168EF2188932321EBB7B52C (OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___clip0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult AudioRecorder.Recorder/OnFinish::BeginInvoke(UnityEngine.AudioClip,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnFinish_BeginInvoke_m1B06BFDCF28040E94884217DE0F0AA82199F150A (OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___clip0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void AudioRecorder.Recorder/OnFinish::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFinish_EndInvoke_mE440B2739634CBB414D3C737C14525B0D808395E (OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C_Multicast(OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* __this, String_t* ___err0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* currentDelegate = reinterpret_cast<OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___err0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C_Open(OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* __this, String_t* ___err0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___err0, method);
}
void OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C_OpenStaticInvoker(OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* __this, String_t* ___err0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___err0);
}
void OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C_ClosedStaticInvoker(OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* __this, String_t* ___err0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___err0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6 (OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* __this, String_t* ___err0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___err0' to native representation
	char* ____err0_marshaled = NULL;
	____err0_marshaled = il2cpp_codegen_marshal_string(___err0);

	// Native function invocation
	il2cppPInvokeFunc(____err0_marshaled);

	// Marshaling cleanup of parameter '___err0' native representation
	il2cpp_codegen_marshal_free(____err0_marshaled);
	____err0_marshaled = NULL;

}
// System.Void AudioRecorder.Recorder/OnError::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnError__ctor_mF5468B4D31B9EF88650F42887A8B1D8BA2620893 (OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C_Multicast;
}
// System.Void AudioRecorder.Recorder/OnError::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C (OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* __this, String_t* ___err0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___err0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult AudioRecorder.Recorder/OnError::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnError_BeginInvoke_m68FB1AD83943BB82ED1383D6F71A912A88D9D80D (OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* __this, String_t* ___err0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___err0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void AudioRecorder.Recorder/OnError::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnError_EndInvoke_m75A1882BBDC196768D8D7D34F67BC29374C2B7F9 (OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnSaved_Invoke_m775D487D143B1F26110EF76FE1BA51C65F6B5A87_Multicast(OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* __this, String_t* ___path0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* currentDelegate = reinterpret_cast<OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___path0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnSaved_Invoke_m775D487D143B1F26110EF76FE1BA51C65F6B5A87_Open(OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* __this, String_t* ___path0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___path0, method);
}
void OnSaved_Invoke_m775D487D143B1F26110EF76FE1BA51C65F6B5A87_OpenStaticInvoker(OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* __this, String_t* ___path0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___path0);
}
void OnSaved_Invoke_m775D487D143B1F26110EF76FE1BA51C65F6B5A87_ClosedStaticInvoker(OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* __this, String_t* ___path0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___path0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A (OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* __this, String_t* ___path0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	il2cppPInvokeFunc(____path0_marshaled);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
// System.Void AudioRecorder.Recorder/OnSaved::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSaved__ctor_mCDFA45BBBAB297602D9A680EC93E8432A4420E16 (OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSaved_Invoke_m775D487D143B1F26110EF76FE1BA51C65F6B5A87_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnSaved_Invoke_m775D487D143B1F26110EF76FE1BA51C65F6B5A87_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSaved_Invoke_m775D487D143B1F26110EF76FE1BA51C65F6B5A87_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnSaved_Invoke_m775D487D143B1F26110EF76FE1BA51C65F6B5A87_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnSaved_Invoke_m775D487D143B1F26110EF76FE1BA51C65F6B5A87_Multicast;
}
// System.Void AudioRecorder.Recorder/OnSaved::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSaved_Invoke_m775D487D143B1F26110EF76FE1BA51C65F6B5A87 (OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___path0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult AudioRecorder.Recorder/OnSaved::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSaved_BeginInvoke_m3B2EE4FE4F9BBFA26DE0C02D4D166C69211E1C0B (OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* __this, String_t* ___path0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___path0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void AudioRecorder.Recorder/OnSaved::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSaved_EndInvoke_m5046C62D8AF207DCC5F4C03F75DE48BA518FC2F5 (OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnError_Invoke_mCEA0D3D8E4933EEA62F0208D77A8C2B04B329B0C_inline (OnError_t222E9910A7626A2999A5E168F26BB6C61A9F2EE6* __this, String_t* ___err0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___err0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnInit_Invoke_mC90E3F904CEB635D251EB8589D50D72B04933D6B_inline (OnInit_tE9D2E45B9E6459E0EF0DAA7CF47F12192E070F98* __this, bool ___success0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___success0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnFinish_Invoke_mB494729CCF9DD306D168EF2188932321EBB7B52C_inline (OnFinish_tCE71A01D256C327799D14934BF82EAEDF552C5D4* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___clip0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSaved_Invoke_m775D487D143B1F26110EF76FE1BA51C65F6B5A87_inline (OnSaved_t230865876679819516A88647F4E569C4CC8B4F2A* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___path0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
