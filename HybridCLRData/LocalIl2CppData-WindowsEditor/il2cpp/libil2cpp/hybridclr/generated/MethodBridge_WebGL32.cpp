#include <codegen/il2cpp-codegen-metadata.h>
#include "vm/ClassInlines.h"
#include "vm/Object.h"
#include "vm/Class.h"

#include "../metadata/MetadataModule.h"
#include "../metadata/MetadataUtil.h"

#include "../interpreter/MethodBridge.h"
#include "../interpreter/Interpreter.h"
#include "../interpreter/MemoryUtil.h"
#include "../interpreter/InstrinctDef.h"

using namespace hybridclr::interpreter;

#if HYBRIDCLR_ABI_WEBGL32
//!!!{{CODE

// T System.Collections.Generic.List`1/Enumerator::get_Current()
static void __M2N_A4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign2<4> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign2<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// T System.Collections.Generic.List`1::get_Item(System.Int32)
static void __M2N_A4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign2<4> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign2<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1::GetEnumerator()
static void __M2N_B112i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<112> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<112>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.ArraySegment`1<T> System.ArraySegment`1::get_Empty()
static void __M2N_B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<12> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSizeAlign4<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.ReadOnlyMemory`1<T> System.Memory`1::op_Implicit(System.Memory`1<T>)
static void __M2N_B12B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<12> (*NativeMethod)(ValueTypeSizeAlign4<12> __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
static void __M2N_B12B12B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<12> (*NativeMethod)(ValueTypeSizeAlign4<12> __arg0, ValueTypeSizeAlign4<12> __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
static void __M2N_B12B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<12> (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Memory`1<T> System.Memory`1::op_Implicit(T[])
static void __M2N_B12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<12> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.MemoryStream::ReadAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
static void __M2N_B12i4B12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<12> (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSizeAlign4<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.TypedReference System.TypedReference::MakeTypedReference(System.Object,System.Reflection.FieldInfo[])
static void __M2N_B12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<12> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Memory`1<T> System.Memory`1::Slice(System.Int32,System.Int32)
static void __M2N_B12i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<12> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSizeAlign4<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action`1<System.Object>,System.Object,System.Boolean,System.Boolean)
static void __M2N_B12i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<12> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(ValueTypeSizeAlign4<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.ConsoleKeyInfo System.IConsoleDriver::ReadKey(System.Boolean)
static void __M2N_B12i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<12> (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.ConsoleKeyInfo System.Console::ReadKey(System.Boolean)
static void __M2N_B12u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<12> (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Guid System.Guid::NewGuid()
static void __M2N_B16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<16> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSizeAlign4<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
static void __M2N_B16B16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<16> (*NativeMethod)(ValueTypeSizeAlign4<16> __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Convert(UnityEngine.Color,System.Single)
static void __M2N_B16B16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<16> (*NativeMethod)(ValueTypeSizeAlign4<16> __arg0, float __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Guid System.Guid::Parse(System.ReadOnlySpan`1<System.Char>)
static void __M2N_B16B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<16> (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.ArraySegment`1/Enumerator<T> System.ArraySegment`1::GetEnumerator()
static void __M2N_B16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<16> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
static void __M2N_B16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<16> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Color UnityEngine.Mathf::CorrelatedColorTemperatureToRGB(System.Single)
static void __M2N_B16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<16> (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1::Create()
static void __M2N_B20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<20> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSizeAlign4<20>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1::GetEnumerator()
static void __M2N_B20i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<20> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<20>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// T System.Collections.Generic.List`1::get_Item(System.Int32)
static void __M2N_B20i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<20> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<20>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2::GetEnumerator()
static void __M2N_B24i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<24> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
static void __M2N_B24i4B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<24> (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3,UnityEngine.Camera/MonoOrStereoscopicEye)
static void __M2N_B24i4B12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<24> (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSizeAlign4<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static void __M2N_B24i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<24> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2::GetEnumerator()
static void __M2N_B28i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<28> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<28>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2::GetEnumerator()
static void __M2N_B32i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<32> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<32>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
static void __M2N_B32i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<32> (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<32>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2::GetEnumerator()
static void __M2N_B36i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<36> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<36>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.RenderTextureDescriptor UnityEngine.RenderTexture::get_descriptor()
static void __M2N_B52i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<52> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<52>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
static void __M2N_B64B12B16B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<64> (*NativeMethod)(ValueTypeSizeAlign4<12> __arg0, ValueTypeSizeAlign4<16> __arg1, ValueTypeSizeAlign4<12> __arg2, const MethodInfo* method);
    *(ValueTypeSizeAlign4<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[2]), method);
}


// T Unity.Collections.NativeArray`1/Enumerator::get_Current()
static void __M2N_B64i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<64> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<T>(System.Void*,System.Int32)
static void __M2N_B64i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<64> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1::get_Empty()
static void __M2N_B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1::GetEnumerator()
static void __M2N_B80i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<80> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<80>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
static void __M2N_B8B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(ValueTypeSizeAlign4<12> __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[0]), method);
}


// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::Trim(System.ReadOnlySpan`1<System.Char>)
static void __M2N_B8B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Numerics.BigInteger System.Numerics.BigInteger::op_Subtraction(System.Numerics.BigInteger,System.Numerics.BigInteger)
static void __M2N_B8B8B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Numerics.BigInteger System.Numerics.BigInteger::op_LeftShift(System.Numerics.BigInteger,System.Int32)
static void __M2N_B8B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.SByte)
static void __M2N_B8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int16)
static void __M2N_B8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// Interop/ErrorInfo InteropErrorExtensions::Info(Interop/Error)
static void __M2N_B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Threading.Tasks.ValueTask System.IO.MemoryStream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
static void __M2N_B8i4B12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Span`1<T> System.MemoryExtensions::AsSpan<T>(T[],System.Range)
static void __M2N_B8i4B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
static void __M2N_B8i4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Span`1<T> System.MemoryExtensions::AsSpan<T>(T[],System.Int32)
static void __M2N_B8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::AsSpan(System.String,System.Int32,System.Int32)
static void __M2N_B8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.ValueTuple`2<System.Int32,System.Boolean> Mono.Unity.UnityTlsContext::Read(System.Byte[],System.Int32,System.Int32)
static void __M2N_B8i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.ValueTuple`2<System.Net.WebConnection,System.Boolean> System.Net.ServicePointScheduler/ConnectionGroup::CreateOrReuseConnection(System.Net.WebOperation,System.Boolean)
static void __M2N_B8i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable System.Threading.Tasks.ValueTask::ConfigureAwait(System.Boolean)
static void __M2N_B8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int64)
static void __M2N_B8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Byte)
static void __M2N_B8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.UInt16)
static void __M2N_B8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.UInt32)
static void __M2N_B8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.UInt64)
static void __M2N_B8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<8> (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// T Unity.Collections.NativeArray`1/Enumerator::get_Current()
static void __M2N_B96i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<96> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign4<96>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<T>(System.Void*,System.Int32)
static void __M2N_B96i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign4<96> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign4<96>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTimeOffset System.DateTimeOffset::get_Now()
static void __M2N_C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector`1::op_Explicit(System.Numerics.Vector`1<T>)
static void __M2N_C16C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Numerics.Vector`1<T> System.Numerics.Vector::Equals<T>(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
static void __M2N_C16C16C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTimeOffset System.DateTimeOffset::ToUniversalTime()
static void __M2N_C16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.DateTimeOffset System.DateTimeOffset::Parse(System.String,System.IFormatProvider)
static void __M2N_C16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::Invoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext,UnityEngine.Rendering.BatchCullingOutput,System.IntPtr)
static void __M2N_C16i4i4C168B12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign8<168> __arg2, ValueTypeSizeAlign4<12> __arg3, int32_t __arg4, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<168>*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.DateTimeOffset System.DateTimeOffset::Parse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
static void __M2N_C16i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.DateTimeOffset System.DateTimeOffset::ParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
static void __M2N_C16i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.DateTimeOffset System.Xml.Schema.XmlValueConverter::ToDateTimeOffset(System.DateTime)
static void __M2N_C16i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(int32_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTimeOffset System.DateTimeOffset::FromUnixTimeSeconds(System.Int64)
static void __M2N_C16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::get_DaylightTransitionStart()
static void __M2N_C24i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<24> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFixedDateRule(System.DateTime,System.Int32,System.Int32)
static void __M2N_C24i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<24> (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSizeAlign8<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFloatingDateRule(System.DateTime,System.Int32,System.Int32,System.DayOfWeek)
static void __M2N_C24i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<24> (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(ValueTypeSizeAlign8<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1::GetEnumerator()
static void __M2N_C32i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<32> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<32>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Numerics.ConstantHelper::GetSByteWithAllBitsSet()
static void __M2N_i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.SByte System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
static void __M2N_i1B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Math::Max(System.SByte,System.SByte)
static void __M2N_i1i1i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int8_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.SByte System.Convert::ToSByte(System.Int16)
static void __M2N_i1i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Int32)
static void __M2N_i1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Object,System.IFormatProvider)
static void __M2N_i1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.SByte System.SByte::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_i1i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.SByte System.Convert::ToSByte(System.Int64)
static void __M2N_i1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Single)
static void __M2N_i1r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Double)
static void __M2N_i1r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Boolean)
static void __M2N_i1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Char)
static void __M2N_i1u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.UInt32)
static void __M2N_i1u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.UInt64)
static void __M2N_i1u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Decimal)
static void __M2N_i1W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Numerics.ConstantHelper::GetInt16WithAllBitsSet()
static void __M2N_i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Int16 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
static void __M2N_i2B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.SByte)
static void __M2N_i2i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Math::Max(System.Int16,System.Int16)
static void __M2N_i2i2i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int16_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int16 System.Convert::ToInt16(System.Int32)
static void __M2N_i2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
static void __M2N_i2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int16 System.Int16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_i2i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int16 System.Convert::ToInt16(System.Int64)
static void __M2N_i2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.Single)
static void __M2N_i2r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.Double)
static void __M2N_i2r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.Boolean)
static void __M2N_i2u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.Char)
static void __M2N_i2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.UInt32)
static void __M2N_i2u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.UInt64)
static void __M2N_i2u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.Decimal)
static void __M2N_i2W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// Mono.Security.Cryptography.MD2 Mono.Security.Cryptography.MD2::Create()
static void __M2N_i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<T>(Unity.Collections.NativeArray`1<T>)
static void __M2N_i4B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign4<12> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Type System.Type::GetTypeFromCLSID(System.Guid)
static void __M2N_i4B16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign4<16> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Type System.Type::GetTypeFromCLSID(System.Guid,System.String,System.Boolean)
static void __M2N_i4B16i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign4<16> __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<T>(System.Span`1<T>)
static void __M2N_i4B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 System.MemoryExtensions::ToUpperInvariant(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>)
static void __M2N_i4B8B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.IO.Path::Join(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
static void __M2N_i4B8B8B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<8> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.String System.Convert::ToBase64String(System.ReadOnlySpan`1<System.Byte>,System.Base64FormattingOptions)
static void __M2N_i4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Int32::Parse(System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_i4B8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.ParseNumbers::StringToInt(System.ReadOnlySpan`1<System.Char>,System.Int32,System.Int32,System.Int32&)
static void __M2N_i4B8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.MemoryExtensions::IndexOf<T>(System.ReadOnlySpan`1<T>,T)
static void __M2N_i4B8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.MemoryExtensions::IndexOf<T>(System.ReadOnlySpan`1<T>,T)
static void __M2N_i4B8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Marvin::ComputeHash32(System.ReadOnlySpan`1<System.Byte>,System.UInt64)
static void __M2N_i4B8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, uint64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.Xml.XmlConvert::ToString(System.DateTimeOffset)
static void __M2N_i4C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 System.DateTimeOffset::Compare(System.DateTimeOffset,System.DateTimeOffset)
static void __M2N_i4C16C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.Xml.XmlConvert::ToString(System.SByte)
static void __M2N_i4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Byte[] System.BitConverter::GetBytes(System.Int16)
static void __M2N_i4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Xml.BinXmlDateTime::SqlSmallDateTimeToString(System.Int16,System.UInt16)
static void __M2N_i4i2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String Interop/ErrorInfo::ToString()
static void __M2N_i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T)
static void __M2N_i4i4A4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign2<4> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign2<4>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange,System.Text.RegularExpressions.RegexCharClass/SingleRange)
static void __M2N_i4i4A4A4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign2<4> __arg1, ValueTypeSizeAlign2<4> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign2<4>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign2<4>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Array::IndexOf<T>(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4A4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign2<4> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign2<4>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.HashCode::Combine<T1,T2,T3,T4>(T1,T2,T3,T4)
static void __M2N_i4i4A8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign2<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign2<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.ValueTuple`3::CompareTo(System.ValueTuple`3<T1,T2,T3>)
static void __M2N_i4i4B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i4B12B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, ValueTypeSizeAlign4<12> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
static void __M2N_i4i4B12B16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, ValueTypeSizeAlign4<16> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
static void __M2N_i4i4B12B16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, ValueTypeSizeAlign4<16> __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.String System.String::Create<TState>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
static void __M2N_i4i4B12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Array::IndexOf<T>(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4B12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Guid::CompareTo(System.Guid)
static void __M2N_i4i4B16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.ValueTuple`5::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
static void __M2N_i4i4B20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<20> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<20>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i4B20B20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<20> __arg1, ValueTypeSizeAlign4<20> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<20>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<20>*)(localVarBase+argVarIndexs[2]), method);
}


// System.String System.String::Create<TState>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
static void __M2N_i4i4B20i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<20> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<20>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Array::IndexOf<T>(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4B20i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<20> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<20>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.IList`1::IndexOf(T)
static void __M2N_i4i4B24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<24> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.ValueTuple`8::CompareTo(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static void __M2N_i4i4B28(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<28> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<28>*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.String::Create<TState>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
static void __M2N_i4i4B28i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<28> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<28>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.ValueTuple`8::CompareTo(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static void __M2N_i4i4B32(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<32> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<32>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.ValueTuple`1::CompareTo(System.ValueTuple`1<T1>)
static void __M2N_i4i4B4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<4> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<4>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.ValueTuple`2::CompareTo(System.ValueTuple`2<T1,T2>)
static void __M2N_i4i4B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), method);
}


// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_i4i4B8B12i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<12> __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_i4i4B8B12u8u8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<12> __arg2, uint64_t __arg3, uint64_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[2]), *(uint64_t*)(localVarBase+argVarIndexs[3]), *(uint64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Text.Encoding::GetChars(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Char>)
static void __M2N_i4i4B8B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<8> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Text.Decoder::GetChars(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Char>,System.Boolean)
static void __M2N_i4i4B8B8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<8> __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.String System.Number::FormatInt32(System.Int32,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
static void __M2N_i4i4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Net.Sockets.Socket::Receive(System.Span`1<System.Byte>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
static void __M2N_i4i4B8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
static void __M2N_i4i4C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static void __M2N_i4i4C16C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, ValueTypeSizeAlign8<16> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Array::IndexOf<T>(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4C16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.SByte::CompareTo(System.SByte)
static void __M2N_i4i4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i4i1i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int8_t __arg1, int8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), *(int8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Array::IndexOf<T>(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4i1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int8_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Int16::CompareTo(System.Int16)
static void __M2N_i4i4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i4i2i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int16_t __arg1, int16_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), *(int16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Array::IndexOf<T>(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4i2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int16_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.String Locale::GetText(System.String,System.Object[])
static void __M2N_i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4i4A4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign2<4> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign2<4>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// TResult System.Func`5::Invoke(T1,T2,T3,T4)
static void __M2N_i4i4i4B12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<12> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4i4B20i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<20> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<20>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
static void __M2N_i4i4i4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<8> __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4i4B8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<8> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters,System.Boolean)
static void __M2N_i4i4i4B8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<8> __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4i4C16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign8<16> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4i4i1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int8_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4i4i2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int16_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.String SR::Format(System.String,System.Object,System.Object)
static void __M2N_i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
static void __M2N_i4i4i4i4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPI::LoadSceneAsyncByNameOrIndex(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters,System.Boolean)
static void __M2N_i4i4i4i4B8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
static void __M2N_i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4A4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSizeAlign2<4> __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSizeAlign2<4>*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4B12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSizeAlign4<12> __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4B20i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSizeAlign4<20> __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSizeAlign4<20>*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSizeAlign4<8> __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4C16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSizeAlign8<16> __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4i1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int8_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int8_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4i2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int16_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int16_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Security.Cryptography.X509Certificates.X509CertificateImpl Mono.ISystemCertificateProvider::Import(System.Byte[],Microsoft.Win32.SafeHandles.SafePasswordHandle,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags,Mono.CertificateImportFlags)
static void __M2N_i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
static void __M2N_i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// TResult System.Func`7::Invoke(T1,T2,T3,T4,T5,T6)
static void __M2N_i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// TResult System.Func`8::Invoke(T1,T2,T3,T4,T5,T6,T7)
static void __M2N_i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// TResult System.Func`9::Invoke(T1,T2,T3,T4,T5,T6,T7,T8)
static void __M2N_i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// TResult System.Func`10::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9)
static void __M2N_i4i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), method);
}


// TResult System.Func`11::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10)
static void __M2N_i4i4i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), method);
}


// TResult System.Func`12::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11)
static void __M2N_i4i4i4i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), method);
}


// TResult System.Func`13::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12)
static void __M2N_i4i4i4i4i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), *(int32_t*)(localVarBase+argVarIndexs[12]), method);
}


// TResult System.Func`14::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13)
static void __M2N_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), *(int32_t*)(localVarBase+argVarIndexs[12]), *(int32_t*)(localVarBase+argVarIndexs[13]), method);
}


// TResult System.Func`15::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14)
static void __M2N_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, int32_t __arg14, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), *(int32_t*)(localVarBase+argVarIndexs[12]), *(int32_t*)(localVarBase+argVarIndexs[13]), *(int32_t*)(localVarBase+argVarIndexs[14]), method);
}


// TResult System.Func`16::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15)
static void __M2N_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, int32_t __arg14, int32_t __arg15, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), *(int32_t*)(localVarBase+argVarIndexs[12]), *(int32_t*)(localVarBase+argVarIndexs[13]), *(int32_t*)(localVarBase+argVarIndexs[14]), *(int32_t*)(localVarBase+argVarIndexs[15]), method);
}


// TResult System.Func`17::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16)
static void __M2N_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, int32_t __arg14, int32_t __arg15, int32_t __arg16, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), *(int32_t*)(localVarBase+argVarIndexs[12]), *(int32_t*)(localVarBase+argVarIndexs[13]), *(int32_t*)(localVarBase+argVarIndexs[14]), *(int32_t*)(localVarBase+argVarIndexs[15]), *(int32_t*)(localVarBase+argVarIndexs[16]), method);
}


// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.TimeSpan)
static void __M2N_i4i4i4i4i4i4i4i4u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, uint8_t __arg7, int64_t __arg8, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), *(int64_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
static void __M2N_i4i4i4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Int32 System.Text.Decoder::GetChars(System.Byte*,System.Int32,System.Char*,System.Int32,System.Boolean)
static void __M2N_i4i4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, float __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4r8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, double __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(double*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
static void __M2N_i4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
static void __M2N_i4i4i4i4i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint16_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint16_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4u8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint64_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4W16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, WebGLSpeicalValueTypeAlign8<16> __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Xml.SecureStringHasher/HashCodeOfStringDelegate::Invoke(System.String,System.Int32,System.Int64)
static void __M2N_i4i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
static void __M2N_i4i4i4i4i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Type System.Type::GetType(System.String,System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>,System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>,System.Boolean)
static void __M2N_i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Net.CommandStream/PipelineInstruction System.Net.CommandStream::PipelineCallback(System.Net.CommandStream/PipelineEntry,System.Net.ResponseDescription,System.Boolean,System.IO.Stream&)
static void __M2N_i4i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Linq.Expressions.BinaryExpression System.Linq.Expressions.Expression::MakeBinary(System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Boolean,System.Reflection.MethodInfo,System.Linq.Expressions.LambdaExpression)
static void __M2N_i4i4i4i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String,System.Boolean,System.Boolean)
static void __M2N_i4i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Array::BinarySearch<T>(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4u8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint64_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4i4r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, float __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4i4r8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, double __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(double*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
static void __M2N_i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
static void __M2N_i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateCertificate(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain)
static void __M2N_i4i4i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
static void __M2N_i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.String System.String::PadLeft(System.Int32,System.Char)
static void __M2N_i4i4i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4i4u2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint16_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4i4u4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Marvin::ComputeHash32(System.Byte&,System.Int32,System.UInt64)
static void __M2N_i4i4i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4i4u8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4i4W16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, WebGLSpeicalValueTypeAlign8<16> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.DateTime::CompareTo(System.DateTime)
static void __M2N_i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Int64,System.Type)
static void __M2N_i4i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String)
static void __M2N_i4i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_i4i4i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
static void __M2N_i4i4i8i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Object System.Array::GetValue(System.Int64,System.Int64)
static void __M2N_i4i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Object System.Array::GetValue(System.Int64,System.Int64,System.Int64)
static void __M2N_i4i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Threading.WaitHandle::WaitAny(System.Threading.WaitHandle[],System.TimeSpan,System.Boolean)
static void __M2N_i4i4i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Single::CompareTo(System.Single)
static void __M2N_i4i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, float __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Array::IndexOf<T>(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, float __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Double::CompareTo(System.Double)
static void __M2N_i4i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, double __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Double,System.Type)
static void __M2N_i4i4r8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, double __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Array::IndexOf<T>(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4r8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, double __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i4r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, double __arg1, double __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), *(double*)(localVarBase+argVarIndexs[2]), method);
}


// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
static void __M2N_i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.SpanHelpers::IndexOf(System.Byte&,System.Byte,System.Int32)
static void __M2N_i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::MakeQuantifier(System.Boolean,System.Int32,System.Int32)
static void __M2N_i4i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Globalization.CultureData System.Globalization.CultureData::GetCultureData(System.String,System.Boolean,System.Int32,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.String)
static void __M2N_i4i4u1i4i4i4i4i4i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, uint8_t __arg10, int32_t __arg11, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(uint8_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), method);
}


// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
static void __M2N_i4i4u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Type System.Type::GetType(System.String,System.Boolean,System.Boolean)
static void __M2N_i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Object System.RuntimeType::CreateInstanceDefaultCtor(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Threading.StackCrawlMark&)
static void __M2N_i4i4u1u1u1u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.String System.String::Trim(System.Char)
static void __M2N_i4i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
static void __M2N_i4i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.String::IndexOf(System.Char,System.Int32,System.Int32)
static void __M2N_i4i4u2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.String System.String::Replace(System.Char,System.Char)
static void __M2N_i4i4u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.String Mono.Math.BigInteger::ToString(System.UInt32)
static void __M2N_i4i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
static void __M2N_i4i4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Array::IndexOf<T>(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4u4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void* Unity.Burst.LowLevel.BurstCompilerService::GetOrCreateSharedMemory(UnityEngine.Hash128&,System.UInt32,System.UInt32)
static void __M2N_i4i4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, uint32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.UInt64::CompareTo(System.UInt64)
static void __M2N_i4i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Array::IndexOf<T>(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4u8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i4u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Decimal::CompareTo(System.Decimal)
static void __M2N_i4i4W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Decimal,System.Type)
static void __M2N_i4i4W16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Array::IndexOf<T>(T[],T,System.Int32,System.Int32)
static void __M2N_i4i4W16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i4W16W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, WebGLSpeicalValueTypeAlign8<16> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[1]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.ValueTuple::CompareTo(System.ValueTuple)
static void __M2N_i4i4X1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, WebGLSpeicalValueType<1> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(WebGLSpeicalValueType<1>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Byte[] System.BitConverter::GetBytes(System.Int64)
static void __M2N_i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Number::FormatInt64(System.Int64,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
static void __M2N_i4i8B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.String System.Xml.XmlConvert::ToString(System.DateTime,System.String)
static void __M2N_i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MallocTracked(System.Int64,System.Int32,Unity.Collections.Allocator,System.Int32)
static void __M2N_i4i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.DateTime::Compare(System.DateTime,System.DateTime)
static void __M2N_i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo/AdjustmentRule::CreateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
static void __M2N_i4i8i8i8C24C24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSizeAlign8<24> __arg3, ValueTypeSizeAlign8<24> __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign8<24>*)(localVarBase+argVarIndexs[3]), *(ValueTypeSizeAlign8<24>*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void* Unity.Collections.LowLevel.Unsafe.BurstLike/SharedStatic::GetOrCreateSharedStaticInternal(System.Int64,System.Int64,System.UInt32,System.UInt32)
static void __M2N_i4i8i8u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint32_t __arg2, uint32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Byte[] System.BitConverter::GetBytes(System.Single)
static void __M2N_i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Number::FormatSingle(System.Single,System.String,System.Globalization.NumberFormatInfo)
static void __M2N_i4r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(float __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Byte[] System.BitConverter::GetBytes(System.Double)
static void __M2N_i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Number::FormatDouble(System.Double,System.String,System.Globalization.NumberFormatInfo)
static void __M2N_i4r8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(double __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Byte[] System.BitConverter::GetBytes(System.Boolean)
static void __M2N_i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.IntPtr System.Threading.NativeEventCalls::CreateEvent_internal(System.Boolean,System.Boolean,System.String,System.Int32&)
static void __M2N_i4u1u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint8_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Byte[] System.BitConverter::GetBytes(System.Char)
static void __M2N_i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Convert::ToString(System.Char,System.IFormatProvider)
static void __M2N_i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Char::ConvertToUtf32(System.Char,System.Char)
static void __M2N_i4u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.HashCode::Combine<T1,T2,T3,T4>(T1,T2,T3,T4)
static void __M2N_i4u2u2u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, uint16_t __arg2, uint16_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(uint16_t*)(localVarBase+argVarIndexs[3]), method);
}


// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
static void __M2N_i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Number::FormatUInt32(System.UInt32,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
static void __M2N_i4u4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Threading.TimeoutHelper::UpdateTimeOut(System.UInt32,System.Int32)
static void __M2N_i4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Byte[] System.BitConverter::GetBytes(System.UInt64)
static void __M2N_i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Number::FormatUInt64(System.UInt64,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
static void __M2N_i4u8B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint64_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Convert::ToInt32(System.Decimal)
static void __M2N_i4W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Number::FormatDecimal(System.Decimal,System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberFormatInfo)
static void __M2N_i4W16B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Decimal::Compare(System.Decimal,System.Decimal)
static void __M2N_i4W16W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTime System.DateTime::get_Now()
static void __M2N_i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Int64 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
static void __M2N_i8B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.ParseNumbers::StringToLong(System.ReadOnlySpan`1<System.Char>,System.Int32,System.Int32)
static void __M2N_i8B8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int64 System.ParseNumbers::StringToLong(System.ReadOnlySpan`1<System.Char>,System.Int32,System.Int32,System.Int32&)
static void __M2N_i8B8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.DateTime System.Xml.Schema.XsdDateTime::op_Implicit(System.Xml.Schema.XsdDateTime)
static void __M2N_i8C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.TimeSpan System.DateTimeOffset::op_Subtraction(System.DateTimeOffset,System.DateTimeOffset)
static void __M2N_i8C16C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int64 System.Convert::ToInt64(System.SByte)
static void __M2N_i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.Convert::ToInt64(System.Int16)
static void __M2N_i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.DateTime System.Xml.BinXmlDateTime::SqlSmallDateTimeToDateTime(System.Int16,System.UInt16)
static void __M2N_i8i2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.TimeSpan System.TimeZoneInfo::get_BaseUtcOffset()
static void __M2N_i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.DateTime System.Xml.Schema.XmlValueConverter::ToDateTime(System.DateTimeOffset)
static void __M2N_i8i4C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
static void __M2N_i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
static void __M2N_i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
static void __M2N_i8i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.DateTime System.Globalization.Calendar::ToDateTime(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static void __M2N_i8i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.DateTime System.Globalization.Calendar::ToDateTime(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static void __M2N_i8i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.TimeSpan System.TimeZoneInfo::GetUtcOffset(System.DateTime)
static void __M2N_i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int64 System.Security.Cryptography.CryptoStream::Seek(System.Int64,System.IO.SeekOrigin)
static void __M2N_i8i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int64 System.IO.MonoIO::Seek(System.Runtime.InteropServices.SafeHandle,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
static void __M2N_i8i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int64 System.Threading.Interlocked::CompareExchange(System.Int64&,System.Int64,System.Int64)
static void __M2N_i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.DateTime System.DateTime::AddDays(System.Double)
static void __M2N_i8i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, double __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int64 System.Xml.Schema.XmlValueConverter::ToInt64(System.Boolean)
static void __M2N_i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTime System.Xml.BinXmlDateTime::SqlDateTimeToDateTime(System.Int32,System.UInt32)
static void __M2N_i8i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTime System.DateTime::FromBinary(System.Int64)
static void __M2N_i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
static void __M2N_i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
static void __M2N_i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int64 System.Convert::ToInt64(System.Single)
static void __M2N_i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
static void __M2N_i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.Convert::ToInt64(System.Boolean)
static void __M2N_i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.Convert::ToInt64(System.Char)
static void __M2N_i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.Convert::ToInt64(System.UInt32)
static void __M2N_i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.Convert::ToInt64(System.UInt64)
static void __M2N_i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.Convert::ToInt64(System.Decimal)
static void __M2N_i8W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Numerics.ConstantHelper::GetSingleWithAllBitsSet()
static void __M2N_r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Single System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
static void __M2N_r4B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.SByte)
static void __M2N_r4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.Int16)
static void __M2N_r4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.Int32)
static void __M2N_r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.Object,System.IFormatProvider)
static void __M2N_r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single System.Single::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_r4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Single System.Threading.Interlocked::Exchange(System.Single&,System.Single)
static void __M2N_r4i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, float __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single System.Threading.Interlocked::CompareExchange(System.Single&,System.Single,System.Single)
static void __M2N_r4i4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Single System.Xml.Schema.XmlValueConverter::ToSingle(System.Double)
static void __M2N_r4i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, double __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single System.Convert::ToSingle(System.Int64)
static void __M2N_r4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Math::Abs(System.Single)
static void __M2N_r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Math::Max(System.Single,System.Single)
static void __M2N_r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
static void __M2N_r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Single System.Convert::ToSingle(System.Double)
static void __M2N_r4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.Byte)
static void __M2N_r4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.UInt16)
static void __M2N_r4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.UInt32)
static void __M2N_r4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.UInt64)
static void __M2N_r4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.Decimal)
static void __M2N_r4W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Numerics.ConstantHelper::GetDoubleWithAllBitsSet()
static void __M2N_r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Double System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
static void __M2N_r8B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.SByte)
static void __M2N_r8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.Int16)
static void __M2N_r8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.Int32)
static void __M2N_r8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
static void __M2N_r8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Double System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_r8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Double System.Numerics.NumericsHelpers::GetDoubleFromParts(System.Int32,System.Int32,System.UInt64)
static void __M2N_r8i4i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Double System.Xml.Schema.XmlValueConverter::ToDouble(System.Int64)
static void __M2N_r8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Double System.Threading.Interlocked::Exchange(System.Double&,System.Double)
static void __M2N_r8i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, double __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.Double System.Threading.Interlocked::CompareExchange(System.Double&,System.Double,System.Double)
static void __M2N_r8i4r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, double __arg1, double __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), *(double*)(localVarBase+argVarIndexs[2]), method);
}


// System.Double System.Xml.Schema.XmlValueConverter::ToDouble(System.Boolean)
static void __M2N_r8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Double System.Convert::ToDouble(System.Int64)
static void __M2N_r8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.Single)
static void __M2N_r8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Math::Round(System.Double)
static void __M2N_r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Math::Max(System.Double,System.Double)
static void __M2N_r8r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, double __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.Double System.Convert::ToDouble(System.Byte)
static void __M2N_r8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.UInt16)
static void __M2N_r8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.UInt32)
static void __M2N_r8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.UInt64)
static void __M2N_r8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.Decimal)
static void __M2N_r8W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Nullable`1<System.Boolean> Mono.Security.Interface.MonoTlsSettings::get_UseServicePointManagerCallback()
static void __M2N_S2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<2> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<2>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::get_IsReady()
static void __M2N_u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Boolean UnityEngine.AssemblyVersion::op_Equality(UnityEngine.AssemblyVersion,UnityEngine.AssemblyVersion)
static void __M2N_u1A8A8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign2<8> __arg0, ValueTypeSizeAlign2<8> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign2<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign2<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Text.RegularExpressions.Regex/CachedCodeEntryKey::op_Equality(System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntryKey)
static void __M2N_u1B12B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<12> __arg0, ValueTypeSizeAlign4<12> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Runtime.InteropServices.MemoryMarshal::TryGetArray<T>(System.ReadOnlyMemory`1<T>,System.ArraySegment`1<T>&)
static void __M2N_u1B12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<12> __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
static void __M2N_u1B16B16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<16> __arg0, ValueTypeSizeAlign4<16> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Reflection.CustomAttributeNamedArgument::op_Equality(System.Reflection.CustomAttributeNamedArgument,System.Reflection.CustomAttributeNamedArgument)
static void __M2N_u1B24B24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<24> __arg0, ValueTypeSizeAlign4<24> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<24>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Boolean::Parse(System.ReadOnlySpan`1<System.Char>)
static void __M2N_u1B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.MemoryExtensions::SequenceEqual<T>(System.ReadOnlySpan`1<T>,System.ReadOnlySpan`1<T>)
static void __M2N_u1B8B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.IO.Path::TryJoin(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1B8B8B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<8> __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean Microsoft.Win32.NativeMethods::DuplicateHandle(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef,Microsoft.Win32.SafeHandles.SafeProcessHandle&,System.Int32,System.Boolean,System.Int32)
static void __M2N_u1B8B8B8i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<8> __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Boolean System.Convert::TryFromBase64Chars(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Byte>,System.Int32&)
static void __M2N_u1B8B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.IO.Enumeration.FileSystemName::MatchesWin32Expression(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.Boolean)
static void __M2N_u1B8B8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, ValueTypeSizeAlign4<8> __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Boolean::TryParse(System.ReadOnlySpan`1<System.Char>,System.Boolean&)
static void __M2N_u1B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean Microsoft.Win32.NativeMethods::DuplicateHandle(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.SafeHandle,System.Runtime.InteropServices.HandleRef,Microsoft.Win32.SafeHandles.SafeWaitHandle&,System.Int32,System.Boolean,System.Int32)
static void __M2N_u1B8i4B8i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, int32_t __arg1, ValueTypeSizeAlign4<8> __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Byte System.Byte::Parse(System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_u1B8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Byte::TryParse(System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberStyles,System.IFormatProvider,System.Byte&)
static void __M2N_u1B8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.Numerics.BigInteger::op_LessThan(System.Numerics.BigInteger,System.Int64)
static void __M2N_u1B8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.BitConverter::TryWriteBytes(System.Span`1<System.Byte>,System.UInt32)
static void __M2N_u1B8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.DateTimeOffset::op_Equality(System.DateTimeOffset,System.DateTimeOffset)
static void __M2N_u1C16C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.Caching::IsVersionCached(UnityEngine.CachedAssetBundle)
static void __M2N_u1C24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign8<24> __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<24>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.TimeZoneInfo/TransitionTime::op_Inequality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
static void __M2N_u1C24C24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign8<24> __arg0, ValueTypeSizeAlign8<24> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<24>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Convert::ToBoolean(System.SByte)
static void __M2N_u1i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Convert::ToBoolean(System.Int16)
static void __M2N_u1i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Category(System.Int32)
static void __M2N_u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Collections.Generic.List`1::Contains(T)
static void __M2N_u1i4A4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign2<4> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign2<4>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4A4A4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign2<4> __arg1, ValueTypeSizeAlign2<4> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign2<4>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign2<4>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.ArraySegment`1::Equals(System.ArraySegment`1<T>)
static void __M2N_u1i4B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4B12B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, ValueTypeSizeAlign4<12> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Collections.Generic.Dictionary`2::TryGetValue(TKey,TValue&)
static void __M2N_u1i4B12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Guid::Equals(System.Guid)
static void __M2N_u1i4B16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4B16B16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, ValueTypeSizeAlign4<16> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection::TrySend(System.Guid,System.Byte[])
static void __M2N_u1i4B16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.IPlayerEditorConnectionNative::TrySendMessage(System.Guid,System.Byte[],System.Int32)
static void __M2N_u1i4B16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.ValueTuple`5::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
static void __M2N_u1i4B20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<20> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<20>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4B20B20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<20> __arg1, ValueTypeSizeAlign4<20> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<20>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<20>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.Bounds::Equals(UnityEngine.Bounds)
static void __M2N_u1i4B24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<24> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.Rendering.LODParameters::Equals(UnityEngine.Rendering.LODParameters)
static void __M2N_u1i4B28(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<28> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<28>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.ValueTuple`8::Equals(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static void __M2N_u1i4B32(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<32> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<32>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.ValueTuple`1::Equals(System.ValueTuple`1<T1>)
static void __M2N_u1i4B4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<4> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<4>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.Matrix4x4::Equals(UnityEngine.Matrix4x4)
static void __M2N_u1i4B64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<64> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<64>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Range::Equals(System.Range)
static void __M2N_u1i4B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Runtime.InteropServices.Marshal/MarshalerInstanceKeyComparer::Equals(System.ValueTuple`2<System.Type,System.String>,System.ValueTuple`2<System.Type,System.String>)
static void __M2N_u1i4B8B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<8> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Version::TryFormat(System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1i4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Guid::TryFormat(System.Span`1<System.Char>,System.Int32&,System.ReadOnlySpan`1<System.Char>)
static void __M2N_u1i4B8i4B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.Byte::TryFormat(System.Span`1<System.Char>,System.Int32&,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
static void __M2N_u1i4B8i4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.Version::TryFormat(System.Span`1<System.Char>,System.Int32,System.Int32&)
static void __M2N_u1i4B8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.Numerics.BigInteger::TryWriteBytes(System.Span`1<System.Byte>,System.Int32&,System.Boolean,System.Boolean)
static void __M2N_u1i4B8i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
static void __M2N_u1i4C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4C16C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, ValueTypeSizeAlign8<16> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
static void __M2N_u1i4C24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<24> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.SByte::Equals(System.SByte)
static void __M2N_u1i4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4i1i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int8_t __arg1, int8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), *(int8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Int16::Equals(System.Int16)
static void __M2N_u1i4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4i2i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int16_t __arg1, int16_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), *(int16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean Mono.RuntimeClassHandle::Equals(System.Object)
static void __M2N_u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.Dictionary`2::TryAdd(TKey,TValue)
static void __M2N_u1i4i4B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<8> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean Mono.Security.Cryptography.DSAManaged::VerifySignature(System.Byte[],System.Byte[])
static void __M2N_u1i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
static void __M2N_u1i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.DateTime::TryParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&)
static void __M2N_u1i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
static void __M2N_u1i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Boolean System.IO.MonoIO::DuplicateHandle(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr&,System.Int32,System.Int32,System.Int32,System.IO.MonoIOError&)
static void __M2N_u1i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Boolean System.Diagnostics.TraceFilter::ShouldTrace(System.Diagnostics.TraceEventCache,System.String,System.Diagnostics.TraceEventType,System.Int32,System.String,System.Object[],System.Object,System.Object[])
static void __M2N_u1i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
static void __M2N_u1i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.Runtime.CompilerServices.RuntimeOps::ExpandoTryGetValue(System.Dynamic.ExpandoObject,System.Object,System.Int32,System.String,System.Boolean,System.Object&)
static void __M2N_u1i4i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan)
static void __M2N_u1i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.Xml.Schema.AllElementsContentValidator::AddElement(System.Xml.XmlQualifiedName,System.Object,System.Boolean)
static void __M2N_u1i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.Xml.Schema.SchemaCollectionPreprocessor::Execute(System.Xml.Schema.XmlSchema,System.String,System.Boolean,System.Xml.Schema.XmlSchemaCollection)
static void __M2N_u1i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.Threading.ThreadPool::QueueUserWorkItemHelper(System.Threading.WaitCallback,System.Object,System.Threading.StackCrawlMark&,System.Boolean,System.Boolean)
static void __M2N_u1i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.Diagnostics.Tracing.EventSource::IsEnabled(System.Diagnostics.Tracing.EventLevel,System.Diagnostics.Tracing.EventKeywords)
static void __M2N_u1i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
static void __M2N_u1i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.SpanHelpers::SequenceEqual(System.Byte&,System.Byte&,System.UInt64)
static void __M2N_u1i4i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.DateTime::Equals(System.DateTime)
static void __M2N_u1i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.IO.MonoIO::SetLength(System.Runtime.InteropServices.SafeHandle,System.Int64,System.IO.MonoIOError&)
static void __M2N_u1i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Threading.Timer::Change(System.TimeSpan,System.TimeSpan)
static void __M2N_u1i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Single::Equals(System.Single)
static void __M2N_u1i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, float __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Double::Equals(System.Double)
static void __M2N_u1i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, double __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, double __arg1, double __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), *(double*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsIgnorable(System.Int32,System.Byte)
static void __M2N_u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Enum::TryParse<TEnum>(System.String,System.Boolean,TEnum&)
static void __M2N_u1i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Collections.Generic.ByteEqualityComparer::Equals(System.Byte,System.Byte)
static void __M2N_u1i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.String::EndsWith(System.Char)
static void __M2N_u1i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Text.InternalEncoderBestFitFallbackBuffer::Fallback(System.Char,System.Int32)
static void __M2N_u1i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Text.InternalEncoderBestFitFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
static void __M2N_u1i4u2u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean Mono.Math.BigInteger::TestBit(System.UInt32)
static void __M2N_u1i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/PerCoreLockedStacks::Trim(System.UInt32,System.Int32,System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure<T>,System.Int32[])
static void __M2N_u1i4u4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, uint32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.UInt64::Equals(System.UInt64)
static void __M2N_u1i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Decimal::Equals(System.Decimal)
static void __M2N_u1i4W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4W16W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, WebGLSpeicalValueTypeAlign8<16> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[1]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.ValueTuple::Equals(System.ValueTuple)
static void __M2N_u1i4X1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, WebGLSpeicalValueType<1> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(WebGLSpeicalValueType<1>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Convert::ToBoolean(System.Int64)
static void __M2N_u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Numerics.BigInteger::op_LessThan(System.Int64,System.Numerics.BigInteger)
static void __M2N_u1i8B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Number::TryFormatInt64(System.Int64,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider,System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1i8B8i4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
static void __M2N_u1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Convert::ToBoolean(System.Single)
static void __M2N_u1r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Number::TryFormatSingle(System.Single,System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberFormatInfo,System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1r4B8i4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
static void __M2N_u1r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, float __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Convert::ToBoolean(System.Double)
static void __M2N_u1r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Number::TryFormatDouble(System.Double,System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberFormatInfo,System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1r8B8i4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(double __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.Convert::ToBoolean(System.Byte)
static void __M2N_u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Byte System.Math::Max(System.Byte,System.Byte)
static void __M2N_u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint8_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::HasSpecialWeight(System.Char)
static void __M2N_u1u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClass(System.Char,System.String)
static void __M2N_u1u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint16_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Char::IsSurrogatePair(System.Char,System.Char)
static void __M2N_u1u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Convert::ToBoolean(System.UInt32)
static void __M2N_u1u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Number::TryFormatUInt32(System.UInt32,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider,System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1u4B8i4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// Mono.Security.Interface.AlertDescription Mono.Unity.UnityTlsConversions::VerifyResultToAlertDescription(Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Security.Interface.AlertDescription)
static void __M2N_u1u4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.UIntPtr::op_Equality(System.UIntPtr,System.UIntPtr)
static void __M2N_u1u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Convert::ToBoolean(System.UInt64)
static void __M2N_u1u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Number::TryFormatUInt64(System.UInt64,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider,System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1u8B8i4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint64_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.Convert::ToBoolean(System.Decimal)
static void __M2N_u1W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Number::TryFormatDecimal(System.Decimal,System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberFormatInfo,System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1W16B8i4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
static void __M2N_u1W16W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt16 System.Numerics.ConstantHelper::GetUInt16WithAllBitsSet()
static void __M2N_u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.UInt16 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
static void __M2N_u2B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Convert::ToChar(System.SByte)
static void __M2N_u2i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Convert::ToChar(System.Int16)
static void __M2N_u2i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Char::Parse(System.String)
static void __M2N_u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.String::get_Chars(System.Int32)
static void __M2N_u2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt16 System.UInt16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_u2i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Char System.Globalization.TextInfo::ToLower(System.Char)
static void __M2N_u2i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Char System.Convert::ToChar(System.Int64)
static void __M2N_u2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt16 System.Convert::ToUInt16(System.Single)
static void __M2N_u2r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt16 System.Convert::ToUInt16(System.Double)
static void __M2N_u2r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Convert::ToChar(System.Byte)
static void __M2N_u2u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Char::ToUpperInvariant(System.Char)
static void __M2N_u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Char::ToUpper(System.Char,System.Globalization.CultureInfo)
static void __M2N_u2u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint16_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt16 System.Math::Max(System.UInt16,System.UInt16)
static void __M2N_u2u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Char System.Convert::ToChar(System.UInt32)
static void __M2N_u2u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Convert::ToChar(System.UInt64)
static void __M2N_u2u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt16 System.Convert::ToUInt16(System.Decimal)
static void __M2N_u2W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.HashCode::MixEmptyState()
static void __M2N_u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.UInt32 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
static void __M2N_u4B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.SByte)
static void __M2N_u4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Int16)
static void __M2N_u4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Int32)
static void __M2N_u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
static void __M2N_u4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_u4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_u4i4i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_u4i4i4i8u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, uint32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_u4i4i8i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_u4i4i8i8i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
static void __M2N_u4i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Int64)
static void __M2N_u4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Single)
static void __M2N_u4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Double)
static void __M2N_u4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Boolean)
static void __M2N_u4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Char)
static void __M2N_u4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.HashCode::MixFinal(System.UInt32)
static void __M2N_u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.HashCode::Round(System.UInt32,System.UInt32)
static void __M2N_u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt32 System.HashCode::MixState(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
static void __M2N_u4u4u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint32_t __arg0, uint32_t __arg1, uint32_t __arg2, uint32_t __arg3, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.UInt64)
static void __M2N_u4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Decimal)
static void __M2N_u4W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Marvin::get_DefaultSeed()
static void __M2N_u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.UInt64 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
static void __M2N_u8B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.SByte)
static void __M2N_u8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Int16)
static void __M2N_u8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Int32)
static void __M2N_u8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Object,System.IFormatProvider)
static void __M2N_u8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_u8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Int64)
static void __M2N_u8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Single)
static void __M2N_u8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Double)
static void __M2N_u8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Boolean)
static void __M2N_u8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Char)
static void __M2N_u8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.UInt32)
static void __M2N_u8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Numerics.NumericsHelpers::MakeUlong(System.UInt32,System.UInt32)
static void __M2N_u8u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt64 System.Math::Max(System.UInt64,System.UInt64)
static void __M2N_u8u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Decimal)
static void __M2N_u8W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
static void __M2N_v(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
static void __M2N_vB12B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSizeAlign4<12> __arg0, ValueTypeSizeAlign4<12> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
static void __M2N_vB12B12B16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSizeAlign4<12> __arg0, ValueTypeSizeAlign4<12> __arg1, ValueTypeSizeAlign4<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
static void __M2N_vB12B12B16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSizeAlign4<12> __arg0, ValueTypeSizeAlign4<12> __arg1, ValueTypeSizeAlign4<16> __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
static void __M2N_vB12B12B16r4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSizeAlign4<12> __arg0, ValueTypeSizeAlign4<12> __arg1, ValueTypeSizeAlign4<16> __arg2, float __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.TypedReference::SetTypedReference(System.TypedReference,System.Object)
static void __M2N_vB12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSizeAlign4<12> __arg0, int32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void Unity.Collections.NativeArray`1::Copy(Unity.Collections.NativeArray`1<T>,T[],System.Int32)
static void __M2N_vB12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSizeAlign4<12> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.LowLevel.PlayerLoop::SetPlayerLoop(UnityEngine.LowLevel.PlayerLoopSystem)
static void __M2N_vB20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSizeAlign4<20> __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<20>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void System.Security.Cryptography.CryptographicOperations::ZeroMemory(System.Span`1<System.Byte>)
static void __M2N_vB8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void Mono.Unity.Debug::CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate,System.String,Mono.Security.Interface.AlertDescription)
static void __M2N_vC16i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Mono.Unity.Debug::CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate,Mono.Unity.UnityTls/unitytls_x509verify_result,System.String,Mono.Security.Interface.AlertDescription)
static void __M2N_vC16u4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, uint32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Mono.SafeGPtrArrayHandle::Dispose()
static void __M2N_vi4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void System.Collections.Generic.List`1::Add(T)
static void __M2N_vi4A4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign2<4> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign2<4>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.TermInfoDriver::WriteSpecialKey(System.ConsoleKeyInfo)
static void __M2N_vi4B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Reflection.FieldInfo::SetValueDirect(System.TypedReference,System.Object)
static void __M2N_vi4B12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Linq.Expressions.Interpreter.FieldByRefUpdater::.ctor(System.Nullable`1<System.Linq.Expressions.Interpreter.LocalDefinition>,System.Reflection.FieldInfo,System.Int32)
static void __M2N_vi4B12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Linq.Expressions.Interpreter.IndexMethodByRefUpdater::.ctor(System.Nullable`1<System.Linq.Expressions.Interpreter.LocalDefinition>,System.Linq.Expressions.Interpreter.LocalDefinition[],System.Reflection.MethodInfo,System.Int32)
static void __M2N_vi4B12i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Text.RegularExpressions.Regex/CachedCodeEntry::.ctor(System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Collections.Hashtable,System.String[],System.Text.RegularExpressions.RegexCode,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.ExclusiveReference,System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>)
static void __M2N_vi4B12i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void System.Xml.XmlSqlBinaryReader/ElemInfo::Set(System.Xml.XmlSqlBinaryReader/QName,System.Boolean)
static void __M2N_vi4B12u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.IPlayerEditorConnectionNative::RegisterInternal(System.Guid)
static void __M2N_vi4B16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
static void __M2N_vi4B16B16B16B16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, ValueTypeSizeAlign4<16> __arg2, ValueTypeSizeAlign4<16> __arg3, ValueTypeSizeAlign4<16> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[3]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection::Register(System.Guid,UnityEngine.Events.UnityAction`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>)
static void __M2N_vi4B16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Xml.XmlSqlBinaryReader/NestedBinXml::.ctor(System.Xml.XmlSqlBinaryReader/SymbolTables,System.Int32,System.Xml.XmlSqlBinaryReader/NestedBinXml)
static void __M2N_vi4B16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Collections.Generic.Stack`1::Push(T)
static void __M2N_vi4B20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<20> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<20>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Linq.Expressions.Interpreter.InstructionArray/DebugView::.ctor(System.Linq.Expressions.Interpreter.InstructionArray)
static void __M2N_vi4B24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<24> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Action`1::Invoke(T)
static void __M2N_vi4B28(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<28> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<28>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
static void __M2N_vi4B32(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<32> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<32>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.RenderTexture::.ctor(UnityEngine.RenderTextureDescriptor)
static void __M2N_vi4B52(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<52> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<52>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Action`1::Invoke(T)
static void __M2N_vi4B72(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<72> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<72>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.String::.ctor(System.ReadOnlySpan`1<System.Char>)
static void __M2N_vi4B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __M2N_vi4B8B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<12> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __M2N_vi4B8B20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<20> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<20>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __M2N_vi4B8B28(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<28> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<28>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
static void __M2N_vi4B8B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<8> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Linq.Expressions.Interpreter.ArrayByRefUpdater::.ctor(System.Linq.Expressions.Interpreter.LocalDefinition,System.Linq.Expressions.Interpreter.LocalDefinition,System.Int32)
static void __M2N_vi4B8B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<8> __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
static void __M2N_vi4B8C56(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign8<56> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<56>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
static void __M2N_vi4B8C56i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign8<56> __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<56>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __M2N_vi4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Playables.INotificationReceiver::OnNotify(UnityEngine.Playables.Playable,UnityEngine.Playables.INotification,System.Object)
static void __M2N_vi4B8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Net.IPAddress::.ctor(System.ReadOnlySpan`1<System.Byte>,System.Int64)
static void __M2N_vi4B8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Numerics.BigInteger::.ctor(System.ReadOnlySpan`1<System.Byte>,System.Boolean,System.Boolean)
static void __M2N_vi4B8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Mono.Security.Interface.MonoTlsSettings::set_CertificateValidationTime(System.Nullable`1<System.DateTime>)
static void __M2N_vi4C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Xml.Schema.XsdDateTime::.ctor(System.DateTimeOffset,System.Xml.Schema.XsdDateTimeFlags)
static void __M2N_vi4C16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.IO.BinaryWriter::Write(System.SByte)
static void __M2N_vi4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int8_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Threading.Tasks.Sources.IValueTaskSource::GetResult(System.Int16)
static void __M2N_vi4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int16_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void Mono.SafeStringMarshal::.ctor(System.String)
static void __M2N_vi4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __M2N_vi4i4A4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign2<4> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign2<4>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
static void __M2N_vi4i4B12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<12> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Tuple`3::.ctor(T1,T2,T3)
static void __M2N_vi4i4B12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<12> __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Unity.Collections.NativeArray`1::set_Item(System.Int32,T)
static void __M2N_vi4i4B16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __M2N_vi4i4B20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<20> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<20>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __M2N_vi4i4B24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<24> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<24>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Unity.Collections.NativeArray`1::set_Item(System.Int32,T)
static void __M2N_vi4i4B64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<64> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<64>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.AccessViolationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __M2N_vi4i4B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<8> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Xml.IDtdParserAdapter::OnSystemId(System.String,System.Xml.LineInfo,System.Xml.LineInfo)
static void __M2N_vi4i4B8B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<8> __arg2, ValueTypeSizeAlign4<8> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Text.StringBuilder::CopyTo(System.Int32,System.Span`1<System.Char>,System.Int32)
static void __M2N_vi4i4B8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<8> __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Unity.Collections.NativeArray`1::set_Item(System.Int32,T)
static void __M2N_vi4i4B96(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<96> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<96>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.CachedAssetBundle::.ctor(System.String,UnityEngine.Hash128)
static void __M2N_vi4i4C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign8<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __M2N_vi4i4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Threading.Tasks.Sources.IValueTaskSource,System.Int16)
static void __M2N_vi4i4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int16_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte[])
static void __M2N_vi4i4i2i2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int16_t __arg2, int16_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int16_t*)(localVarBase+argVarIndexs[2]), *(int16_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
static void __M2N_vi4i4i2i2u1u1u1u1u1u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int16_t __arg2, int16_t __arg3, uint8_t __arg4, uint8_t __arg5, uint8_t __arg6, uint8_t __arg7, uint8_t __arg8, uint8_t __arg9, uint8_t __arg10, uint8_t __arg11, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int16_t*)(localVarBase+argVarIndexs[2]), *(int16_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), *(uint8_t*)(localVarBase+argVarIndexs[8]), *(uint8_t*)(localVarBase+argVarIndexs[9]), *(uint8_t*)(localVarBase+argVarIndexs[10]), *(uint8_t*)(localVarBase+argVarIndexs[11]), method);
}


// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
static void __M2N_vi4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __M2N_vi4i4i4B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Threading.Tasks.Sources.IValueTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags)
static void __M2N_vi4i4i4i2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int16_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int16_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Mono.Xml.SmallXmlParserException::.ctor(System.String,System.Int32,System.Int32)
static void __M2N_vi4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Mono.Globalization.Unicode.CodePointIndexer::.ctor(System.Int32[],System.Int32[],System.Int32,System.Int32)
static void __M2N_vi4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::FillCJK(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
static void __M2N_vi4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void Mono.Globalization.Unicode.SimpleCollator/Context::.ctor(System.Globalization.CompareOptions,System.Byte*,System.Byte*,System.Byte*,System.Byte*,System.Byte*)
static void __M2N_vi4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void System.Text.RegularExpressions.RegexCode::.ctor(System.Int32[],System.Collections.Generic.List`1<System.String>,System.Int32,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.RegexBoyerMoore,System.Nullable`1<System.Text.RegularExpressions.RegexPrefix>,System.Int32,System.Boolean)
static void __M2N_vi4i4i4i4i4i4i4B12i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, ValueTypeSizeAlign4<12> __arg7, int32_t __arg8, uint8_t __arg9, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(uint8_t*)(localVarBase+argVarIndexs[9]), method);
}


// System.Void System.Action`7::Invoke(T1,T2,T3,T4,T5,T6,T7)
static void __M2N_vi4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
static void __M2N_vi4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_vi4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), method);
}


// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.String,System.String,System.String,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
static void __M2N_vi4i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), method);
}


// System.Void System.Action`11::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11)
static void __M2N_vi4i4i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), method);
}


// System.Void System.Action`12::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12)
static void __M2N_vi4i4i4i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), *(int32_t*)(localVarBase+argVarIndexs[12]), method);
}


// System.Void System.Action`13::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13)
static void __M2N_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), *(int32_t*)(localVarBase+argVarIndexs[12]), *(int32_t*)(localVarBase+argVarIndexs[13]), method);
}


// System.Void System.Action`14::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14)
static void __M2N_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, int32_t __arg14, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), *(int32_t*)(localVarBase+argVarIndexs[12]), *(int32_t*)(localVarBase+argVarIndexs[13]), *(int32_t*)(localVarBase+argVarIndexs[14]), method);
}


// System.Void System.Action`15::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15)
static void __M2N_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, int32_t __arg14, int32_t __arg15, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), *(int32_t*)(localVarBase+argVarIndexs[12]), *(int32_t*)(localVarBase+argVarIndexs[13]), *(int32_t*)(localVarBase+argVarIndexs[14]), *(int32_t*)(localVarBase+argVarIndexs[15]), method);
}


// System.Void System.Action`16::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16)
static void __M2N_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, int32_t __arg14, int32_t __arg15, int32_t __arg16, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), *(int32_t*)(localVarBase+argVarIndexs[12]), *(int32_t*)(localVarBase+argVarIndexs[13]), *(int32_t*)(localVarBase+argVarIndexs[14]), *(int32_t*)(localVarBase+argVarIndexs[15]), *(int32_t*)(localVarBase+argVarIndexs[16]), method);
}


// System.Void System.DateTimeOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Globalization.Calendar,System.TimeSpan)
static void __M2N_vi4i4i4i4i4i4i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int64_t __arg9, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int64_t*)(localVarBase+argVarIndexs[9]), method);
}


// System.Void System.DateTimeOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.TimeSpan)
static void __M2N_vi4i4i4i4i4i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int64_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int64_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void System.DateTimeOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.TimeSpan)
static void __M2N_vi4i4i4i4i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int64_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void System.Net.FileWebStream::.ctor(System.Net.FileWebRequest,System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean)
static void __M2N_vi4i4i4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, uint8_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void System.ValueTuple`8::.ctor(T1,T2,T3,T4,T5,T6,T7,TRest)
static void __M2N_vi4i4i4i4i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, uint8_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void System.Text.Decoder::Convert(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Int32,System.Boolean,System.Int32&,System.Int32&,System.Boolean&)
static void __M2N_vi4i4i4i4i4i4i4u1i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, uint8_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), method);
}


// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean)
static void __M2N_vi4i4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Int32,System.Boolean,System.Boolean)
static void __M2N_vi4i4i4i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, uint8_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
static void __M2N_vi4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Xml.XmlSqlBinaryReader::.ctor(System.IO.Stream,System.Byte[],System.Int32,System.String,System.Boolean,System.Xml.XmlReaderSettings)
static void __M2N_vi4i4i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void UnityEngine.Pool.ObjectPool`1::.ctor(System.Func`1<T>,System.Action`1<T>,System.Action`1<T>,System.Action`1<T>,System.Boolean,System.Int32,System.Int32)
static void __M2N_vi4i4i4i4i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void System.Text.Decoder::Convert(System.Byte*,System.Int32,System.Char*,System.Int32,System.Boolean,System.Int32&,System.Int32&,System.Boolean&)
static void __M2N_vi4i4i4i4i4u1i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void System.Xml.Serialization.XmlSerializationWriter::WritePotentiallyReferencingElement(System.String,System.String,System.Object,System.Type,System.Boolean,System.Boolean)
static void __M2N_vi4i4i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObject(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String,System.Boolean,System.Boolean,System.Boolean)
static void __M2N_vi4i4i4i4i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, uint8_t __arg6, uint8_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void Mono.Globalization.Unicode.TailoringInfo::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean)
static void __M2N_vi4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
static void __M2N_vi4i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void UnityEngine.CubemapArray::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.Boolean)
static void __M2N_vi4i4i4i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, uint8_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor(System.String,System.String,System.TimeSpan)
static void __M2N_vi4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback,System.Object,System.TimeSpan,System.TimeSpan)
static void __M2N_vi4i4i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.Events.CachedInvokableCall`1::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
static void __M2N_vi4i4i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Threading.IAsyncLocal::OnValueChanged(System.Object,System.Object,System.Boolean)
static void __M2N_vi4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
static void __M2N_vi4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Xml.Serialization.TypeData::.ctor(System.Type,System.String,System.Boolean,System.Xml.Serialization.TypeData,System.Xml.Schema.XmlSchemaPatternFacet)
static void __M2N_vi4i4i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32,System.Boolean)
static void __M2N_vi4i4i4u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void UnityEngine.Cubemap::.ctor(System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
static void __M2N_vi4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Char)
static void __M2N_vi4i4i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint16_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint16_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Threading.Tasks.DebuggerSupport::TraceOperationCreation(System.Threading.Tasks.CausalityTraceLevel,System.Threading.Tasks.Task,System.String,System.UInt64)
static void __M2N_vi4i4i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Array::Copy(System.Array,System.Array,System.Int64)
static void __M2N_vi4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.Int64,System.String)
static void __M2N_vi4i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
static void __M2N_vi4i4i8i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64)
static void __M2N_vi4i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.IO.UnmanagedMemoryStream::.ctor(System.Byte*,System.Int64,System.Int64,System.IO.FileAccess)
static void __M2N_vi4i4i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64,System.Int64)
static void __M2N_vi4i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
static void __M2N_vi4i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
static void __M2N_vi4i4r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, float __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
static void __M2N_vi4i4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, float __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __M2N_vi4i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, double __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(double*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Microsoft.Win32.SafeHandles.SafeFileHandle::.ctor(System.IntPtr,System.Boolean)
static void __M2N_vi4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Action`3::Invoke(T1,T2,T3)
static void __M2N_vi4i4u1B24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, ValueTypeSizeAlign4<24> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign4<24>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
static void __M2N_vi4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Security.Cryptography.RC2Transform::.ctor(System.Security.Cryptography.RC2,System.Boolean,System.Byte[],System.Byte[])
static void __M2N_vi4i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Mono.Unity.UnityTlsStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.SslStream,Mono.Security.Interface.MonoTlsSettings,Mono.Net.Security.MobileTlsProvider)
static void __M2N_vi4i4u1i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Runtime.Remoting.Contexts.IDynamicMessageSink::ProcessMessageFinish(System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
static void __M2N_vi4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Text.RegularExpressions.RegexBoyerMoore::.ctor(System.String,System.Boolean,System.Boolean,System.Globalization.CultureInfo)
static void __M2N_vi4i4u1u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.ValueTuple`5::.ctor(T1,T2,T3,T4,T5)
static void __M2N_vi4i4u1u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Linq.Expressions.Interpreter.InstructionList::EmitGoto(System.Linq.Expressions.Interpreter.BranchLabel,System.Boolean,System.Boolean,System.Boolean)
static void __M2N_vi4i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
static void __M2N_vi4i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint16_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Text.ValueStringBuilder::Insert(System.Int32,System.Char,System.Int32)
static void __M2N_vi4i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
static void __M2N_vi4i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Runtime.RuntimeImports::Memmove_wbarrier(System.Byte*,System.Byte*,System.UInt32,System.IntPtr)
static void __M2N_vi4i4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
static void __M2N_vi4i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __M2N_vi4i4W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, WebGLSpeicalValueTypeAlign8<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Xml.Schema.LeafRangeNode::.ctor(System.Int32,System.Decimal,System.Decimal)
static void __M2N_vi4i4W16W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, WebGLSpeicalValueTypeAlign8<16> __arg2, WebGLSpeicalValueTypeAlign8<16> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[2]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.DateTime::.ctor(System.Int64)
static void __M2N_vi4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind)
static void __M2N_vi4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Runtime.Serialization.ValueTypeFixupInfo::.ctor(System.Int64,System.Reflection.FieldInfo,System.Int32[])
static void __M2N_vi4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
static void __M2N_vi4i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
static void __M2N_vi4i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
static void __M2N_vi4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Globalization.DaylightTimeStruct::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
static void __M2N_vi4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Decimal::.ctor(System.Single)
static void __M2N_vi4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, float __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
static void __M2N_vi4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
static void __M2N_vi4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, float __arg1, float __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
static void __M2N_vi4r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, float __arg1, float __arg2, float __arg3, float __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Decimal::.ctor(System.Double)
static void __M2N_vi4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, double __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void Mono.Security.Interface.MonoTlsSettings::set_UseServicePointManagerCallback(System.Nullable`1<System.Boolean>)
static void __M2N_vi4S2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<2> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<2>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces(System.Boolean)
static void __M2N_vi4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Threading.Tasks.Task`1::.ctor(System.Boolean,TResult,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
static void __M2N_vi4u1B12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, ValueTypeSizeAlign4<12> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<12>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Threading.Tasks.Task`1::.ctor(System.Boolean,TResult,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
static void __M2N_vi4u1B16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, ValueTypeSizeAlign4<16> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<16>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Threading.Tasks.Task`1::.ctor(System.Boolean,TResult,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
static void __M2N_vi4u1B8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, ValueTypeSizeAlign4<8> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
static void __M2N_vi4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode,System.String)
static void __M2N_vi4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Globalization.TimeSpanParse/TimeSpanToken::.ctor(System.Globalization.TimeSpanParse/TTT,System.Int32,System.Int32,System.ReadOnlySpan`1<System.Char>)
static void __M2N_vi4u1i4i4B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSizeAlign4<8> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::Set(System.Boolean,System.String,System.String,System.String)
static void __M2N_vi4u1i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Xml.Schema.XsdDuration::.ctor(System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static void __M2N_vi4u1i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void System.Runtime.Remoting.Identity::NotifyClientDynamicSinks(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
static void __M2N_vi4u1i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Mono.Globalization.Unicode.Level2Map::.ctor(System.Byte,System.Byte)
static void __M2N_vi4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Text.RegularExpressions.RegexCharClass::AddDigit(System.Boolean,System.Boolean,System.String)
static void __M2N_vi4u1u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Mono.Security.Interface.ValidationResult::.ctor(System.Boolean,System.Boolean,System.Int32,System.Nullable`1<Mono.Security.Interface.MonoSslPolicyErrors>)
static void __M2N_vi4u1u1i4B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, ValueTypeSizeAlign4<8> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Threading.Tasks.Task`1::.ctor(System.Boolean,TResult,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
static void __M2N_vi4u1u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.IO.Stream/ReadWriteTask::.ctor(System.Boolean,System.Boolean,System.Func`2<System.Object,System.Int32>,System.Object,System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.AsyncCallback)
static void __M2N_vi4u1u1i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), method);
}


// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
static void __M2N_vi4u1u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
static void __M2N_vi4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Runtime.CompilerServices.DecimalConstantAttribute::.ctor(System.Byte,System.Byte,System.UInt32,System.UInt32,System.UInt32)
static void __M2N_vi4u1u1u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, uint32_t __arg3, uint32_t __arg4, uint32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), *(uint32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Byte&,System.Byte,System.UInt32)
static void __M2N_vi4u1u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Threading.Tasks.Task`1::.ctor(System.Boolean,TResult,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
static void __M2N_vi4u1X1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, WebGLSpeicalValueType<1> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(WebGLSpeicalValueType<1>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.TermInfoDriver::WriteSpecialKey(System.Char)
static void __M2N_vi4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint16_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.String::.ctor(System.Char,System.Int32)
static void __M2N_vi4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Globalization.Bootstring::.ctor(System.Char,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static void __M2N_vi4u2i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint16_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void System.ConsoleKeyInfo::.ctor(System.Char,System.ConsoleKey,System.Boolean,System.Boolean,System.Boolean)
static void __M2N_vi4u2i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint16_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Linq.Expressions.ExpressionStringBuilder::VisitExpressions<T>(System.Char,System.Collections.ObjectModel.ReadOnlyCollection`1<T>,System.Char,System.String)
static void __M2N_vi4u2i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint16_t __arg1, int32_t __arg2, uint16_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint16_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Char,System.Boolean,System.Boolean,System.Boolean)
static void __M2N_vi4u2u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint16_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Text.RegularExpressions.RegexCharClass::AddRange(System.Char,System.Char)
static void __M2N_vi4u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
static void __M2N_vi4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/LockedStack::Trim(System.UInt32,System.Int32,System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure<T>,System.Int32)
static void __M2N_vi4u4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
static void __M2N_vi4u4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
static void __M2N_vi4u4u4i4u4u4i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint32_t __arg1, uint32_t __arg2, int32_t __arg3, uint32_t __arg4, uint32_t __arg5, int32_t __arg6, uint32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), *(uint32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(uint32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void System.Decimal/DecCalc/PowerOvfl::.ctor(System.UInt32,System.UInt32,System.UInt32)
static void __M2N_vi4u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint32_t __arg1, uint32_t __arg2, uint32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.SpanHelpers::ClearWithoutReferences(System.Byte&,System.UInt64)
static void __M2N_vi4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.HashUnsafeUtilities::ComputeHash128(System.Void*,System.UInt64,UnityEngine.Hash128*)
static void __M2N_vi4u8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint64_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.HashUnsafeUtilities::ComputeHash128(System.Void*,System.UInt64,System.UInt64*,System.UInt64*)
static void __M2N_vi4u8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Hash128::.ctor(System.UInt64,System.UInt64)
static void __M2N_vi4u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccurs(System.Decimal)
static void __M2N_vi4W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Xml.Schema.LeafRangeNode::.ctor(System.Decimal,System.Decimal)
static void __M2N_vi4W16W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, WebGLSpeicalValueTypeAlign8<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[1]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::SetResult(TResult)
static void __M2N_vi4X1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, WebGLSpeicalValueType<1> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(WebGLSpeicalValueType<1>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseManagerPollTime(System.TimeSpan)
static void __M2N_vi8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void System.Numerics.NumericsHelpers::GetDoubleParts(System.Double,System.Int32&,System.Int32&,System.UInt64&,System.Boolean&)
static void __M2N_vr8i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(double __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.Caching::set_compressionEnabled(System.Boolean)
static void __M2N_vu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void System.Dynamic.Utils.ContractUtils::Requires(System.Boolean,System.String)
static void __M2N_vu1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, int32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Debug::Assert(System.Boolean,System.Object,UnityEngine.Object)
static void __M2N_vu1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Debug::AssertFormat(System.Boolean,UnityEngine.Object,System.String,System.Object[])
static void __M2N_vu1i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Decimal System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
static void __M2N_W16B8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign4<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.SByte)
static void __M2N_W16i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Int16)
static void __M2N_W16i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Int32)
static void __M2N_W16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
static void __M2N_W16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_W16i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// T System.Nullable`1::GetValueOrDefault(T)
static void __M2N_W16i4W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Int64)
static void __M2N_W16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Single)
static void __M2N_W16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Double)
static void __M2N_W16r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Byte)
static void __M2N_W16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.UInt16)
static void __M2N_W16u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.UInt32)
static void __M2N_W16u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.UInt64)
static void __M2N_W16u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Math::Abs(System.Decimal)
static void __M2N_W16W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Decimal::Round(System.Decimal,System.Int32)
static void __M2N_W16W16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, int32_t __arg1, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Decimal System.Math::Max(System.Decimal,System.Decimal)
static void __M2N_W16W16W16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign8<16> (*NativeMethod)(WebGLSpeicalValueTypeAlign8<16> __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(WebGLSpeicalValueTypeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// TResult System.Threading.Tasks.Task`1::get_Result()
static void __M2N_X1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueType<1> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(WebGLSpeicalValueType<1>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// TResult System.Func`2::Invoke(T)
static void __M2N_X1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueType<1> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(WebGLSpeicalValueType<1>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// TResult System.Func`3::Invoke(T1,T2)
static void __M2N_X1i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueType<1> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(WebGLSpeicalValueType<1>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// Unity.Profiling.LowLevel.Unsafe.ProfilerCategoryDescription Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::GetCategoryDescription(System.UInt16)
static void __M2N_Z24u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef WebGLSpeicalValueTypeAlign4<24> (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(WebGLSpeicalValueTypeAlign4<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


Managed2NativeMethodInfo hybridclr::interpreter::g_managed2nativeStub[] = 
{

	{"A4i4", __M2N_A4i4},
	{"A4i4i4", __M2N_A4i4i4},
	{"B112i4", __M2N_B112i4},
	{"B12", __M2N_B12},
	{"B12B12", __M2N_B12B12},
	{"B12B12B12", __M2N_B12B12B12},
	{"B12B8", __M2N_B12B8},
	{"B12i4", __M2N_B12i4},
	{"B12i4B12i4", __M2N_B12i4B12i4},
	{"B12i4i4", __M2N_B12i4i4},
	{"B12i4i4i4", __M2N_B12i4i4i4},
	{"B12i4i4i4u1u1", __M2N_B12i4i4i4u1u1},
	{"B12i4u1", __M2N_B12i4u1},
	{"B12u1", __M2N_B12u1},
	{"B16", __M2N_B16},
	{"B16B16", __M2N_B16B16},
	{"B16B16r4", __M2N_B16B16r4},
	{"B16B8", __M2N_B16B8},
	{"B16i4", __M2N_B16i4},
	{"B16i4i4", __M2N_B16i4i4},
	{"B16r4", __M2N_B16r4},
	{"B20", __M2N_B20},
	{"B20i4", __M2N_B20i4},
	{"B20i4i4", __M2N_B20i4i4},
	{"B24i4", __M2N_B24i4},
	{"B24i4B12", __M2N_B24i4B12},
	{"B24i4B12i4", __M2N_B24i4B12i4},
	{"B24i4i4", __M2N_B24i4i4},
	{"B28i4", __M2N_B28i4},
	{"B32i4", __M2N_B32i4},
	{"B32i4u1", __M2N_B32i4u1},
	{"B36i4", __M2N_B36i4},
	{"B52i4", __M2N_B52i4},
	{"B64B12B16B12", __M2N_B64B12B16B12},
	{"B64i4", __M2N_B64i4},
	{"B64i4i4", __M2N_B64i4i4},
	{"B8", __M2N_B8},
	{"B80i4", __M2N_B80i4},
	{"B8B12", __M2N_B8B12},
	{"B8B8", __M2N_B8B8},
	{"B8B8B8", __M2N_B8B8B8},
	{"B8B8i4", __M2N_B8B8i4},
	{"B8i1", __M2N_B8i1},
	{"B8i2", __M2N_B8i2},
	{"B8i4", __M2N_B8i4},
	{"B8i4B12i4", __M2N_B8i4B12i4},
	{"B8i4B8", __M2N_B8i4B8},
	{"B8i4B8i4", __M2N_B8i4B8i4},
	{"B8i4i4", __M2N_B8i4i4},
	{"B8i4i4i4", __M2N_B8i4i4i4},
	{"B8i4i4i4i4", __M2N_B8i4i4i4i4},
	{"B8i4i4u1", __M2N_B8i4i4u1},
	{"B8i4u1", __M2N_B8i4u1},
	{"B8i8", __M2N_B8i8},
	{"B8u1", __M2N_B8u1},
	{"B8u2", __M2N_B8u2},
	{"B8u4", __M2N_B8u4},
	{"B8u8", __M2N_B8u8},
	{"B96i4", __M2N_B96i4},
	{"B96i4i4", __M2N_B96i4i4},
	{"C16", __M2N_C16},
	{"C16C16", __M2N_C16C16},
	{"C16C16C16", __M2N_C16C16C16},
	{"C16i4", __M2N_C16i4},
	{"C16i4i4", __M2N_C16i4i4},
	{"C16i4i4C168B12i4", __M2N_C16i4i4C168B12i4},
	{"C16i4i4i4", __M2N_C16i4i4i4},
	{"C16i4i4i4i4", __M2N_C16i4i4i4i4},
	{"C16i4i8", __M2N_C16i4i8},
	{"C16i8", __M2N_C16i8},
	{"C24i4", __M2N_C24i4},
	{"C24i8i4i4", __M2N_C24i8i4i4},
	{"C24i8i4i4i4", __M2N_C24i8i4i4i4},
	{"C32i4", __M2N_C32i4},
	{"i1", __M2N_i1},
	{"i1B8", __M2N_i1B8},
	{"i1i1i1", __M2N_i1i1i1},
	{"i1i2", __M2N_i1i2},
	{"i1i4", __M2N_i1i4},
	{"i1i4i4", __M2N_i1i4i4},
	{"i1i4i4i4", __M2N_i1i4i4i4},
	{"i1i8", __M2N_i1i8},
	{"i1r4", __M2N_i1r4},
	{"i1r8", __M2N_i1r8},
	{"i1u1", __M2N_i1u1},
	{"i1u2", __M2N_i1u2},
	{"i1u4", __M2N_i1u4},
	{"i1u8", __M2N_i1u8},
	{"i1W16", __M2N_i1W16},
	{"i2", __M2N_i2},
	{"i2B8", __M2N_i2B8},
	{"i2i1", __M2N_i2i1},
	{"i2i2i2", __M2N_i2i2i2},
	{"i2i4", __M2N_i2i4},
	{"i2i4i4", __M2N_i2i4i4},
	{"i2i4i4i4", __M2N_i2i4i4i4},
	{"i2i8", __M2N_i2i8},
	{"i2r4", __M2N_i2r4},
	{"i2r8", __M2N_i2r8},
	{"i2u1", __M2N_i2u1},
	{"i2u2", __M2N_i2u2},
	{"i2u4", __M2N_i2u4},
	{"i2u8", __M2N_i2u8},
	{"i2W16", __M2N_i2W16},
	{"i4", __M2N_i4},
	{"i4B12", __M2N_i4B12},
	{"i4B16", __M2N_i4B16},
	{"i4B16i4u1", __M2N_i4B16i4u1},
	{"i4B8", __M2N_i4B8},
	{"i4B8B8", __M2N_i4B8B8},
	{"i4B8B8B8", __M2N_i4B8B8B8},
	{"i4B8i4", __M2N_i4B8i4},
	{"i4B8i4i4", __M2N_i4B8i4i4},
	{"i4B8i4i4i4", __M2N_i4B8i4i4i4},
	{"i4B8u1", __M2N_i4B8u1},
	{"i4B8u2", __M2N_i4B8u2},
	{"i4B8u8", __M2N_i4B8u8},
	{"i4C16", __M2N_i4C16},
	{"i4C16C16", __M2N_i4C16C16},
	{"i4i1", __M2N_i4i1},
	{"i4i2", __M2N_i4i2},
	{"i4i2u2", __M2N_i4i2u2},
	{"i4i4", __M2N_i4i4},
	{"i4i4A4", __M2N_i4i4A4},
	{"i4i4A4A4", __M2N_i4i4A4A4},
	{"i4i4A4i4i4", __M2N_i4i4A4i4i4},
	{"i4i4A8i4i4", __M2N_i4i4A8i4i4},
	{"i4i4B12", __M2N_i4i4B12},
	{"i4i4B12B12", __M2N_i4i4B12B12},
	{"i4i4B12B16", __M2N_i4i4B12B16},
	{"i4i4B12B16i4", __M2N_i4i4B12B16i4},
	{"i4i4B12i4", __M2N_i4i4B12i4},
	{"i4i4B12i4i4", __M2N_i4i4B12i4i4},
	{"i4i4B16", __M2N_i4i4B16},
	{"i4i4B20", __M2N_i4i4B20},
	{"i4i4B20B20", __M2N_i4i4B20B20},
	{"i4i4B20i4", __M2N_i4i4B20i4},
	{"i4i4B20i4i4", __M2N_i4i4B20i4i4},
	{"i4i4B24", __M2N_i4i4B24},
	{"i4i4B28", __M2N_i4i4B28},
	{"i4i4B28i4", __M2N_i4i4B28i4},
	{"i4i4B32", __M2N_i4i4B32},
	{"i4i4B4", __M2N_i4i4B4},
	{"i4i4B8", __M2N_i4i4B8},
	{"i4i4B8B12i4i4i4", __M2N_i4i4B8B12i4i4i4},
	{"i4i4B8B12u8u8i4", __M2N_i4i4B8B12u8u8i4},
	{"i4i4B8B8", __M2N_i4i4B8B8},
	{"i4i4B8B8u1", __M2N_i4i4B8B8u1},
	{"i4i4B8i4", __M2N_i4i4B8i4},
	{"i4i4B8i4i4", __M2N_i4i4B8i4i4},
	{"i4i4C16", __M2N_i4i4C16},
	{"i4i4C16C16", __M2N_i4i4C16C16},
	{"i4i4C16i4i4", __M2N_i4i4C16i4i4},
	{"i4i4i1", __M2N_i4i4i1},
	{"i4i4i1i1", __M2N_i4i4i1i1},
	{"i4i4i1i4i4", __M2N_i4i4i1i4i4},
	{"i4i4i2", __M2N_i4i4i2},
	{"i4i4i2i2", __M2N_i4i4i2i2},
	{"i4i4i2i4i4", __M2N_i4i4i2i4i4},
	{"i4i4i4", __M2N_i4i4i4},
	{"i4i4i4A4i4i4", __M2N_i4i4i4A4i4i4},
	{"i4i4i4B12i4i4", __M2N_i4i4i4B12i4i4},
	{"i4i4i4B20i4i4", __M2N_i4i4i4B20i4i4},
	{"i4i4i4B8i4", __M2N_i4i4i4B8i4},
	{"i4i4i4B8i4i4", __M2N_i4i4i4B8i4i4},
	{"i4i4i4B8u1", __M2N_i4i4i4B8u1},
	{"i4i4i4C16i4i4", __M2N_i4i4i4C16i4i4},
	{"i4i4i4i1i4i4", __M2N_i4i4i4i1i4i4},
	{"i4i4i4i2i4i4", __M2N_i4i4i4i2i4i4},
	{"i4i4i4i4", __M2N_i4i4i4i4},
	{"i4i4i4i4B8i4", __M2N_i4i4i4i4B8i4},
	{"i4i4i4i4B8u1", __M2N_i4i4i4i4B8u1},
	{"i4i4i4i4i4", __M2N_i4i4i4i4i4},
	{"i4i4i4i4i4A4i4", __M2N_i4i4i4i4i4A4i4},
	{"i4i4i4i4i4B12i4", __M2N_i4i4i4i4i4B12i4},
	{"i4i4i4i4i4B20i4", __M2N_i4i4i4i4i4B20i4},
	{"i4i4i4i4i4B8i4", __M2N_i4i4i4i4i4B8i4},
	{"i4i4i4i4i4C16i4", __M2N_i4i4i4i4i4C16i4},
	{"i4i4i4i4i4i1i4", __M2N_i4i4i4i4i4i1i4},
	{"i4i4i4i4i4i2i4", __M2N_i4i4i4i4i4i2i4},
	{"i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4u1i8", __M2N_i4i4i4i4i4i4i4i4u1i8},
	{"i4i4i4i4i4i4i4u1", __M2N_i4i4i4i4i4i4i4u1},
	{"i4i4i4i4i4i4u1", __M2N_i4i4i4i4i4i4u1},
	{"i4i4i4i4i4i8i4", __M2N_i4i4i4i4i4i8i4},
	{"i4i4i4i4i4r4i4", __M2N_i4i4i4i4i4r4i4},
	{"i4i4i4i4i4r8i4", __M2N_i4i4i4i4i4r8i4},
	{"i4i4i4i4i4u1", __M2N_i4i4i4i4i4u1},
	{"i4i4i4i4i4u1i4", __M2N_i4i4i4i4i4u1i4},
	{"i4i4i4i4i4u1i4i4", __M2N_i4i4i4i4i4u1i4i4},
	{"i4i4i4i4i4u2i4", __M2N_i4i4i4i4i4u2i4},
	{"i4i4i4i4i4u4i4", __M2N_i4i4i4i4i4u4i4},
	{"i4i4i4i4i4u8i4", __M2N_i4i4i4i4i4u8i4},
	{"i4i4i4i4i4W16i4", __M2N_i4i4i4i4i4W16i4},
	{"i4i4i4i4i8", __M2N_i4i4i4i4i8},
	{"i4i4i4i4i8u1", __M2N_i4i4i4i4i8u1},
	{"i4i4i4i4u1", __M2N_i4i4i4i4u1},
	{"i4i4i4i4u1i4", __M2N_i4i4i4i4u1i4},
	{"i4i4i4i4u1i4i4", __M2N_i4i4i4i4u1i4i4},
	{"i4i4i4i4u1u1", __M2N_i4i4i4i4u1u1},
	{"i4i4i4i4u8i4", __M2N_i4i4i4i4u8i4},
	{"i4i4i4i8i4i4", __M2N_i4i4i4i8i4i4},
	{"i4i4i4r4i4i4", __M2N_i4i4i4r4i4i4},
	{"i4i4i4r8i4i4", __M2N_i4i4i4r8i4i4},
	{"i4i4i4u1", __M2N_i4i4i4u1},
	{"i4i4i4u1i4", __M2N_i4i4i4u1i4},
	{"i4i4i4u1i4i4", __M2N_i4i4i4u1i4i4},
	{"i4i4i4u1u1", __M2N_i4i4i4u1u1},
	{"i4i4i4u2", __M2N_i4i4i4u2},
	{"i4i4i4u2i4i4", __M2N_i4i4i4u2i4i4},
	{"i4i4i4u4i4i4", __M2N_i4i4i4u4i4i4},
	{"i4i4i4u8", __M2N_i4i4i4u8},
	{"i4i4i4u8i4i4", __M2N_i4i4i4u8i4i4},
	{"i4i4i4W16i4i4", __M2N_i4i4i4W16i4i4},
	{"i4i4i8", __M2N_i4i4i8},
	{"i4i4i8i4", __M2N_i4i4i8i4},
	{"i4i4i8i4i4", __M2N_i4i4i8i4i4},
	{"i4i4i8i4i4i4", __M2N_i4i4i8i4i4i4},
	{"i4i4i8i4i4i4i4u1", __M2N_i4i4i8i4i4i4i4u1},
	{"i4i4i8i8", __M2N_i4i4i8i8},
	{"i4i4i8i8i8", __M2N_i4i4i8i8i8},
	{"i4i4i8u1", __M2N_i4i4i8u1},
	{"i4i4r4", __M2N_i4i4r4},
	{"i4i4r4i4i4", __M2N_i4i4r4i4i4},
	{"i4i4r4r4", __M2N_i4i4r4r4},
	{"i4i4r8", __M2N_i4i4r8},
	{"i4i4r8i4", __M2N_i4i4r8i4},
	{"i4i4r8i4i4", __M2N_i4i4r8i4i4},
	{"i4i4r8r8", __M2N_i4i4r8r8},
	{"i4i4u1", __M2N_i4i4u1},
	{"i4i4u1i4", __M2N_i4i4u1i4},
	{"i4i4u1i4i4", __M2N_i4i4u1i4i4},
	{"i4i4u1i4i4i4i4i4i4i4i4u1i4", __M2N_i4i4u1i4i4i4i4i4i4i4i4u1i4},
	{"i4i4u1i4u1", __M2N_i4i4u1i4u1},
	{"i4i4u1u1", __M2N_i4i4u1u1},
	{"i4i4u1u1u1u1i4", __M2N_i4i4u1u1u1u1i4},
	{"i4i4u2", __M2N_i4i4u2},
	{"i4i4u2i4", __M2N_i4i4u2i4},
	{"i4i4u2i4i4", __M2N_i4i4u2i4i4},
	{"i4i4u2u2", __M2N_i4i4u2u2},
	{"i4i4u4", __M2N_i4i4u4},
	{"i4i4u4i4", __M2N_i4i4u4i4},
	{"i4i4u4i4i4", __M2N_i4i4u4i4i4},
	{"i4i4u4u4", __M2N_i4i4u4u4},
	{"i4i4u8", __M2N_i4i4u8},
	{"i4i4u8i4i4", __M2N_i4i4u8i4i4},
	{"i4i4u8u8", __M2N_i4i4u8u8},
	{"i4i4W16", __M2N_i4i4W16},
	{"i4i4W16i4", __M2N_i4i4W16i4},
	{"i4i4W16i4i4", __M2N_i4i4W16i4i4},
	{"i4i4W16W16", __M2N_i4i4W16W16},
	{"i4i4X1", __M2N_i4i4X1},
	{"i4i8", __M2N_i4i8},
	{"i4i8B8i4", __M2N_i4i8B8i4},
	{"i4i8i4", __M2N_i4i8i4},
	{"i4i8i4i4i4", __M2N_i4i8i4i4i4},
	{"i4i8i8", __M2N_i4i8i8},
	{"i4i8i8i8C24C24", __M2N_i4i8i8i8C24C24},
	{"i4i8i8u4u4", __M2N_i4i8i8u4u4},
	{"i4r4", __M2N_i4r4},
	{"i4r4i4i4", __M2N_i4r4i4i4},
	{"i4r8", __M2N_i4r8},
	{"i4r8i4i4", __M2N_i4r8i4i4},
	{"i4u1", __M2N_i4u1},
	{"i4u1u1i4i4", __M2N_i4u1u1i4i4},
	{"i4u2", __M2N_i4u2},
	{"i4u2i4", __M2N_i4u2i4},
	{"i4u2u2", __M2N_i4u2u2},
	{"i4u2u2u2u2", __M2N_i4u2u2u2u2},
	{"i4u4", __M2N_i4u4},
	{"i4u4B8i4", __M2N_i4u4B8i4},
	{"i4u4i4", __M2N_i4u4i4},
	{"i4u8", __M2N_i4u8},
	{"i4u8B8i4", __M2N_i4u8B8i4},
	{"i4W16", __M2N_i4W16},
	{"i4W16B8i4", __M2N_i4W16B8i4},
	{"i4W16W16", __M2N_i4W16W16},
	{"i8", __M2N_i8},
	{"i8B8", __M2N_i8B8},
	{"i8B8i4i4", __M2N_i8B8i4i4},
	{"i8B8i4i4i4", __M2N_i8B8i4i4i4},
	{"i8C16", __M2N_i8C16},
	{"i8C16C16", __M2N_i8C16C16},
	{"i8i1", __M2N_i8i1},
	{"i8i2", __M2N_i8i2},
	{"i8i2u2", __M2N_i8i2u2},
	{"i8i4", __M2N_i8i4},
	{"i8i4C16", __M2N_i8i4C16},
	{"i8i4i4", __M2N_i8i4i4},
	{"i8i4i4i4", __M2N_i8i4i4i4},
	{"i8i4i4i4i4", __M2N_i8i4i4i4i4},
	{"i8i4i4i4i4i4i4i4i4", __M2N_i8i4i4i4i4i4i4i4i4},
	{"i8i4i4i4i4i4i4i4i4i4", __M2N_i8i4i4i4i4i4i4i4i4i4},
	{"i8i4i8", __M2N_i8i4i8},
	{"i8i4i8i4", __M2N_i8i4i8i4},
	{"i8i4i8i4i4", __M2N_i8i4i8i4i4},
	{"i8i4i8i8", __M2N_i8i4i8i8},
	{"i8i4r8", __M2N_i8i4r8},
	{"i8i4u1", __M2N_i8i4u1},
	{"i8i4u4", __M2N_i8i4u4},
	{"i8i8", __M2N_i8i8},
	{"i8i8i4", __M2N_i8i8i4},
	{"i8i8i8", __M2N_i8i8i8},
	{"i8r4", __M2N_i8r4},
	{"i8r8", __M2N_i8r8},
	{"i8u1", __M2N_i8u1},
	{"i8u2", __M2N_i8u2},
	{"i8u4", __M2N_i8u4},
	{"i8u8", __M2N_i8u8},
	{"i8W16", __M2N_i8W16},
	{"r4", __M2N_r4},
	{"r4B8", __M2N_r4B8},
	{"r4i1", __M2N_r4i1},
	{"r4i2", __M2N_r4i2},
	{"r4i4", __M2N_r4i4},
	{"r4i4i4", __M2N_r4i4i4},
	{"r4i4i4i4", __M2N_r4i4i4i4},
	{"r4i4r4", __M2N_r4i4r4},
	{"r4i4r4r4", __M2N_r4i4r4r4},
	{"r4i4r8", __M2N_r4i4r8},
	{"r4i8", __M2N_r4i8},
	{"r4r4", __M2N_r4r4},
	{"r4r4r4", __M2N_r4r4r4},
	{"r4r4r4r4", __M2N_r4r4r4r4},
	{"r4r8", __M2N_r4r8},
	{"r4u1", __M2N_r4u1},
	{"r4u2", __M2N_r4u2},
	{"r4u4", __M2N_r4u4},
	{"r4u8", __M2N_r4u8},
	{"r4W16", __M2N_r4W16},
	{"r8", __M2N_r8},
	{"r8B8", __M2N_r8B8},
	{"r8i1", __M2N_r8i1},
	{"r8i2", __M2N_r8i2},
	{"r8i4", __M2N_r8i4},
	{"r8i4i4", __M2N_r8i4i4},
	{"r8i4i4i4", __M2N_r8i4i4i4},
	{"r8i4i4u8", __M2N_r8i4i4u8},
	{"r8i4i8", __M2N_r8i4i8},
	{"r8i4r8", __M2N_r8i4r8},
	{"r8i4r8r8", __M2N_r8i4r8r8},
	{"r8i4u1", __M2N_r8i4u1},
	{"r8i8", __M2N_r8i8},
	{"r8r4", __M2N_r8r4},
	{"r8r8", __M2N_r8r8},
	{"r8r8r8", __M2N_r8r8r8},
	{"r8u1", __M2N_r8u1},
	{"r8u2", __M2N_r8u2},
	{"r8u4", __M2N_r8u4},
	{"r8u8", __M2N_r8u8},
	{"r8W16", __M2N_r8W16},
	{"S2i4", __M2N_S2i4},
	{"u1", __M2N_u1},
	{"u1A8A8", __M2N_u1A8A8},
	{"u1B12B12", __M2N_u1B12B12},
	{"u1B12i4", __M2N_u1B12i4},
	{"u1B16B16", __M2N_u1B16B16},
	{"u1B24B24", __M2N_u1B24B24},
	{"u1B8", __M2N_u1B8},
	{"u1B8B8", __M2N_u1B8B8},
	{"u1B8B8B8i4", __M2N_u1B8B8B8i4},
	{"u1B8B8B8i4i4u1i4", __M2N_u1B8B8B8i4i4u1i4},
	{"u1B8B8i4", __M2N_u1B8B8i4},
	{"u1B8B8u1", __M2N_u1B8B8u1},
	{"u1B8i4", __M2N_u1B8i4},
	{"u1B8i4B8i4i4u1i4", __M2N_u1B8i4B8i4i4u1i4},
	{"u1B8i4i4", __M2N_u1B8i4i4},
	{"u1B8i4i4i4", __M2N_u1B8i4i4i4},
	{"u1B8i8", __M2N_u1B8i8},
	{"u1B8u4", __M2N_u1B8u4},
	{"u1C16C16", __M2N_u1C16C16},
	{"u1C24", __M2N_u1C24},
	{"u1C24C24", __M2N_u1C24C24},
	{"u1i1", __M2N_u1i1},
	{"u1i2", __M2N_u1i2},
	{"u1i4", __M2N_u1i4},
	{"u1i4A4", __M2N_u1i4A4},
	{"u1i4A4A4", __M2N_u1i4A4A4},
	{"u1i4B12", __M2N_u1i4B12},
	{"u1i4B12B12", __M2N_u1i4B12B12},
	{"u1i4B12i4", __M2N_u1i4B12i4},
	{"u1i4B16", __M2N_u1i4B16},
	{"u1i4B16B16", __M2N_u1i4B16B16},
	{"u1i4B16i4", __M2N_u1i4B16i4},
	{"u1i4B16i4i4", __M2N_u1i4B16i4i4},
	{"u1i4B20", __M2N_u1i4B20},
	{"u1i4B20B20", __M2N_u1i4B20B20},
	{"u1i4B24", __M2N_u1i4B24},
	{"u1i4B28", __M2N_u1i4B28},
	{"u1i4B32", __M2N_u1i4B32},
	{"u1i4B4", __M2N_u1i4B4},
	{"u1i4B64", __M2N_u1i4B64},
	{"u1i4B8", __M2N_u1i4B8},
	{"u1i4B8B8", __M2N_u1i4B8B8},
	{"u1i4B8i4", __M2N_u1i4B8i4},
	{"u1i4B8i4B8", __M2N_u1i4B8i4B8},
	{"u1i4B8i4B8i4", __M2N_u1i4B8i4B8i4},
	{"u1i4B8i4i4", __M2N_u1i4B8i4i4},
	{"u1i4B8i4u1u1", __M2N_u1i4B8i4u1u1},
	{"u1i4C16", __M2N_u1i4C16},
	{"u1i4C16C16", __M2N_u1i4C16C16},
	{"u1i4C24", __M2N_u1i4C24},
	{"u1i4i1", __M2N_u1i4i1},
	{"u1i4i1i1", __M2N_u1i4i1i1},
	{"u1i4i2", __M2N_u1i4i2},
	{"u1i4i2i2", __M2N_u1i4i2i2},
	{"u1i4i4", __M2N_u1i4i4},
	{"u1i4i4B8", __M2N_u1i4i4B8},
	{"u1i4i4i4", __M2N_u1i4i4i4},
	{"u1i4i4i4i4", __M2N_u1i4i4i4i4},
	{"u1i4i4i4i4i4", __M2N_u1i4i4i4i4i4},
	{"u1i4i4i4i4i4i4", __M2N_u1i4i4i4i4i4i4},
	{"u1i4i4i4i4i4i4i4i4", __M2N_u1i4i4i4i4i4i4i4i4},
	{"u1i4i4i4i4i4i4i4i4i4", __M2N_u1i4i4i4i4i4i4i4i4i4},
	{"u1i4i4i4i4u1", __M2N_u1i4i4i4i4u1},
	{"u1i4i4i4i4u1i4", __M2N_u1i4i4i4i4u1i4},
	{"u1i4i4i4i8", __M2N_u1i4i4i4i8},
	{"u1i4i4i4u1", __M2N_u1i4i4i4u1},
	{"u1i4i4i4u1i4", __M2N_u1i4i4i4u1i4},
	{"u1i4i4i4u1u1", __M2N_u1i4i4i4u1u1},
	{"u1i4i4i8", __M2N_u1i4i4i8},
	{"u1i4i4u1", __M2N_u1i4i4u1},
	{"u1i4i4u8", __M2N_u1i4i4u8},
	{"u1i4i8", __M2N_u1i4i8},
	{"u1i4i8i4", __M2N_u1i4i8i4},
	{"u1i4i8i8", __M2N_u1i4i8i8},
	{"u1i4r4", __M2N_u1i4r4},
	{"u1i4r4r4", __M2N_u1i4r4r4},
	{"u1i4r8", __M2N_u1i4r8},
	{"u1i4r8r8", __M2N_u1i4r8r8},
	{"u1i4u1", __M2N_u1i4u1},
	{"u1i4u1i4", __M2N_u1i4u1i4},
	{"u1i4u1u1", __M2N_u1i4u1u1},
	{"u1i4u2", __M2N_u1i4u2},
	{"u1i4u2i4", __M2N_u1i4u2i4},
	{"u1i4u2u2", __M2N_u1i4u2u2},
	{"u1i4u2u2i4", __M2N_u1i4u2u2i4},
	{"u1i4u4", __M2N_u1i4u4},
	{"u1i4u4i4i4i4", __M2N_u1i4u4i4i4i4},
	{"u1i4u4u4", __M2N_u1i4u4u4},
	{"u1i4u8", __M2N_u1i4u8},
	{"u1i4u8u8", __M2N_u1i4u8u8},
	{"u1i4W16", __M2N_u1i4W16},
	{"u1i4W16W16", __M2N_u1i4W16W16},
	{"u1i4X1", __M2N_u1i4X1},
	{"u1i8", __M2N_u1i8},
	{"u1i8B8", __M2N_u1i8B8},
	{"u1i8B8i4B8i4", __M2N_u1i8B8i4B8i4},
	{"u1i8i8", __M2N_u1i8i8},
	{"u1r4", __M2N_u1r4},
	{"u1r4B8i4B8i4", __M2N_u1r4B8i4B8i4},
	{"u1r4r4", __M2N_u1r4r4},
	{"u1r8", __M2N_u1r8},
	{"u1r8B8i4B8i4", __M2N_u1r8B8i4B8i4},
	{"u1u1", __M2N_u1u1},
	{"u1u1u1", __M2N_u1u1u1},
	{"u1u2", __M2N_u1u2},
	{"u1u2i4", __M2N_u1u2i4},
	{"u1u2u2", __M2N_u1u2u2},
	{"u1u4", __M2N_u1u4},
	{"u1u4B8i4B8i4", __M2N_u1u4B8i4B8i4},
	{"u1u4u1", __M2N_u1u4u1},
	{"u1u4u4", __M2N_u1u4u4},
	{"u1u8", __M2N_u1u8},
	{"u1u8B8i4B8i4", __M2N_u1u8B8i4B8i4},
	{"u1W16", __M2N_u1W16},
	{"u1W16B8i4B8i4", __M2N_u1W16B8i4B8i4},
	{"u1W16W16", __M2N_u1W16W16},
	{"u2", __M2N_u2},
	{"u2B8", __M2N_u2B8},
	{"u2i1", __M2N_u2i1},
	{"u2i2", __M2N_u2i2},
	{"u2i4", __M2N_u2i4},
	{"u2i4i4", __M2N_u2i4i4},
	{"u2i4i4i4", __M2N_u2i4i4i4},
	{"u2i4u2", __M2N_u2i4u2},
	{"u2i8", __M2N_u2i8},
	{"u2r4", __M2N_u2r4},
	{"u2r8", __M2N_u2r8},
	{"u2u1", __M2N_u2u1},
	{"u2u2", __M2N_u2u2},
	{"u2u2i4", __M2N_u2u2i4},
	{"u2u2u2", __M2N_u2u2u2},
	{"u2u4", __M2N_u2u4},
	{"u2u8", __M2N_u2u8},
	{"u2W16", __M2N_u2W16},
	{"u4", __M2N_u4},
	{"u4B8", __M2N_u4B8},
	{"u4i1", __M2N_u4i1},
	{"u4i2", __M2N_u4i2},
	{"u4i4", __M2N_u4i4},
	{"u4i4i4", __M2N_u4i4i4},
	{"u4i4i4i4", __M2N_u4i4i4i4},
	{"u4i4i4i8i4", __M2N_u4i4i4i8i4},
	{"u4i4i4i8u4i4", __M2N_u4i4i4i8u4i4},
	{"u4i4i8i4i4i4i4i4", __M2N_u4i4i8i4i4i4i4i4},
	{"u4i4i8i8i4i4i4i4i4", __M2N_u4i4i8i8i4i4i4i4i4},
	{"u4i4u4", __M2N_u4i4u4},
	{"u4i8", __M2N_u4i8},
	{"u4r4", __M2N_u4r4},
	{"u4r8", __M2N_u4r8},
	{"u4u1", __M2N_u4u1},
	{"u4u2", __M2N_u4u2},
	{"u4u4", __M2N_u4u4},
	{"u4u4u4", __M2N_u4u4u4},
	{"u4u4u4u4u4", __M2N_u4u4u4u4u4},
	{"u4u8", __M2N_u4u8},
	{"u4W16", __M2N_u4W16},
	{"u8", __M2N_u8},
	{"u8B8", __M2N_u8B8},
	{"u8i1", __M2N_u8i1},
	{"u8i2", __M2N_u8i2},
	{"u8i4", __M2N_u8i4},
	{"u8i4i4", __M2N_u8i4i4},
	{"u8i4i4i4", __M2N_u8i4i4i4},
	{"u8i8", __M2N_u8i8},
	{"u8r4", __M2N_u8r4},
	{"u8r8", __M2N_u8r8},
	{"u8u1", __M2N_u8u1},
	{"u8u2", __M2N_u8u2},
	{"u8u4", __M2N_u8u4},
	{"u8u4u4", __M2N_u8u4u4},
	{"u8u8u8", __M2N_u8u8u8},
	{"u8W16", __M2N_u8W16},
	{"v", __M2N_v},
	{"vB12B12", __M2N_vB12B12},
	{"vB12B12B16", __M2N_vB12B12B16},
	{"vB12B12B16r4", __M2N_vB12B12B16r4},
	{"vB12B12B16r4u1", __M2N_vB12B12B16r4u1},
	{"vB12i4", __M2N_vB12i4},
	{"vB12i4i4", __M2N_vB12i4i4},
	{"vB20", __M2N_vB20},
	{"vB8", __M2N_vB8},
	{"vC16i4u1", __M2N_vC16i4u1},
	{"vC16u4i4u1", __M2N_vC16u4i4u1},
	{"vi4", __M2N_vi4},
	{"vi4A4", __M2N_vi4A4},
	{"vi4B12", __M2N_vi4B12},
	{"vi4B12i4", __M2N_vi4B12i4},
	{"vi4B12i4i4", __M2N_vi4B12i4i4},
	{"vi4B12i4i4i4", __M2N_vi4B12i4i4i4},
	{"vi4B12i4i4i4i4i4i4i4", __M2N_vi4B12i4i4i4i4i4i4i4},
	{"vi4B12u1", __M2N_vi4B12u1},
	{"vi4B16", __M2N_vi4B16},
	{"vi4B16B16B16B16", __M2N_vi4B16B16B16B16},
	{"vi4B16i4", __M2N_vi4B16i4},
	{"vi4B16i4i4", __M2N_vi4B16i4i4},
	{"vi4B20", __M2N_vi4B20},
	{"vi4B24", __M2N_vi4B24},
	{"vi4B28", __M2N_vi4B28},
	{"vi4B32", __M2N_vi4B32},
	{"vi4B52", __M2N_vi4B52},
	{"vi4B72", __M2N_vi4B72},
	{"vi4B8", __M2N_vi4B8},
	{"vi4B8B12", __M2N_vi4B8B12},
	{"vi4B8B20", __M2N_vi4B8B20},
	{"vi4B8B28", __M2N_vi4B8B28},
	{"vi4B8B8", __M2N_vi4B8B8},
	{"vi4B8B8i4", __M2N_vi4B8B8i4},
	{"vi4B8C56", __M2N_vi4B8C56},
	{"vi4B8C56i4", __M2N_vi4B8C56i4},
	{"vi4B8i4", __M2N_vi4B8i4},
	{"vi4B8i4i4", __M2N_vi4B8i4i4},
	{"vi4B8i8", __M2N_vi4B8i8},
	{"vi4B8u1u1", __M2N_vi4B8u1u1},
	{"vi4C16", __M2N_vi4C16},
	{"vi4C16i4", __M2N_vi4C16i4},
	{"vi4i1", __M2N_vi4i1},
	{"vi4i2", __M2N_vi4i2},
	{"vi4i4", __M2N_vi4i4},
	{"vi4i4A4", __M2N_vi4i4A4},
	{"vi4i4B12", __M2N_vi4i4B12},
	{"vi4i4B12i4", __M2N_vi4i4B12i4},
	{"vi4i4B16", __M2N_vi4i4B16},
	{"vi4i4B20", __M2N_vi4i4B20},
	{"vi4i4B24", __M2N_vi4i4B24},
	{"vi4i4B64", __M2N_vi4i4B64},
	{"vi4i4B8", __M2N_vi4i4B8},
	{"vi4i4B8B8", __M2N_vi4i4B8B8},
	{"vi4i4B8i4", __M2N_vi4i4B8i4},
	{"vi4i4B96", __M2N_vi4i4B96},
	{"vi4i4C16", __M2N_vi4i4C16},
	{"vi4i4i1", __M2N_vi4i4i1},
	{"vi4i4i2", __M2N_vi4i4i2},
	{"vi4i4i2i2i4", __M2N_vi4i4i2i2i4},
	{"vi4i4i2i2u1u1u1u1u1u1u1u1", __M2N_vi4i4i2i2u1u1u1u1u1u1u1u1},
	{"vi4i4i4", __M2N_vi4i4i4},
	{"vi4i4i4B8", __M2N_vi4i4i4B8},
	{"vi4i4i4i2i4", __M2N_vi4i4i4i2i4},
	{"vi4i4i4i4", __M2N_vi4i4i4i4},
	{"vi4i4i4i4i4", __M2N_vi4i4i4i4i4},
	{"vi4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4B12i4u1", __M2N_vi4i4i4i4i4i4i4B12i4u1},
	{"vi4i4i4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i8", __M2N_vi4i4i4i4i4i4i4i4i4i8},
	{"vi4i4i4i4i4i4i4i4i8", __M2N_vi4i4i4i4i4i4i4i4i8},
	{"vi4i4i4i4i4i4i4i8", __M2N_vi4i4i4i4i4i4i4i8},
	{"vi4i4i4i4i4i4i4u1", __M2N_vi4i4i4i4i4i4i4u1},
	{"vi4i4i4i4i4i4i4u1i4", __M2N_vi4i4i4i4i4i4i4u1i4},
	{"vi4i4i4i4i4i4i4u1i4i4i4", __M2N_vi4i4i4i4i4i4i4u1i4i4i4},
	{"vi4i4i4i4i4i4u1", __M2N_vi4i4i4i4i4i4u1},
	{"vi4i4i4i4i4i4u1u1", __M2N_vi4i4i4i4i4i4u1u1},
	{"vi4i4i4i4i4u1", __M2N_vi4i4i4i4i4u1},
	{"vi4i4i4i4i4u1i4", __M2N_vi4i4i4i4i4u1i4},
	{"vi4i4i4i4i4u1i4i4", __M2N_vi4i4i4i4i4u1i4i4},
	{"vi4i4i4i4i4u1i4i4i4", __M2N_vi4i4i4i4i4u1i4i4i4},
	{"vi4i4i4i4i4u1u1", __M2N_vi4i4i4i4i4u1u1},
	{"vi4i4i4i4i4u1u1u1", __M2N_vi4i4i4i4i4u1u1u1},
	{"vi4i4i4i4u1", __M2N_vi4i4i4i4u1},
	{"vi4i4i4i4u1u1", __M2N_vi4i4i4i4u1u1},
	{"vi4i4i4i4u1u1u1", __M2N_vi4i4i4i4u1u1u1},
	{"vi4i4i4i8", __M2N_vi4i4i4i8},
	{"vi4i4i4i8i8", __M2N_vi4i4i4i8i8},
	{"vi4i4i4r4", __M2N_vi4i4i4r4},
	{"vi4i4i4u1", __M2N_vi4i4i4u1},
	{"vi4i4i4u1i4", __M2N_vi4i4i4u1i4},
	{"vi4i4i4u1i4i4", __M2N_vi4i4i4u1i4i4},
	{"vi4i4i4u1i4u1", __M2N_vi4i4i4u1i4u1},
	{"vi4i4i4u1u1", __M2N_vi4i4i4u1u1},
	{"vi4i4i4u2", __M2N_vi4i4i4u2},
	{"vi4i4i4u8", __M2N_vi4i4i4u8},
	{"vi4i4i8", __M2N_vi4i4i8},
	{"vi4i4i8i4", __M2N_vi4i4i8i4},
	{"vi4i4i8i4i8i4i4", __M2N_vi4i4i8i4i8i4i4},
	{"vi4i4i8i8", __M2N_vi4i4i8i8},
	{"vi4i4i8i8i4", __M2N_vi4i4i8i8i4},
	{"vi4i4i8i8i8", __M2N_vi4i4i8i8i8},
	{"vi4i4r4", __M2N_vi4i4r4},
	{"vi4i4r4i4", __M2N_vi4i4r4i4},
	{"vi4i4r4r4", __M2N_vi4i4r4r4},
	{"vi4i4r8", __M2N_vi4i4r8},
	{"vi4i4u1", __M2N_vi4i4u1},
	{"vi4i4u1B24", __M2N_vi4i4u1B24},
	{"vi4i4u1i4", __M2N_vi4i4u1i4},
	{"vi4i4u1i4i4", __M2N_vi4i4u1i4i4},
	{"vi4i4u1i4i4i4", __M2N_vi4i4u1i4i4i4},
	{"vi4i4u1u1", __M2N_vi4i4u1u1},
	{"vi4i4u1u1i4", __M2N_vi4i4u1u1i4},
	{"vi4i4u1u1i4i4", __M2N_vi4i4u1u1i4i4},
	{"vi4i4u1u1u1", __M2N_vi4i4u1u1u1},
	{"vi4i4u2", __M2N_vi4i4u2},
	{"vi4i4u2i4", __M2N_vi4i4u2i4},
	{"vi4i4u4", __M2N_vi4i4u4},
	{"vi4i4u4i4", __M2N_vi4i4u4i4},
	{"vi4i4u8", __M2N_vi4i4u8},
	{"vi4i4W16", __M2N_vi4i4W16},
	{"vi4i4W16W16", __M2N_vi4i4W16W16},
	{"vi4i8", __M2N_vi4i8},
	{"vi4i8i4", __M2N_vi4i8i4},
	{"vi4i8i4i4", __M2N_vi4i8i4i4},
	{"vi4i8i4i8", __M2N_vi4i8i4i8},
	{"vi4i8i4i8i8", __M2N_vi4i8i4i8i8},
	{"vi4i8i8", __M2N_vi4i8i8},
	{"vi4i8i8i8", __M2N_vi4i8i8i8},
	{"vi4r4", __M2N_vi4r4},
	{"vi4r4r4", __M2N_vi4r4r4},
	{"vi4r4r4r4", __M2N_vi4r4r4r4},
	{"vi4r4r4r4r4", __M2N_vi4r4r4r4r4},
	{"vi4r8", __M2N_vi4r8},
	{"vi4S2", __M2N_vi4S2},
	{"vi4u1", __M2N_vi4u1},
	{"vi4u1B12i4i4", __M2N_vi4u1B12i4i4},
	{"vi4u1B16i4i4", __M2N_vi4u1B16i4i4},
	{"vi4u1B8i4i4", __M2N_vi4u1B8i4i4},
	{"vi4u1i4", __M2N_vi4u1i4},
	{"vi4u1i4i4", __M2N_vi4u1i4i4},
	{"vi4u1i4i4B8", __M2N_vi4u1i4i4B8},
	{"vi4u1i4i4i4", __M2N_vi4u1i4i4i4},
	{"vi4u1i4i4i4i4i4i4i4", __M2N_vi4u1i4i4i4i4i4i4i4},
	{"vi4u1i4u1u1", __M2N_vi4u1i4u1u1},
	{"vi4u1u1", __M2N_vi4u1u1},
	{"vi4u1u1i4", __M2N_vi4u1u1i4},
	{"vi4u1u1i4B8", __M2N_vi4u1u1i4B8},
	{"vi4u1u1i4i4", __M2N_vi4u1u1i4i4},
	{"vi4u1u1i4i4i4i4i4i4i4", __M2N_vi4u1u1i4i4i4i4i4i4i4},
	{"vi4u1u1i4u1", __M2N_vi4u1u1i4u1},
	{"vi4u1u1u1", __M2N_vi4u1u1u1},
	{"vi4u1u1u4u4u4", __M2N_vi4u1u1u4u4u4},
	{"vi4u1u4", __M2N_vi4u1u4},
	{"vi4u1X1i4i4", __M2N_vi4u1X1i4i4},
	{"vi4u2", __M2N_vi4u2},
	{"vi4u2i4", __M2N_vi4u2i4},
	{"vi4u2i4i4i4i4i4i4i4", __M2N_vi4u2i4i4i4i4i4i4i4},
	{"vi4u2i4u1u1u1", __M2N_vi4u2i4u1u1u1},
	{"vi4u2i4u2i4", __M2N_vi4u2i4u2i4},
	{"vi4u2u1u1u1", __M2N_vi4u2u1u1u1},
	{"vi4u2u2", __M2N_vi4u2u2},
	{"vi4u4", __M2N_vi4u4},
	{"vi4u4i4i4i4", __M2N_vi4u4i4i4i4},
	{"vi4u4u1", __M2N_vi4u4u1},
	{"vi4u4u4i4u4u4i4u4", __M2N_vi4u4u4i4u4u4i4u4},
	{"vi4u4u4u4", __M2N_vi4u4u4u4},
	{"vi4u8", __M2N_vi4u8},
	{"vi4u8i4", __M2N_vi4u8i4},
	{"vi4u8i4i4", __M2N_vi4u8i4i4},
	{"vi4u8u8", __M2N_vi4u8u8},
	{"vi4W16", __M2N_vi4W16},
	{"vi4W16W16", __M2N_vi4W16W16},
	{"vi4X1", __M2N_vi4X1},
	{"vi8", __M2N_vi8},
	{"vr8i4i4i4i4", __M2N_vr8i4i4i4i4},
	{"vu1", __M2N_vu1},
	{"vu1i4", __M2N_vu1i4},
	{"vu1i4i4", __M2N_vu1i4i4},
	{"vu1i4i4i4", __M2N_vu1i4i4i4},
	{"W16B8", __M2N_W16B8},
	{"W16i1", __M2N_W16i1},
	{"W16i2", __M2N_W16i2},
	{"W16i4", __M2N_W16i4},
	{"W16i4i4", __M2N_W16i4i4},
	{"W16i4i4i4", __M2N_W16i4i4i4},
	{"W16i4W16", __M2N_W16i4W16},
	{"W16i8", __M2N_W16i8},
	{"W16r4", __M2N_W16r4},
	{"W16r8", __M2N_W16r8},
	{"W16u1", __M2N_W16u1},
	{"W16u2", __M2N_W16u2},
	{"W16u4", __M2N_W16u4},
	{"W16u8", __M2N_W16u8},
	{"W16W16", __M2N_W16W16},
	{"W16W16i4", __M2N_W16W16i4},
	{"W16W16W16", __M2N_W16W16W16},
	{"X1i4", __M2N_X1i4},
	{"X1i4i4", __M2N_X1i4i4},
	{"X1i4i4i4", __M2N_X1i4i4i4},
	{"Z24u2", __M2N_Z24u2},
	{nullptr, nullptr},
};

// T System.Collections.Generic.List`1/Enumerator::get_Current()
static ValueTypeSizeAlign2<4> __N2M_A4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign2<4>*)ret;
}


// T System.Collections.Generic.List`1::get_Item(System.Int32)
static ValueTypeSizeAlign2<4> __N2M_A4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign2<4>*)ret;
}


// TResult System.Func`1::Invoke()
static ValueTypeSizeAlign4<12> __N2M_B12(const MethodInfo* method)
{
    StackObject args[2] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<12>*)ret;
}


// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::get_Current()
static ValueTypeSizeAlign4<12> __N2M_B12i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<12>*)ret;
}


// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.MemoryStream::ReadAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
static ValueTypeSizeAlign4<12> __N2M_B12i4B12i4(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<12>*)ret;
}


// System.Buffers.MemoryHandle System.Buffers.MemoryManager`1::Pin(System.Int32)
static ValueTypeSizeAlign4<12> __N2M_B12i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<12>*)ret;
}


// System.ConsoleKeyInfo System.IConsoleDriver::ReadKey(System.Boolean)
static ValueTypeSizeAlign4<12> __N2M_B12i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<12>*)ret;
}


// TResult System.Func`1::Invoke()
static ValueTypeSizeAlign4<16> __N2M_B16(const MethodInfo* method)
{
    StackObject args[2] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<16>*)ret;
}


// System.Guid System.Type::get_GUID()
static ValueTypeSizeAlign4<16> __N2M_B16i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<16>*)ret;
}


// TResult System.Func`2::Invoke(T)
static ValueTypeSizeAlign4<16> __N2M_B16i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<16>*)ret;
}


// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::get_Current()
static ValueTypeSizeAlign4<20> __N2M_B20i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<20>*)ret;
}


// T System.Collections.Generic.List`1::get_Item(System.Int32)
static ValueTypeSizeAlign4<20> __N2M_B20i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<20>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSizeAlign4<24> __N2M_B24i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<24>*)ret;
}


// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
static ValueTypeSizeAlign4<32> __N2M_B32i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<32>*)ret;
}


// T Unity.Collections.NativeArray`1/Enumerator::get_Current()
static ValueTypeSizeAlign4<64> __N2M_B64i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<64>*)ret;
}


// TResult System.Func`1::Invoke()
static ValueTypeSizeAlign4<8> __N2M_B8(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<8>*)ret;
}


// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableBinding/CreateOutputMethod::Invoke(UnityEngine.Playables.PlayableGraph,System.String)
static ValueTypeSizeAlign4<8> __N2M_B8B8i4(ValueTypeSizeAlign4<8> __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<8>*)ret;
}


// System.ReadOnlySpan`1<System.Byte> System.Text.UTF32Encoding::get_Preamble()
static ValueTypeSizeAlign4<8> __N2M_B8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<8>*)ret;
}


// System.Threading.Tasks.ValueTask System.IO.MemoryStream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
static ValueTypeSizeAlign4<8> __N2M_B8i4B12i4(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<8>*)ret;
}


// TValue System.Collections.Generic.Dictionary`2::get_Item(TKey)
static ValueTypeSizeAlign4<8> __N2M_B8i4B8(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<8>*)ret;
}


// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
static ValueTypeSizeAlign4<8> __N2M_B8i4B8i4(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<8>*)ret;
}


// TValue System.Collections.Generic.Dictionary`2::get_Item(TKey)
static ValueTypeSizeAlign4<8> __N2M_B8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<8>*)ret;
}


// System.ValueTuple`2<System.Int32,System.Boolean> Mono.Unity.UnityTlsContext::Read(System.Byte[],System.Int32,System.Int32)
static ValueTypeSizeAlign4<8> __N2M_B8i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<8>*)ret;
}


// T Unity.Collections.NativeArray`1/Enumerator::get_Current()
static ValueTypeSizeAlign4<96> __N2M_B96i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[13] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<96>*)ret;
}


// Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::Invoke()
static ValueTypeSizeAlign8<16> __N2M_C16(const MethodInfo* method)
{
    StackObject args[2] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<16>*)ret;
}


// Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::Invoke()
static ValueTypeSizeAlign8<16> __N2M_C16i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<16>*)ret;
}


// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::Invoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext,UnityEngine.Rendering.BatchCullingOutput,System.IntPtr)
static ValueTypeSizeAlign8<16> __N2M_C16i4C168B12i4(int32_t __arg0, ValueTypeSizeAlign8<168> __arg1, ValueTypeSizeAlign4<12> __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<16>*)ret;
}


// System.DateTimeOffset System.Xml.Schema.XmlValueConverter::ToDateTimeOffset(System.String)
static ValueTypeSizeAlign8<16> __N2M_C16i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<16>*)ret;
}


// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::Invoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext,UnityEngine.Rendering.BatchCullingOutput,System.IntPtr)
static ValueTypeSizeAlign8<16> __N2M_C16i4i4C168B12i4(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign8<168> __arg2, ValueTypeSizeAlign4<12> __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, (uint64_t)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<16>*)ret;
}


// System.DateTimeOffset System.Xml.Schema.XmlValueConverter::ToDateTimeOffset(System.DateTime)
static ValueTypeSizeAlign8<16> __N2M_C16i4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<16>*)ret;
}


// System.SByte System.IO.BinaryReader::ReadSByte()
static int8_t __N2M_i1i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// System.SByte System.IConvertible::ToSByte(System.IFormatProvider)
static int8_t __N2M_i1i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// System.Int16 System.IO.BinaryReader::ReadInt16()
static int16_t __N2M_i2i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// System.Int16 System.IConvertible::ToInt16(System.IFormatProvider)
static int16_t __N2M_i2i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// TResult System.Func`1::Invoke()
static int32_t __N2M_i4(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4A4A4(ValueTypeSizeAlign2<4> __arg0, ValueTypeSizeAlign2<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4B12B12(ValueTypeSizeAlign4<12> __arg0, ValueTypeSizeAlign4<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4B20B20(ValueTypeSizeAlign4<20> __arg0, ValueTypeSizeAlign4<20> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`2::Invoke(T)
static int32_t __N2M_i4B8(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static int32_t __N2M_i4B8B12i4i4i4(ValueTypeSizeAlign4<8> __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*)
static int32_t __N2M_i4B8B12u8u8i4(ValueTypeSizeAlign4<8> __arg0, ValueTypeSizeAlign4<12> __arg1, uint64_t __arg2, uint64_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4B8B8(ValueTypeSizeAlign4<8> __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4C16C16(ValueTypeSizeAlign8<16> __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4i1i1(int8_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4i2i2(int16_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.String Interop/ErrorInfo::ToString()
static int32_t __N2M_i4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T)
static int32_t __N2M_i4i4A4(int32_t __arg0, ValueTypeSizeAlign2<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange,System.Text.RegularExpressions.RegexCharClass/SingleRange)
static int32_t __N2M_i4i4A4A4(int32_t __arg0, ValueTypeSizeAlign2<4> __arg1, ValueTypeSizeAlign2<4> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.ValueTuple`3::CompareTo(System.ValueTuple`3<T1,T2,T3>)
static int32_t __N2M_i4i4B12(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i4B12B12(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, ValueTypeSizeAlign4<12> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`5::Invoke(T1,T2,T3,T4)
static int32_t __N2M_i4i4B12i4i4(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Guid::CompareTo(System.Guid)
static int32_t __N2M_i4i4B16(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.ValueTuple`5::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
static int32_t __N2M_i4i4B20(int32_t __arg0, ValueTypeSizeAlign4<20> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i4B20B20(int32_t __arg0, ValueTypeSizeAlign4<20> __arg1, ValueTypeSizeAlign4<20> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IList`1::IndexOf(T)
static int32_t __N2M_i4i4B24(int32_t __arg0, ValueTypeSizeAlign4<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.ValueTuple`8::CompareTo(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static int32_t __N2M_i4i4B28(int32_t __arg0, ValueTypeSizeAlign4<28> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.ValueTuple`8::CompareTo(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static int32_t __N2M_i4i4B32(int32_t __arg0, ValueTypeSizeAlign4<32> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.ValueTuple`1::CompareTo(System.ValueTuple`1<T1>)
static int32_t __N2M_i4i4B4(int32_t __arg0, ValueTypeSizeAlign4<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.ValueTuple`2::CompareTo(System.ValueTuple`2<T1,T2>)
static int32_t __N2M_i4i4B8(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static int32_t __N2M_i4i4B8B12i4i4i4(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<12> __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*)
static int32_t __N2M_i4i4B8B12u8u8i4(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<12> __arg2, uint64_t __arg3, uint64_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.Encoding::GetChars(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Char>)
static int32_t __N2M_i4i4B8B8(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<8> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.Decoder::GetChars(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Char>,System.Boolean)
static int32_t __N2M_i4i4B8B8u1(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<8> __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
static int32_t __N2M_i4i4C16(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_i4i4C16C16(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, ValueTypeSizeAlign8<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.SByte::CompareTo(System.SByte)
static int32_t __N2M_i4i4i1(int32_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i4i1i1(int32_t __arg0, int8_t __arg1, int8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Int16::CompareTo(System.Int16)
static int32_t __N2M_i4i4i2(int32_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i4i2i2(int32_t __arg0, int16_t __arg1, int16_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.String Mono.Xml.SmallXmlParser/IAttrList::GetName(System.Int32)
static int32_t __N2M_i4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static int32_t __N2M_i4i4i4A4i4i4(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign2<4> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`5::Invoke(T1,T2,T3,T4)
static int32_t __N2M_i4i4i4B12i4i4(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<12> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static int32_t __N2M_i4i4i4B20i4i4(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<20> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
static int32_t __N2M_i4i4i4B8i4(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<8> __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static int32_t __N2M_i4i4i4B8i4i4(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<8> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static int32_t __N2M_i4i4i4C16i4i4(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign8<16> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static int32_t __N2M_i4i4i4i1i4i4(int32_t __arg0, int32_t __arg1, int8_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static int32_t __N2M_i4i4i4i2i4i4(int32_t __arg0, int32_t __arg1, int16_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Security.Cryptography.X509Certificates.X509CertificateImpl Mono.ISystemCertificateProvider::Import(System.Byte[],Mono.CertificateImportFlags)
static int32_t __N2M_i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
static int32_t __N2M_i4i4i4i4B8i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPI::LoadSceneAsyncByNameOrIndex(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters,System.Boolean)
static int32_t __N2M_i4i4i4i4B8u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, uint8_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
static int32_t __N2M_i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Security.Cryptography.X509Certificates.X509CertificateImpl Mono.ISystemCertificateProvider::Import(System.Byte[],Microsoft.Win32.SafeHandles.SafePasswordHandle,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags,Mono.CertificateImportFlags)
static int32_t __N2M_i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
static int32_t __N2M_i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`7::Invoke(T1,T2,T3,T4,T5,T6)
static int32_t __N2M_i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`8::Invoke(T1,T2,T3,T4,T5,T6,T7)
static int32_t __N2M_i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = args + 8;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`9::Invoke(T1,T2,T3,T4,T5,T6,T7,T8)
static int32_t __N2M_i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method)
{
    StackObject args[10] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = args + 9;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`10::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9)
static int32_t __N2M_i4i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, const MethodInfo* method)
{
    StackObject args[11] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9 };
    StackObject* ret = args + 10;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`11::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10)
static int32_t __N2M_i4i4i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, const MethodInfo* method)
{
    StackObject args[12] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9, *(uint64_t*)&__arg10 };
    StackObject* ret = args + 11;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`12::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11)
static int32_t __N2M_i4i4i4i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, const MethodInfo* method)
{
    StackObject args[13] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9, *(uint64_t*)&__arg10, *(uint64_t*)&__arg11 };
    StackObject* ret = args + 12;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`13::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12)
static int32_t __N2M_i4i4i4i4i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, const MethodInfo* method)
{
    StackObject args[14] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9, *(uint64_t*)&__arg10, *(uint64_t*)&__arg11, *(uint64_t*)&__arg12 };
    StackObject* ret = args + 13;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`14::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13)
static int32_t __N2M_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, const MethodInfo* method)
{
    StackObject args[15] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9, *(uint64_t*)&__arg10, *(uint64_t*)&__arg11, *(uint64_t*)&__arg12, *(uint64_t*)&__arg13 };
    StackObject* ret = args + 14;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`15::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14)
static int32_t __N2M_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, int32_t __arg14, const MethodInfo* method)
{
    StackObject args[16] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9, *(uint64_t*)&__arg10, *(uint64_t*)&__arg11, *(uint64_t*)&__arg12, *(uint64_t*)&__arg13, *(uint64_t*)&__arg14 };
    StackObject* ret = args + 15;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`16::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15)
static int32_t __N2M_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, int32_t __arg14, int32_t __arg15, const MethodInfo* method)
{
    StackObject args[17] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9, *(uint64_t*)&__arg10, *(uint64_t*)&__arg11, *(uint64_t*)&__arg12, *(uint64_t*)&__arg13, *(uint64_t*)&__arg14, *(uint64_t*)&__arg15 };
    StackObject* ret = args + 16;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`17::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16)
static int32_t __N2M_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, int32_t __arg14, int32_t __arg15, int32_t __arg16, const MethodInfo* method)
{
    StackObject args[18] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9, *(uint64_t*)&__arg10, *(uint64_t*)&__arg11, *(uint64_t*)&__arg12, *(uint64_t*)&__arg13, *(uint64_t*)&__arg14, *(uint64_t*)&__arg15, *(uint64_t*)&__arg16 };
    StackObject* ret = args + 17;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
static int32_t __N2M_i4i4i4i4i4i4i4u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.Decoder::GetChars(System.Byte*,System.Int32,System.Char*,System.Int32,System.Boolean)
static int32_t __N2M_i4i4i4i4i4i4u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
static int32_t __N2M_i4i4i4i4i4u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
static int32_t __N2M_i4i4i4i4i4u1i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Xml.SecureStringHasher/HashCodeOfStringDelegate::Invoke(System.String,System.Int32,System.Int64)
static int32_t __N2M_i4i4i4i4i8(int32_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.Decoder::GetCharCount(System.Byte*,System.Int32,System.Boolean)
static int32_t __N2M_i4i4i4i4u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Net.CommandStream/PipelineInstruction System.Net.CommandStream::PipelineCallback(System.Net.CommandStream/PipelineEntry,System.Net.ResponseDescription,System.Boolean,System.IO.Stream&)
static int32_t __N2M_i4i4i4i4u1i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Xml.SecureStringHasher/HashCodeOfStringDelegate::Invoke(System.String,System.Int32,System.Int64)
static int32_t __N2M_i4i4i4i8(int32_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static int32_t __N2M_i4i4i4i8i4i4(int32_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static int32_t __N2M_i4i4i4r4i4i4(int32_t __arg0, int32_t __arg1, float __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static int32_t __N2M_i4i4i4r8i4i4(int32_t __arg0, int32_t __arg1, double __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Object[] System.RuntimeType::GetCustomAttributes(System.Type,System.Boolean)
static int32_t __N2M_i4i4i4u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Threading.SynchronizationContext::Wait(System.IntPtr[],System.Boolean,System.Int32)
static int32_t __N2M_i4i4i4u1i4(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static int32_t __N2M_i4i4i4u1i4i4(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
static int32_t __N2M_i4i4i4u1u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static int32_t __N2M_i4i4i4u2i4i4(int32_t __arg0, int32_t __arg1, uint16_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static int32_t __N2M_i4i4i4u4i4i4(int32_t __arg0, int32_t __arg1, uint32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static int32_t __N2M_i4i4i4u8i4i4(int32_t __arg0, int32_t __arg1, uint64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.EqualityComparer`1::IndexOf(T[],T,System.Int32,System.Int32)
static int32_t __N2M_i4i4i4W16i4i4(int32_t __arg0, int32_t __arg1, WebGLSpeicalValueTypeAlign8<16> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.DateTime::CompareTo(System.DateTime)
static int32_t __N2M_i4i4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Int64,System.Type)
static int32_t __N2M_i4i4i8i4(int32_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static int32_t __N2M_i4i4i8i4i4i4(int32_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i4i8i8(int32_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Single::CompareTo(System.Single)
static int32_t __N2M_i4i4r4(int32_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i4r4r4(int32_t __arg0, float __arg1, float __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Double::CompareTo(System.Double)
static int32_t __N2M_i4i4r8(int32_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Double,System.Type)
static int32_t __N2M_i4i4r8i4(int32_t __arg0, double __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i4r8r8(int32_t __arg0, double __arg1, double __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
static int32_t __N2M_i4i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Xml.IDtdParserAdapter::ParseNamedCharRef(System.Boolean,System.Text.StringBuilder)
static int32_t __N2M_i4i4u1i4(int32_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i4u1u1(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Char::CompareTo(System.Char)
static int32_t __N2M_i4i4u2(int32_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4i4u2u2(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.UInt32::CompareTo(System.UInt32)
static int32_t __N2M_i4i4u4(int32_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i4u4u4(int32_t __arg0, uint32_t __arg1, uint32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.UInt64::CompareTo(System.UInt64)
static int32_t __N2M_i4i4u8(int32_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i4u8u8(int32_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Decimal::CompareTo(System.Decimal)
static int32_t __N2M_i4i4W16(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Decimal,System.Type)
static int32_t __N2M_i4i4W16i4(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i4W16W16(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, WebGLSpeicalValueTypeAlign8<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.ValueTuple::CompareTo(System.ValueTuple)
static int32_t __N2M_i4i4X1(int32_t __arg0, WebGLSpeicalValueType<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static int32_t __N2M_i4i8i4i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4r4r4(float __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4r8r8(double __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4u1u1(uint8_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4u2u2(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4u4u4(uint32_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4u8u8(uint64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4W16W16(WebGLSpeicalValueTypeAlign8<16> __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int64 System.Security.Cryptography.CryptoStream::get_Length()
static int64_t __N2M_i8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.DateTime System.Xml.Schema.XmlValueConverter::ToDateTime(System.DateTimeOffset)
static int64_t __N2M_i8i4C16(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Int64 System.IConvertible::ToInt64(System.IFormatProvider)
static int64_t __N2M_i8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::GetId(System.Object,System.Boolean&)
static int64_t __N2M_i8i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.DateTime System.Globalization.Calendar::ToDateTime(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static int64_t __N2M_i8i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = args + 8;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.DateTime System.Globalization.Calendar::ToDateTime(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static int64_t __N2M_i8i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method)
{
    StackObject args[10] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = args + 9;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.TimeSpan System.Runtime.Remoting.Lifetime.ILease::Renew(System.TimeSpan)
static int64_t __N2M_i8i4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Int64 System.Security.Cryptography.CryptoStream::Seek(System.Int64,System.IO.SeekOrigin)
static int64_t __N2M_i8i4i8i4(int32_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static int64_t __N2M_i8i4i8i4i4(int32_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Int64 System.Xml.Schema.XmlValueConverter::ToInt64(System.Double)
static int64_t __N2M_i8i4r8(int32_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Int64 System.Xml.Schema.XmlValueConverter::ToInt64(System.Boolean)
static int64_t __N2M_i8i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static int64_t __N2M_i8i8i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Single System.IO.BinaryReader::ReadSingle()
static float __N2M_r4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(float*)ret;
}


// System.Single System.IConvertible::ToSingle(System.IFormatProvider)
static float __N2M_r4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(float*)ret;
}


// System.Single System.Xml.Schema.XmlValueConverter::ToSingle(System.Double)
static float __N2M_r4i4r8(int32_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(float*)ret;
}


// System.Double System.Random::Sample()
static double __N2M_r8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


// System.Double System.IConvertible::ToDouble(System.IFormatProvider)
static double __N2M_r8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


// System.Double System.Xml.Schema.XmlValueConverter::ToDouble(System.Int64)
static double __N2M_r8i4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


// System.Double System.Xml.Schema.XmlValueConverter::ToDouble(System.Boolean)
static double __N2M_r8i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


// TResult System.Func`1::Invoke()
static uint8_t __N2M_u1(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1A4(ValueTypeSizeAlign2<4> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1B12(ValueTypeSizeAlign4<12> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1B20(ValueTypeSizeAlign4<20> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1B8(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1C16(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1i1(int8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1i2(int16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_CanTransformMultipleBlocks()
static uint8_t __N2M_u1i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.List`1::Contains(T)
static uint8_t __N2M_u1i4A4(int32_t __arg0, ValueTypeSizeAlign2<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4A4A4(int32_t __arg0, ValueTypeSizeAlign2<4> __arg1, ValueTypeSizeAlign2<4> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Memory`1::Equals(System.Memory`1<T>)
static uint8_t __N2M_u1i4B12(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4B12B12(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, ValueTypeSizeAlign4<12> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.Dictionary`2::TryGetValue(TKey,TValue&)
static uint8_t __N2M_u1i4B12i4(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Guid::Equals(System.Guid)
static uint8_t __N2M_u1i4B16(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4B16B16(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, ValueTypeSizeAlign4<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection::TrySend(System.Guid,System.Byte[])
static uint8_t __N2M_u1i4B16i4(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.IPlayerEditorConnectionNative::TrySendMessage(System.Guid,System.Byte[],System.Int32)
static uint8_t __N2M_u1i4B16i4i4(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.ValueTuple`5::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
static uint8_t __N2M_u1i4B20(int32_t __arg0, ValueTypeSizeAlign4<20> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4B20B20(int32_t __arg0, ValueTypeSizeAlign4<20> __arg1, ValueTypeSizeAlign4<20> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.Bounds::Equals(UnityEngine.Bounds)
static uint8_t __N2M_u1i4B24(int32_t __arg0, ValueTypeSizeAlign4<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.Rendering.LODParameters::Equals(UnityEngine.Rendering.LODParameters)
static uint8_t __N2M_u1i4B28(int32_t __arg0, ValueTypeSizeAlign4<28> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.ValueTuple`8::Equals(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static uint8_t __N2M_u1i4B32(int32_t __arg0, ValueTypeSizeAlign4<32> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.ValueTuple`1::Equals(System.ValueTuple`1<T1>)
static uint8_t __N2M_u1i4B4(int32_t __arg0, ValueTypeSizeAlign4<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.Matrix4x4::Equals(UnityEngine.Matrix4x4)
static uint8_t __N2M_u1i4B64(int32_t __arg0, ValueTypeSizeAlign4<64> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Range::Equals(System.Range)
static uint8_t __N2M_u1i4B8(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Runtime.InteropServices.Marshal/MarshalerInstanceKeyComparer::Equals(System.ValueTuple`2<System.Type,System.String>,System.ValueTuple`2<System.Type,System.String>)
static uint8_t __N2M_u1i4B8B8(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<8> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.Dictionary`2::TryGetValue(TKey,TValue&)
static uint8_t __N2M_u1i4B8i4(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Byte::TryFormat(System.Span`1<System.Char>,System.Int32&,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
static uint8_t __N2M_u1i4B8i4B8i4(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
static uint8_t __N2M_u1i4C16(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4C16C16(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, ValueTypeSizeAlign8<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
static uint8_t __N2M_u1i4C24(int32_t __arg0, ValueTypeSizeAlign8<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.SByte::Equals(System.SByte)
static uint8_t __N2M_u1i4i1(int32_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4i1i1(int32_t __arg0, int8_t __arg1, int8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Int16::Equals(System.Int16)
static uint8_t __N2M_u1i4i2(int32_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4i2i2(int32_t __arg0, int16_t __arg1, int16_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean Mono.RuntimeClassHandle::Equals(System.Object)
static uint8_t __N2M_u1i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean Mono.Security.Cryptography.DSAManaged::VerifySignature(System.Byte[],System.Byte[])
static uint8_t __N2M_u1i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
static uint8_t __N2M_u1i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Net.ICertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
static uint8_t __N2M_u1i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean Mono.Net.Security.ChainValidationHelper::SelectClientCertificate(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.Security.Cryptography.X509Certificates.X509Certificate&)
static uint8_t __N2M_u1i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Diagnostics.TraceFilter::ShouldTrace(System.Diagnostics.TraceEventCache,System.String,System.Diagnostics.TraceEventType,System.Int32,System.String,System.Object[],System.Object,System.Object[])
static uint8_t __N2M_u1i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method)
{
    StackObject args[10] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = args + 9;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.RuntimeType::IsDefined(System.Type,System.Boolean)
static uint8_t __N2M_u1i4i4u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.DateTime::Equals(System.DateTime)
static uint8_t __N2M_u1i4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4i8i8(int32_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Single::Equals(System.Single)
static uint8_t __N2M_u1i4r4(int32_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4r4r4(int32_t __arg0, float __arg1, float __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Double::Equals(System.Double)
static uint8_t __N2M_u1i4r8(int32_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4r8r8(int32_t __arg0, double __arg1, double __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Boolean::Equals(System.Boolean)
static uint8_t __N2M_u1i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.ByteEqualityComparer::Equals(System.Byte,System.Byte)
static uint8_t __N2M_u1i4u1u1(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Char::Equals(System.Char)
static uint8_t __N2M_u1i4u2(int32_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Text.InternalEncoderBestFitFallbackBuffer::Fallback(System.Char,System.Int32)
static uint8_t __N2M_u1i4u2i4(int32_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4u2u2(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Text.InternalEncoderBestFitFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
static uint8_t __N2M_u1i4u2u2i4(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.UInt32::Equals(System.UInt32)
static uint8_t __N2M_u1i4u4(int32_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4u4u4(int32_t __arg0, uint32_t __arg1, uint32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.UInt64::Equals(System.UInt64)
static uint8_t __N2M_u1i4u8(int32_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4u8u8(int32_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Decimal::Equals(System.Decimal)
static uint8_t __N2M_u1i4W16(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4W16W16(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, WebGLSpeicalValueTypeAlign8<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.ValueTuple::Equals(System.ValueTuple)
static uint8_t __N2M_u1i4X1(int32_t __arg0, WebGLSpeicalValueType<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1r4(float __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1r8(double __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1u1(uint8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// TResult System.Func`2::Invoke(T)
static uint8_t __N2M_u1u2(uint16_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1u4(uint32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1u8(uint64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1W16(WebGLSpeicalValueTypeAlign8<16> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Char System.CharEnumerator::get_Current()
static uint16_t __N2M_u2i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// System.Char System.IConvertible::ToChar(System.IFormatProvider)
static uint16_t __N2M_u2i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// System.Char System.Globalization.TextInfo::ToLower(System.Char)
static uint16_t __N2M_u2i4u2(int32_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// System.UInt32 System.IO.BinaryReader::ReadUInt32()
static uint32_t __N2M_u4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider)
static uint32_t __N2M_u4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i4i4i8i4(int32_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i4i4i8u4i4(int32_t __arg0, int32_t __arg1, int64_t __arg2, uint32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i4i8i4(int32_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i4i8i4i4i4i4i4(int32_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i4i8i8i4i4i4i4i4(int32_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = args + 8;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i4i8u4i4(int32_t __arg0, int64_t __arg1, uint32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i8i4i4i4i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i8i8i4i4i4i4i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// System.UInt64 System.IO.BinaryReader::ReadUInt64()
static uint64_t __N2M_u8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider)
static uint64_t __N2M_u8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// System.Void System.Action::Invoke()
static void __N2M_v(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`1::Invoke(T)
static void __N2M_vB28(ValueTypeSizeAlign4<28> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`1::Invoke(T)
static void __N2M_vB72(ValueTypeSizeAlign4<72> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Serialization.SerializationEventHandler::Invoke(System.Runtime.Serialization.StreamingContext)
static void __N2M_vB8(ValueTypeSizeAlign4<8> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vB8B12(ValueTypeSizeAlign4<8> __arg0, ValueTypeSizeAlign4<12> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vB8B20(ValueTypeSizeAlign4<8> __arg0, ValueTypeSizeAlign4<20> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vB8B28(ValueTypeSizeAlign4<8> __arg0, ValueTypeSizeAlign4<28> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vB8i4(ValueTypeSizeAlign4<8> __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.SafeGPtrArrayHandle::Dispose()
static void __N2M_vi4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::Add(T)
static void __N2M_vi4A4(int32_t __arg0, ValueTypeSizeAlign2<4> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
static void __N2M_vi4B12(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Reflection.FieldInfo::SetValueDirect(System.TypedReference,System.Object)
static void __N2M_vi4B12i4(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.IPlayerEditorConnectionNative::RegisterInternal(System.Guid)
static void __N2M_vi4B16(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection::Register(System.Guid,UnityEngine.Events.UnityAction`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>)
static void __N2M_vi4B16i4(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.IPlayerEditorConnectionNative::SendMessage(System.Guid,System.Byte[],System.Int32)
static void __N2M_vi4B16i4i4(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::Add(T)
static void __N2M_vi4B20(int32_t __arg0, ValueTypeSizeAlign4<20> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_vi4B24(int32_t __arg0, ValueTypeSizeAlign4<24> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`1::Invoke(T)
static void __N2M_vi4B28(int32_t __arg0, ValueTypeSizeAlign4<28> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
static void __N2M_vi4B32(int32_t __arg0, ValueTypeSizeAlign4<32> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`1::Invoke(T)
static void __N2M_vi4B72(int32_t __arg0, ValueTypeSizeAlign4<72> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Serialization.SerializationEventHandler::Invoke(System.Runtime.Serialization.StreamingContext)
static void __N2M_vi4B8(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vi4B8B12(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<12> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vi4B8B20(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<20> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vi4B8B28(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<28> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.Dictionary`2::set_Item(TKey,TValue)
static void __N2M_vi4B8B8(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<8> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
static void __N2M_vi4B8C56(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign8<56> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
static void __N2M_vi4B8C56i4(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign8<56> __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vi4B8i4(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.INotificationReceiver::OnNotify(UnityEngine.Playables.Playable,UnityEngine.Playables.INotification,System.Object)
static void __N2M_vi4B8i4i4(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::Add(T)
static void __N2M_vi4C16(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.SByte)
static void __N2M_vi4i1(int32_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.Tasks.Sources.IValueTaskSource::GetResult(System.Int16)
static void __N2M_vi4i2(int32_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
static void __N2M_vi4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi4i4A4(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign2<4> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
static void __N2M_vi4i4B12(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<12> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi4i4B20(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<20> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_vi4i4B24(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<24> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.AggregateException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __N2M_vi4i4B8(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<8> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Xml.IDtdParserAdapter::OnSystemId(System.String,System.Xml.LineInfo,System.Xml.LineInfo)
static void __N2M_vi4i4B8B8(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<8> __arg2, ValueTypeSizeAlign4<8> __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi4i4C16(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign8<16> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi4i4i1(int32_t __arg0, int32_t __arg1, int8_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi4i4i2(int32_t __arg0, int32_t __arg1, int16_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
static void __N2M_vi4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __N2M_vi4i4i4B8(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.Tasks.Sources.IValueTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags)
static void __N2M_vi4i4i4i2i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int16_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Security.Cryptography.MD2Managed::HashCore(System.Byte[],System.Int32,System.Int32)
static void __N2M_vi4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`4::Invoke(T1,T2,T3,T4)
static void __N2M_vi4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Internal.Runtime.Augments.TaskTraceCallbacks::TaskScheduled(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static void __N2M_vi4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`6::Invoke(T1,T2,T3,T4,T5,T6)
static void __N2M_vi4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`7::Invoke(T1,T2,T3,T4,T5,T6,T7)
static void __N2M_vi4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`8::Invoke(T1,T2,T3,T4,T5,T6,T7,T8)
static void __N2M_vi4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __N2M_vi4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, const MethodInfo* method)
{
    StackObject args[10] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`10::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10)
static void __N2M_vi4i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, const MethodInfo* method)
{
    StackObject args[11] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9, *(uint64_t*)&__arg10 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`11::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11)
static void __N2M_vi4i4i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, const MethodInfo* method)
{
    StackObject args[12] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9, *(uint64_t*)&__arg10, *(uint64_t*)&__arg11 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`12::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12)
static void __N2M_vi4i4i4i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, const MethodInfo* method)
{
    StackObject args[13] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9, *(uint64_t*)&__arg10, *(uint64_t*)&__arg11, *(uint64_t*)&__arg12 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`13::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13)
static void __N2M_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, const MethodInfo* method)
{
    StackObject args[14] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9, *(uint64_t*)&__arg10, *(uint64_t*)&__arg11, *(uint64_t*)&__arg12, *(uint64_t*)&__arg13 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`14::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14)
static void __N2M_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, int32_t __arg14, const MethodInfo* method)
{
    StackObject args[15] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9, *(uint64_t*)&__arg10, *(uint64_t*)&__arg11, *(uint64_t*)&__arg12, *(uint64_t*)&__arg13, *(uint64_t*)&__arg14 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`15::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15)
static void __N2M_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, int32_t __arg14, int32_t __arg15, const MethodInfo* method)
{
    StackObject args[16] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9, *(uint64_t*)&__arg10, *(uint64_t*)&__arg11, *(uint64_t*)&__arg12, *(uint64_t*)&__arg13, *(uint64_t*)&__arg14, *(uint64_t*)&__arg15 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`16::Invoke(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16)
static void __N2M_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, int32_t __arg12, int32_t __arg13, int32_t __arg14, int32_t __arg15, int32_t __arg16, const MethodInfo* method)
{
    StackObject args[17] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9, *(uint64_t*)&__arg10, *(uint64_t*)&__arg11, *(uint64_t*)&__arg12, *(uint64_t*)&__arg13, *(uint64_t*)&__arg14, *(uint64_t*)&__arg15, *(uint64_t*)&__arg16 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Text.Decoder::Convert(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Int32,System.Boolean,System.Int32&,System.Int32&,System.Boolean&)
static void __N2M_vi4i4i4i4i4i4i4u1i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, uint8_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, const MethodInfo* method)
{
    StackObject args[11] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9, *(uint64_t*)&__arg10 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Text.Decoder::Convert(System.Byte*,System.Int32,System.Char*,System.Int32,System.Boolean,System.Int32&,System.Int32&,System.Boolean&)
static void __N2M_vi4i4i4i4i4u1i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObject(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String,System.Boolean,System.Boolean,System.Boolean)
static void __N2M_vi4i4i4i4i4u1u1u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, uint8_t __arg6, uint8_t __arg7, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Net.Security.SslStream::AuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
static void __N2M_vi4i4i4i4u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.IAsyncLocal::OnValueChanged(System.Object,System.Object,System.Boolean)
static void __N2M_vi4i4i4u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi4i4i8(int32_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __N2M_vi4i4i8i4(int32_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi4i4r4(int32_t __arg0, int32_t __arg1, float __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi4i4r8(int32_t __arg0, int32_t __arg1, double __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.WaitOrTimerCallback::Invoke(System.Object,System.Boolean)
static void __N2M_vi4i4u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`3::Invoke(T1,T2,T3)
static void __N2M_vi4i4u1B24(int32_t __arg0, int32_t __arg1, uint8_t __arg2, ValueTypeSizeAlign4<24> __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, (uint64_t)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Remoting.Contexts.IDynamicMessageSink::ProcessMessageFinish(System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
static void __N2M_vi4i4u1u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi4i4u2(int32_t __arg0, int32_t __arg1, uint16_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code)
static void __N2M_vi4i4u4(int32_t __arg0, int32_t __arg1, uint32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi4i4u8(int32_t __arg0, int32_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi4i4W16(int32_t __arg0, int32_t __arg1, WebGLSpeicalValueTypeAlign8<16> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Security.Cryptography.CryptoStream::set_Position(System.Int64)
static void __N2M_vi4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __N2M_vi4i8i4(int32_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
static void __N2M_vi4i8i4i8(int32_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.Single)
static void __N2M_vi4r4(int32_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.Double)
static void __N2M_vi4r8(int32_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
static void __N2M_vi4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`3::Invoke(T1,T2,T3)
static void __N2M_vi4u1B24(int32_t __arg0, uint8_t __arg1, ValueTypeSizeAlign4<24> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.StreamWriter::Write(System.Char)
static void __N2M_vi4u2(int32_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Xml.HtmlEncodedRawTextWriter::WriteSurrogateCharEntity(System.Char,System.Char)
static void __N2M_vi4u2u2(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.UInt32)
static void __N2M_vi4u4(int32_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.UInt64)
static void __N2M_vi4u8(int32_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::Add(T)
static void __N2M_vi4W16(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Events.UnityAction`1::Invoke(T0)
static void __N2M_vr4(float __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`1::Invoke(T)
static void __N2M_vu1(uint8_t __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Decimal System.IO.BinaryReader::ReadDecimal()
static WebGLSpeicalValueTypeAlign8<16> __N2M_W16i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(WebGLSpeicalValueTypeAlign8<16>*)ret;
}


// System.Decimal System.IConvertible::ToDecimal(System.IFormatProvider)
static WebGLSpeicalValueTypeAlign8<16> __N2M_W16i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(WebGLSpeicalValueTypeAlign8<16>*)ret;
}


// TResult System.Func`1::Invoke()
static WebGLSpeicalValueType<1> __N2M_X1(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(WebGLSpeicalValueType<1>*)ret;
}


// TResult System.Func`1::Invoke()
static WebGLSpeicalValueType<1> __N2M_X1i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(WebGLSpeicalValueType<1>*)ret;
}


// TResult System.Func`3::Invoke(T1,T2)
static WebGLSpeicalValueType<1> __N2M_X1i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(WebGLSpeicalValueType<1>*)ret;
}


// TResult System.Func`3::Invoke(T1,T2)
static WebGLSpeicalValueType<1> __N2M_X1i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(WebGLSpeicalValueType<1>*)ret;
}


Native2ManagedMethodInfo hybridclr::interpreter::g_native2managedStub[] = 
{

	{"A4i4", (Il2CppMethodPointer)__N2M_A4i4},
	{"A4i4i4", (Il2CppMethodPointer)__N2M_A4i4i4},
	{"B12", (Il2CppMethodPointer)__N2M_B12},
	{"B12i4", (Il2CppMethodPointer)__N2M_B12i4},
	{"B12i4B12i4", (Il2CppMethodPointer)__N2M_B12i4B12i4},
	{"B12i4i4", (Il2CppMethodPointer)__N2M_B12i4i4},
	{"B12i4u1", (Il2CppMethodPointer)__N2M_B12i4u1},
	{"B16", (Il2CppMethodPointer)__N2M_B16},
	{"B16i4", (Il2CppMethodPointer)__N2M_B16i4},
	{"B16i4i4", (Il2CppMethodPointer)__N2M_B16i4i4},
	{"B20i4", (Il2CppMethodPointer)__N2M_B20i4},
	{"B20i4i4", (Il2CppMethodPointer)__N2M_B20i4i4},
	{"B24i4i4", (Il2CppMethodPointer)__N2M_B24i4i4},
	{"B32i4u1", (Il2CppMethodPointer)__N2M_B32i4u1},
	{"B64i4", (Il2CppMethodPointer)__N2M_B64i4},
	{"B8", (Il2CppMethodPointer)__N2M_B8},
	{"B8B8i4", (Il2CppMethodPointer)__N2M_B8B8i4},
	{"B8i4", (Il2CppMethodPointer)__N2M_B8i4},
	{"B8i4B12i4", (Il2CppMethodPointer)__N2M_B8i4B12i4},
	{"B8i4B8", (Il2CppMethodPointer)__N2M_B8i4B8},
	{"B8i4B8i4", (Il2CppMethodPointer)__N2M_B8i4B8i4},
	{"B8i4i4", (Il2CppMethodPointer)__N2M_B8i4i4},
	{"B8i4i4i4i4", (Il2CppMethodPointer)__N2M_B8i4i4i4i4},
	{"B96i4", (Il2CppMethodPointer)__N2M_B96i4},
	{"C16", (Il2CppMethodPointer)__N2M_C16},
	{"C16i4", (Il2CppMethodPointer)__N2M_C16i4},
	{"C16i4C168B12i4", (Il2CppMethodPointer)__N2M_C16i4C168B12i4},
	{"C16i4i4", (Il2CppMethodPointer)__N2M_C16i4i4},
	{"C16i4i4C168B12i4", (Il2CppMethodPointer)__N2M_C16i4i4C168B12i4},
	{"C16i4i8", (Il2CppMethodPointer)__N2M_C16i4i8},
	{"i1i4", (Il2CppMethodPointer)__N2M_i1i4},
	{"i1i4i4", (Il2CppMethodPointer)__N2M_i1i4i4},
	{"i2i4", (Il2CppMethodPointer)__N2M_i2i4},
	{"i2i4i4", (Il2CppMethodPointer)__N2M_i2i4i4},
	{"i4", (Il2CppMethodPointer)__N2M_i4},
	{"i4A4A4", (Il2CppMethodPointer)__N2M_i4A4A4},
	{"i4B12B12", (Il2CppMethodPointer)__N2M_i4B12B12},
	{"i4B20B20", (Il2CppMethodPointer)__N2M_i4B20B20},
	{"i4B8", (Il2CppMethodPointer)__N2M_i4B8},
	{"i4B8B12i4i4i4", (Il2CppMethodPointer)__N2M_i4B8B12i4i4i4},
	{"i4B8B12u8u8i4", (Il2CppMethodPointer)__N2M_i4B8B12u8u8i4},
	{"i4B8B8", (Il2CppMethodPointer)__N2M_i4B8B8},
	{"i4C16C16", (Il2CppMethodPointer)__N2M_i4C16C16},
	{"i4i1i1", (Il2CppMethodPointer)__N2M_i4i1i1},
	{"i4i2i2", (Il2CppMethodPointer)__N2M_i4i2i2},
	{"i4i4", (Il2CppMethodPointer)__N2M_i4i4},
	{"i4i4A4", (Il2CppMethodPointer)__N2M_i4i4A4},
	{"i4i4A4A4", (Il2CppMethodPointer)__N2M_i4i4A4A4},
	{"i4i4B12", (Il2CppMethodPointer)__N2M_i4i4B12},
	{"i4i4B12B12", (Il2CppMethodPointer)__N2M_i4i4B12B12},
	{"i4i4B12i4i4", (Il2CppMethodPointer)__N2M_i4i4B12i4i4},
	{"i4i4B16", (Il2CppMethodPointer)__N2M_i4i4B16},
	{"i4i4B20", (Il2CppMethodPointer)__N2M_i4i4B20},
	{"i4i4B20B20", (Il2CppMethodPointer)__N2M_i4i4B20B20},
	{"i4i4B24", (Il2CppMethodPointer)__N2M_i4i4B24},
	{"i4i4B28", (Il2CppMethodPointer)__N2M_i4i4B28},
	{"i4i4B32", (Il2CppMethodPointer)__N2M_i4i4B32},
	{"i4i4B4", (Il2CppMethodPointer)__N2M_i4i4B4},
	{"i4i4B8", (Il2CppMethodPointer)__N2M_i4i4B8},
	{"i4i4B8B12i4i4i4", (Il2CppMethodPointer)__N2M_i4i4B8B12i4i4i4},
	{"i4i4B8B12u8u8i4", (Il2CppMethodPointer)__N2M_i4i4B8B12u8u8i4},
	{"i4i4B8B8", (Il2CppMethodPointer)__N2M_i4i4B8B8},
	{"i4i4B8B8u1", (Il2CppMethodPointer)__N2M_i4i4B8B8u1},
	{"i4i4C16", (Il2CppMethodPointer)__N2M_i4i4C16},
	{"i4i4C16C16", (Il2CppMethodPointer)__N2M_i4i4C16C16},
	{"i4i4i1", (Il2CppMethodPointer)__N2M_i4i4i1},
	{"i4i4i1i1", (Il2CppMethodPointer)__N2M_i4i4i1i1},
	{"i4i4i2", (Il2CppMethodPointer)__N2M_i4i4i2},
	{"i4i4i2i2", (Il2CppMethodPointer)__N2M_i4i4i2i2},
	{"i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4},
	{"i4i4i4A4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4A4i4i4},
	{"i4i4i4B12i4i4", (Il2CppMethodPointer)__N2M_i4i4i4B12i4i4},
	{"i4i4i4B20i4i4", (Il2CppMethodPointer)__N2M_i4i4i4B20i4i4},
	{"i4i4i4B8i4", (Il2CppMethodPointer)__N2M_i4i4i4B8i4},
	{"i4i4i4B8i4i4", (Il2CppMethodPointer)__N2M_i4i4i4B8i4i4},
	{"i4i4i4C16i4i4", (Il2CppMethodPointer)__N2M_i4i4i4C16i4i4},
	{"i4i4i4i1i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i1i4i4},
	{"i4i4i4i2i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i2i4i4},
	{"i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4},
	{"i4i4i4i4B8i4", (Il2CppMethodPointer)__N2M_i4i4i4i4B8i4},
	{"i4i4i4i4B8u1", (Il2CppMethodPointer)__N2M_i4i4i4i4B8u1},
	{"i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4},
	{"i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4u1", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4u1},
	{"i4i4i4i4i4i4u1", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4u1},
	{"i4i4i4i4i4u1", (Il2CppMethodPointer)__N2M_i4i4i4i4i4u1},
	{"i4i4i4i4i4u1i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4u1i4i4},
	{"i4i4i4i4i8", (Il2CppMethodPointer)__N2M_i4i4i4i4i8},
	{"i4i4i4i4u1", (Il2CppMethodPointer)__N2M_i4i4i4i4u1},
	{"i4i4i4i4u1i4", (Il2CppMethodPointer)__N2M_i4i4i4i4u1i4},
	{"i4i4i4i8", (Il2CppMethodPointer)__N2M_i4i4i4i8},
	{"i4i4i4i8i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i8i4i4},
	{"i4i4i4r4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4r4i4i4},
	{"i4i4i4r8i4i4", (Il2CppMethodPointer)__N2M_i4i4i4r8i4i4},
	{"i4i4i4u1", (Il2CppMethodPointer)__N2M_i4i4i4u1},
	{"i4i4i4u1i4", (Il2CppMethodPointer)__N2M_i4i4i4u1i4},
	{"i4i4i4u1i4i4", (Il2CppMethodPointer)__N2M_i4i4i4u1i4i4},
	{"i4i4i4u1u1", (Il2CppMethodPointer)__N2M_i4i4i4u1u1},
	{"i4i4i4u2i4i4", (Il2CppMethodPointer)__N2M_i4i4i4u2i4i4},
	{"i4i4i4u4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4u4i4i4},
	{"i4i4i4u8i4i4", (Il2CppMethodPointer)__N2M_i4i4i4u8i4i4},
	{"i4i4i4W16i4i4", (Il2CppMethodPointer)__N2M_i4i4i4W16i4i4},
	{"i4i4i8", (Il2CppMethodPointer)__N2M_i4i4i8},
	{"i4i4i8i4", (Il2CppMethodPointer)__N2M_i4i4i8i4},
	{"i4i4i8i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i8i4i4i4},
	{"i4i4i8i8", (Il2CppMethodPointer)__N2M_i4i4i8i8},
	{"i4i4r4", (Il2CppMethodPointer)__N2M_i4i4r4},
	{"i4i4r4r4", (Il2CppMethodPointer)__N2M_i4i4r4r4},
	{"i4i4r8", (Il2CppMethodPointer)__N2M_i4i4r8},
	{"i4i4r8i4", (Il2CppMethodPointer)__N2M_i4i4r8i4},
	{"i4i4r8r8", (Il2CppMethodPointer)__N2M_i4i4r8r8},
	{"i4i4u1", (Il2CppMethodPointer)__N2M_i4i4u1},
	{"i4i4u1i4", (Il2CppMethodPointer)__N2M_i4i4u1i4},
	{"i4i4u1u1", (Il2CppMethodPointer)__N2M_i4i4u1u1},
	{"i4i4u2", (Il2CppMethodPointer)__N2M_i4i4u2},
	{"i4i4u2u2", (Il2CppMethodPointer)__N2M_i4i4u2u2},
	{"i4i4u4", (Il2CppMethodPointer)__N2M_i4i4u4},
	{"i4i4u4u4", (Il2CppMethodPointer)__N2M_i4i4u4u4},
	{"i4i4u8", (Il2CppMethodPointer)__N2M_i4i4u8},
	{"i4i4u8u8", (Il2CppMethodPointer)__N2M_i4i4u8u8},
	{"i4i4W16", (Il2CppMethodPointer)__N2M_i4i4W16},
	{"i4i4W16i4", (Il2CppMethodPointer)__N2M_i4i4W16i4},
	{"i4i4W16W16", (Il2CppMethodPointer)__N2M_i4i4W16W16},
	{"i4i4X1", (Il2CppMethodPointer)__N2M_i4i4X1},
	{"i4i8i4i4i4", (Il2CppMethodPointer)__N2M_i4i8i4i4i4},
	{"i4i8i8", (Il2CppMethodPointer)__N2M_i4i8i8},
	{"i4r4r4", (Il2CppMethodPointer)__N2M_i4r4r4},
	{"i4r8r8", (Il2CppMethodPointer)__N2M_i4r8r8},
	{"i4u1u1", (Il2CppMethodPointer)__N2M_i4u1u1},
	{"i4u2u2", (Il2CppMethodPointer)__N2M_i4u2u2},
	{"i4u4u4", (Il2CppMethodPointer)__N2M_i4u4u4},
	{"i4u8u8", (Il2CppMethodPointer)__N2M_i4u8u8},
	{"i4W16W16", (Il2CppMethodPointer)__N2M_i4W16W16},
	{"i8i4", (Il2CppMethodPointer)__N2M_i8i4},
	{"i8i4C16", (Il2CppMethodPointer)__N2M_i8i4C16},
	{"i8i4i4", (Il2CppMethodPointer)__N2M_i8i4i4},
	{"i8i4i4i4", (Il2CppMethodPointer)__N2M_i8i4i4i4},
	{"i8i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i8i4i4i4i4i4i4i4i4},
	{"i8i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i8i4i4i4i4i4i4i4i4i4},
	{"i8i4i8", (Il2CppMethodPointer)__N2M_i8i4i8},
	{"i8i4i8i4", (Il2CppMethodPointer)__N2M_i8i4i8i4},
	{"i8i4i8i4i4", (Il2CppMethodPointer)__N2M_i8i4i8i4i4},
	{"i8i4r8", (Il2CppMethodPointer)__N2M_i8i4r8},
	{"i8i4u1", (Il2CppMethodPointer)__N2M_i8i4u1},
	{"i8i8i4i4", (Il2CppMethodPointer)__N2M_i8i8i4i4},
	{"r4i4", (Il2CppMethodPointer)__N2M_r4i4},
	{"r4i4i4", (Il2CppMethodPointer)__N2M_r4i4i4},
	{"r4i4r8", (Il2CppMethodPointer)__N2M_r4i4r8},
	{"r8i4", (Il2CppMethodPointer)__N2M_r8i4},
	{"r8i4i4", (Il2CppMethodPointer)__N2M_r8i4i4},
	{"r8i4i8", (Il2CppMethodPointer)__N2M_r8i4i8},
	{"r8i4u1", (Il2CppMethodPointer)__N2M_r8i4u1},
	{"u1", (Il2CppMethodPointer)__N2M_u1},
	{"u1A4", (Il2CppMethodPointer)__N2M_u1A4},
	{"u1B12", (Il2CppMethodPointer)__N2M_u1B12},
	{"u1B20", (Il2CppMethodPointer)__N2M_u1B20},
	{"u1B8", (Il2CppMethodPointer)__N2M_u1B8},
	{"u1C16", (Il2CppMethodPointer)__N2M_u1C16},
	{"u1i1", (Il2CppMethodPointer)__N2M_u1i1},
	{"u1i2", (Il2CppMethodPointer)__N2M_u1i2},
	{"u1i4", (Il2CppMethodPointer)__N2M_u1i4},
	{"u1i4A4", (Il2CppMethodPointer)__N2M_u1i4A4},
	{"u1i4A4A4", (Il2CppMethodPointer)__N2M_u1i4A4A4},
	{"u1i4B12", (Il2CppMethodPointer)__N2M_u1i4B12},
	{"u1i4B12B12", (Il2CppMethodPointer)__N2M_u1i4B12B12},
	{"u1i4B12i4", (Il2CppMethodPointer)__N2M_u1i4B12i4},
	{"u1i4B16", (Il2CppMethodPointer)__N2M_u1i4B16},
	{"u1i4B16B16", (Il2CppMethodPointer)__N2M_u1i4B16B16},
	{"u1i4B16i4", (Il2CppMethodPointer)__N2M_u1i4B16i4},
	{"u1i4B16i4i4", (Il2CppMethodPointer)__N2M_u1i4B16i4i4},
	{"u1i4B20", (Il2CppMethodPointer)__N2M_u1i4B20},
	{"u1i4B20B20", (Il2CppMethodPointer)__N2M_u1i4B20B20},
	{"u1i4B24", (Il2CppMethodPointer)__N2M_u1i4B24},
	{"u1i4B28", (Il2CppMethodPointer)__N2M_u1i4B28},
	{"u1i4B32", (Il2CppMethodPointer)__N2M_u1i4B32},
	{"u1i4B4", (Il2CppMethodPointer)__N2M_u1i4B4},
	{"u1i4B64", (Il2CppMethodPointer)__N2M_u1i4B64},
	{"u1i4B8", (Il2CppMethodPointer)__N2M_u1i4B8},
	{"u1i4B8B8", (Il2CppMethodPointer)__N2M_u1i4B8B8},
	{"u1i4B8i4", (Il2CppMethodPointer)__N2M_u1i4B8i4},
	{"u1i4B8i4B8i4", (Il2CppMethodPointer)__N2M_u1i4B8i4B8i4},
	{"u1i4C16", (Il2CppMethodPointer)__N2M_u1i4C16},
	{"u1i4C16C16", (Il2CppMethodPointer)__N2M_u1i4C16C16},
	{"u1i4C24", (Il2CppMethodPointer)__N2M_u1i4C24},
	{"u1i4i1", (Il2CppMethodPointer)__N2M_u1i4i1},
	{"u1i4i1i1", (Il2CppMethodPointer)__N2M_u1i4i1i1},
	{"u1i4i2", (Il2CppMethodPointer)__N2M_u1i4i2},
	{"u1i4i2i2", (Il2CppMethodPointer)__N2M_u1i4i2i2},
	{"u1i4i4", (Il2CppMethodPointer)__N2M_u1i4i4},
	{"u1i4i4i4", (Il2CppMethodPointer)__N2M_u1i4i4i4},
	{"u1i4i4i4i4", (Il2CppMethodPointer)__N2M_u1i4i4i4i4},
	{"u1i4i4i4i4i4", (Il2CppMethodPointer)__N2M_u1i4i4i4i4i4},
	{"u1i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_u1i4i4i4i4i4i4},
	{"u1i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_u1i4i4i4i4i4i4i4i4i4},
	{"u1i4i4u1", (Il2CppMethodPointer)__N2M_u1i4i4u1},
	{"u1i4i8", (Il2CppMethodPointer)__N2M_u1i4i8},
	{"u1i4i8i8", (Il2CppMethodPointer)__N2M_u1i4i8i8},
	{"u1i4r4", (Il2CppMethodPointer)__N2M_u1i4r4},
	{"u1i4r4r4", (Il2CppMethodPointer)__N2M_u1i4r4r4},
	{"u1i4r8", (Il2CppMethodPointer)__N2M_u1i4r8},
	{"u1i4r8r8", (Il2CppMethodPointer)__N2M_u1i4r8r8},
	{"u1i4u1", (Il2CppMethodPointer)__N2M_u1i4u1},
	{"u1i4u1u1", (Il2CppMethodPointer)__N2M_u1i4u1u1},
	{"u1i4u2", (Il2CppMethodPointer)__N2M_u1i4u2},
	{"u1i4u2i4", (Il2CppMethodPointer)__N2M_u1i4u2i4},
	{"u1i4u2u2", (Il2CppMethodPointer)__N2M_u1i4u2u2},
	{"u1i4u2u2i4", (Il2CppMethodPointer)__N2M_u1i4u2u2i4},
	{"u1i4u4", (Il2CppMethodPointer)__N2M_u1i4u4},
	{"u1i4u4u4", (Il2CppMethodPointer)__N2M_u1i4u4u4},
	{"u1i4u8", (Il2CppMethodPointer)__N2M_u1i4u8},
	{"u1i4u8u8", (Il2CppMethodPointer)__N2M_u1i4u8u8},
	{"u1i4W16", (Il2CppMethodPointer)__N2M_u1i4W16},
	{"u1i4W16W16", (Il2CppMethodPointer)__N2M_u1i4W16W16},
	{"u1i4X1", (Il2CppMethodPointer)__N2M_u1i4X1},
	{"u1i8", (Il2CppMethodPointer)__N2M_u1i8},
	{"u1r4", (Il2CppMethodPointer)__N2M_u1r4},
	{"u1r8", (Il2CppMethodPointer)__N2M_u1r8},
	{"u1u1", (Il2CppMethodPointer)__N2M_u1u1},
	{"u1u2", (Il2CppMethodPointer)__N2M_u1u2},
	{"u1u4", (Il2CppMethodPointer)__N2M_u1u4},
	{"u1u8", (Il2CppMethodPointer)__N2M_u1u8},
	{"u1W16", (Il2CppMethodPointer)__N2M_u1W16},
	{"u2i4", (Il2CppMethodPointer)__N2M_u2i4},
	{"u2i4i4", (Il2CppMethodPointer)__N2M_u2i4i4},
	{"u2i4u2", (Il2CppMethodPointer)__N2M_u2i4u2},
	{"u4i4", (Il2CppMethodPointer)__N2M_u4i4},
	{"u4i4i4", (Il2CppMethodPointer)__N2M_u4i4i4},
	{"u4i4i4i4", (Il2CppMethodPointer)__N2M_u4i4i4i4},
	{"u4i4i4i8i4", (Il2CppMethodPointer)__N2M_u4i4i4i8i4},
	{"u4i4i4i8u4i4", (Il2CppMethodPointer)__N2M_u4i4i4i8u4i4},
	{"u4i4i8i4", (Il2CppMethodPointer)__N2M_u4i4i8i4},
	{"u4i4i8i4i4i4i4i4", (Il2CppMethodPointer)__N2M_u4i4i8i4i4i4i4i4},
	{"u4i4i8i8i4i4i4i4i4", (Il2CppMethodPointer)__N2M_u4i4i8i8i4i4i4i4i4},
	{"u4i4i8u4i4", (Il2CppMethodPointer)__N2M_u4i4i8u4i4},
	{"u4i8i4i4i4i4i4", (Il2CppMethodPointer)__N2M_u4i8i4i4i4i4i4},
	{"u4i8i8i4i4i4i4i4", (Il2CppMethodPointer)__N2M_u4i8i8i4i4i4i4i4},
	{"u8i4", (Il2CppMethodPointer)__N2M_u8i4},
	{"u8i4i4", (Il2CppMethodPointer)__N2M_u8i4i4},
	{"v", (Il2CppMethodPointer)__N2M_v},
	{"vB28", (Il2CppMethodPointer)__N2M_vB28},
	{"vB72", (Il2CppMethodPointer)__N2M_vB72},
	{"vB8", (Il2CppMethodPointer)__N2M_vB8},
	{"vB8B12", (Il2CppMethodPointer)__N2M_vB8B12},
	{"vB8B20", (Il2CppMethodPointer)__N2M_vB8B20},
	{"vB8B28", (Il2CppMethodPointer)__N2M_vB8B28},
	{"vB8i4", (Il2CppMethodPointer)__N2M_vB8i4},
	{"vi4", (Il2CppMethodPointer)__N2M_vi4},
	{"vi4A4", (Il2CppMethodPointer)__N2M_vi4A4},
	{"vi4B12", (Il2CppMethodPointer)__N2M_vi4B12},
	{"vi4B12i4", (Il2CppMethodPointer)__N2M_vi4B12i4},
	{"vi4B16", (Il2CppMethodPointer)__N2M_vi4B16},
	{"vi4B16i4", (Il2CppMethodPointer)__N2M_vi4B16i4},
	{"vi4B16i4i4", (Il2CppMethodPointer)__N2M_vi4B16i4i4},
	{"vi4B20", (Il2CppMethodPointer)__N2M_vi4B20},
	{"vi4B24", (Il2CppMethodPointer)__N2M_vi4B24},
	{"vi4B28", (Il2CppMethodPointer)__N2M_vi4B28},
	{"vi4B32", (Il2CppMethodPointer)__N2M_vi4B32},
	{"vi4B72", (Il2CppMethodPointer)__N2M_vi4B72},
	{"vi4B8", (Il2CppMethodPointer)__N2M_vi4B8},
	{"vi4B8B12", (Il2CppMethodPointer)__N2M_vi4B8B12},
	{"vi4B8B20", (Il2CppMethodPointer)__N2M_vi4B8B20},
	{"vi4B8B28", (Il2CppMethodPointer)__N2M_vi4B8B28},
	{"vi4B8B8", (Il2CppMethodPointer)__N2M_vi4B8B8},
	{"vi4B8C56", (Il2CppMethodPointer)__N2M_vi4B8C56},
	{"vi4B8C56i4", (Il2CppMethodPointer)__N2M_vi4B8C56i4},
	{"vi4B8i4", (Il2CppMethodPointer)__N2M_vi4B8i4},
	{"vi4B8i4i4", (Il2CppMethodPointer)__N2M_vi4B8i4i4},
	{"vi4C16", (Il2CppMethodPointer)__N2M_vi4C16},
	{"vi4i1", (Il2CppMethodPointer)__N2M_vi4i1},
	{"vi4i2", (Il2CppMethodPointer)__N2M_vi4i2},
	{"vi4i4", (Il2CppMethodPointer)__N2M_vi4i4},
	{"vi4i4A4", (Il2CppMethodPointer)__N2M_vi4i4A4},
	{"vi4i4B12", (Il2CppMethodPointer)__N2M_vi4i4B12},
	{"vi4i4B20", (Il2CppMethodPointer)__N2M_vi4i4B20},
	{"vi4i4B24", (Il2CppMethodPointer)__N2M_vi4i4B24},
	{"vi4i4B8", (Il2CppMethodPointer)__N2M_vi4i4B8},
	{"vi4i4B8B8", (Il2CppMethodPointer)__N2M_vi4i4B8B8},
	{"vi4i4C16", (Il2CppMethodPointer)__N2M_vi4i4C16},
	{"vi4i4i1", (Il2CppMethodPointer)__N2M_vi4i4i1},
	{"vi4i4i2", (Il2CppMethodPointer)__N2M_vi4i4i2},
	{"vi4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4},
	{"vi4i4i4B8", (Il2CppMethodPointer)__N2M_vi4i4i4B8},
	{"vi4i4i4i2i4", (Il2CppMethodPointer)__N2M_vi4i4i4i2i4},
	{"vi4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4},
	{"vi4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4},
	{"vi4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4u1i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4i4u1i4i4i4},
	{"vi4i4i4i4i4u1i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4u1i4i4i4},
	{"vi4i4i4i4i4u1u1u1", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4u1u1u1},
	{"vi4i4i4i4u1", (Il2CppMethodPointer)__N2M_vi4i4i4i4u1},
	{"vi4i4i4u1", (Il2CppMethodPointer)__N2M_vi4i4i4u1},
	{"vi4i4i8", (Il2CppMethodPointer)__N2M_vi4i4i8},
	{"vi4i4i8i4", (Il2CppMethodPointer)__N2M_vi4i4i8i4},
	{"vi4i4r4", (Il2CppMethodPointer)__N2M_vi4i4r4},
	{"vi4i4r8", (Il2CppMethodPointer)__N2M_vi4i4r8},
	{"vi4i4u1", (Il2CppMethodPointer)__N2M_vi4i4u1},
	{"vi4i4u1B24", (Il2CppMethodPointer)__N2M_vi4i4u1B24},
	{"vi4i4u1u1", (Il2CppMethodPointer)__N2M_vi4i4u1u1},
	{"vi4i4u2", (Il2CppMethodPointer)__N2M_vi4i4u2},
	{"vi4i4u4", (Il2CppMethodPointer)__N2M_vi4i4u4},
	{"vi4i4u8", (Il2CppMethodPointer)__N2M_vi4i4u8},
	{"vi4i4W16", (Il2CppMethodPointer)__N2M_vi4i4W16},
	{"vi4i8", (Il2CppMethodPointer)__N2M_vi4i8},
	{"vi4i8i4", (Il2CppMethodPointer)__N2M_vi4i8i4},
	{"vi4i8i4i8", (Il2CppMethodPointer)__N2M_vi4i8i4i8},
	{"vi4r4", (Il2CppMethodPointer)__N2M_vi4r4},
	{"vi4r8", (Il2CppMethodPointer)__N2M_vi4r8},
	{"vi4u1", (Il2CppMethodPointer)__N2M_vi4u1},
	{"vi4u1B24", (Il2CppMethodPointer)__N2M_vi4u1B24},
	{"vi4u2", (Il2CppMethodPointer)__N2M_vi4u2},
	{"vi4u2u2", (Il2CppMethodPointer)__N2M_vi4u2u2},
	{"vi4u4", (Il2CppMethodPointer)__N2M_vi4u4},
	{"vi4u8", (Il2CppMethodPointer)__N2M_vi4u8},
	{"vi4W16", (Il2CppMethodPointer)__N2M_vi4W16},
	{"vr4", (Il2CppMethodPointer)__N2M_vr4},
	{"vu1", (Il2CppMethodPointer)__N2M_vu1},
	{"W16i4", (Il2CppMethodPointer)__N2M_W16i4},
	{"W16i4i4", (Il2CppMethodPointer)__N2M_W16i4i4},
	{"X1", (Il2CppMethodPointer)__N2M_X1},
	{"X1i4", (Il2CppMethodPointer)__N2M_X1i4},
	{"X1i4i4", (Il2CppMethodPointer)__N2M_X1i4i4},
	{"X1i4i4i4", (Il2CppMethodPointer)__N2M_X1i4i4i4},
	{nullptr, nullptr},
};

// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSizeAlign2<4> __N2M_AdjustorThunk_A4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign2<4>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSizeAlign4<12> __N2M_AdjustorThunk_B12i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<12>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSizeAlign4<12> __N2M_AdjustorThunk_B12i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<12>*)ret;
}


// System.ConsoleKeyInfo System.IConsoleDriver::ReadKey(System.Boolean)
static ValueTypeSizeAlign4<12> __N2M_AdjustorThunk_B12i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<12>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSizeAlign4<16> __N2M_AdjustorThunk_B16i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<16>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSizeAlign4<20> __N2M_AdjustorThunk_B20i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<20>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSizeAlign4<24> __N2M_AdjustorThunk_B24i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<24>*)ret;
}


// System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry()
static ValueTypeSizeAlign4<8> __N2M_AdjustorThunk_B8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<8>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSizeAlign4<8> __N2M_AdjustorThunk_B8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign4<8>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSizeAlign8<16> __N2M_AdjustorThunk_C16i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<16>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static int8_t __N2M_AdjustorThunk_i1i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// System.SByte System.IConvertible::ToSByte(System.IFormatProvider)
static int8_t __N2M_AdjustorThunk_i1i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static int16_t __N2M_AdjustorThunk_i2i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// System.Int16 System.IConvertible::ToInt16(System.IFormatProvider)
static int16_t __N2M_AdjustorThunk_i2i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// Mono.ISystemCertificateProvider Mono.ISystemDependencyProvider::get_CertificateProvider()
static int32_t __N2M_AdjustorThunk_i4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4A4A4(int32_t __arg0, ValueTypeSizeAlign2<4> __arg1, ValueTypeSizeAlign2<4> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IList`1::IndexOf(T)
static int32_t __N2M_AdjustorThunk_i4i4B12(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4B12B12(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, ValueTypeSizeAlign4<12> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4B16(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4B20B20(int32_t __arg0, ValueTypeSizeAlign4<20> __arg1, ValueTypeSizeAlign4<20> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IList`1::IndexOf(T)
static int32_t __N2M_AdjustorThunk_i4i4B24(int32_t __arg0, ValueTypeSizeAlign4<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Object System.Runtime.Serialization.IObjectReference::GetRealObject(System.Runtime.Serialization.StreamingContext)
static int32_t __N2M_AdjustorThunk_i4i4B8(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4B8B8(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<8> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4C16(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4C16C16(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, ValueTypeSizeAlign8<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4i1(int32_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4i1i1(int32_t __arg0, int8_t __arg1, int8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource::GetStatus(System.Int16)
static int32_t __N2M_AdjustorThunk_i4i4i2(int32_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4i2i2(int32_t __arg0, int16_t __arg1, int16_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.String Mono.Xml.SmallXmlParser/IAttrList::GetName(System.Int32)
static int32_t __N2M_AdjustorThunk_i4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
static int32_t __N2M_AdjustorThunk_i4i4i4B8i4(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<8> __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Security.Cryptography.X509Certificates.X509CertificateImpl Mono.ISystemCertificateProvider::Import(System.Byte[],Mono.CertificateImportFlags)
static int32_t __N2M_AdjustorThunk_i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Object System.Runtime.Serialization.ISerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
static int32_t __N2M_AdjustorThunk_i4i4i4i4B8i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.String System.ICustomFormatter::Format(System.String,System.Object,System.IFormatProvider)
static int32_t __N2M_AdjustorThunk_i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Security.Cryptography.X509Certificates.X509CertificateImpl Mono.ISystemCertificateProvider::Import(System.Byte[],Microsoft.Win32.SafeHandles.SafePasswordHandle,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags,Mono.CertificateImportFlags)
static int32_t __N2M_AdjustorThunk_i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Security.Cryptography.ICryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
static int32_t __N2M_AdjustorThunk_i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Xml.IDtdInfo System.Xml.IDtdParser::ParseFreeFloatingDtd(System.String,System.String,System.String,System.String,System.String,System.Xml.IDtdParserAdapter)
static int32_t __N2M_AdjustorThunk_i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Globalization.ISimpleCollator::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
static int32_t __N2M_AdjustorThunk_i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method)
{
    StackObject args[9] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = args + 8;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Object[] System.Reflection.ICustomAttributeProvider::GetCustomAttributes(System.Type,System.Boolean)
static int32_t __N2M_AdjustorThunk_i4i4i4u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4i8i8(int32_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4r4(int32_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4r4r4(int32_t __arg0, float __arg1, float __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4r8(int32_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4r8r8(int32_t __arg0, double __arg1, double __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Object[] System.Reflection.ICustomAttributeProvider::GetCustomAttributes(System.Boolean)
static int32_t __N2M_AdjustorThunk_i4i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Xml.IDtdParserAdapter::ParseNamedCharRef(System.Boolean,System.Text.StringBuilder)
static int32_t __N2M_AdjustorThunk_i4i4u1i4(int32_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4u1u1(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4u2(int32_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4u2u2(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4u4(int32_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4u4u4(int32_t __arg0, uint32_t __arg1, uint32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4u8(int32_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4u8u8(int32_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4W16(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4W16W16(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, WebGLSpeicalValueTypeAlign8<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4X1(int32_t __arg0, WebGLSpeicalValueType<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.TimeSpan System.Runtime.Remoting.Lifetime.ILease::get_CurrentLeaseTime()
static int64_t __N2M_AdjustorThunk_i8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Int64 System.IConvertible::ToInt64(System.IFormatProvider)
static int64_t __N2M_AdjustorThunk_i8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.TimeSpan System.Runtime.Remoting.Lifetime.ILease::Renew(System.TimeSpan)
static int64_t __N2M_AdjustorThunk_i8i4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static float __N2M_AdjustorThunk_r4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(float*)ret;
}


// System.Single System.IConvertible::ToSingle(System.IFormatProvider)
static float __N2M_AdjustorThunk_r4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(float*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static double __N2M_AdjustorThunk_r8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


// System.Double System.IConvertible::ToDouble(System.IFormatProvider)
static double __N2M_AdjustorThunk_r8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


// System.Boolean System.IAsyncResult::get_IsCompleted()
static uint8_t __N2M_AdjustorThunk_u1i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.ICollection`1::Contains(T)
static uint8_t __N2M_AdjustorThunk_u1i4A4(int32_t __arg0, ValueTypeSizeAlign2<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4B12(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.IEqualityComparer`1::Equals(T,T)
static uint8_t __N2M_AdjustorThunk_u1i4B12B12(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, ValueTypeSizeAlign4<12> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4B16(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.IEqualityComparer`1::Equals(T,T)
static uint8_t __N2M_AdjustorThunk_u1i4B16B16(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, ValueTypeSizeAlign4<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.IPlayerEditorConnectionNative::TrySendMessage(System.Guid,System.Byte[],System.Int32)
static uint8_t __N2M_AdjustorThunk_u1i4B16i4i4(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.ICollection`1::Contains(T)
static uint8_t __N2M_AdjustorThunk_u1i4B20(int32_t __arg0, ValueTypeSizeAlign4<20> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.ICollection`1::Contains(T)
static uint8_t __N2M_AdjustorThunk_u1i4B24(int32_t __arg0, ValueTypeSizeAlign4<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4B28(int32_t __arg0, ValueTypeSizeAlign4<28> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4B64(int32_t __arg0, ValueTypeSizeAlign4<64> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4B8(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.IEqualityComparer`1::Equals(T,T)
static uint8_t __N2M_AdjustorThunk_u1i4B8B8(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign4<8> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.ISpanFormattable::TryFormat(System.Span`1<System.Char>,System.Int32&,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
static uint8_t __N2M_AdjustorThunk_u1i4B8i4B8i4(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4C16(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4C24(int32_t __arg0, ValueTypeSizeAlign8<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4i1(int32_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4i2(int32_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IConvertible::ToBoolean(System.IFormatProvider)
static uint8_t __N2M_AdjustorThunk_u1i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Runtime.Remoting.IRemotingTypeInfo::CanCastTo(System.Type,System.Object)
static uint8_t __N2M_AdjustorThunk_u1i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Globalization.ISimpleCollator::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
static uint8_t __N2M_AdjustorThunk_u1i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Net.ICertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
static uint8_t __N2M_AdjustorThunk_u1i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Reflection.ICustomAttributeProvider::IsDefined(System.Type,System.Boolean)
static uint8_t __N2M_AdjustorThunk_u1i4i4u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4r4(int32_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4r8(int32_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4u2(int32_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4u4(int32_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4u8(int32_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4W16(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4X1(int32_t __arg0, WebGLSpeicalValueType<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static uint16_t __N2M_AdjustorThunk_u2i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// System.Char System.IConvertible::ToChar(System.IFormatProvider)
static uint16_t __N2M_AdjustorThunk_u2i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static uint32_t __N2M_AdjustorThunk_u4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider)
static uint32_t __N2M_AdjustorThunk_u4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static uint64_t __N2M_AdjustorThunk_u8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider)
static uint64_t __N2M_AdjustorThunk_u8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// System.Void System.IDisposable::Dispose()
static void __N2M_AdjustorThunk_vi4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4A4(int32_t __arg0, ValueTypeSizeAlign2<4> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4B12(int32_t __arg0, ValueTypeSizeAlign4<12> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.IPlayerEditorConnectionNative::RegisterInternal(System.Guid)
static void __N2M_AdjustorThunk_vi4B16(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.IPlayerEditorConnectionNative::SendMessage(System.Guid,System.Byte[],System.Int32)
static void __N2M_AdjustorThunk_vi4B16i4i4(int32_t __arg0, ValueTypeSizeAlign4<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4B20(int32_t __arg0, ValueTypeSizeAlign4<20> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4B24(int32_t __arg0, ValueTypeSizeAlign4<24> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable)
static void __N2M_AdjustorThunk_vi4B8(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
static void __N2M_AdjustorThunk_vi4B8C56(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign8<56> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
static void __N2M_AdjustorThunk_vi4B8C56i4(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, ValueTypeSizeAlign8<56> __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.INotificationReceiver::OnNotify(UnityEngine.Playables.Playable,UnityEngine.Playables.INotification,System.Object)
static void __N2M_AdjustorThunk_vi4B8i4i4(int32_t __arg0, ValueTypeSizeAlign4<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4C16(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4i1(int32_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.Tasks.Sources.IValueTaskSource::GetResult(System.Int16)
static void __N2M_AdjustorThunk_vi4i2(int32_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Xml.SmallXmlParser/IContentHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
static void __N2M_AdjustorThunk_vi4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi4i4B12(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<12> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi4i4B24(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<24> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Serialization.ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __N2M_AdjustorThunk_vi4i4B8(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<8> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Xml.IDtdParserAdapter::OnSystemId(System.String,System.Xml.LineInfo,System.Xml.LineInfo)
static void __N2M_AdjustorThunk_vi4i4B8B8(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign4<8> __arg2, ValueTypeSizeAlign4<8> __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Xml.SmallXmlParser/IContentHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
static void __N2M_AdjustorThunk_vi4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Serialization.ISerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __N2M_AdjustorThunk_vi4i4i4B8(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSizeAlign4<8> __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.Tasks.Sources.IValueTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags)
static void __N2M_AdjustorThunk_vi4i4i4i2i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int16_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.ILogger::Log(UnityEngine.LogType,System.Object,UnityEngine.Object)
static void __N2M_AdjustorThunk_vi4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.ComponentModel.Design.IComponentChangeService::OnComponentChanged(System.Object,System.ComponentModel.MemberDescriptor,System.Object,System.Object)
static void __N2M_AdjustorThunk_vi4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.IAsyncLocal::OnValueChanged(System.Object,System.Object,System.Boolean)
static void __N2M_AdjustorThunk_vi4i4i4u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Remoting.Contexts.IDynamicMessageSink::ProcessMessageFinish(System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
static void __N2M_AdjustorThunk_vi4i4u1u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4r4(int32_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4r8(int32_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Remoting.Channels.ISecurableChannel::set_IsSecured(System.Boolean)
static void __N2M_AdjustorThunk_vi4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4u2(int32_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4u4(int32_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4u8(int32_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4W16(int32_t __arg0, WebGLSpeicalValueTypeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static WebGLSpeicalValueTypeAlign8<16> __N2M_AdjustorThunk_W16i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(WebGLSpeicalValueTypeAlign8<16>*)ret;
}


// System.Decimal System.IConvertible::ToDecimal(System.IFormatProvider)
static WebGLSpeicalValueTypeAlign8<16> __N2M_AdjustorThunk_W16i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(WebGLSpeicalValueTypeAlign8<16>*)ret;
}


NativeAdjustThunkMethodInfo hybridclr::interpreter::g_adjustThunkStub[] = 
{

	{"A4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_A4i4},
	{"B12i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_B12i4},
	{"B12i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_B12i4i4},
	{"B12i4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_B12i4u1},
	{"B16i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_B16i4},
	{"B20i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_B20i4},
	{"B24i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_B24i4i4},
	{"B8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_B8i4},
	{"B8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_B8i4i4},
	{"C16i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_C16i4},
	{"i1i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i1i4},
	{"i1i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i1i4i4},
	{"i2i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i2i4},
	{"i2i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i2i4i4},
	{"i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4},
	{"i4i4A4A4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4A4A4},
	{"i4i4B12", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4B12},
	{"i4i4B12B12", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4B12B12},
	{"i4i4B16", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4B16},
	{"i4i4B20B20", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4B20B20},
	{"i4i4B24", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4B24},
	{"i4i4B8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4B8},
	{"i4i4B8B8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4B8B8},
	{"i4i4C16", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4C16},
	{"i4i4C16C16", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4C16C16},
	{"i4i4i1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i1},
	{"i4i4i1i1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i1i1},
	{"i4i4i2", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i2},
	{"i4i4i2i2", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i2i2},
	{"i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4},
	{"i4i4i4B8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4B8i4},
	{"i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4i4},
	{"i4i4i4i4B8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4i4B8i4},
	{"i4i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4i4i4},
	{"i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4i4i4i4i4i4i4},
	{"i4i4i4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4u1},
	{"i4i4i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i8},
	{"i4i4i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i8i8},
	{"i4i4r4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4r4},
	{"i4i4r4r4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4r4r4},
	{"i4i4r8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4r8},
	{"i4i4r8r8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4r8r8},
	{"i4i4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4u1},
	{"i4i4u1i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4u1i4},
	{"i4i4u1u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4u1u1},
	{"i4i4u2", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4u2},
	{"i4i4u2u2", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4u2u2},
	{"i4i4u4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4u4},
	{"i4i4u4u4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4u4u4},
	{"i4i4u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4u8},
	{"i4i4u8u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4u8u8},
	{"i4i4W16", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4W16},
	{"i4i4W16W16", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4W16W16},
	{"i4i4X1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4X1},
	{"i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i4},
	{"i8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i4i4},
	{"i8i4i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i4i8},
	{"r4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_r4i4},
	{"r4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_r4i4i4},
	{"r8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_r8i4},
	{"r8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_r8i4i4},
	{"u1i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4},
	{"u1i4A4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4A4},
	{"u1i4B12", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4B12},
	{"u1i4B12B12", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4B12B12},
	{"u1i4B16", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4B16},
	{"u1i4B16B16", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4B16B16},
	{"u1i4B16i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4B16i4i4},
	{"u1i4B20", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4B20},
	{"u1i4B24", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4B24},
	{"u1i4B28", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4B28},
	{"u1i4B64", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4B64},
	{"u1i4B8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4B8},
	{"u1i4B8B8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4B8B8},
	{"u1i4B8i4B8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4B8i4B8i4},
	{"u1i4C16", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4C16},
	{"u1i4C24", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4C24},
	{"u1i4i1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i1},
	{"u1i4i2", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i2},
	{"u1i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i4},
	{"u1i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i4i4},
	{"u1i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i4i4i4},
	{"u1i4i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i4i4i4i4},
	{"u1i4i4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i4u1},
	{"u1i4i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i8},
	{"u1i4r4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4r4},
	{"u1i4r8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4r8},
	{"u1i4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4u1},
	{"u1i4u2", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4u2},
	{"u1i4u4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4u4},
	{"u1i4u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4u8},
	{"u1i4W16", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4W16},
	{"u1i4X1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4X1},
	{"u2i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u2i4},
	{"u2i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u2i4i4},
	{"u4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u4i4},
	{"u4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u4i4i4},
	{"u8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u8i4},
	{"u8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u8i4i4},
	{"vi4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4},
	{"vi4A4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4A4},
	{"vi4B12", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4B12},
	{"vi4B16", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4B16},
	{"vi4B16i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4B16i4i4},
	{"vi4B20", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4B20},
	{"vi4B24", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4B24},
	{"vi4B8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4B8},
	{"vi4B8C56", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4B8C56},
	{"vi4B8C56i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4B8C56i4},
	{"vi4B8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4B8i4i4},
	{"vi4C16", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4C16},
	{"vi4i1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i1},
	{"vi4i2", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i2},
	{"vi4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4},
	{"vi4i4B12", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4B12},
	{"vi4i4B24", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4B24},
	{"vi4i4B8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4B8},
	{"vi4i4B8B8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4B8B8},
	{"vi4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4i4},
	{"vi4i4i4B8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4i4B8},
	{"vi4i4i4i2i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4i4i2i4},
	{"vi4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4i4i4},
	{"vi4i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4i4i4i4},
	{"vi4i4i4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4i4u1},
	{"vi4i4u1u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4u1u1},
	{"vi4i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i8},
	{"vi4r4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4r4},
	{"vi4r8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4r8},
	{"vi4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4u1},
	{"vi4u2", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4u2},
	{"vi4u4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4u4},
	{"vi4u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4u8},
	{"vi4W16", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4W16},
	{"W16i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_W16i4},
	{"W16i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_W16i4i4},
	{nullptr, nullptr},
};

//!!!}}CODE
#endif
