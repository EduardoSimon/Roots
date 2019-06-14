#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Playables.PlayableDirector>
struct Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021;
// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_tF1C9CDCA1FBE7E67643B2F2806BA5A863023BF1E;
// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t2E2DE3837C6F4DB65CCE0924C5991C9B77A46B3E;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Double>[]
struct EntryU5BU5D_t8AFECF988946EA73CDC5E7827963A330D3EFAA0E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Double>
struct KeyCollection_t92545A56A2ED3494B8A3FB51D827FAB65CA54C41;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>
struct ValueCollection_tFCB619E9AC9985642AB5F942BD767B907F6AD61C;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t086ACB8FF4EB23DB0570F29B5C30FA71BAA5F642;
// System.Collections.Generic.Dictionary`2<System.String,System.Double>
struct Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_t1CEC2E74944D8E63CB5A7BFD7C9ACB03900CE763;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TimelineClip>
struct IEnumerable_1_t594F7C751FE4B8BAB474313B48B4BF2960B12879;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset>
struct IEnumerable_1_t06F418BD13D332B926BF4A199CE38726025C2B7D;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E;
// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>
struct List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>
struct List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TimeMachineBehaviour
struct TimeMachineBehaviour_tE6632F2B6879501B9FF01322502BAEBD388AA885;
// TimeMachineMixerBehaviour
struct TimeMachineMixerBehaviour_t391F72AACD7931B1F8B2BE3CEB3856E4101BA5FF;
// TimeMachineTrack
struct TimeMachineTrack_tCFFEA4DA170AD33CDFD4F156EBFDD4B689818820;
// TimelineTriggerZone
struct TimelineTriggerZone_t81BC71812B42BF6F2755CB6748430ABAFBC69C51;
// TransformTweenBehaviour
struct TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157;
// TransformTweenClip
struct TransformTweenClip_t0A6128E795D5741A9F2875145412CC757B59FB91;
// TransformTweenMixerBehaviour
struct TransformTweenMixerBehaviour_tE12462DD161403103B54A320CF952DF2EFF1E327;
// TransformTweenTrack
struct TransformTweenTrack_t82E28377B85ACD5E366A8C86AA4DC886A81F5BC7;
// UnityEngine.AnimationClip
struct AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.IExposedPropertyTable
struct IExposedPropertyTable_tBA6A5A41F6283C34744CA6EE8B7BE2F0679CF885;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01;
// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2;
// UnityEngine.Timeline.IPropertyCollector
struct IPropertyCollector_t716BB6257535844909D08C5849BF25BEFAB51AC1;
// UnityEngine.Timeline.TimelineClip
struct TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB;
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E;
// UnityEngine.Timeline.TrackAsset
struct TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D;
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UnityException
struct UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28;
// UnityTemplateProjects.SimpleCameraController
struct SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42;
// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t594F7C751FE4B8BAB474313B48B4BF2960B12879_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE8C6716AE5A02D3C9D6DD62A2326CD99E0687446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_tAAB01E5283A1836AF975FA63B80261EE882FABB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
IL2CPP_EXTERN_C String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
IL2CPP_EXTERN_C String_t* _stringLiteral2D006BC0A688DEF2B1C858BAA109815C681A131F;
IL2CPP_EXTERN_C String_t* _stringLiteral57517E8B61891208A83D07B2FD101067361603E5;
IL2CPP_EXTERN_C String_t* _stringLiteralA0CCC2B81796C9322AD9A076494939A68FCC6B42;
IL2CPP_EXTERN_C String_t* _stringLiteralB96A5CCD87AB1C6C6AEC0944530C96285662FF34;
IL2CPP_EXTERN_C String_t* _stringLiteralC65F37B2CB1AE26C89E9B4F26E2CA9E9CDE4AE5B;
IL2CPP_EXTERN_C String_t* _stringLiteralFC60B029A7F7F32EAEF860695398640797794074;
IL2CPP_EXTERN_C String_t* _stringLiteralFD994B5ACA714CF15F378E6FC3E48ABD08EF904D;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF8CEBB83537EDF9076A06B61C2115BBDDE70DAA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD0BAB15F653B724AA5A2FD7DCA934E785D3526B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC22ED3BFECBBE4D11BC2AA0FE5AB45376E804C72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedReference_1_Resolve_m20E0F9433D521189666CFB2B4D14B1FC842F6CAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m53CBEE1F47F3B46C3D0BCA39166F991261A809A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mC15D789D7CD8858FC1EBCA1ACC56F6C7AD829B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBBA41EE4D02AA0A1B68FCD6F432BD9C3C06E2F0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m02EFE600B3A94F99F824DCDD0680EF46E16B687D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetTime_TisScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773_m7B52C65563305C5F5D8F4B4DFDFEB837EA13050A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_m2CEEA8255AEE11C3090A5C140AC99BC245458B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_m9B9CD4EA3A47A0F58F27A85097674CC3EDDACCF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_mA3E706454A7474C15E765B8DED248FA1D51756EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_GetBehaviour_m2DC91BA5C7F328043B3C410DEB77ADA7A7E2E59C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_GetBehaviour_mFC307212AC88BC0A6333E6EE3FDEA7CBA7229433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Explicit_m2458B65C8E6DB25A6058E2FBCCC48F4B447798A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_m304D07E35BA0AD189838E6F2CE6D8AE9DE5978CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_mA0DC2602763CD75EDA67D4D702DE684BF78F3A06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_mD924E56F3E8E257541F07B50351B6A194BC4D4CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformTweenBehaviour_OnGraphStart_mE50EB038689911D036DCBC3BA71F4E22AF4E4BE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CameraState_LerpTowards_mC4C84789CEE27DEC5A70AAF00FC71FE990519AFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraState_Translate_m1B8281ABF2A3296F5DE47064F3757FD481E446EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController_Update_m703B3BEF0A4BD9BCC6A89BA83CACEC85FB45CEA5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController__ctor_mDD687DF4764B1C2C77BA64E8836650F6F31F144A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeMachineTrack_CreateTrackMixer_m4BAFD10DF40641F1C69CA9A743D5DDCC865E6775_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeMachineTrack__ctor_mD17B28DAA35D81C61FC6C009524480DC7999220A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimelineTriggerZone_OnTriggerEnter_m3CE5B6D84310033E2BB29ED046699F09B2D3A61F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformTweenBehaviour_OnGraphStart_mE50EB038689911D036DCBC3BA71F4E22AF4E4BE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformTweenBehaviour__ctor_mC6A2D919EDEEF2481DA918706E3D2520294FF383_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformTweenClip_CreatePlayable_m49F8A415228725185BBE3FD9C664D04EB4EB7B8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformTweenClip__ctor_m3BCB38EFE3E0412521988BA6ADA919B920564D4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformTweenMixerBehaviour_NormalizeQuaternion_m8032F9E77603C3B5A6B94195500F3C7036FE7110_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformTweenMixerBehaviour_ProcessFrame_m2A727632CC8F4518D85D1A39CECF709617EF665F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformTweenMixerBehaviour_QuaternionMagnitude_mB086141643389598A85138FAB755DE079AFA284F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformTweenTrack_CreateTrackMixer_m2409C5723CF8D8F98BE01FB8F7FF5820C6B06DC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformTweenTrack__ctor_mE0EA15387D514D0E4DB7EF64E595215A29E58362_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com;

struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.Double>
struct  Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8AFECF988946EA73CDC5E7827963A330D3EFAA0E* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t92545A56A2ED3494B8A3FB51D827FAB65CA54C41 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tFCB619E9AC9985642AB5F942BD767B907F6AD61C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602, ___entries_1)); }
	inline EntryU5BU5D_t8AFECF988946EA73CDC5E7827963A330D3EFAA0E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8AFECF988946EA73CDC5E7827963A330D3EFAA0E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8AFECF988946EA73CDC5E7827963A330D3EFAA0E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602, ___keys_7)); }
	inline KeyCollection_t92545A56A2ED3494B8A3FB51D827FAB65CA54C41 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t92545A56A2ED3494B8A3FB51D827FAB65CA54C41 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t92545A56A2ED3494B8A3FB51D827FAB65CA54C41 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602, ___values_8)); }
	inline ValueCollection_tFCB619E9AC9985642AB5F942BD767B907F6AD61C * get_values_8() const { return ___values_8; }
	inline ValueCollection_tFCB619E9AC9985642AB5F942BD767B907F6AD61C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tFCB619E9AC9985642AB5F942BD767B907F6AD61C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};

// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TypeName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};


// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01  : public RuntimeObject
{
public:

public:
};


// UnityTemplateProjects.SimpleCameraController_CameraState
struct  CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7  : public RuntimeObject
{
public:
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::yaw
	float ___yaw_0;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::pitch
	float ___pitch_1;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::roll
	float ___roll_2;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::x
	float ___x_3;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::y
	float ___y_4;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::z
	float ___z_5;

public:
	inline static int32_t get_offset_of_yaw_0() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___yaw_0)); }
	inline float get_yaw_0() const { return ___yaw_0; }
	inline float* get_address_of_yaw_0() { return &___yaw_0; }
	inline void set_yaw_0(float value)
	{
		___yaw_0 = value;
	}

	inline static int32_t get_offset_of_pitch_1() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___pitch_1)); }
	inline float get_pitch_1() const { return ___pitch_1; }
	inline float* get_address_of_pitch_1() { return &___pitch_1; }
	inline void set_pitch_1(float value)
	{
		___pitch_1 = value;
	}

	inline static int32_t get_offset_of_roll_2() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___roll_2)); }
	inline float get_roll_2() const { return ___roll_2; }
	inline float* get_address_of_roll_2() { return &___roll_2; }
	inline void set_roll_2(float value)
	{
		___roll_2 = value;
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___y_4)); }
	inline float get_y_4() const { return ___y_4; }
	inline float* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(float value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_z_5() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___z_5)); }
	inline float get_z_5() const { return ___z_5; }
	inline float* get_address_of_z_5() { return &___z_5; }
	inline void set_z_5(float value)
	{
		___z_5 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// TimeMachineMixerBehaviour
struct  TimeMachineMixerBehaviour_t391F72AACD7931B1F8B2BE3CEB3856E4101BA5FF  : public PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Double> TimeMachineMixerBehaviour::markerClips
	Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 * ___markerClips_0;

public:
	inline static int32_t get_offset_of_markerClips_0() { return static_cast<int32_t>(offsetof(TimeMachineMixerBehaviour_t391F72AACD7931B1F8B2BE3CEB3856E4101BA5FF, ___markerClips_0)); }
	inline Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 * get_markerClips_0() const { return ___markerClips_0; }
	inline Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 ** get_address_of_markerClips_0() { return &___markerClips_0; }
	inline void set_markerClips_0(Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 * value)
	{
		___markerClips_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markerClips_0), (void*)value);
	}
};


// TransformTweenMixerBehaviour
struct  TransformTweenMixerBehaviour_tE12462DD161403103B54A320CF952DF2EFF1E327  : public PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01
{
public:
	// System.Boolean TransformTweenMixerBehaviour::m_FirstFrameHappened
	bool ___m_FirstFrameHappened_0;

public:
	inline static int32_t get_offset_of_m_FirstFrameHappened_0() { return static_cast<int32_t>(offsetof(TransformTweenMixerBehaviour_tE12462DD161403103B54A320CF952DF2EFF1E327, ___m_FirstFrameHappened_0)); }
	inline bool get_m_FirstFrameHappened_0() const { return ___m_FirstFrameHappened_0; }
	inline bool* get_address_of_m_FirstFrameHappened_0() { return &___m_FirstFrameHappened_0; }
	inline void set_m_FirstFrameHappened_0(bool value)
	{
		___m_FirstFrameHappened_0 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Keyframe
struct  Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.PropertyName
struct  PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Timeline.DiscreteTime
struct  DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 
{
public:
	// System.Int64 UnityEngine.Timeline.DiscreteTime::m_DiscreteTime
	int64_t ___m_DiscreteTime_2;

public:
	inline static int32_t get_offset_of_m_DiscreteTime_2() { return static_cast<int32_t>(offsetof(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047, ___m_DiscreteTime_2)); }
	inline int64_t get_m_DiscreteTime_2() const { return ___m_DiscreteTime_2; }
	inline int64_t* get_address_of_m_DiscreteTime_2() { return &___m_DiscreteTime_2; }
	inline void set_m_DiscreteTime_2(int64_t value)
	{
		___m_DiscreteTime_2 = value;
	}
};

struct DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047_StaticFields
{
public:
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.DiscreteTime::kMaxTime
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___kMaxTime_1;

public:
	inline static int32_t get_offset_of_kMaxTime_1() { return static_cast<int32_t>(offsetof(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047_StaticFields, ___kMaxTime_1)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_kMaxTime_1() const { return ___kMaxTime_1; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_kMaxTime_1() { return &___kMaxTime_1; }
	inline void set_kMaxTime_1(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___kMaxTime_1 = value;
	}
};


// UnityEngine.Timeline.MarkerList
struct  MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.MarkerList::m_Objects
	List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * ___m_Objects_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.MarkerList::m_Cache
	List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * ___m_Cache_1;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_CacheDirty
	bool ___m_CacheDirty_2;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_HasNotifications
	bool ___m_HasNotifications_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_Objects_0)); }
	inline List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Cache_1() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_Cache_1)); }
	inline List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * get_m_Cache_1() const { return ___m_Cache_1; }
	inline List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 ** get_address_of_m_Cache_1() { return &___m_Cache_1; }
	inline void set_m_Cache_1(List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * value)
	{
		___m_Cache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheDirty_2() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_CacheDirty_2)); }
	inline bool get_m_CacheDirty_2() const { return ___m_CacheDirty_2; }
	inline bool* get_address_of_m_CacheDirty_2() { return &___m_CacheDirty_2; }
	inline void set_m_CacheDirty_2(bool value)
	{
		___m_CacheDirty_2 = value;
	}

	inline static int32_t get_offset_of_m_HasNotifications_3() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_HasNotifications_3)); }
	inline bool get_m_HasNotifications_3() const { return ___m_HasNotifications_3; }
	inline bool* get_address_of_m_HasNotifications_3() { return &___m_HasNotifications_3; }
	inline void set_m_HasNotifications_3(bool value)
	{
		___m_HasNotifications_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshaled_pinvoke
{
	List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * ___m_Objects_0;
	List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};
// Native definition for COM marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshaled_com
{
	List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * ___m_Objects_0;
	List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};

// UnityEngine.UnityException
struct  UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28  : public Exception_t
{
public:

public:
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// TimeMachineBehaviour_Condition
struct  Condition_tE4F6A30C7BE60110740AA800638B36739FE5DF1A 
{
public:
	// System.Int32 TimeMachineBehaviour_Condition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Condition_tE4F6A30C7BE60110740AA800638B36739FE5DF1A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TimeMachineBehaviour_TimeMachineAction
struct  TimeMachineAction_t3C17C80CD8AD06D8ADDE8A3E0AE5C2CC3238BE77 
{
public:
	// System.Int32 TimeMachineBehaviour_TimeMachineAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeMachineAction_t3C17C80CD8AD06D8ADDE8A3E0AE5C2CC3238BE77, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TimelineTriggerZone_TriggerType
struct  TriggerType_t1F3BCD17585B06294F9786A5CFBEC018F7DFCC5E 
{
public:
	// System.Int32 TimelineTriggerZone_TriggerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TriggerType_t1F3BCD17585B06294F9786A5CFBEC018F7DFCC5E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TransformTweenBehaviour_TweenType
struct  TweenType_tE84981DE146D9B7478B8005B459857574461D6B7 
{
public:
	// System.Int32 TransformTweenBehaviour_TweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenType_tE84981DE146D9B7478B8005B459857574461D6B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CursorLockMode
struct  CursorLockMode_tF9B28266D253124BE56C232B7ED2D9F7CC3D1E38 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_tF9B28266D253124BE56C232B7ED2D9F7CC3D1E38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.FrameData_Flags
struct  Flags_tC705783C7BC90E0953FD3B996C7900B58A452D69 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData_Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tC705783C7BC90E0953FD3B996C7900B58A452D69, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Timeline.ClipCaps
struct  ClipCaps_tF9AB6311CC5A0AA6908A88DCA53CB00208035E46 
{
public:
	// System.Int32 UnityEngine.Timeline.ClipCaps::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipCaps_tF9AB6311CC5A0AA6908A88DCA53CB00208035E46, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineClip_BlendCurveMode
struct  BlendCurveMode_t68FF453F9C85DD1968A09AEA576C6173C648F6F1 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip_BlendCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendCurveMode_t68FF453F9C85DD1968A09AEA576C6173C648F6F1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineClip_ClipExtrapolation
struct  ClipExtrapolation_tC55410C9E61EC3868549509F094A83E2E8314783 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip_ClipExtrapolation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipExtrapolation_tC55410C9E61EC3868549509F094A83E2E8314783, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TransformTweenBehaviour
struct  TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157  : public PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01
{
public:
	// UnityEngine.Transform TransformTweenBehaviour::startLocation
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___startLocation_0;
	// UnityEngine.Transform TransformTweenBehaviour::endLocation
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___endLocation_1;
	// System.Boolean TransformTweenBehaviour::tweenPosition
	bool ___tweenPosition_2;
	// System.Boolean TransformTweenBehaviour::tweenRotation
	bool ___tweenRotation_3;
	// TransformTweenBehaviour_TweenType TransformTweenBehaviour::tweenType
	int32_t ___tweenType_4;
	// System.Single TransformTweenBehaviour::customStartingSpeed
	float ___customStartingSpeed_5;
	// System.Single TransformTweenBehaviour::customEndingSpeed
	float ___customEndingSpeed_6;
	// System.Single TransformTweenBehaviour::inverseDuration
	float ___inverseDuration_7;
	// UnityEngine.Vector3 TransformTweenBehaviour::startingPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startingPosition_8;
	// UnityEngine.Quaternion TransformTweenBehaviour::startingRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___startingRotation_9;
	// UnityEngine.AnimationCurve TransformTweenBehaviour::currentCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___currentCurve_10;
	// UnityEngine.AnimationCurve TransformTweenBehaviour::m_LinearCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___m_LinearCurve_11;
	// UnityEngine.AnimationCurve TransformTweenBehaviour::m_DecelerationCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___m_DecelerationCurve_12;
	// UnityEngine.AnimationCurve TransformTweenBehaviour::m_HarmonicCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___m_HarmonicCurve_13;
	// UnityEngine.AnimationCurve TransformTweenBehaviour::m_CustomCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___m_CustomCurve_14;

public:
	inline static int32_t get_offset_of_startLocation_0() { return static_cast<int32_t>(offsetof(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157, ___startLocation_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_startLocation_0() const { return ___startLocation_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_startLocation_0() { return &___startLocation_0; }
	inline void set_startLocation_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___startLocation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startLocation_0), (void*)value);
	}

	inline static int32_t get_offset_of_endLocation_1() { return static_cast<int32_t>(offsetof(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157, ___endLocation_1)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_endLocation_1() const { return ___endLocation_1; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_endLocation_1() { return &___endLocation_1; }
	inline void set_endLocation_1(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___endLocation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endLocation_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPosition_2() { return static_cast<int32_t>(offsetof(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157, ___tweenPosition_2)); }
	inline bool get_tweenPosition_2() const { return ___tweenPosition_2; }
	inline bool* get_address_of_tweenPosition_2() { return &___tweenPosition_2; }
	inline void set_tweenPosition_2(bool value)
	{
		___tweenPosition_2 = value;
	}

	inline static int32_t get_offset_of_tweenRotation_3() { return static_cast<int32_t>(offsetof(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157, ___tweenRotation_3)); }
	inline bool get_tweenRotation_3() const { return ___tweenRotation_3; }
	inline bool* get_address_of_tweenRotation_3() { return &___tweenRotation_3; }
	inline void set_tweenRotation_3(bool value)
	{
		___tweenRotation_3 = value;
	}

	inline static int32_t get_offset_of_tweenType_4() { return static_cast<int32_t>(offsetof(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157, ___tweenType_4)); }
	inline int32_t get_tweenType_4() const { return ___tweenType_4; }
	inline int32_t* get_address_of_tweenType_4() { return &___tweenType_4; }
	inline void set_tweenType_4(int32_t value)
	{
		___tweenType_4 = value;
	}

	inline static int32_t get_offset_of_customStartingSpeed_5() { return static_cast<int32_t>(offsetof(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157, ___customStartingSpeed_5)); }
	inline float get_customStartingSpeed_5() const { return ___customStartingSpeed_5; }
	inline float* get_address_of_customStartingSpeed_5() { return &___customStartingSpeed_5; }
	inline void set_customStartingSpeed_5(float value)
	{
		___customStartingSpeed_5 = value;
	}

	inline static int32_t get_offset_of_customEndingSpeed_6() { return static_cast<int32_t>(offsetof(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157, ___customEndingSpeed_6)); }
	inline float get_customEndingSpeed_6() const { return ___customEndingSpeed_6; }
	inline float* get_address_of_customEndingSpeed_6() { return &___customEndingSpeed_6; }
	inline void set_customEndingSpeed_6(float value)
	{
		___customEndingSpeed_6 = value;
	}

	inline static int32_t get_offset_of_inverseDuration_7() { return static_cast<int32_t>(offsetof(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157, ___inverseDuration_7)); }
	inline float get_inverseDuration_7() const { return ___inverseDuration_7; }
	inline float* get_address_of_inverseDuration_7() { return &___inverseDuration_7; }
	inline void set_inverseDuration_7(float value)
	{
		___inverseDuration_7 = value;
	}

	inline static int32_t get_offset_of_startingPosition_8() { return static_cast<int32_t>(offsetof(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157, ___startingPosition_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_startingPosition_8() const { return ___startingPosition_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_startingPosition_8() { return &___startingPosition_8; }
	inline void set_startingPosition_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___startingPosition_8 = value;
	}

	inline static int32_t get_offset_of_startingRotation_9() { return static_cast<int32_t>(offsetof(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157, ___startingRotation_9)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_startingRotation_9() const { return ___startingRotation_9; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_startingRotation_9() { return &___startingRotation_9; }
	inline void set_startingRotation_9(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___startingRotation_9 = value;
	}

	inline static int32_t get_offset_of_currentCurve_10() { return static_cast<int32_t>(offsetof(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157, ___currentCurve_10)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_currentCurve_10() const { return ___currentCurve_10; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_currentCurve_10() { return &___currentCurve_10; }
	inline void set_currentCurve_10(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___currentCurve_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCurve_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_LinearCurve_11() { return static_cast<int32_t>(offsetof(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157, ___m_LinearCurve_11)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_m_LinearCurve_11() const { return ___m_LinearCurve_11; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_m_LinearCurve_11() { return &___m_LinearCurve_11; }
	inline void set_m_LinearCurve_11(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___m_LinearCurve_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LinearCurve_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_DecelerationCurve_12() { return static_cast<int32_t>(offsetof(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157, ___m_DecelerationCurve_12)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_m_DecelerationCurve_12() const { return ___m_DecelerationCurve_12; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_m_DecelerationCurve_12() { return &___m_DecelerationCurve_12; }
	inline void set_m_DecelerationCurve_12(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___m_DecelerationCurve_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DecelerationCurve_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_HarmonicCurve_13() { return static_cast<int32_t>(offsetof(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157, ___m_HarmonicCurve_13)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_m_HarmonicCurve_13() const { return ___m_HarmonicCurve_13; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_m_HarmonicCurve_13() { return &___m_HarmonicCurve_13; }
	inline void set_m_HarmonicCurve_13(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___m_HarmonicCurve_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HarmonicCurve_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CustomCurve_14() { return static_cast<int32_t>(offsetof(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157, ___m_CustomCurve_14)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_m_CustomCurve_14() const { return ___m_CustomCurve_14; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_m_CustomCurve_14() { return &___m_CustomCurve_14; }
	inline void set_m_CustomCurve_14(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___m_CustomCurve_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomCurve_14), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ExposedReference`1<System.Object>
struct  ExposedReference_1_t5F7BAA4304EB817E7C262A3480A6BA619FD4F096 
{
public:
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___defaultValue_1;

public:
	inline static int32_t get_offset_of_exposedName_0() { return static_cast<int32_t>(offsetof(ExposedReference_1_t5F7BAA4304EB817E7C262A3480A6BA619FD4F096, ___exposedName_0)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_exposedName_0() const { return ___exposedName_0; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_exposedName_0() { return &___exposedName_0; }
	inline void set_exposedName_0(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___exposedName_0 = value;
	}

	inline static int32_t get_offset_of_defaultValue_1() { return static_cast<int32_t>(offsetof(ExposedReference_1_t5F7BAA4304EB817E7C262A3480A6BA619FD4F096, ___defaultValue_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_defaultValue_1() const { return ___defaultValue_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_defaultValue_1() { return &___defaultValue_1; }
	inline void set_defaultValue_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___defaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultValue_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ExposedReference`1
#ifndef ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke_define
#define ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke_define
struct ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke ___defaultValue_1;
};
#endif
// Native definition for COM marshalling of UnityEngine.ExposedReference`1
#ifndef ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com_define
#define ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com_define
struct ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com* ___defaultValue_1;
};
#endif

// UnityEngine.ExposedReference`1<UnityEngine.Transform>
struct  ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8 
{
public:
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___defaultValue_1;

public:
	inline static int32_t get_offset_of_exposedName_0() { return static_cast<int32_t>(offsetof(ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8, ___exposedName_0)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_exposedName_0() const { return ___exposedName_0; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_exposedName_0() { return &___exposedName_0; }
	inline void set_exposedName_0(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___exposedName_0 = value;
	}

	inline static int32_t get_offset_of_defaultValue_1() { return static_cast<int32_t>(offsetof(ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8, ___defaultValue_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_defaultValue_1() const { return ___defaultValue_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_defaultValue_1() { return &___defaultValue_1; }
	inline void set_defaultValue_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___defaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultValue_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ExposedReference`1
#ifndef ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke_define
#define ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke_define
struct ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke ___defaultValue_1;
};
#endif
// Native definition for COM marshalling of UnityEngine.ExposedReference`1
#ifndef ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com_define
#define ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com_define
struct ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com* ___defaultValue_1;
};
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Playables.Playable
struct  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<System.Object>
struct  ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<TimeMachineMixerBehaviour>
struct  ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<TransformTweenBehaviour>
struct  ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<TransformTweenMixerBehaviour>
struct  ScriptPlayable_1_tAAB01E5283A1836AF975FA63B80261EE882FABB5 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_tAAB01E5283A1836AF975FA63B80261EE882FABB5, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_tAAB01E5283A1836AF975FA63B80261EE882FABB5_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_tAAB01E5283A1836AF975FA63B80261EE882FABB5  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_tAAB01E5283A1836AF975FA63B80261EE882FABB5_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_tAAB01E5283A1836AF975FA63B80261EE882FABB5  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_tAAB01E5283A1836AF975FA63B80261EE882FABB5 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_tAAB01E5283A1836AF975FA63B80261EE882FABB5  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.Timeline.TimelineClip
struct  TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip::m_Version
	int32_t ___m_Version_1;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Start
	double ___m_Start_9;
	// System.Double UnityEngine.Timeline.TimelineClip::m_ClipIn
	double ___m_ClipIn_10;
	// UnityEngine.Object UnityEngine.Timeline.TimelineClip::m_Asset
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_Asset_11;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Duration
	double ___m_Duration_12;
	// System.Double UnityEngine.Timeline.TimelineClip::m_TimeScale
	double ___m_TimeScale_13;
	// UnityEngine.Timeline.TrackAsset UnityEngine.Timeline.TimelineClip::m_ParentTrack
	TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * ___m_ParentTrack_14;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseInDuration
	double ___m_EaseInDuration_15;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseOutDuration
	double ___m_EaseOutDuration_16;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendInDuration
	double ___m_BlendInDuration_17;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendOutDuration
	double ___m_BlendOutDuration_18;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixInCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___m_MixInCurve_19;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixOutCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___m_MixOutCurve_20;
	// UnityEngine.Timeline.TimelineClip_BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendInCurveMode
	int32_t ___m_BlendInCurveMode_21;
	// UnityEngine.Timeline.TimelineClip_BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendOutCurveMode
	int32_t ___m_BlendOutCurveMode_22;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Timeline.TimelineClip::m_ExposedParameterNames
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___m_ExposedParameterNames_23;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TimelineClip::m_AnimationCurves
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_AnimationCurves_24;
	// System.Boolean UnityEngine.Timeline.TimelineClip::m_Recordable
	bool ___m_Recordable_25;
	// UnityEngine.Timeline.TimelineClip_ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PostExtrapolationMode
	int32_t ___m_PostExtrapolationMode_26;
	// UnityEngine.Timeline.TimelineClip_ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PreExtrapolationMode
	int32_t ___m_PreExtrapolationMode_27;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PostExtrapolationTime
	double ___m_PostExtrapolationTime_28;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PreExtrapolationTime
	double ___m_PreExtrapolationTime_29;
	// System.String UnityEngine.Timeline.TimelineClip::m_DisplayName
	String_t* ___m_DisplayName_30;
	// System.Int32 UnityEngine.Timeline.TimelineClip::<dirtyHash>k__BackingField
	int32_t ___U3CdirtyHashU3Ek__BackingField_31;

public:
	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_Start_9() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_Start_9)); }
	inline double get_m_Start_9() const { return ___m_Start_9; }
	inline double* get_address_of_m_Start_9() { return &___m_Start_9; }
	inline void set_m_Start_9(double value)
	{
		___m_Start_9 = value;
	}

	inline static int32_t get_offset_of_m_ClipIn_10() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_ClipIn_10)); }
	inline double get_m_ClipIn_10() const { return ___m_ClipIn_10; }
	inline double* get_address_of_m_ClipIn_10() { return &___m_ClipIn_10; }
	inline void set_m_ClipIn_10(double value)
	{
		___m_ClipIn_10 = value;
	}

	inline static int32_t get_offset_of_m_Asset_11() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_Asset_11)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_Asset_11() const { return ___m_Asset_11; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_Asset_11() { return &___m_Asset_11; }
	inline void set_m_Asset_11(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_Asset_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Duration_12() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_Duration_12)); }
	inline double get_m_Duration_12() const { return ___m_Duration_12; }
	inline double* get_address_of_m_Duration_12() { return &___m_Duration_12; }
	inline void set_m_Duration_12(double value)
	{
		___m_Duration_12 = value;
	}

	inline static int32_t get_offset_of_m_TimeScale_13() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_TimeScale_13)); }
	inline double get_m_TimeScale_13() const { return ___m_TimeScale_13; }
	inline double* get_address_of_m_TimeScale_13() { return &___m_TimeScale_13; }
	inline void set_m_TimeScale_13(double value)
	{
		___m_TimeScale_13 = value;
	}

	inline static int32_t get_offset_of_m_ParentTrack_14() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_ParentTrack_14)); }
	inline TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * get_m_ParentTrack_14() const { return ___m_ParentTrack_14; }
	inline TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D ** get_address_of_m_ParentTrack_14() { return &___m_ParentTrack_14; }
	inline void set_m_ParentTrack_14(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * value)
	{
		___m_ParentTrack_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentTrack_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_EaseInDuration_15() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_EaseInDuration_15)); }
	inline double get_m_EaseInDuration_15() const { return ___m_EaseInDuration_15; }
	inline double* get_address_of_m_EaseInDuration_15() { return &___m_EaseInDuration_15; }
	inline void set_m_EaseInDuration_15(double value)
	{
		___m_EaseInDuration_15 = value;
	}

	inline static int32_t get_offset_of_m_EaseOutDuration_16() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_EaseOutDuration_16)); }
	inline double get_m_EaseOutDuration_16() const { return ___m_EaseOutDuration_16; }
	inline double* get_address_of_m_EaseOutDuration_16() { return &___m_EaseOutDuration_16; }
	inline void set_m_EaseOutDuration_16(double value)
	{
		___m_EaseOutDuration_16 = value;
	}

	inline static int32_t get_offset_of_m_BlendInDuration_17() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_BlendInDuration_17)); }
	inline double get_m_BlendInDuration_17() const { return ___m_BlendInDuration_17; }
	inline double* get_address_of_m_BlendInDuration_17() { return &___m_BlendInDuration_17; }
	inline void set_m_BlendInDuration_17(double value)
	{
		___m_BlendInDuration_17 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutDuration_18() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_BlendOutDuration_18)); }
	inline double get_m_BlendOutDuration_18() const { return ___m_BlendOutDuration_18; }
	inline double* get_address_of_m_BlendOutDuration_18() { return &___m_BlendOutDuration_18; }
	inline void set_m_BlendOutDuration_18(double value)
	{
		___m_BlendOutDuration_18 = value;
	}

	inline static int32_t get_offset_of_m_MixInCurve_19() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_MixInCurve_19)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_m_MixInCurve_19() const { return ___m_MixInCurve_19; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_m_MixInCurve_19() { return &___m_MixInCurve_19; }
	inline void set_m_MixInCurve_19(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___m_MixInCurve_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MixInCurve_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_MixOutCurve_20() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_MixOutCurve_20)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_m_MixOutCurve_20() const { return ___m_MixOutCurve_20; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_m_MixOutCurve_20() { return &___m_MixOutCurve_20; }
	inline void set_m_MixOutCurve_20(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___m_MixOutCurve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MixOutCurve_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlendInCurveMode_21() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_BlendInCurveMode_21)); }
	inline int32_t get_m_BlendInCurveMode_21() const { return ___m_BlendInCurveMode_21; }
	inline int32_t* get_address_of_m_BlendInCurveMode_21() { return &___m_BlendInCurveMode_21; }
	inline void set_m_BlendInCurveMode_21(int32_t value)
	{
		___m_BlendInCurveMode_21 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutCurveMode_22() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_BlendOutCurveMode_22)); }
	inline int32_t get_m_BlendOutCurveMode_22() const { return ___m_BlendOutCurveMode_22; }
	inline int32_t* get_address_of_m_BlendOutCurveMode_22() { return &___m_BlendOutCurveMode_22; }
	inline void set_m_BlendOutCurveMode_22(int32_t value)
	{
		___m_BlendOutCurveMode_22 = value;
	}

	inline static int32_t get_offset_of_m_ExposedParameterNames_23() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_ExposedParameterNames_23)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_m_ExposedParameterNames_23() const { return ___m_ExposedParameterNames_23; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_m_ExposedParameterNames_23() { return &___m_ExposedParameterNames_23; }
	inline void set_m_ExposedParameterNames_23(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___m_ExposedParameterNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExposedParameterNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_AnimationCurves_24() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_AnimationCurves_24)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_AnimationCurves_24() const { return ___m_AnimationCurves_24; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_AnimationCurves_24() { return &___m_AnimationCurves_24; }
	inline void set_m_AnimationCurves_24(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_AnimationCurves_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationCurves_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Recordable_25() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_Recordable_25)); }
	inline bool get_m_Recordable_25() const { return ___m_Recordable_25; }
	inline bool* get_address_of_m_Recordable_25() { return &___m_Recordable_25; }
	inline void set_m_Recordable_25(bool value)
	{
		___m_Recordable_25 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationMode_26() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_PostExtrapolationMode_26)); }
	inline int32_t get_m_PostExtrapolationMode_26() const { return ___m_PostExtrapolationMode_26; }
	inline int32_t* get_address_of_m_PostExtrapolationMode_26() { return &___m_PostExtrapolationMode_26; }
	inline void set_m_PostExtrapolationMode_26(int32_t value)
	{
		___m_PostExtrapolationMode_26 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationMode_27() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_PreExtrapolationMode_27)); }
	inline int32_t get_m_PreExtrapolationMode_27() const { return ___m_PreExtrapolationMode_27; }
	inline int32_t* get_address_of_m_PreExtrapolationMode_27() { return &___m_PreExtrapolationMode_27; }
	inline void set_m_PreExtrapolationMode_27(int32_t value)
	{
		___m_PreExtrapolationMode_27 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationTime_28() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_PostExtrapolationTime_28)); }
	inline double get_m_PostExtrapolationTime_28() const { return ___m_PostExtrapolationTime_28; }
	inline double* get_address_of_m_PostExtrapolationTime_28() { return &___m_PostExtrapolationTime_28; }
	inline void set_m_PostExtrapolationTime_28(double value)
	{
		___m_PostExtrapolationTime_28 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationTime_29() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_PreExtrapolationTime_29)); }
	inline double get_m_PreExtrapolationTime_29() const { return ___m_PreExtrapolationTime_29; }
	inline double* get_address_of_m_PreExtrapolationTime_29() { return &___m_PreExtrapolationTime_29; }
	inline void set_m_PreExtrapolationTime_29(double value)
	{
		___m_PreExtrapolationTime_29 = value;
	}

	inline static int32_t get_offset_of_m_DisplayName_30() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_DisplayName_30)); }
	inline String_t* get_m_DisplayName_30() const { return ___m_DisplayName_30; }
	inline String_t** get_address_of_m_DisplayName_30() { return &___m_DisplayName_30; }
	inline void set_m_DisplayName_30(String_t* value)
	{
		___m_DisplayName_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdirtyHashU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___U3CdirtyHashU3Ek__BackingField_31)); }
	inline int32_t get_U3CdirtyHashU3Ek__BackingField_31() const { return ___U3CdirtyHashU3Ek__BackingField_31; }
	inline int32_t* get_address_of_U3CdirtyHashU3Ek__BackingField_31() { return &___U3CdirtyHashU3Ek__BackingField_31; }
	inline void set_U3CdirtyHashU3Ek__BackingField_31(int32_t value)
	{
		___U3CdirtyHashU3Ek__BackingField_31 = value;
	}
};

struct TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields
{
public:
	// UnityEngine.Timeline.ClipCaps UnityEngine.Timeline.TimelineClip::kDefaultClipCaps
	int32_t ___kDefaultClipCaps_2;
	// System.Single UnityEngine.Timeline.TimelineClip::kDefaultClipDurationInSeconds
	float ___kDefaultClipDurationInSeconds_3;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMin
	double ___kTimeScaleMin_4;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMax
	double ___kTimeScaleMax_5;
	// System.String UnityEngine.Timeline.TimelineClip::kDefaultCurvesName
	String_t* ___kDefaultCurvesName_6;
	// System.Double UnityEngine.Timeline.TimelineClip::kMinDuration
	double ___kMinDuration_7;
	// System.Double UnityEngine.Timeline.TimelineClip::kMaxTimeValue
	double ___kMaxTimeValue_8;

public:
	inline static int32_t get_offset_of_kDefaultClipCaps_2() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kDefaultClipCaps_2)); }
	inline int32_t get_kDefaultClipCaps_2() const { return ___kDefaultClipCaps_2; }
	inline int32_t* get_address_of_kDefaultClipCaps_2() { return &___kDefaultClipCaps_2; }
	inline void set_kDefaultClipCaps_2(int32_t value)
	{
		___kDefaultClipCaps_2 = value;
	}

	inline static int32_t get_offset_of_kDefaultClipDurationInSeconds_3() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kDefaultClipDurationInSeconds_3)); }
	inline float get_kDefaultClipDurationInSeconds_3() const { return ___kDefaultClipDurationInSeconds_3; }
	inline float* get_address_of_kDefaultClipDurationInSeconds_3() { return &___kDefaultClipDurationInSeconds_3; }
	inline void set_kDefaultClipDurationInSeconds_3(float value)
	{
		___kDefaultClipDurationInSeconds_3 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMin_4() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kTimeScaleMin_4)); }
	inline double get_kTimeScaleMin_4() const { return ___kTimeScaleMin_4; }
	inline double* get_address_of_kTimeScaleMin_4() { return &___kTimeScaleMin_4; }
	inline void set_kTimeScaleMin_4(double value)
	{
		___kTimeScaleMin_4 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMax_5() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kTimeScaleMax_5)); }
	inline double get_kTimeScaleMax_5() const { return ___kTimeScaleMax_5; }
	inline double* get_address_of_kTimeScaleMax_5() { return &___kTimeScaleMax_5; }
	inline void set_kTimeScaleMax_5(double value)
	{
		___kTimeScaleMax_5 = value;
	}

	inline static int32_t get_offset_of_kDefaultCurvesName_6() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kDefaultCurvesName_6)); }
	inline String_t* get_kDefaultCurvesName_6() const { return ___kDefaultCurvesName_6; }
	inline String_t** get_address_of_kDefaultCurvesName_6() { return &___kDefaultCurvesName_6; }
	inline void set_kDefaultCurvesName_6(String_t* value)
	{
		___kDefaultCurvesName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kDefaultCurvesName_6), (void*)value);
	}

	inline static int32_t get_offset_of_kMinDuration_7() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kMinDuration_7)); }
	inline double get_kMinDuration_7() const { return ___kMinDuration_7; }
	inline double* get_address_of_kMinDuration_7() { return &___kMinDuration_7; }
	inline void set_kMinDuration_7(double value)
	{
		___kMinDuration_7 = value;
	}

	inline static int32_t get_offset_of_kMaxTimeValue_8() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kMaxTimeValue_8)); }
	inline double get_kMaxTimeValue_8() const { return ___kMaxTimeValue_8; }
	inline double* get_address_of_kMaxTimeValue_8() { return &___kMaxTimeValue_8; }
	inline void set_kMaxTimeValue_8(double value)
	{
		___kMaxTimeValue_8 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Playables.FrameData
struct  FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E 
{
public:
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Double UnityEngine.Playables.FrameData::m_EffectiveParentDelay
	double ___m_EffectiveParentDelay_4;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveParentSpeed
	float ___m_EffectiveParentSpeed_5;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_6;
	// UnityEngine.Playables.FrameData_Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_7;
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.FrameData::m_Output
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  ___m_Output_8;

public:
	inline static int32_t get_offset_of_m_FrameID_0() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_FrameID_0)); }
	inline uint64_t get_m_FrameID_0() const { return ___m_FrameID_0; }
	inline uint64_t* get_address_of_m_FrameID_0() { return &___m_FrameID_0; }
	inline void set_m_FrameID_0(uint64_t value)
	{
		___m_FrameID_0 = value;
	}

	inline static int32_t get_offset_of_m_DeltaTime_1() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_DeltaTime_1)); }
	inline double get_m_DeltaTime_1() const { return ___m_DeltaTime_1; }
	inline double* get_address_of_m_DeltaTime_1() { return &___m_DeltaTime_1; }
	inline void set_m_DeltaTime_1(double value)
	{
		___m_DeltaTime_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_Weight_2)); }
	inline float get_m_Weight_2() const { return ___m_Weight_2; }
	inline float* get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(float value)
	{
		___m_Weight_2 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveWeight_3() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveWeight_3)); }
	inline float get_m_EffectiveWeight_3() const { return ___m_EffectiveWeight_3; }
	inline float* get_address_of_m_EffectiveWeight_3() { return &___m_EffectiveWeight_3; }
	inline void set_m_EffectiveWeight_3(float value)
	{
		___m_EffectiveWeight_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveParentDelay_4() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveParentDelay_4)); }
	inline double get_m_EffectiveParentDelay_4() const { return ___m_EffectiveParentDelay_4; }
	inline double* get_address_of_m_EffectiveParentDelay_4() { return &___m_EffectiveParentDelay_4; }
	inline void set_m_EffectiveParentDelay_4(double value)
	{
		___m_EffectiveParentDelay_4 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveParentSpeed_5() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveParentSpeed_5)); }
	inline float get_m_EffectiveParentSpeed_5() const { return ___m_EffectiveParentSpeed_5; }
	inline float* get_address_of_m_EffectiveParentSpeed_5() { return &___m_EffectiveParentSpeed_5; }
	inline void set_m_EffectiveParentSpeed_5(float value)
	{
		___m_EffectiveParentSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveSpeed_6() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveSpeed_6)); }
	inline float get_m_EffectiveSpeed_6() const { return ___m_EffectiveSpeed_6; }
	inline float* get_address_of_m_EffectiveSpeed_6() { return &___m_EffectiveSpeed_6; }
	inline void set_m_EffectiveSpeed_6(float value)
	{
		___m_EffectiveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}

	inline static int32_t get_offset_of_m_Output_8() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_Output_8)); }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  get_m_Output_8() const { return ___m_Output_8; }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 * get_address_of_m_Output_8() { return &___m_Output_8; }
	inline void set_m_Output_8(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  value)
	{
		___m_Output_8 = value;
	}
};


// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// TimeMachineClip
struct  TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781  : public PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD
{
public:
	// TimeMachineBehaviour TimeMachineClip::template
	TimeMachineBehaviour_tE6632F2B6879501B9FF01322502BAEBD388AA885 * ___template_4;
	// TimeMachineBehaviour_TimeMachineAction TimeMachineClip::action
	int32_t ___action_5;
	// TimeMachineBehaviour_Condition TimeMachineClip::condition
	int32_t ___condition_6;
	// System.String TimeMachineClip::markerToJumpTo
	String_t* ___markerToJumpTo_7;
	// System.String TimeMachineClip::markerLabel
	String_t* ___markerLabel_8;
	// System.Single TimeMachineClip::timeToJumpTo
	float ___timeToJumpTo_9;

public:
	inline static int32_t get_offset_of_template_4() { return static_cast<int32_t>(offsetof(TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781, ___template_4)); }
	inline TimeMachineBehaviour_tE6632F2B6879501B9FF01322502BAEBD388AA885 * get_template_4() const { return ___template_4; }
	inline TimeMachineBehaviour_tE6632F2B6879501B9FF01322502BAEBD388AA885 ** get_address_of_template_4() { return &___template_4; }
	inline void set_template_4(TimeMachineBehaviour_tE6632F2B6879501B9FF01322502BAEBD388AA885 * value)
	{
		___template_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___template_4), (void*)value);
	}

	inline static int32_t get_offset_of_action_5() { return static_cast<int32_t>(offsetof(TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781, ___action_5)); }
	inline int32_t get_action_5() const { return ___action_5; }
	inline int32_t* get_address_of_action_5() { return &___action_5; }
	inline void set_action_5(int32_t value)
	{
		___action_5 = value;
	}

	inline static int32_t get_offset_of_condition_6() { return static_cast<int32_t>(offsetof(TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781, ___condition_6)); }
	inline int32_t get_condition_6() const { return ___condition_6; }
	inline int32_t* get_address_of_condition_6() { return &___condition_6; }
	inline void set_condition_6(int32_t value)
	{
		___condition_6 = value;
	}

	inline static int32_t get_offset_of_markerToJumpTo_7() { return static_cast<int32_t>(offsetof(TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781, ___markerToJumpTo_7)); }
	inline String_t* get_markerToJumpTo_7() const { return ___markerToJumpTo_7; }
	inline String_t** get_address_of_markerToJumpTo_7() { return &___markerToJumpTo_7; }
	inline void set_markerToJumpTo_7(String_t* value)
	{
		___markerToJumpTo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markerToJumpTo_7), (void*)value);
	}

	inline static int32_t get_offset_of_markerLabel_8() { return static_cast<int32_t>(offsetof(TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781, ___markerLabel_8)); }
	inline String_t* get_markerLabel_8() const { return ___markerLabel_8; }
	inline String_t** get_address_of_markerLabel_8() { return &___markerLabel_8; }
	inline void set_markerLabel_8(String_t* value)
	{
		___markerLabel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markerLabel_8), (void*)value);
	}

	inline static int32_t get_offset_of_timeToJumpTo_9() { return static_cast<int32_t>(offsetof(TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781, ___timeToJumpTo_9)); }
	inline float get_timeToJumpTo_9() const { return ___timeToJumpTo_9; }
	inline float* get_address_of_timeToJumpTo_9() { return &___timeToJumpTo_9; }
	inline void set_timeToJumpTo_9(float value)
	{
		___timeToJumpTo_9 = value;
	}
};


// TransformTweenClip
struct  TransformTweenClip_t0A6128E795D5741A9F2875145412CC757B59FB91  : public PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD
{
public:
	// TransformTweenBehaviour TransformTweenClip::template
	TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * ___template_4;
	// UnityEngine.ExposedReference`1<UnityEngine.Transform> TransformTweenClip::startLocation
	ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8  ___startLocation_5;
	// UnityEngine.ExposedReference`1<UnityEngine.Transform> TransformTweenClip::endLocation
	ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8  ___endLocation_6;

public:
	inline static int32_t get_offset_of_template_4() { return static_cast<int32_t>(offsetof(TransformTweenClip_t0A6128E795D5741A9F2875145412CC757B59FB91, ___template_4)); }
	inline TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * get_template_4() const { return ___template_4; }
	inline TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 ** get_address_of_template_4() { return &___template_4; }
	inline void set_template_4(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * value)
	{
		___template_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___template_4), (void*)value);
	}

	inline static int32_t get_offset_of_startLocation_5() { return static_cast<int32_t>(offsetof(TransformTweenClip_t0A6128E795D5741A9F2875145412CC757B59FB91, ___startLocation_5)); }
	inline ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8  get_startLocation_5() const { return ___startLocation_5; }
	inline ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8 * get_address_of_startLocation_5() { return &___startLocation_5; }
	inline void set_startLocation_5(ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8  value)
	{
		___startLocation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___startLocation_5))->___defaultValue_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_endLocation_6() { return static_cast<int32_t>(offsetof(TransformTweenClip_t0A6128E795D5741A9F2875145412CC757B59FB91, ___endLocation_6)); }
	inline ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8  get_endLocation_6() const { return ___endLocation_6; }
	inline ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8 * get_address_of_endLocation_6() { return &___endLocation_6; }
	inline void set_endLocation_6(ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8  value)
	{
		___endLocation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___endLocation_6))->___defaultValue_1), (void*)NULL);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Playables.PlayableDirector
struct  PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::played
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___played_4;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::paused
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___paused_5;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::stopped
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___stopped_6;

public:
	inline static int32_t get_offset_of_played_4() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___played_4)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_played_4() const { return ___played_4; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_played_4() { return &___played_4; }
	inline void set_played_4(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___played_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___played_4), (void*)value);
	}

	inline static int32_t get_offset_of_paused_5() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___paused_5)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_paused_5() const { return ___paused_5; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_paused_5() { return &___paused_5; }
	inline void set_paused_5(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___paused_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paused_5), (void*)value);
	}

	inline static int32_t get_offset_of_stopped_6() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___stopped_6)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_stopped_6() const { return ___stopped_6; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_stopped_6() { return &___stopped_6; }
	inline void set_stopped_6(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___stopped_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopped_6), (void*)value);
	}
};


// UnityEngine.Timeline.TrackAsset
struct  TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D  : public PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD
{
public:
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_Version
	int32_t ___m_Version_5;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_AnimClip
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_AnimClip_6;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Locked
	bool ___m_Locked_10;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Muted
	bool ___m_Muted_11;
	// System.String UnityEngine.Timeline.TrackAsset::m_CustomPlayableFullTypename
	String_t* ___m_CustomPlayableFullTypename_12;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_Curves
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_Curves_13;
	// UnityEngine.Playables.PlayableAsset UnityEngine.Timeline.TrackAsset::m_Parent
	PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * ___m_Parent_14;
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.TrackAsset::m_Children
	List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * ___m_Children_15;
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_ItemsHash
	int32_t ___m_ItemsHash_16;
	// UnityEngine.Timeline.TimelineClip[] UnityEngine.Timeline.TrackAsset::m_ClipsCache
	TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* ___m_ClipsCache_17;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_Start
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___m_Start_18;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_End
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___m_End_19;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_CacheSorted
	bool ___m_CacheSorted_20;
	// System.Nullable`1<System.Boolean> UnityEngine.Timeline.TrackAsset::m_SupportsNotifications
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___m_SupportsNotifications_21;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset::m_ChildTrackCache
	RuntimeObject* ___m_ChildTrackCache_23;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::m_Clips
	List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 * ___m_Clips_25;
	// UnityEngine.Timeline.MarkerList UnityEngine.Timeline.TrackAsset::m_Markers
	MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  ___m_Markers_26;

public:
	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Version_5)); }
	inline int32_t get_m_Version_5() const { return ___m_Version_5; }
	inline int32_t* get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(int32_t value)
	{
		___m_Version_5 = value;
	}

	inline static int32_t get_offset_of_m_AnimClip_6() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_AnimClip_6)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_AnimClip_6() const { return ___m_AnimClip_6; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_AnimClip_6() { return &___m_AnimClip_6; }
	inline void set_m_AnimClip_6(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_AnimClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Locked_10() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Locked_10)); }
	inline bool get_m_Locked_10() const { return ___m_Locked_10; }
	inline bool* get_address_of_m_Locked_10() { return &___m_Locked_10; }
	inline void set_m_Locked_10(bool value)
	{
		___m_Locked_10 = value;
	}

	inline static int32_t get_offset_of_m_Muted_11() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Muted_11)); }
	inline bool get_m_Muted_11() const { return ___m_Muted_11; }
	inline bool* get_address_of_m_Muted_11() { return &___m_Muted_11; }
	inline void set_m_Muted_11(bool value)
	{
		___m_Muted_11 = value;
	}

	inline static int32_t get_offset_of_m_CustomPlayableFullTypename_12() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_CustomPlayableFullTypename_12)); }
	inline String_t* get_m_CustomPlayableFullTypename_12() const { return ___m_CustomPlayableFullTypename_12; }
	inline String_t** get_address_of_m_CustomPlayableFullTypename_12() { return &___m_CustomPlayableFullTypename_12; }
	inline void set_m_CustomPlayableFullTypename_12(String_t* value)
	{
		___m_CustomPlayableFullTypename_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomPlayableFullTypename_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Curves_13() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Curves_13)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_Curves_13() const { return ___m_Curves_13; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_Curves_13() { return &___m_Curves_13; }
	inline void set_m_Curves_13(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_Curves_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Curves_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_14() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Parent_14)); }
	inline PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * get_m_Parent_14() const { return ___m_Parent_14; }
	inline PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD ** get_address_of_m_Parent_14() { return &___m_Parent_14; }
	inline void set_m_Parent_14(PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * value)
	{
		___m_Parent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_15() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Children_15)); }
	inline List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * get_m_Children_15() const { return ___m_Children_15; }
	inline List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E ** get_address_of_m_Children_15() { return &___m_Children_15; }
	inline void set_m_Children_15(List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * value)
	{
		___m_Children_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemsHash_16() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ItemsHash_16)); }
	inline int32_t get_m_ItemsHash_16() const { return ___m_ItemsHash_16; }
	inline int32_t* get_address_of_m_ItemsHash_16() { return &___m_ItemsHash_16; }
	inline void set_m_ItemsHash_16(int32_t value)
	{
		___m_ItemsHash_16 = value;
	}

	inline static int32_t get_offset_of_m_ClipsCache_17() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ClipsCache_17)); }
	inline TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* get_m_ClipsCache_17() const { return ___m_ClipsCache_17; }
	inline TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E** get_address_of_m_ClipsCache_17() { return &___m_ClipsCache_17; }
	inline void set_m_ClipsCache_17(TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* value)
	{
		___m_ClipsCache_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClipsCache_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Start_18() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Start_18)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_m_Start_18() const { return ___m_Start_18; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_m_Start_18() { return &___m_Start_18; }
	inline void set_m_Start_18(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___m_Start_18 = value;
	}

	inline static int32_t get_offset_of_m_End_19() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_End_19)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_m_End_19() const { return ___m_End_19; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_m_End_19() { return &___m_End_19; }
	inline void set_m_End_19(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___m_End_19 = value;
	}

	inline static int32_t get_offset_of_m_CacheSorted_20() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_CacheSorted_20)); }
	inline bool get_m_CacheSorted_20() const { return ___m_CacheSorted_20; }
	inline bool* get_address_of_m_CacheSorted_20() { return &___m_CacheSorted_20; }
	inline void set_m_CacheSorted_20(bool value)
	{
		___m_CacheSorted_20 = value;
	}

	inline static int32_t get_offset_of_m_SupportsNotifications_21() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_SupportsNotifications_21)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_m_SupportsNotifications_21() const { return ___m_SupportsNotifications_21; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_m_SupportsNotifications_21() { return &___m_SupportsNotifications_21; }
	inline void set_m_SupportsNotifications_21(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___m_SupportsNotifications_21 = value;
	}

	inline static int32_t get_offset_of_m_ChildTrackCache_23() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ChildTrackCache_23)); }
	inline RuntimeObject* get_m_ChildTrackCache_23() const { return ___m_ChildTrackCache_23; }
	inline RuntimeObject** get_address_of_m_ChildTrackCache_23() { return &___m_ChildTrackCache_23; }
	inline void set_m_ChildTrackCache_23(RuntimeObject* value)
	{
		___m_ChildTrackCache_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildTrackCache_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_Clips_25() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Clips_25)); }
	inline List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 * get_m_Clips_25() const { return ___m_Clips_25; }
	inline List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 ** get_address_of_m_Clips_25() { return &___m_Clips_25; }
	inline void set_m_Clips_25(List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 * value)
	{
		___m_Clips_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Clips_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_Markers_26() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Markers_26)); }
	inline MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  get_m_Markers_26() const { return ___m_Markers_26; }
	inline MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC * get_address_of_m_Markers_26() { return &___m_Markers_26; }
	inline void set_m_Markers_26(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  value)
	{
		___m_Markers_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_26))->___m_Objects_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_26))->___m_Cache_1), (void*)NULL);
		#endif
	}
};

struct TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields
{
public:
	// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnClipPlayableCreate
	Action_3_tF1C9CDCA1FBE7E67643B2F2806BA5A863023BF1E * ___OnClipPlayableCreate_8;
	// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnTrackAnimationPlayableCreate
	Action_3_t2E2DE3837C6F4DB65CCE0924C5991C9B77A46B3E * ___OnTrackAnimationPlayableCreate_9;
	// UnityEngine.Timeline.TrackAsset[] UnityEngine.Timeline.TrackAsset::s_EmptyCache
	TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* ___s_EmptyCache_22;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute> UnityEngine.Timeline.TrackAsset::s_TrackBindingTypeAttributeCache
	Dictionary_2_t1CEC2E74944D8E63CB5A7BFD7C9ACB03900CE763 * ___s_TrackBindingTypeAttributeCache_24;

public:
	inline static int32_t get_offset_of_OnClipPlayableCreate_8() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___OnClipPlayableCreate_8)); }
	inline Action_3_tF1C9CDCA1FBE7E67643B2F2806BA5A863023BF1E * get_OnClipPlayableCreate_8() const { return ___OnClipPlayableCreate_8; }
	inline Action_3_tF1C9CDCA1FBE7E67643B2F2806BA5A863023BF1E ** get_address_of_OnClipPlayableCreate_8() { return &___OnClipPlayableCreate_8; }
	inline void set_OnClipPlayableCreate_8(Action_3_tF1C9CDCA1FBE7E67643B2F2806BA5A863023BF1E * value)
	{
		___OnClipPlayableCreate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipPlayableCreate_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnTrackAnimationPlayableCreate_9() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___OnTrackAnimationPlayableCreate_9)); }
	inline Action_3_t2E2DE3837C6F4DB65CCE0924C5991C9B77A46B3E * get_OnTrackAnimationPlayableCreate_9() const { return ___OnTrackAnimationPlayableCreate_9; }
	inline Action_3_t2E2DE3837C6F4DB65CCE0924C5991C9B77A46B3E ** get_address_of_OnTrackAnimationPlayableCreate_9() { return &___OnTrackAnimationPlayableCreate_9; }
	inline void set_OnTrackAnimationPlayableCreate_9(Action_3_t2E2DE3837C6F4DB65CCE0924C5991C9B77A46B3E * value)
	{
		___OnTrackAnimationPlayableCreate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackAnimationPlayableCreate_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_EmptyCache_22() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_EmptyCache_22)); }
	inline TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* get_s_EmptyCache_22() const { return ___s_EmptyCache_22; }
	inline TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5** get_address_of_s_EmptyCache_22() { return &___s_EmptyCache_22; }
	inline void set_s_EmptyCache_22(TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* value)
	{
		___s_EmptyCache_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyCache_22), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrackBindingTypeAttributeCache_24() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_TrackBindingTypeAttributeCache_24)); }
	inline Dictionary_2_t1CEC2E74944D8E63CB5A7BFD7C9ACB03900CE763 * get_s_TrackBindingTypeAttributeCache_24() const { return ___s_TrackBindingTypeAttributeCache_24; }
	inline Dictionary_2_t1CEC2E74944D8E63CB5A7BFD7C9ACB03900CE763 ** get_address_of_s_TrackBindingTypeAttributeCache_24() { return &___s_TrackBindingTypeAttributeCache_24; }
	inline void set_s_TrackBindingTypeAttributeCache_24(Dictionary_2_t1CEC2E74944D8E63CB5A7BFD7C9ACB03900CE763 * value)
	{
		___s_TrackBindingTypeAttributeCache_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackBindingTypeAttributeCache_24), (void*)value);
	}
};


// TimeMachineTrack
struct  TimeMachineTrack_tCFFEA4DA170AD33CDFD4F156EBFDD4B689818820  : public TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D
{
public:

public:
};


// TimelineTriggerZone
struct  TimelineTriggerZone_t81BC71812B42BF6F2755CB6748430ABAFBC69C51  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject TimelineTriggerZone::triggeringGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___triggeringGameObject_4;
	// UnityEngine.Playables.PlayableDirector TimelineTriggerZone::director
	PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * ___director_5;
	// TimelineTriggerZone_TriggerType TimelineTriggerZone::triggerType
	int32_t ___triggerType_6;
	// UnityEngine.Events.UnityEvent TimelineTriggerZone::OnDirectorPlay
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___OnDirectorPlay_7;
	// UnityEngine.Events.UnityEvent TimelineTriggerZone::OnDirectorFinish
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___OnDirectorFinish_8;
	// System.Boolean TimelineTriggerZone::m_AlreadyTriggered
	bool ___m_AlreadyTriggered_9;

public:
	inline static int32_t get_offset_of_triggeringGameObject_4() { return static_cast<int32_t>(offsetof(TimelineTriggerZone_t81BC71812B42BF6F2755CB6748430ABAFBC69C51, ___triggeringGameObject_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_triggeringGameObject_4() const { return ___triggeringGameObject_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_triggeringGameObject_4() { return &___triggeringGameObject_4; }
	inline void set_triggeringGameObject_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___triggeringGameObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triggeringGameObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_director_5() { return static_cast<int32_t>(offsetof(TimelineTriggerZone_t81BC71812B42BF6F2755CB6748430ABAFBC69C51, ___director_5)); }
	inline PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * get_director_5() const { return ___director_5; }
	inline PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 ** get_address_of_director_5() { return &___director_5; }
	inline void set_director_5(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * value)
	{
		___director_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___director_5), (void*)value);
	}

	inline static int32_t get_offset_of_triggerType_6() { return static_cast<int32_t>(offsetof(TimelineTriggerZone_t81BC71812B42BF6F2755CB6748430ABAFBC69C51, ___triggerType_6)); }
	inline int32_t get_triggerType_6() const { return ___triggerType_6; }
	inline int32_t* get_address_of_triggerType_6() { return &___triggerType_6; }
	inline void set_triggerType_6(int32_t value)
	{
		___triggerType_6 = value;
	}

	inline static int32_t get_offset_of_OnDirectorPlay_7() { return static_cast<int32_t>(offsetof(TimelineTriggerZone_t81BC71812B42BF6F2755CB6748430ABAFBC69C51, ___OnDirectorPlay_7)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_OnDirectorPlay_7() const { return ___OnDirectorPlay_7; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_OnDirectorPlay_7() { return &___OnDirectorPlay_7; }
	inline void set_OnDirectorPlay_7(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___OnDirectorPlay_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDirectorPlay_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnDirectorFinish_8() { return static_cast<int32_t>(offsetof(TimelineTriggerZone_t81BC71812B42BF6F2755CB6748430ABAFBC69C51, ___OnDirectorFinish_8)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_OnDirectorFinish_8() const { return ___OnDirectorFinish_8; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_OnDirectorFinish_8() { return &___OnDirectorFinish_8; }
	inline void set_OnDirectorFinish_8(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___OnDirectorFinish_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDirectorFinish_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlreadyTriggered_9() { return static_cast<int32_t>(offsetof(TimelineTriggerZone_t81BC71812B42BF6F2755CB6748430ABAFBC69C51, ___m_AlreadyTriggered_9)); }
	inline bool get_m_AlreadyTriggered_9() const { return ___m_AlreadyTriggered_9; }
	inline bool* get_address_of_m_AlreadyTriggered_9() { return &___m_AlreadyTriggered_9; }
	inline void set_m_AlreadyTriggered_9(bool value)
	{
		___m_AlreadyTriggered_9 = value;
	}
};


// TransformTweenTrack
struct  TransformTweenTrack_t82E28377B85ACD5E366A8C86AA4DC886A81F5BC7  : public TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D
{
public:

public:
};


// UnityTemplateProjects.SimpleCameraController
struct  SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityTemplateProjects.SimpleCameraController_CameraState UnityTemplateProjects.SimpleCameraController::m_TargetCameraState
	CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___m_TargetCameraState_4;
	// UnityTemplateProjects.SimpleCameraController_CameraState UnityTemplateProjects.SimpleCameraController::m_InterpolatingCameraState
	CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___m_InterpolatingCameraState_5;
	// System.Single UnityTemplateProjects.SimpleCameraController::boost
	float ___boost_6;
	// System.Single UnityTemplateProjects.SimpleCameraController::positionLerpTime
	float ___positionLerpTime_7;
	// UnityEngine.AnimationCurve UnityTemplateProjects.SimpleCameraController::mouseSensitivityCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___mouseSensitivityCurve_8;
	// System.Single UnityTemplateProjects.SimpleCameraController::rotationLerpTime
	float ___rotationLerpTime_9;
	// System.Boolean UnityTemplateProjects.SimpleCameraController::invertY
	bool ___invertY_10;

public:
	inline static int32_t get_offset_of_m_TargetCameraState_4() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___m_TargetCameraState_4)); }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * get_m_TargetCameraState_4() const { return ___m_TargetCameraState_4; }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 ** get_address_of_m_TargetCameraState_4() { return &___m_TargetCameraState_4; }
	inline void set_m_TargetCameraState_4(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * value)
	{
		___m_TargetCameraState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetCameraState_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_InterpolatingCameraState_5() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___m_InterpolatingCameraState_5)); }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * get_m_InterpolatingCameraState_5() const { return ___m_InterpolatingCameraState_5; }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 ** get_address_of_m_InterpolatingCameraState_5() { return &___m_InterpolatingCameraState_5; }
	inline void set_m_InterpolatingCameraState_5(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * value)
	{
		___m_InterpolatingCameraState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterpolatingCameraState_5), (void*)value);
	}

	inline static int32_t get_offset_of_boost_6() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___boost_6)); }
	inline float get_boost_6() const { return ___boost_6; }
	inline float* get_address_of_boost_6() { return &___boost_6; }
	inline void set_boost_6(float value)
	{
		___boost_6 = value;
	}

	inline static int32_t get_offset_of_positionLerpTime_7() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___positionLerpTime_7)); }
	inline float get_positionLerpTime_7() const { return ___positionLerpTime_7; }
	inline float* get_address_of_positionLerpTime_7() { return &___positionLerpTime_7; }
	inline void set_positionLerpTime_7(float value)
	{
		___positionLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_mouseSensitivityCurve_8() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___mouseSensitivityCurve_8)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_mouseSensitivityCurve_8() const { return ___mouseSensitivityCurve_8; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_mouseSensitivityCurve_8() { return &___mouseSensitivityCurve_8; }
	inline void set_mouseSensitivityCurve_8(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___mouseSensitivityCurve_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseSensitivityCurve_8), (void*)value);
	}

	inline static int32_t get_offset_of_rotationLerpTime_9() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___rotationLerpTime_9)); }
	inline float get_rotationLerpTime_9() const { return ___rotationLerpTime_9; }
	inline float* get_address_of_rotationLerpTime_9() { return &___rotationLerpTime_9; }
	inline void set_rotationLerpTime_9(float value)
	{
		___rotationLerpTime_9 = value;
	}

	inline static int32_t get_offset_of_invertY_10() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___invertY_10)); }
	inline bool get_invertY_10() const { return ___invertY_10; }
	inline bool* get_address_of_invertY_10() { return &___invertY_10; }
	inline void set_invertY_10(bool value)
	{
		___invertY_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  m_Items[1];

public:
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
	{
		m_Items[index] = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ScriptPlayable_1_Create_mCB0EAF3B738D54C2C229A229B9A5AC2FCB1DB2F2_gshared (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  p0, int32_t p1, const RuntimeMethod* method);
// !0 UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_GetBehaviour_mA09CBA9730AC80E48578D8F3EF33EBFCE5F1A389_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9756B0940CB836F3D77F6874F14F9DFBC53F60F_gshared (Dictionary_2_t086ACB8FF4EB23DB0570F29B5C30FA71BAA5F642 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9C61D4B354C66BE2D1266B93A4D35F07C3690D7D_gshared (Dictionary_2_t086ACB8FF4EB23DB0570F29B5C30FA71BAA5F642 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m34CF1F4780E77146F5F519964AD0BF4C2283BD43_gshared (Dictionary_2_t086ACB8FF4EB23DB0570F29B5C30FA71BAA5F642 * __this, RuntimeObject * p0, double p1, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_m9EAB3B552405A6DF1C2DAC402E792EC2D54F3E7E_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  p0, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.Playable>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m53CBEE1F47F3B46C3D0BCA39166F991261A809A5_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ScriptPlayable_1_Create_m3D1B231E561819ABAAA1FB9D506C471917BF32FF_gshared (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  p0, RuntimeObject * p1, int32_t p2, const RuntimeMethod* method);
// !0 UnityEngine.ExposedReference`1<System.Object>::Resolve(UnityEngine.IExposedPropertyTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExposedReference_1_Resolve_mF43C30F01A46E28ED9E30F196A07C80CAD88F2EC_gshared (ExposedReference_1_t5F7BAA4304EB817E7C262A3480A6BA619FD4F096 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mC15D789D7CD8858FC1EBCA1ACC56F6C7AD829B3B_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m02EFE600B3A94F99F824DCDD0680EF46E16B687D_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, int32_t p1, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Explicit(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ScriptPlayable_1_op_Explicit_m8164D46EB091E8DC3F521E6A747A5FCCE5C5D9DF_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBBA41EE4D02AA0A1B68FCD6F432BD9C3C06E2F0C_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, int32_t p1, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetTime_TisScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_mCA8F18AC5DB99E99ADD22DC6778976D866A5C289_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  p0, const RuntimeMethod* method);

// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<TimeMachineMixerBehaviour>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
inline ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F  ScriptPlayable_1_Create_m9B9CD4EA3A47A0F58F27A85097674CC3EDDACCF6 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F  (*) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA , int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mCB0EAF3B738D54C2C229A229B9A5AC2FCB1DB2F2_gshared)(p0, p1, method);
}
// !0 UnityEngine.Playables.ScriptPlayable`1<TimeMachineMixerBehaviour>::GetBehaviour()
inline TimeMachineMixerBehaviour_t391F72AACD7931B1F8B2BE3CEB3856E4101BA5FF * ScriptPlayable_1_GetBehaviour_mFC307212AC88BC0A6333E6EE3FDEA7CBA7229433 (ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F * __this, const RuntimeMethod* method)
{
	return ((  TimeMachineMixerBehaviour_t391F72AACD7931B1F8B2BE3CEB3856E4101BA5FF * (*) (ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F *, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_mA09CBA9730AC80E48578D8F3EF33EBFCE5F1A389_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor()
inline void Dictionary_2__ctor_mC22ED3BFECBBE4D11BC2AA0FE5AB45376E804C72 (Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 *, const RuntimeMethod*))Dictionary_2__ctor_mC9756B0940CB836F3D77F6874F14F9DFBC53F60F_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::GetClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackAsset_GetClips_m290A1712F5CDEAB3F9453646FCFAF84840D9738E (TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Timeline.TimelineClip::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * TimelineClip_get_asset_mCF4C0F2153BF18362958432960C87A24B5534245 (TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * __this, const RuntimeMethod* method);
// System.String UnityEngine.Timeline.TimelineClip::get_displayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimelineClip_get_displayName_m8F559E53A3EF1D7A4B71BCADA800F047E68C98F5 (TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mD0BAB15F653B724AA5A2FD7DCA934E785D3526B5 (Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m9C61D4B354C66BE2D1266B93A4D35F07C3690D7D_gshared)(__this, p0, method);
}
// System.Double UnityEngine.Timeline.TimelineClip::get_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimelineClip_get_start_m26E1BDDF2F0B4C5D7D588F4A1606C02F3C53D665 (TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Add(!0,!1)
inline void Dictionary_2_Add_mF8CEBB83537EDF9076A06B61C2115BBDDE70DAA4 (Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 * __this, String_t* p0, double p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 *, String_t*, double, const RuntimeMethod*))Dictionary_2_Add_m34CF1F4780E77146F5F519964AD0BF4C2283BD43_gshared)(__this, p0, p1, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3 (float* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.TimelineClip::set_displayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineClip_set_displayName_m21424F9A27CD27D4B8D597D35E3C72DA47165EC7 (TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<TimeMachineMixerBehaviour>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_m304D07E35BA0AD189838E6F2CE6D8AE9DE5978CE (ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F  p0, const RuntimeMethod* method)
{
	return ((  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  (*) (ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F , const RuntimeMethod*))ScriptPlayable_1_op_Implicit_m9EAB3B552405A6DF1C2DAC402E792EC2D54F3E7E_gshared)(p0, method);
}
// System.Void UnityEngine.Timeline.TrackAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackAsset__ctor_m2342B924DA6AB605CF953BA756D3570B932B1C05 (TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableDirector::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableDirector_Play_m10B6B7392DBAFF0C77513FDE4A805AD0B54DF919 (PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableDirector::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableDirector_get_duration_m013AF0115FBB4698CBC7A4253DAB99F44502DBD8 (PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m979EDEF812D4630882E2E8346776B6CA5A9176BF (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.Playable>(!!0)
inline double PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m53CBEE1F47F3B46C3D0BCA39166F991261A809A5 (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, const RuntimeMethod* method)
{
	return ((  double (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m53CBEE1F47F3B46C3D0BCA39166F991261A809A5_gshared)(p0, method);
}
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.UnityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mE42363D886E6DD7F075A6AEA689434C8E96722D9 (UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5 (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::Linear(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * AnimationCurve_Linear_m1391DBE6C481643128387302FAB1142D1F13438A (float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::EaseInOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * AnimationCurve_EaseInOut_m05634A1E02A101E8FFEF7479ED4CF821270F483C (float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_mE96A877D927BEEC8C9368A0673FEAD77A78C35EE (PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<TransformTweenBehaviour>::Create(UnityEngine.Playables.PlayableGraph,!0,System.Int32)
inline ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773  ScriptPlayable_1_Create_m2CEEA8255AEE11C3090A5C140AC99BC245458B31 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  p0, TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * p1, int32_t p2, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773  (*) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA , TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 *, int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_m3D1B231E561819ABAAA1FB9D506C471917BF32FF_gshared)(p0, p1, p2, method);
}
// !0 UnityEngine.Playables.ScriptPlayable`1<TransformTweenBehaviour>::GetBehaviour()
inline TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * ScriptPlayable_1_GetBehaviour_m2DC91BA5C7F328043B3C410DEB77ADA7A7E2E59C (ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773 * __this, const RuntimeMethod* method)
{
	return ((  TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * (*) (ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773 *, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_mA09CBA9730AC80E48578D8F3EF33EBFCE5F1A389_gshared)(__this, method);
}
// UnityEngine.IExposedPropertyTable UnityEngine.Playables.PlayableGraph::GetResolver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableGraph_GetResolver_m52F92B131B65F7412D220BB853C562C5983E884E (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * __this, const RuntimeMethod* method);
// !0 UnityEngine.ExposedReference`1<UnityEngine.Transform>::Resolve(UnityEngine.IExposedPropertyTable)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ExposedReference_1_Resolve_m20E0F9433D521189666CFB2B4D14B1FC842F6CAE (ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8 *, RuntimeObject*, const RuntimeMethod*))ExposedReference_1_Resolve_mF43C30F01A46E28ED9E30F196A07C80CAD88F2EC_gshared)(__this, p0, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<TransformTweenBehaviour>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_mA0DC2602763CD75EDA67D4D702DE684BF78F3A06 (ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773  p0, const RuntimeMethod* method)
{
	return ((  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  (*) (ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773 , const RuntimeMethod*))ScriptPlayable_1_op_Implicit_m9EAB3B552405A6DF1C2DAC402E792EC2D54F3E7E_gshared)(p0, method);
}
// System.Void TransformTweenBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformTweenBehaviour__ctor_mC6A2D919EDEEF2481DA918706E3D2520294FF383 (TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_m669F459CFACFE65873346E428F206C457B488167 (PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(!!0)
inline int32_t PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mC15D789D7CD8858FC1EBCA1ACC56F6C7AD829B3B (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mC15D789D7CD8858FC1EBCA1ACC56F6C7AD829B3B_gshared)(p0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(!!0,System.Int32)
inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m02EFE600B3A94F99F824DCDD0680EF46E16B687D (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , int32_t, const RuntimeMethod*))PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m02EFE600B3A94F99F824DCDD0680EF46E16B687D_gshared)(p0, p1, method);
}
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<TransformTweenBehaviour>::op_Explicit(UnityEngine.Playables.Playable)
inline ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773  ScriptPlayable_1_op_Explicit_m2458B65C8E6DB25A6058E2FBCCC48F4B447798A6 (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773  (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))ScriptPlayable_1_op_Explicit_m8164D46EB091E8DC3F521E6A747A5FCCE5C5D9DF_gshared)(p0, method);
}
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(!!0,System.Int32)
inline float PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBBA41EE4D02AA0A1B68FCD6F432BD9C3C06E2F0C (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  float (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , int32_t, const RuntimeMethod*))PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBBA41EE4D02AA0A1B68FCD6F432BD9C3C06E2F0C_gshared)(p0, p1, method);
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.ScriptPlayable`1<TransformTweenBehaviour>>(!!0)
inline double PlayableExtensions_GetTime_TisScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773_m7B52C65563305C5F5D8F4B4DFDFEB837EA13050A (ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773  p0, const RuntimeMethod* method)
{
	return ((  double (*) (ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773 , const RuntimeMethod*))PlayableExtensions_GetTime_TisScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_mCA8F18AC5DB99E99ADD22DC6778976D866A5C289_gshared)(p0, method);
}
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, float p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Quaternion TransformTweenMixerBehaviour::NormalizeQuaternion(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformTweenMixerBehaviour_NormalizeQuaternion_m8032F9E77603C3B5A6B94195500F3C7036FE7110 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_Dot_m0C931CC8127C5461E5B8A857BDE2CE09297E468B (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion TransformTweenMixerBehaviour::ScaleQuaternion(UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformTweenMixerBehaviour_ScaleQuaternion_mB55BED218B3922538654BBFDC9652952D13B9F5E (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, float ___multiplier1, const RuntimeMethod* method);
// UnityEngine.Quaternion TransformTweenMixerBehaviour::AddQuaternions(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformTweenMixerBehaviour_AddQuaternions_m8AF9545316B039F22B4CF5B1B3675217A0483728 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___first0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___second1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Single TransformTweenMixerBehaviour::QuaternionMagnitude(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformTweenMixerBehaviour_QuaternionMagnitude_mB086141643389598A85138FAB755DE079AFA284F (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<TransformTweenMixerBehaviour>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
inline ScriptPlayable_1_tAAB01E5283A1836AF975FA63B80261EE882FABB5  ScriptPlayable_1_Create_mA3E706454A7474C15E765B8DED248FA1D51756EB (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_tAAB01E5283A1836AF975FA63B80261EE882FABB5  (*) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA , int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mCB0EAF3B738D54C2C229A229B9A5AC2FCB1DB2F2_gshared)(p0, p1, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<TransformTweenMixerBehaviour>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_mD924E56F3E8E257541F07B50351B6A194BC4D4CB (ScriptPlayable_1_tAAB01E5283A1836AF975FA63B80261EE882FABB5  p0, const RuntimeMethod* method)
{
	return ((  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  (*) (ScriptPlayable_1_tAAB01E5283A1836AF975FA63B80261EE882FABB5 , const RuntimeMethod*))ScriptPlayable_1_op_Implicit_m9EAB3B552405A6DF1C2DAC402E792EC2D54F3E7E_gshared)(p0, method);
}
// System.Void UnityEngine.Timeline.TrackAsset::GatherProperties(UnityEngine.Playables.PlayableDirector,UnityEngine.Timeline.IPropertyCollector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackAsset_GatherProperties_mBA4F9493F51A158265B8D17E158CAD5336E83FF3 (TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * __this, PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * p0, RuntimeObject* p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_mE0003493BE2BC151ECB65F8FA10FD87DD2D380E9 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m54DC93F781FFEAB1DCDFAA3D15FA2FC01BF7667A (int32_t p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_back_mE7EF8625637E6F8B9E6B42A6AE140777C51E02F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_mBC5947EA49ED797F0DB1830BFC13AF6514B765FD (int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F (int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m726EDCD35F8DECF774810AB1E9ED590B85DB10F1 (int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431 (bool p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mFA83B0C0BABD3113D1AAB38FBB953C91EA7FFA30 (int32_t p0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496 (String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47 (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Input_get_mouseScrollDelta_mC314425F4261A9D7E8EA72705F7AF8CB110D5B94 (const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_m1B8281ABF2A3296F5DE47064F3757FD481E446EE (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_mC4C84789CEE27DEC5A70AAF00FC71FE990519AFE (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_m405C51A0B661CF16A1A4F5A162529398E1DAC358 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m8552062EB90FFEEA837B63DD22A9CB4F438EABDE (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.Playable TimeMachineTrack::CreateTrackMixer(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  TimeMachineTrack_CreateTrackMixer_m4BAFD10DF40641F1C69CA9A743D5DDCC865E6775 (TimeMachineTrack_tCFFEA4DA170AD33CDFD4F156EBFDD4B689818820 * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___go1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeMachineTrack_CreateTrackMixer_m4BAFD10DF40641F1C69CA9A743D5DDCC865E6775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeMachineMixerBehaviour_t391F72AACD7931B1F8B2BE3CEB3856E4101BA5FF * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * V_3 = NULL;
	TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781 * V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var scriptPlayable = ScriptPlayable<TimeMachineMixerBehaviour>.Create(graph, inputCount);
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		int32_t L_1 = ___inputCount2;
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F  L_2 = ScriptPlayable_1_Create_m9B9CD4EA3A47A0F58F27A85097674CC3EDDACCF6(L_0, L_1, /*hidden argument*/ScriptPlayable_1_Create_m9B9CD4EA3A47A0F58F27A85097674CC3EDDACCF6_RuntimeMethod_var);
		V_0 = L_2;
		// TimeMachineMixerBehaviour b = scriptPlayable.GetBehaviour();
		TimeMachineMixerBehaviour_t391F72AACD7931B1F8B2BE3CEB3856E4101BA5FF * L_3 = ScriptPlayable_1_GetBehaviour_mFC307212AC88BC0A6333E6EE3FDEA7CBA7229433((ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F *)(&V_0), /*hidden argument*/ScriptPlayable_1_GetBehaviour_mFC307212AC88BC0A6333E6EE3FDEA7CBA7229433_RuntimeMethod_var);
		V_1 = L_3;
		// b.markerClips = new System.Collections.Generic.Dictionary<string, double>();
		TimeMachineMixerBehaviour_t391F72AACD7931B1F8B2BE3CEB3856E4101BA5FF * L_4 = V_1;
		Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 * L_5 = (Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 *)il2cpp_codegen_object_new(Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC22ED3BFECBBE4D11BC2AA0FE5AB45376E804C72(L_5, /*hidden argument*/Dictionary_2__ctor_mC22ED3BFECBBE4D11BC2AA0FE5AB45376E804C72_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_markerClips_0(L_5);
		// foreach (var c in GetClips())
		RuntimeObject* L_6 = TrackAsset_GetClips_m290A1712F5CDEAB3F9453646FCFAF84840D9738E(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject* L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TimelineClip>::GetEnumerator() */, IEnumerable_1_t594F7C751FE4B8BAB474313B48B4BF2960B12879_il2cpp_TypeInfo_var, L_6);
		V_2 = L_7;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0154;
		}

IL_002e:
		{
			// foreach (var c in GetClips())
			RuntimeObject* L_8 = V_2;
			NullCheck(L_8);
			TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * L_9 = InterfaceFuncInvoker0< TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Timeline.TimelineClip>::get_Current() */, IEnumerator_1_tE8C6716AE5A02D3C9D6DD62A2326CD99E0687446_il2cpp_TypeInfo_var, L_8);
			V_3 = L_9;
			// TimeMachineClip clip = (TimeMachineClip)c.asset;
			TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * L_10 = V_3;
			NullCheck(L_10);
			Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_11 = TimelineClip_get_asset_mCF4C0F2153BF18362958432960C87A24B5534245(L_10, /*hidden argument*/NULL);
			V_4 = ((TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781 *)CastclassClass((RuntimeObject*)L_11, TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781_il2cpp_TypeInfo_var));
			// string clipName = c.displayName;
			TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * L_12 = V_3;
			NullCheck(L_12);
			String_t* L_13 = TimelineClip_get_displayName_m8F559E53A3EF1D7A4B71BCADA800F047E68C98F5(L_12, /*hidden argument*/NULL);
			V_5 = L_13;
			// switch(clip.action)
			TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781 * L_14 = V_4;
			NullCheck(L_14);
			int32_t L_15 = L_14->get_action_5();
			V_6 = L_15;
			int32_t L_16 = V_6;
			switch (L_16)
			{
				case 0:
				{
					goto IL_007c;
				}
				case 1:
				{
					goto IL_00e7;
				}
				case 2:
				{
					goto IL_00cd;
				}
				case 3:
				{
					goto IL_0070;
				}
			}
		}

IL_006b:
		{
			goto IL_0101;
		}

IL_0070:
		{
			// clipName = "||";
			V_5 = _stringLiteralC65F37B2CB1AE26C89E9B4F26E2CA9E9CDE4AE5B;
			// break;
			goto IL_0101;
		}

IL_007c:
		{
			// clipName = "? " + clip.markerLabel.ToString();
			TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781 * L_17 = V_4;
			NullCheck(L_17);
			String_t* L_18 = L_17->get_markerLabel_8();
			NullCheck(L_18);
			String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
			String_t* L_20 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral2D006BC0A688DEF2B1C858BAA109815C681A131F, L_19, /*hidden argument*/NULL);
			V_5 = L_20;
			// if(!b.markerClips.ContainsKey(clip.markerLabel)) //happens when you duplicate a clip and it has the same markerLabel
			TimeMachineMixerBehaviour_t391F72AACD7931B1F8B2BE3CEB3856E4101BA5FF * L_21 = V_1;
			NullCheck(L_21);
			Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 * L_22 = L_21->get_markerClips_0();
			TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781 * L_23 = V_4;
			NullCheck(L_23);
			String_t* L_24 = L_23->get_markerLabel_8();
			NullCheck(L_22);
			bool L_25 = Dictionary_2_ContainsKey_mD0BAB15F653B724AA5A2FD7DCA934E785D3526B5(L_22, L_24, /*hidden argument*/Dictionary_2_ContainsKey_mD0BAB15F653B724AA5A2FD7DCA934E785D3526B5_RuntimeMethod_var);
			V_7 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
			bool L_26 = V_7;
			if (!L_26)
			{
				goto IL_00cb;
			}
		}

IL_00af:
		{
			// b.markerClips.Add(clip.markerLabel, (double)c.start);
			TimeMachineMixerBehaviour_t391F72AACD7931B1F8B2BE3CEB3856E4101BA5FF * L_27 = V_1;
			NullCheck(L_27);
			Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 * L_28 = L_27->get_markerClips_0();
			TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781 * L_29 = V_4;
			NullCheck(L_29);
			String_t* L_30 = L_29->get_markerLabel_8();
			TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * L_31 = V_3;
			NullCheck(L_31);
			double L_32 = TimelineClip_get_start_m26E1BDDF2F0B4C5D7D588F4A1606C02F3C53D665(L_31, /*hidden argument*/NULL);
			NullCheck(L_28);
			Dictionary_2_Add_mF8CEBB83537EDF9076A06B61C2115BBDDE70DAA4(L_28, L_30, (((double)((double)L_32))), /*hidden argument*/Dictionary_2_Add_mF8CEBB83537EDF9076A06B61C2115BBDDE70DAA4_RuntimeMethod_var);
		}

IL_00cb:
		{
			// break;
			goto IL_0101;
		}

IL_00cd:
		{
			// clipName = "??  " + clip.markerToJumpTo.ToString();
			TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781 * L_33 = V_4;
			NullCheck(L_33);
			String_t* L_34 = L_33->get_markerToJumpTo_7();
			NullCheck(L_34);
			String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
			String_t* L_36 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralFD994B5ACA714CF15F378E6FC3E48ABD08EF904D, L_35, /*hidden argument*/NULL);
			V_5 = L_36;
			// break;
			goto IL_0101;
		}

IL_00e7:
		{
			// clipName = "? " + clip.timeToJumpTo.ToString();
			TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781 * L_37 = V_4;
			NullCheck(L_37);
			float* L_38 = L_37->get_address_of_timeToJumpTo_9();
			String_t* L_39 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_38, /*hidden argument*/NULL);
			String_t* L_40 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralB96A5CCD87AB1C6C6AEC0944530C96285662FF34, L_39, /*hidden argument*/NULL);
			V_5 = L_40;
			// break;
			goto IL_0101;
		}

IL_0101:
		{
			// c.displayName = clipName;
			TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * L_41 = V_3;
			String_t* L_42 = V_5;
			NullCheck(L_41);
			TimelineClip_set_displayName_m21424F9A27CD27D4B8D597D35E3C72DA47165EC7(L_41, L_42, /*hidden argument*/NULL);
			// if(clip.action == TimeMachineBehaviour.TimeMachineAction.Marker)
			TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781 * L_43 = V_4;
			NullCheck(L_43);
			int32_t L_44 = L_43->get_action_5();
			V_8 = (bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
			bool L_45 = V_8;
			if (!L_45)
			{
				goto IL_0153;
			}
		}

IL_011a:
		{
			// if(!b.markerClips.ContainsKey(clip.markerLabel)) //happens when you duplicate a clip and it has the same markerLabel
			TimeMachineMixerBehaviour_t391F72AACD7931B1F8B2BE3CEB3856E4101BA5FF * L_46 = V_1;
			NullCheck(L_46);
			Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 * L_47 = L_46->get_markerClips_0();
			TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781 * L_48 = V_4;
			NullCheck(L_48);
			String_t* L_49 = L_48->get_markerLabel_8();
			NullCheck(L_47);
			bool L_50 = Dictionary_2_ContainsKey_mD0BAB15F653B724AA5A2FD7DCA934E785D3526B5(L_47, L_49, /*hidden argument*/Dictionary_2_ContainsKey_mD0BAB15F653B724AA5A2FD7DCA934E785D3526B5_RuntimeMethod_var);
			V_9 = (bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
			bool L_51 = V_9;
			if (!L_51)
			{
				goto IL_0152;
			}
		}

IL_0136:
		{
			// b.markerClips.Add(clip.markerLabel, (double)c.start);
			TimeMachineMixerBehaviour_t391F72AACD7931B1F8B2BE3CEB3856E4101BA5FF * L_52 = V_1;
			NullCheck(L_52);
			Dictionary_2_tD9E97F40821434226F92E86AFDAE50D233468602 * L_53 = L_52->get_markerClips_0();
			TimeMachineClip_t16FF82F4CDCEF9F349BFEB031906BA98E2CAC781 * L_54 = V_4;
			NullCheck(L_54);
			String_t* L_55 = L_54->get_markerLabel_8();
			TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * L_56 = V_3;
			NullCheck(L_56);
			double L_57 = TimelineClip_get_start_m26E1BDDF2F0B4C5D7D588F4A1606C02F3C53D665(L_56, /*hidden argument*/NULL);
			NullCheck(L_53);
			Dictionary_2_Add_mF8CEBB83537EDF9076A06B61C2115BBDDE70DAA4(L_53, L_55, (((double)((double)L_57))), /*hidden argument*/Dictionary_2_Add_mF8CEBB83537EDF9076A06B61C2115BBDDE70DAA4_RuntimeMethod_var);
		}

IL_0152:
		{
		}

IL_0153:
		{
		}

IL_0154:
		{
			// foreach (var c in GetClips())
			RuntimeObject* L_58 = V_2;
			NullCheck(L_58);
			bool L_59 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_58);
			if (L_59)
			{
				goto IL_002e;
			}
		}

IL_015f:
		{
			IL2CPP_LEAVE(0x16C, FINALLY_0161);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0161;
	}

FINALLY_0161:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_60 = V_2;
			if (!L_60)
			{
				goto IL_016b;
			}
		}

IL_0164:
		{
			RuntimeObject* L_61 = V_2;
			NullCheck(L_61);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_61);
		}

IL_016b:
		{
			IL2CPP_END_FINALLY(353)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(353)
	{
		IL2CPP_JUMP_TBL(0x16C, IL_016c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_016c:
	{
		// return scriptPlayable;
		ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F  L_62 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t793B211C8932AE73E6347A6D2B8F763753F86A3F_il2cpp_TypeInfo_var);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_63 = ScriptPlayable_1_op_Implicit_m304D07E35BA0AD189838E6F2CE6D8AE9DE5978CE(L_62, /*hidden argument*/ScriptPlayable_1_op_Implicit_m304D07E35BA0AD189838E6F2CE6D8AE9DE5978CE_RuntimeMethod_var);
		V_10 = L_63;
		goto IL_0176;
	}

IL_0176:
	{
		// }
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_64 = V_10;
		return L_64;
	}
}
// System.Void TimeMachineTrack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeMachineTrack__ctor_mD17B28DAA35D81C61FC6C009524480DC7999220A (TimeMachineTrack_tCFFEA4DA170AD33CDFD4F156EBFDD4B689818820 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeMachineTrack__ctor_mD17B28DAA35D81C61FC6C009524480DC7999220A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_il2cpp_TypeInfo_var);
		TrackAsset__ctor_m2342B924DA6AB605CF953BA756D3570B932B1C05(__this, /*hidden argument*/NULL);
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
// System.Void TimelineTriggerZone::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineTriggerZone_OnTriggerEnter_m3CE5B6D84310033E2BB29ED046699F09B2D3A61F (TimelineTriggerZone_t81BC71812B42BF6F2755CB6748430ABAFBC69C51 * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimelineTriggerZone_OnTriggerEnter_m3CE5B6D84310033E2BB29ED046699F09B2D3A61F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if (other.gameObject != triggeringGameObject)
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_triggeringGameObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		goto IL_0066;
	}

IL_0018:
	{
		// if (triggerType == TriggerType.Once && m_AlreadyTriggered)
		int32_t L_5 = __this->get_triggerType_6();
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		bool L_6 = __this->get_m_AlreadyTriggered_9();
		G_B5_0 = ((int32_t)(L_6));
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return;
		goto IL_0066;
	}

IL_002f:
	{
		// OnDirectorPlay.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_8 = __this->get_OnDirectorPlay_7();
		NullCheck(L_8);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_8, /*hidden argument*/NULL);
		// director.Play();
		PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * L_9 = __this->get_director_5();
		NullCheck(L_9);
		PlayableDirector_Play_m10B6B7392DBAFF0C77513FDE4A805AD0B54DF919(L_9, /*hidden argument*/NULL);
		// m_AlreadyTriggered = true;
		__this->set_m_AlreadyTriggered_9((bool)1);
		// Invoke("FinishInvoke", (float)director.duration);
		PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * L_10 = __this->get_director_5();
		NullCheck(L_10);
		double L_11 = PlayableDirector_get_duration_m013AF0115FBB4698CBC7A4253DAB99F44502DBD8(L_10, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m979EDEF812D4630882E2E8346776B6CA5A9176BF(__this, _stringLiteralA0CCC2B81796C9322AD9A076494939A68FCC6B42, (((float)((float)L_11))), /*hidden argument*/NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void TimelineTriggerZone::FinishInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineTriggerZone_FinishInvoke_m568308AB0C35ABB494AF4F8AC1134269A63561A0 (TimelineTriggerZone_t81BC71812B42BF6F2755CB6748430ABAFBC69C51 * __this, const RuntimeMethod* method)
{
	{
		// OnDirectorFinish.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_OnDirectorFinish_8();
		NullCheck(L_0);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TimelineTriggerZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineTriggerZone__ctor_m5453C7F2F43A9BC0EA82193FF1A9223F859C9862 (TimelineTriggerZone_t81BC71812B42BF6F2755CB6748430ABAFBC69C51 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void TransformTweenBehaviour::OnGraphStart(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformTweenBehaviour_OnGraphStart_mE50EB038689911D036DCBC3BA71F4E22AF4E4BE6 (TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * __this, Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformTweenBehaviour_OnGraphStart_mE50EB038689911D036DCBC3BA71F4E22AF4E4BE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// double duration = playable.GetDuration();
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_0 = ___playable0;
		double L_1 = PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m53CBEE1F47F3B46C3D0BCA39166F991261A809A5(L_0, /*hidden argument*/PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m53CBEE1F47F3B46C3D0BCA39166F991261A809A5_RuntimeMethod_var);
		V_0 = L_1;
		// if (Mathf.Approximately((float)duration, 0f))
		double L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_3 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E((((float)((float)L_2))), (0.0f), /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// throw new UnityException("A TransformTween cannot have a duration of zero.");
		UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * L_5 = (UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 *)il2cpp_codegen_object_new(UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28_il2cpp_TypeInfo_var);
		UnityException__ctor_mE42363D886E6DD7F075A6AEA689434C8E96722D9(L_5, _stringLiteral57517E8B61891208A83D07B2FD101067361603E5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, TransformTweenBehaviour_OnGraphStart_mE50EB038689911D036DCBC3BA71F4E22AF4E4BE6_RuntimeMethod_var);
	}

IL_0023:
	{
		// inverseDuration = 1f / (float)duration;
		double L_6 = V_0;
		__this->set_inverseDuration_7(((float)((float)(1.0f)/(float)(((float)((float)L_6))))));
		// m_CustomCurve = new AnimationCurve
		// (
		//     new Keyframe(0f, 0f, -customStartingSpeed * k_RightAngleInRads, customStartingSpeed * k_RightAngleInRads),
		//     new Keyframe(1f, 1f, customEndingSpeed * k_RightAngleInRads, customEndingSpeed * k_RightAngleInRads)
		// );
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_7 = (KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)SZArrayNew(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_8 = L_7;
		float L_9 = __this->get_customStartingSpeed_5();
		float L_10 = __this->get_customStartingSpeed_5();
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_11), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)((-L_9)), (float)(1.57079637f))), ((float)il2cpp_codegen_multiply((float)L_10, (float)(1.57079637f))), /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_11);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_12 = L_8;
		float L_13 = __this->get_customEndingSpeed_6();
		float L_14 = __this->get_customEndingSpeed_6();
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_15), (1.0f), (1.0f), ((float)il2cpp_codegen_multiply((float)L_13, (float)(1.57079637f))), ((float)il2cpp_codegen_multiply((float)L_14, (float)(1.57079637f))), /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_15);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_16 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF(L_16, L_12, /*hidden argument*/NULL);
		__this->set_m_CustomCurve_14(L_16);
		// switch (tweenType)
		int32_t L_17 = __this->get_tweenType_4();
		V_2 = L_17;
		int32_t L_18 = V_2;
		switch (L_18)
		{
			case 0:
			{
				goto IL_00be;
			}
			case 1:
			{
				goto IL_00cc;
			}
			case 2:
			{
				goto IL_00da;
			}
			case 3:
			{
				goto IL_00e8;
			}
		}
	}
	{
		goto IL_00f6;
	}

IL_00be:
	{
		// currentCurve = m_LinearCurve;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_19 = __this->get_m_LinearCurve_11();
		__this->set_currentCurve_10(L_19);
		// break;
		goto IL_00f6;
	}

IL_00cc:
	{
		// currentCurve = m_DecelerationCurve;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_20 = __this->get_m_DecelerationCurve_12();
		__this->set_currentCurve_10(L_20);
		// break;
		goto IL_00f6;
	}

IL_00da:
	{
		// currentCurve = m_HarmonicCurve;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_21 = __this->get_m_HarmonicCurve_13();
		__this->set_currentCurve_10(L_21);
		// break;
		goto IL_00f6;
	}

IL_00e8:
	{
		// currentCurve = m_CustomCurve;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_22 = __this->get_m_CustomCurve_14();
		__this->set_currentCurve_10(L_22);
		// break;
		goto IL_00f6;
	}

IL_00f6:
	{
		// if (startLocation)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = __this->get_startLocation_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_0129;
		}
	}
	{
		// startingPosition = startLocation.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = __this->get_startLocation_0();
		NullCheck(L_26);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_26, /*hidden argument*/NULL);
		__this->set_startingPosition_8(L_27);
		// startingRotation = startLocation.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = __this->get_startLocation_0();
		NullCheck(L_28);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_28, /*hidden argument*/NULL);
		__this->set_startingRotation_9(L_29);
	}

IL_0129:
	{
		// }
		return;
	}
}
// System.Void TransformTweenBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformTweenBehaviour__ctor_mC6A2D919EDEEF2481DA918706E3D2520294FF383 (TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformTweenBehaviour__ctor_mC6A2D919EDEEF2481DA918706E3D2520294FF383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool tweenPosition = true;
		__this->set_tweenPosition_2((bool)1);
		// public bool tweenRotation = true;
		__this->set_tweenRotation_3((bool)1);
		// AnimationCurve m_LinearCurve = AnimationCurve.Linear(0f, 0f, 1f, 1f);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = AnimationCurve_Linear_m1391DBE6C481643128387302FAB1142D1F13438A((0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_LinearCurve_11(L_0);
		// AnimationCurve m_DecelerationCurve = new AnimationCurve
		// (
		//     new Keyframe(0f, 0f, -k_RightAngleInRads, k_RightAngleInRads),
		//     new Keyframe(1f, 1f, 0f, 0f)
		// );
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_1 = (KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)SZArrayNew(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_2 = L_1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_3), (0.0f), (0.0f), (-1.57079637f), (1.57079637f), /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_3);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_4 = L_2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_5), (1.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_5);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_6 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF(L_6, L_4, /*hidden argument*/NULL);
		__this->set_m_DecelerationCurve_12(L_6);
		// AnimationCurve m_HarmonicCurve = AnimationCurve.EaseInOut(0f, 0f, 1f, 1f);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_7 = AnimationCurve_EaseInOut_m05634A1E02A101E8FFEF7479ED4CF821270F483C((0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_HarmonicCurve_13(L_7);
		PlayableBehaviour__ctor_mE96A877D927BEEC8C9368A0673FEAD77A78C35EE(__this, /*hidden argument*/NULL);
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
// UnityEngine.Timeline.ClipCaps TransformTweenClip::get_clipCaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransformTweenClip_get_clipCaps_mF260E635E95FBB6EF81FA928FBD9811935062D21 (TransformTweenClip_t0A6128E795D5741A9F2875145412CC757B59FB91 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return ClipCaps.Blending; }
		V_0 = ((int32_t)16);
		goto IL_0006;
	}

IL_0006:
	{
		// get { return ClipCaps.Blending; }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Playables.Playable TransformTweenClip::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  TransformTweenClip_CreatePlayable_m49F8A415228725185BBE3FD9C664D04EB4EB7B8E (TransformTweenClip_t0A6128E795D5741A9F2875145412CC757B59FB91 * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___owner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformTweenClip_CreatePlayable_m49F8A415228725185BBE3FD9C664D04EB4EB7B8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * V_1 = NULL;
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var playable = ScriptPlayable<TransformTweenBehaviour>.Create (graph, template);
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_1 = __this->get_template_4();
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773_il2cpp_TypeInfo_var);
		ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773  L_2 = ScriptPlayable_1_Create_m2CEEA8255AEE11C3090A5C140AC99BC245458B31(L_0, L_1, 0, /*hidden argument*/ScriptPlayable_1_Create_m2CEEA8255AEE11C3090A5C140AC99BC245458B31_RuntimeMethod_var);
		V_0 = L_2;
		// TransformTweenBehaviour clone = playable.GetBehaviour ();
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_3 = ScriptPlayable_1_GetBehaviour_m2DC91BA5C7F328043B3C410DEB77ADA7A7E2E59C((ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773 *)(&V_0), /*hidden argument*/ScriptPlayable_1_GetBehaviour_m2DC91BA5C7F328043B3C410DEB77ADA7A7E2E59C_RuntimeMethod_var);
		V_1 = L_3;
		// clone.startLocation = startLocation.Resolve (graph.GetResolver ());
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_4 = V_1;
		ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8 * L_5 = __this->get_address_of_startLocation_5();
		RuntimeObject* L_6 = PlayableGraph_GetResolver_m52F92B131B65F7412D220BB853C562C5983E884E((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ExposedReference_1_Resolve_m20E0F9433D521189666CFB2B4D14B1FC842F6CAE((ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8 *)L_5, L_6, /*hidden argument*/ExposedReference_1_Resolve_m20E0F9433D521189666CFB2B4D14B1FC842F6CAE_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_startLocation_0(L_7);
		// clone.endLocation = endLocation.Resolve (graph.GetResolver ());
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_8 = V_1;
		ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8 * L_9 = __this->get_address_of_endLocation_6();
		RuntimeObject* L_10 = PlayableGraph_GetResolver_m52F92B131B65F7412D220BB853C562C5983E884E((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = ExposedReference_1_Resolve_m20E0F9433D521189666CFB2B4D14B1FC842F6CAE((ExposedReference_1_tF50E1CC2339BA16381296E56127D09039F59F3F8 *)L_9, L_10, /*hidden argument*/ExposedReference_1_Resolve_m20E0F9433D521189666CFB2B4D14B1FC842F6CAE_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->set_endLocation_1(L_11);
		// return playable;
		ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773  L_12 = V_0;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_13 = ScriptPlayable_1_op_Implicit_mA0DC2602763CD75EDA67D4D702DE684BF78F3A06(L_12, /*hidden argument*/ScriptPlayable_1_op_Implicit_mA0DC2602763CD75EDA67D4D702DE684BF78F3A06_RuntimeMethod_var);
		V_2 = L_13;
		goto IL_0050;
	}

IL_0050:
	{
		// }
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_14 = V_2;
		return L_14;
	}
}
// System.Void TransformTweenClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformTweenClip__ctor_m3BCB38EFE3E0412521988BA6ADA919B920564D4E (TransformTweenClip_t0A6128E795D5741A9F2875145412CC757B59FB91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformTweenClip__ctor_m3BCB38EFE3E0412521988BA6ADA919B920564D4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TransformTweenBehaviour template = new TransformTweenBehaviour ();
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_0 = (TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 *)il2cpp_codegen_object_new(TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157_il2cpp_TypeInfo_var);
		TransformTweenBehaviour__ctor_mC6A2D919EDEEF2481DA918706E3D2520294FF383(L_0, /*hidden argument*/NULL);
		__this->set_template_4(L_0);
		PlayableAsset__ctor_m669F459CFACFE65873346E428F206C457B488167(__this, /*hidden argument*/NULL);
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
// System.Void TransformTweenMixerBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformTweenMixerBehaviour_ProcessFrame_m2A727632CC8F4518D85D1A39CECF709617EF665F (TransformTweenMixerBehaviour_tE12462DD161403103B54A320CF952DF2EFF1E327 * __this, Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E  ___info1, RuntimeObject * ___playerData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformTweenMixerBehaviour_ProcessFrame_m2A727632CC8F4518D85D1A39CECF709617EF665F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t V_10 = 0;
	ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773  V_11;
	memset((&V_11), 0, sizeof(V_11));
	TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * V_12 = NULL;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	bool V_22 = false;
	int32_t G_B8_0 = 0;
	{
		// Transform trackBinding = playerData as Transform;
		RuntimeObject * L_0 = ___playerData2;
		V_0 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)IsInstClass((RuntimeObject*)L_0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var));
		// if(trackBinding == null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_9 = L_2;
		bool L_3 = V_9;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		goto IL_020e;
	}

IL_001a:
	{
		// Vector3 defaultPosition = trackBinding.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// Quaternion defaultRotation = trackBinding.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = V_0;
		NullCheck(L_6);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// int inputCount = playable.GetInputCount ();
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_8 = ___playable0;
		int32_t L_9 = PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mC15D789D7CD8858FC1EBCA1ACC56F6C7AD829B3B(L_8, /*hidden argument*/PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mC15D789D7CD8858FC1EBCA1ACC56F6C7AD829B3B_RuntimeMethod_var);
		V_3 = L_9;
		// float positionTotalWeight = 0f;
		V_4 = (0.0f);
		// float rotationTotalWeight = 0f;
		V_5 = (0.0f);
		// Vector3 blendedPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_6 = L_10;
		// Quaternion blendedRotation = new Quaternion(0f, 0f, 0f, 0f);
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_7), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// for (int i = 0; i < inputCount; i++)
		V_10 = 0;
		goto IL_01bc;
	}

IL_0067:
	{
		// ScriptPlayable<TransformTweenBehaviour> playableInput = (ScriptPlayable<TransformTweenBehaviour>)playable.GetInput (i);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_11 = ___playable0;
		int32_t L_12 = V_10;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_13 = PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m02EFE600B3A94F99F824DCDD0680EF46E16B687D(L_11, L_12, /*hidden argument*/PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m02EFE600B3A94F99F824DCDD0680EF46E16B687D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773_il2cpp_TypeInfo_var);
		ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773  L_14 = ScriptPlayable_1_op_Explicit_m2458B65C8E6DB25A6058E2FBCCC48F4B447798A6(L_13, /*hidden argument*/ScriptPlayable_1_op_Explicit_m2458B65C8E6DB25A6058E2FBCCC48F4B447798A6_RuntimeMethod_var);
		V_11 = L_14;
		// TransformTweenBehaviour input = playableInput.GetBehaviour ();
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_15 = ScriptPlayable_1_GetBehaviour_m2DC91BA5C7F328043B3C410DEB77ADA7A7E2E59C((ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773 *)(&V_11), /*hidden argument*/ScriptPlayable_1_GetBehaviour_m2DC91BA5C7F328043B3C410DEB77ADA7A7E2E59C_RuntimeMethod_var);
		V_12 = L_15;
		// if(input.endLocation == null)
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_16 = V_12;
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = L_16->get_endLocation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_17, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_16 = L_18;
		bool L_19 = V_16;
		if (!L_19)
		{
			goto IL_0098;
		}
	}
	{
		// continue;
		goto IL_01b6;
	}

IL_0098:
	{
		// float inputWeight = playable.GetInputWeight(i);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_20 = ___playable0;
		int32_t L_21 = V_10;
		float L_22 = PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBBA41EE4D02AA0A1B68FCD6F432BD9C3C06E2F0C(L_20, L_21, /*hidden argument*/PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBBA41EE4D02AA0A1B68FCD6F432BD9C3C06E2F0C_RuntimeMethod_var);
		V_13 = L_22;
		// if (!m_FirstFrameHappened && !input.startLocation)
		bool L_23 = __this->get_m_FirstFrameHappened_0();
		if (L_23)
		{
			goto IL_00bb;
		}
	}
	{
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_24 = V_12;
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = L_24->get_startLocation_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_25, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B8_0 = 0;
	}

IL_00bc:
	{
		V_17 = (bool)G_B8_0;
		bool L_27 = V_17;
		if (!L_27)
		{
			goto IL_00db;
		}
	}
	{
		// input.startingPosition = defaultPosition;
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_28 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_1;
		NullCheck(L_28);
		L_28->set_startingPosition_8(L_29);
		// input.startingRotation = defaultRotation;
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_30 = V_12;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_31 = V_2;
		NullCheck(L_30);
		L_30->set_startingRotation_9(L_31);
		// m_FirstFrameHappened = true;
		__this->set_m_FirstFrameHappened_0((bool)1);
	}

IL_00db:
	{
		// float normalisedTime = (float)(playableInput.GetTime() * input.inverseDuration);
		ScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773  L_32 = V_11;
		double L_33 = PlayableExtensions_GetTime_TisScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773_m7B52C65563305C5F5D8F4B4DFDFEB837EA13050A(L_32, /*hidden argument*/PlayableExtensions_GetTime_TisScriptPlayable_1_tB681575C0980F923CE0328C478B8F68DCA68C773_m7B52C65563305C5F5D8F4B4DFDFEB837EA13050A_RuntimeMethod_var);
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_34 = V_12;
		NullCheck(L_34);
		float L_35 = L_34->get_inverseDuration_7();
		V_14 = (((float)((float)((double)il2cpp_codegen_multiply((double)L_33, (double)(((double)((double)L_35))))))));
		// float tweenProgress = input.currentCurve.Evaluate(normalisedTime);
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_36 = V_12;
		NullCheck(L_36);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_37 = L_36->get_currentCurve_10();
		float L_38 = V_14;
		NullCheck(L_37);
		float L_39 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_37, L_38, /*hidden argument*/NULL);
		V_15 = L_39;
		// if (input.tweenPosition)
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_40 = V_12;
		NullCheck(L_40);
		bool L_41 = L_40->get_tweenPosition_2();
		V_18 = L_41;
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_013e;
		}
	}
	{
		// positionTotalWeight += inputWeight;
		float L_43 = V_4;
		float L_44 = V_13;
		V_4 = ((float)il2cpp_codegen_add((float)L_43, (float)L_44));
		// blendedPosition += Vector3.Lerp(input.startingPosition, input.endLocation.position, tweenProgress) * inputWeight;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = V_6;
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_46 = V_12;
		NullCheck(L_46);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = L_46->get_startingPosition_8();
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_48 = V_12;
		NullCheck(L_48);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_49 = L_48->get_endLocation_1();
		NullCheck(L_49);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_49, /*hidden argument*/NULL);
		float L_51 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_47, L_50, L_51, /*hidden argument*/NULL);
		float L_53 = V_13;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_52, L_53, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_45, L_54, /*hidden argument*/NULL);
		V_6 = L_55;
	}

IL_013e:
	{
		// if (input.tweenRotation)
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_56 = V_12;
		NullCheck(L_56);
		bool L_57 = L_56->get_tweenRotation_3();
		V_19 = L_57;
		bool L_58 = V_19;
		if (!L_58)
		{
			goto IL_01b5;
		}
	}
	{
		// rotationTotalWeight += inputWeight;
		float L_59 = V_5;
		float L_60 = V_13;
		V_5 = ((float)il2cpp_codegen_add((float)L_59, (float)L_60));
		// Quaternion desiredRotation = Quaternion.Lerp(input.startingRotation, input.endLocation.rotation, tweenProgress);
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_61 = V_12;
		NullCheck(L_61);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_62 = L_61->get_startingRotation_9();
		TransformTweenBehaviour_tBB8B275791CD9B57481AAEF7006811DD6DA2A157 * L_63 = V_12;
		NullCheck(L_63);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_64 = L_63->get_endLocation_1();
		NullCheck(L_64);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_65 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_64, /*hidden argument*/NULL);
		float L_66 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_67 = Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27(L_62, L_65, L_66, /*hidden argument*/NULL);
		V_20 = L_67;
		// desiredRotation = NormalizeQuaternion(desiredRotation);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_68 = V_20;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_69 = TransformTweenMixerBehaviour_NormalizeQuaternion_m8032F9E77603C3B5A6B94195500F3C7036FE7110(L_68, /*hidden argument*/NULL);
		V_20 = L_69;
		// if (Quaternion.Dot (blendedRotation, desiredRotation) < 0f)
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_70 = V_7;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_71 = V_20;
		float L_72 = Quaternion_Dot_m0C931CC8127C5461E5B8A857BDE2CE09297E468B(L_70, L_71, /*hidden argument*/NULL);
		V_21 = (bool)((((float)L_72) < ((float)(0.0f)))? 1 : 0);
		bool L_73 = V_21;
		if (!L_73)
		{
			goto IL_019e;
		}
	}
	{
		// desiredRotation = ScaleQuaternion (desiredRotation, -1f);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_74 = V_20;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_75 = TransformTweenMixerBehaviour_ScaleQuaternion_mB55BED218B3922538654BBFDC9652952D13B9F5E(L_74, (-1.0f), /*hidden argument*/NULL);
		V_20 = L_75;
	}

IL_019e:
	{
		// desiredRotation = ScaleQuaternion(desiredRotation, inputWeight);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_76 = V_20;
		float L_77 = V_13;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_78 = TransformTweenMixerBehaviour_ScaleQuaternion_mB55BED218B3922538654BBFDC9652952D13B9F5E(L_76, L_77, /*hidden argument*/NULL);
		V_20 = L_78;
		// blendedRotation = AddQuaternions (blendedRotation, desiredRotation);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_79 = V_7;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_80 = V_20;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_81 = TransformTweenMixerBehaviour_AddQuaternions_m8AF9545316B039F22B4CF5B1B3675217A0483728(L_79, L_80, /*hidden argument*/NULL);
		V_7 = L_81;
	}

IL_01b5:
	{
	}

IL_01b6:
	{
		// for (int i = 0; i < inputCount; i++)
		int32_t L_82 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
	}

IL_01bc:
	{
		// for (int i = 0; i < inputCount; i++)
		int32_t L_83 = V_10;
		int32_t L_84 = V_3;
		V_22 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_22;
		if (L_85)
		{
			goto IL_0067;
		}
	}
	{
		// blendedPosition += defaultPosition * (1f - positionTotalWeight);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_86 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_87 = V_1;
		float L_88 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_89 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_87, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_88)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_90 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_86, L_89, /*hidden argument*/NULL);
		V_6 = L_90;
		// Quaternion weightedDefaultRotation = ScaleQuaternion (defaultRotation, 1f - rotationTotalWeight);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_91 = V_2;
		float L_92 = V_5;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_93 = TransformTweenMixerBehaviour_ScaleQuaternion_mB55BED218B3922538654BBFDC9652952D13B9F5E(L_91, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_92)), /*hidden argument*/NULL);
		V_8 = L_93;
		// blendedRotation = AddQuaternions (blendedRotation, weightedDefaultRotation);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_94 = V_7;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_95 = V_8;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_96 = TransformTweenMixerBehaviour_AddQuaternions_m8AF9545316B039F22B4CF5B1B3675217A0483728(L_94, L_95, /*hidden argument*/NULL);
		V_7 = L_96;
		// trackBinding.position = blendedPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_97 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_98 = V_6;
		NullCheck(L_97);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_97, L_98, /*hidden argument*/NULL);
		// trackBinding.rotation = blendedRotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_99 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_100 = V_7;
		NullCheck(L_99);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_99, L_100, /*hidden argument*/NULL);
	}

IL_020e:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion TransformTweenMixerBehaviour::AddQuaternions(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformTweenMixerBehaviour_AddQuaternions_m8AF9545316B039F22B4CF5B1B3675217A0483728 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___first0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___second1, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// first.w += second.w;
		float* L_0 = (&___first0)->get_address_of_w_3();
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___second1;
		float L_4 = L_3.get_w_3();
		*((float*)L_1) = (float)((float)il2cpp_codegen_add((float)L_2, (float)L_4));
		// first.x += second.x;
		float* L_5 = (&___first0)->get_address_of_x_0();
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = ___second1;
		float L_9 = L_8.get_x_0();
		*((float*)L_6) = (float)((float)il2cpp_codegen_add((float)L_7, (float)L_9));
		// first.y += second.y;
		float* L_10 = (&___first0)->get_address_of_y_1();
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = ___second1;
		float L_14 = L_13.get_y_1();
		*((float*)L_11) = (float)((float)il2cpp_codegen_add((float)L_12, (float)L_14));
		// first.z += second.z;
		float* L_15 = (&___first0)->get_address_of_z_2();
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = ___second1;
		float L_19 = L_18.get_z_2();
		*((float*)L_16) = (float)((float)il2cpp_codegen_add((float)L_17, (float)L_19));
		// return first;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = ___first0;
		V_0 = L_20;
		goto IL_0049;
	}

IL_0049:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Quaternion TransformTweenMixerBehaviour::ScaleQuaternion(UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformTweenMixerBehaviour_ScaleQuaternion_mB55BED218B3922538654BBFDC9652952D13B9F5E (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, float ___multiplier1, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// rotation.w *= multiplier;
		float* L_0 = (&___rotation0)->get_address_of_w_3();
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___multiplier1;
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
		// rotation.x *= multiplier;
		float* L_4 = (&___rotation0)->get_address_of_x_0();
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = ___multiplier1;
		*((float*)L_5) = (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7));
		// rotation.y *= multiplier;
		float* L_8 = (&___rotation0)->get_address_of_y_1();
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		float L_11 = ___multiplier1;
		*((float*)L_9) = (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11));
		// rotation.z *= multiplier;
		float* L_12 = (&___rotation0)->get_address_of_z_2();
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		float L_15 = ___multiplier1;
		*((float*)L_13) = (float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15));
		// return rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = ___rotation0;
		V_0 = L_16;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = V_0;
		return L_17;
	}
}
// System.Single TransformTweenMixerBehaviour::QuaternionMagnitude(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformTweenMixerBehaviour_QuaternionMagnitude_mB086141643389598A85138FAB755DE079AFA284F (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformTweenMixerBehaviour_QuaternionMagnitude_mB086141643389598A85138FAB755DE079AFA284F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return Mathf.Sqrt ((Quaternion.Dot (rotation, rotation)));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___rotation0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		float L_2 = Quaternion_Dot_m0C931CC8127C5461E5B8A857BDE2CE09297E468B(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_3 = sqrtf(L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		float L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Quaternion TransformTweenMixerBehaviour::NormalizeQuaternion(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformTweenMixerBehaviour_NormalizeQuaternion_m8032F9E77603C3B5A6B94195500F3C7036FE7110 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformTweenMixerBehaviour_NormalizeQuaternion_m8032F9E77603C3B5A6B94195500F3C7036FE7110_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float magnitude = QuaternionMagnitude (rotation);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___rotation0;
		float L_1 = TransformTweenMixerBehaviour_QuaternionMagnitude_mB086141643389598A85138FAB755DE079AFA284F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (magnitude > 0f)
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return ScaleQuaternion (rotation, 1f / magnitude);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___rotation0;
		float L_5 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = TransformTweenMixerBehaviour_ScaleQuaternion_mB55BED218B3922538654BBFDC9652952D13B9F5E(L_4, ((float)((float)(1.0f)/(float)L_5)), /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0037;
	}

IL_0024:
	{
		// Debug.LogWarning ("Cannot normalize a quaternion with zero magnitude.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralFC60B029A7F7F32EAEF860695398640797794074, /*hidden argument*/NULL);
		// return Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = V_2;
		return L_8;
	}
}
// System.Void TransformTweenMixerBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformTweenMixerBehaviour__ctor_m9DA375A35F17FEFF2AF8419D9B4090B06FF6FB0E (TransformTweenMixerBehaviour_tE12462DD161403103B54A320CF952DF2EFF1E327 * __this, const RuntimeMethod* method)
{
	{
		PlayableBehaviour__ctor_mE96A877D927BEEC8C9368A0673FEAD77A78C35EE(__this, /*hidden argument*/NULL);
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
// UnityEngine.Playables.Playable TransformTweenTrack::CreateTrackMixer(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  TransformTweenTrack_CreateTrackMixer_m2409C5723CF8D8F98BE01FB8F7FF5820C6B06DC3 (TransformTweenTrack_t82E28377B85ACD5E366A8C86AA4DC886A81F5BC7 * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___go1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformTweenTrack_CreateTrackMixer_m2409C5723CF8D8F98BE01FB8F7FF5820C6B06DC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return ScriptPlayable<TransformTweenMixerBehaviour>.Create (graph, inputCount);
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		int32_t L_1 = ___inputCount2;
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_tAAB01E5283A1836AF975FA63B80261EE882FABB5_il2cpp_TypeInfo_var);
		ScriptPlayable_1_tAAB01E5283A1836AF975FA63B80261EE882FABB5  L_2 = ScriptPlayable_1_Create_mA3E706454A7474C15E765B8DED248FA1D51756EB(L_0, L_1, /*hidden argument*/ScriptPlayable_1_Create_mA3E706454A7474C15E765B8DED248FA1D51756EB_RuntimeMethod_var);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_3 = ScriptPlayable_1_op_Implicit_mD924E56F3E8E257541F07B50351B6A194BC4D4CB(L_2, /*hidden argument*/ScriptPlayable_1_op_Implicit_mD924E56F3E8E257541F07B50351B6A194BC4D4CB_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_4 = V_0;
		return L_4;
	}
}
// System.Void TransformTweenTrack::GatherProperties(UnityEngine.Playables.PlayableDirector,UnityEngine.Timeline.IPropertyCollector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformTweenTrack_GatherProperties_mDDE5C2404704A3FE4608274083D8CC6D1E776F19 (TransformTweenTrack_t82E28377B85ACD5E366A8C86AA4DC886A81F5BC7 * __this, PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * ___director0, RuntimeObject* ___driver1, const RuntimeMethod* method)
{
	{
		// base.GatherProperties(director, driver);
		PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * L_0 = ___director0;
		RuntimeObject* L_1 = ___driver1;
		TrackAsset_GatherProperties_mBA4F9493F51A158265B8D17E158CAD5336E83FF3(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TransformTweenTrack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformTweenTrack__ctor_mE0EA15387D514D0E4DB7EF64E595215A29E58362 (TransformTweenTrack_t82E28377B85ACD5E366A8C86AA4DC886A81F5BC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformTweenTrack__ctor_mE0EA15387D514D0E4DB7EF64E595215A29E58362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_il2cpp_TypeInfo_var);
		TrackAsset__ctor_m2342B924DA6AB605CF953BA756D3570B932B1C05(__this, /*hidden argument*/NULL);
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
// System.Void UnityTemplateProjects.SimpleCameraController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_OnEnable_m23B1FC65DDEECCB31E2A64715EF11299D5FC671B (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	{
		// m_TargetCameraState.SetFromTransform(transform);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_0 = __this->get_m_TargetCameraState_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		CameraState_SetFromTransform_mE0003493BE2BC151ECB65F8FA10FD87DD2D380E9(L_0, L_1, /*hidden argument*/NULL);
		// m_InterpolatingCameraState.SetFromTransform(transform);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_2 = __this->get_m_InterpolatingCameraState_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		CameraState_SetFromTransform_mE0003493BE2BC151ECB65F8FA10FD87DD2D380E9(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47 (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// Vector3 direction = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		// if (Input.GetKey(KeyCode.W))
		bool L_0 = Input_GetKey_m54DC93F781FFEAB1DCDFAA3D15FA2FC01BF7667A(((int32_t)119), /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// direction += Vector3.forward;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0022:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_5 = Input_GetKey_m54DC93F781FFEAB1DCDFAA3D15FA2FC01BF7667A(((int32_t)115), /*hidden argument*/NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// direction += Vector3.back;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_back_mE7EF8625637E6F8B9E6B42A6AE140777C51E02F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_003b:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_10 = Input_GetKey_m54DC93F781FFEAB1DCDFAA3D15FA2FC01BF7667A(((int32_t)97), /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		// direction += Vector3.left;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0054:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_15 = Input_GetKey_m54DC93F781FFEAB1DCDFAA3D15FA2FC01BF7667A(((int32_t)100), /*hidden argument*/NULL);
		V_4 = L_15;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		// direction += Vector3.right;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_006f:
	{
		// if (Input.GetKey(KeyCode.Q))
		bool L_20 = Input_GetKey_m54DC93F781FFEAB1DCDFAA3D15FA2FC01BF7667A(((int32_t)113), /*hidden argument*/NULL);
		V_5 = L_20;
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_008a;
		}
	}
	{
		// direction += Vector3.down;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_22, L_23, /*hidden argument*/NULL);
		V_0 = L_24;
	}

IL_008a:
	{
		// if (Input.GetKey(KeyCode.E))
		bool L_25 = Input_GetKey_m54DC93F781FFEAB1DCDFAA3D15FA2FC01BF7667A(((int32_t)101), /*hidden argument*/NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00a5;
		}
	}
	{
		// direction += Vector3.up;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_27, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
	}

IL_00a5:
	{
		// return direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_0;
		V_7 = L_30;
		goto IL_00aa;
	}

IL_00aa:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_7;
		return L_31;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_Update_m703B3BEF0A4BD9BCC6A89BA83CACEC85FB45CEA5 (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController_Update_m703B3BEF0A4BD9BCC6A89BA83CACEC85FB45CEA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	bool V_9 = false;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B9_2 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B8_2 = NULL;
	int32_t G_B10_0 = 0;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B10_3 = NULL;
	{
		// if (Input.GetKey(KeyCode.Escape))
		bool L_0 = Input_GetKey_m54DC93F781FFEAB1DCDFAA3D15FA2FC01BF7667A(((int32_t)27), /*hidden argument*/NULL);
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_2 = Input_GetMouseButtonDown_mBC5947EA49ED797F0DB1830BFC13AF6514B765FD(1, /*hidden argument*/NULL);
		V_4 = L_2;
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(1, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// if (Input.GetMouseButtonUp(1))
		bool L_4 = Input_GetMouseButtonUp_m726EDCD35F8DECF774810AB1E9ED590B85DB10F1(1, /*hidden argument*/NULL);
		V_5 = L_4;
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// Cursor.visible = true;
		Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431((bool)1, /*hidden argument*/NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(0, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// if (Input.GetMouseButton(1))
		bool L_6 = Input_GetMouseButton_mFA83B0C0BABD3113D1AAB38FBB953C91EA7FFA30(1, /*hidden argument*/NULL);
		V_6 = L_6;
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_00c8;
		}
	}
	{
		// var mouseMovement = new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y") * (invertY ? 1 : -1));
		float L_8 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0, /*hidden argument*/NULL);
		float L_9 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2, /*hidden argument*/NULL);
		bool L_10 = __this->get_invertY_10();
		G_B8_0 = L_9;
		G_B8_1 = L_8;
		G_B8_2 = (&V_7);
		if (L_10)
		{
			G_B9_0 = L_9;
			G_B9_1 = L_8;
			G_B9_2 = (&V_7);
			goto IL_0073;
		}
	}
	{
		G_B10_0 = (-1);
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		goto IL_0074;
	}

IL_0073:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
	}

IL_0074:
	{
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)G_B10_3, G_B10_2, ((float)il2cpp_codegen_multiply((float)G_B10_1, (float)(((float)((float)G_B10_0))))), /*hidden argument*/NULL);
		// var mouseSensitivityFactor = mouseSensitivityCurve.Evaluate(mouseMovement.magnitude);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_11 = __this->get_mouseSensitivityCurve_8();
		float L_12 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_7), /*hidden argument*/NULL);
		NullCheck(L_11);
		float L_13 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_11, L_12, /*hidden argument*/NULL);
		V_8 = L_13;
		// m_TargetCameraState.yaw += mouseMovement.x * mouseSensitivityFactor;
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_14 = __this->get_m_TargetCameraState_4();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_15 = L_14;
		NullCheck(L_15);
		float L_16 = L_15->get_yaw_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = V_7;
		float L_18 = L_17.get_x_0();
		float L_19 = V_8;
		NullCheck(L_15);
		L_15->set_yaw_0(((float)il2cpp_codegen_add((float)L_16, (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)))));
		// m_TargetCameraState.pitch += mouseMovement.y * mouseSensitivityFactor;
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_20 = __this->get_m_TargetCameraState_4();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_21 = L_20;
		NullCheck(L_21);
		float L_22 = L_21->get_pitch_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = V_7;
		float L_24 = L_23.get_y_1();
		float L_25 = V_8;
		NullCheck(L_21);
		L_21->set_pitch_1(((float)il2cpp_codegen_add((float)L_22, (float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)))));
	}

IL_00c8:
	{
		// var translation = GetInputTranslationDirection() * Time.deltaTime;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47(__this, /*hidden argument*/NULL);
		float L_27 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		// if (Input.GetKey(KeyCode.LeftShift))
		bool L_29 = Input_GetKey_m54DC93F781FFEAB1DCDFAA3D15FA2FC01BF7667A(((int32_t)304), /*hidden argument*/NULL);
		V_9 = L_29;
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_00f7;
		}
	}
	{
		// translation *= 10.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_31, (10.0f), /*hidden argument*/NULL);
		V_0 = L_32;
	}

IL_00f7:
	{
		// boost += Input.mouseScrollDelta.y * 0.2f;
		float L_33 = __this->get_boost_6();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_34 = Input_get_mouseScrollDelta_mC314425F4261A9D7E8EA72705F7AF8CB110D5B94(/*hidden argument*/NULL);
		float L_35 = L_34.get_y_1();
		__this->set_boost_6(((float)il2cpp_codegen_add((float)L_33, (float)((float)il2cpp_codegen_multiply((float)L_35, (float)(0.2f))))));
		// translation *= Mathf.Pow(2.0f, boost);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = V_0;
		float L_37 = __this->get_boost_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_38 = powf((2.0f), L_37);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_36, L_38, /*hidden argument*/NULL);
		V_0 = L_39;
		// m_TargetCameraState.Translate(translation);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_40 = __this->get_m_TargetCameraState_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = V_0;
		NullCheck(L_40);
		CameraState_Translate_m1B8281ABF2A3296F5DE47064F3757FD481E446EE(L_40, L_41, /*hidden argument*/NULL);
		// var positionLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / positionLerpTime) * Time.deltaTime);
		float L_42 = logf((0.00999999f));
		float L_43 = __this->get_positionLerpTime_7();
		float L_44 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_45 = expf(((float)il2cpp_codegen_multiply((float)((float)((float)L_42/(float)L_43)), (float)L_44)));
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_45));
		// var rotationLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / rotationLerpTime) * Time.deltaTime);
		float L_46 = logf((0.00999999f));
		float L_47 = __this->get_rotationLerpTime_9();
		float L_48 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_49 = expf(((float)il2cpp_codegen_multiply((float)((float)((float)L_46/(float)L_47)), (float)L_48)));
		V_2 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_49));
		// m_InterpolatingCameraState.LerpTowards(m_TargetCameraState, positionLerpPct, rotationLerpPct);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_50 = __this->get_m_InterpolatingCameraState_5();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_51 = __this->get_m_TargetCameraState_4();
		float L_52 = V_1;
		float L_53 = V_2;
		NullCheck(L_50);
		CameraState_LerpTowards_mC4C84789CEE27DEC5A70AAF00FC71FE990519AFE(L_50, L_51, L_52, L_53, /*hidden argument*/NULL);
		// m_InterpolatingCameraState.UpdateTransform(transform);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_54 = __this->get_m_InterpolatingCameraState_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_55 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_54);
		CameraState_UpdateTransform_m405C51A0B661CF16A1A4F5A162529398E1DAC358(L_54, L_55, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController__ctor_mDD687DF4764B1C2C77BA64E8836650F6F31F144A (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController__ctor_mDD687DF4764B1C2C77BA64E8836650F6F31F144A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraState m_TargetCameraState = new CameraState();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_0 = (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 *)il2cpp_codegen_object_new(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7_il2cpp_TypeInfo_var);
		CameraState__ctor_m8552062EB90FFEEA837B63DD22A9CB4F438EABDE(L_0, /*hidden argument*/NULL);
		__this->set_m_TargetCameraState_4(L_0);
		// CameraState m_InterpolatingCameraState = new CameraState();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_1 = (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 *)il2cpp_codegen_object_new(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7_il2cpp_TypeInfo_var);
		CameraState__ctor_m8552062EB90FFEEA837B63DD22A9CB4F438EABDE(L_1, /*hidden argument*/NULL);
		__this->set_m_InterpolatingCameraState_5(L_1);
		// public float boost = 3.5f;
		__this->set_boost_6((3.5f));
		// public float positionLerpTime = 0.2f;
		__this->set_positionLerpTime_7((0.2f));
		// public AnimationCurve mouseSensitivityCurve = new AnimationCurve(new Keyframe(0f, 0.5f, 0f, 5f), new Keyframe(1f, 2.5f, 0f, 0f));
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_2 = (KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)SZArrayNew(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_3 = L_2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_4), (0.0f), (0.5f), (0.0f), (5.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_4);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_5 = L_3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_6), (1.0f), (2.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_6);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_7 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF(L_7, L_5, /*hidden argument*/NULL);
		__this->set_mouseSensitivityCurve_8(L_7);
		// public float rotationLerpTime = 0.01f;
		__this->set_rotationLerpTime_9((0.01f));
		// public bool invertY = false;
		__this->set_invertY_10((bool)0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_mE0003493BE2BC151ECB65F8FA10FD87DD2D380E9 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method)
{
	{
		// pitch = t.eulerAngles.x;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___t0;
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		__this->set_pitch_1(L_2);
		// yaw = t.eulerAngles.y;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___t0;
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		__this->set_yaw_0(L_5);
		// roll = t.eulerAngles.z;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___t0;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		__this->set_roll_2(L_8);
		// x = t.position.x;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = ___t0;
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		__this->set_x_3(L_11);
		// y = t.position.y;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = ___t0;
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		__this->set_y_4(L_14);
		// z = t.position.z;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = ___t0;
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		__this->set_z_5(L_17);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_m1B8281ABF2A3296F5DE47064F3757FD481E446EE (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_Translate_m1B8281ABF2A3296F5DE47064F3757FD481E446EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rotatedTranslation = Quaternion.Euler(pitch, yaw, roll) * translation;
		float L_0 = __this->get_pitch_1();
		float L_1 = __this->get_yaw_0();
		float L_2 = __this->get_roll_2();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___translation0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// x += rotatedTranslation.x;
		float L_6 = __this->get_x_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		float L_8 = L_7.get_x_2();
		__this->set_x_3(((float)il2cpp_codegen_add((float)L_6, (float)L_8)));
		// y += rotatedTranslation.y;
		float L_9 = __this->get_y_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		__this->set_y_4(((float)il2cpp_codegen_add((float)L_9, (float)L_11)));
		// z += rotatedTranslation.z;
		float L_12 = __this->get_z_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		float L_14 = L_13.get_z_4();
		__this->set_z_5(((float)il2cpp_codegen_add((float)L_12, (float)L_14)));
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController_CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_mC4C84789CEE27DEC5A70AAF00FC71FE990519AFE (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_LerpTowards_mC4C84789CEE27DEC5A70AAF00FC71FE990519AFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yaw = Mathf.Lerp(yaw, target.yaw, rotationLerpPct);
		float L_0 = __this->get_yaw_0();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_1 = ___target0;
		NullCheck(L_1);
		float L_2 = L_1->get_yaw_0();
		float L_3 = ___rotationLerpPct2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_0, L_2, L_3, /*hidden argument*/NULL);
		__this->set_yaw_0(L_4);
		// pitch = Mathf.Lerp(pitch, target.pitch, rotationLerpPct);
		float L_5 = __this->get_pitch_1();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_6 = ___target0;
		NullCheck(L_6);
		float L_7 = L_6->get_pitch_1();
		float L_8 = ___rotationLerpPct2;
		float L_9 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_5, L_7, L_8, /*hidden argument*/NULL);
		__this->set_pitch_1(L_9);
		// roll = Mathf.Lerp(roll, target.roll, rotationLerpPct);
		float L_10 = __this->get_roll_2();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_11 = ___target0;
		NullCheck(L_11);
		float L_12 = L_11->get_roll_2();
		float L_13 = ___rotationLerpPct2;
		float L_14 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_10, L_12, L_13, /*hidden argument*/NULL);
		__this->set_roll_2(L_14);
		// x = Mathf.Lerp(x, target.x, positionLerpPct);
		float L_15 = __this->get_x_3();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_16 = ___target0;
		NullCheck(L_16);
		float L_17 = L_16->get_x_3();
		float L_18 = ___positionLerpPct1;
		float L_19 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_15, L_17, L_18, /*hidden argument*/NULL);
		__this->set_x_3(L_19);
		// y = Mathf.Lerp(y, target.y, positionLerpPct);
		float L_20 = __this->get_y_4();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_21 = ___target0;
		NullCheck(L_21);
		float L_22 = L_21->get_y_4();
		float L_23 = ___positionLerpPct1;
		float L_24 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_20, L_22, L_23, /*hidden argument*/NULL);
		__this->set_y_4(L_24);
		// z = Mathf.Lerp(z, target.z, positionLerpPct);
		float L_25 = __this->get_z_5();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_26 = ___target0;
		NullCheck(L_26);
		float L_27 = L_26->get_z_5();
		float L_28 = ___positionLerpPct1;
		float L_29 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_25, L_27, L_28, /*hidden argument*/NULL);
		__this->set_z_5(L_29);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_m405C51A0B661CF16A1A4F5A162529398E1DAC358 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method)
{
	{
		// t.eulerAngles = new Vector3(pitch, yaw, roll);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___t0;
		float L_1 = __this->get_pitch_1();
		float L_2 = __this->get_yaw_0();
		float L_3 = __this->get_roll_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685(L_0, L_4, /*hidden argument*/NULL);
		// t.position = new Vector3(x, y, z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___t0;
		float L_6 = __this->get_x_3();
		float L_7 = __this->get_y_4();
		float L_8 = __this->get_z_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_5, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m8552062EB90FFEEA837B63DD22A9CB4F438EABDE (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
