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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t78693409E5147276425329CB69C1414D43C8CCE5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_tE9183007A5785689F86BDBB22CB72D19AB5E1192;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.String>[]
struct EntryU5BU5D_t8551361338B9BF5705CA61FFE9EA2EDEA1B1EF34;
// System.Nullable`1<UnityEngine.Vector2>[]
struct Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// DifficultyController
struct DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HighScoreController
struct HighScoreController_tBF7FC79016466DC159F01870EC07F1960B0A92F8;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// MainMenuController
struct MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569;
// MapController
struct MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OptionsController
struct OptionsController_t0472A8D6752570E1CB2BFFD42F5BB4AADE72E6E4;
// PinchZoom
struct PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD;
// PointerController
struct PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// SpriteSwap
struct SpriteSwap_t4B8952F51EEB1187C9788ECD1B1E6A63ACE0CC05;
// System.String
struct String_t;
// SwapColorInSprite
struct SwapColorInSprite_t916FF70A4A906B2E707461C69EE1312B3DAC216E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TouchCamera
struct TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01BF865C72CD98F52DD54D5FFE14555997454F61;
IL2CPP_EXTERN_C String_t* _stringLiteral0266DE950C165BB825DC499BC51ADE94DC27385C;
IL2CPP_EXTERN_C String_t* _stringLiteral02A8F937D1DEF087338B2EA7072678F61C3F9F93;
IL2CPP_EXTERN_C String_t* _stringLiteral032978B9BAABDCE21BFA04FCC658D0235764F694;
IL2CPP_EXTERN_C String_t* _stringLiteral07DF0E45E276DF117CDB947E07284446E6BC00D0;
IL2CPP_EXTERN_C String_t* _stringLiteral0BD6EA199D5C184ADEA262717B0A4F385BB437D3;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral0DA5F1287115C49EF9D36AE3B84E6AB8E4CEF0F5;
IL2CPP_EXTERN_C String_t* _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3;
IL2CPP_EXTERN_C String_t* _stringLiteral0EC4A79C02BB02EE39C704DFDC60AADC90D951FA;
IL2CPP_EXTERN_C String_t* _stringLiteral0FE4B38C3ACD443A00F24F2A20626ECDE917F5F5;
IL2CPP_EXTERN_C String_t* _stringLiteral1037CE23F7118834AA478D74659F74F55F56E540;
IL2CPP_EXTERN_C String_t* _stringLiteral103DAB962B61AD65CCD17B9EAB8BDF3D9F82F4AD;
IL2CPP_EXTERN_C String_t* _stringLiteral10683CFF9CA6EAB777DC61AF2F1C26E8FC481042;
IL2CPP_EXTERN_C String_t* _stringLiteral112C9279472C3BF1A79309174E15EEC7446EFCDF;
IL2CPP_EXTERN_C String_t* _stringLiteral1202FEA2EC53F017342A09808A42391796DF8D64;
IL2CPP_EXTERN_C String_t* _stringLiteral168212FF42159CB0E0978D88C908F089E3EB91F3;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral1EBF46B53CAA271F1FBA976E898B2C3A236D6D77;
IL2CPP_EXTERN_C String_t* _stringLiteral22A540D163791CD0F2AD7F17B525DD617A4EFF86;
IL2CPP_EXTERN_C String_t* _stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A;
IL2CPP_EXTERN_C String_t* _stringLiteral27C998756EA4CB9A750E0B2967B793EDF912000C;
IL2CPP_EXTERN_C String_t* _stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC;
IL2CPP_EXTERN_C String_t* _stringLiteral30CA0B82CE372F1E1B985B038A413B4B400B27A3;
IL2CPP_EXTERN_C String_t* _stringLiteral3277F89A3EBD3931B6C017F95461A89B8CE0D0B5;
IL2CPP_EXTERN_C String_t* _stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3;
IL2CPP_EXTERN_C String_t* _stringLiteral34C5420DA983EFFEB80AC7814A9A058F7D33760B;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC696E198E54A5A5187BD300FFF873F14377195;
IL2CPP_EXTERN_C String_t* _stringLiteral3C683CE4310FADC37356B863A2E3F944409BF63C;
IL2CPP_EXTERN_C String_t* _stringLiteral4349BECAC2CD8782A5EE4F42AE8A82284A4D9C39;
IL2CPP_EXTERN_C String_t* _stringLiteral443E8381D5459B95A4F96D46D4182B75BE5DE148;
IL2CPP_EXTERN_C String_t* _stringLiteral44CEDE26D2994042229BC124E341833522BA7E5D;
IL2CPP_EXTERN_C String_t* _stringLiteral463EC0B1488F3C9486F1495362B740AAEA344D5B;
IL2CPP_EXTERN_C String_t* _stringLiteral48E763228A0FC2C8C06C89881C52E61A20F3D35B;
IL2CPP_EXTERN_C String_t* _stringLiteral49BAD7878664DC4C7FB99B3DA70B07103174C214;
IL2CPP_EXTERN_C String_t* _stringLiteral4B6234BA2B50B171172501BE900CAE6E14AC67B0;
IL2CPP_EXTERN_C String_t* _stringLiteral4CE1ACFE6A3A038F5D34296DAA194619925F9738;
IL2CPP_EXTERN_C String_t* _stringLiteral4D690812FF2027A03B2FCEA744A5B91F92BB4F49;
IL2CPP_EXTERN_C String_t* _stringLiteral4D6EDBDFB2909692FE0D4C9FD437390223AEEFE4;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral50F8D63595F8AB6E12E42A5EEA4EA4864C3796DD;
IL2CPP_EXTERN_C String_t* _stringLiteral526C640E25425AF709DD2D2D123C58663BF7124B;
IL2CPP_EXTERN_C String_t* _stringLiteral53586F0F6ECF19991181BDDA65C30F6EA84FA60B;
IL2CPP_EXTERN_C String_t* _stringLiteral594DD0BF272B5892AA7F91E62C66BCD2666E72BB;
IL2CPP_EXTERN_C String_t* _stringLiteral59E45D4FC5F2F4E3F0826C84CE9DB3CDD754C496;
IL2CPP_EXTERN_C String_t* _stringLiteral5BCE038453DF85FF006A92CB7BCD69D497342006;
IL2CPP_EXTERN_C String_t* _stringLiteral5BD9B3CA71C3128EA578106589500854B64EB9B5;
IL2CPP_EXTERN_C String_t* _stringLiteral615C459449BE042E44457BBADD7BD612B1B98D2F;
IL2CPP_EXTERN_C String_t* _stringLiteral6571F05B1753B9FB7FA5AB76366EEA66970F9DB3;
IL2CPP_EXTERN_C String_t* _stringLiteral6735B6D2DFDF9C6FDC4FB037EA8973AD88EE62A0;
IL2CPP_EXTERN_C String_t* _stringLiteral6956339ED305F552AA9A6C1ED4EF5C50396A63A0;
IL2CPP_EXTERN_C String_t* _stringLiteral6B10D9BAEAD3AF50869E35A030561BACF8CB76A2;
IL2CPP_EXTERN_C String_t* _stringLiteral6B97A86B3195343C971D40139B9542A4B548E179;
IL2CPP_EXTERN_C String_t* _stringLiteral71A0228E8A84050B7FDB03873AB3E594787697C8;
IL2CPP_EXTERN_C String_t* _stringLiteral72495D11FAC073A6ED5C5DDA401B5B1B3561B33C;
IL2CPP_EXTERN_C String_t* _stringLiteral7324103F5DEEED5B606B548F6AD059F65C1AD644;
IL2CPP_EXTERN_C String_t* _stringLiteral7377067C038D82CBA8C595FFCF75D65ACA8543DF;
IL2CPP_EXTERN_C String_t* _stringLiteral744D2DC16E26F31320AF9DBC0BE5AB0F32D8DB4B;
IL2CPP_EXTERN_C String_t* _stringLiteral7479A72B853B4FDBFCA88205F6F2D9437EE4ED7F;
IL2CPP_EXTERN_C String_t* _stringLiteral759224471F830122DE360CA6EACBBADC7B33B6C6;
IL2CPP_EXTERN_C String_t* _stringLiteral7C88CAF3EECE92058A9F632252C3C77A3F46B9EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7E5DD579B9E435A3D3ECCAF52981B61F740B344D;
IL2CPP_EXTERN_C String_t* _stringLiteral7E689CC1037B2B4600732FD79F2BB58A3DD82571;
IL2CPP_EXTERN_C String_t* _stringLiteral871C50B2EA6F82F09B5B9A7EF8B17FDCA2EEE958;
IL2CPP_EXTERN_C String_t* _stringLiteral87CAD67FACDB8156124DCE907D5322B0BD4165B2;
IL2CPP_EXTERN_C String_t* _stringLiteral87EFFA786FC102DDE9FDF2BCC37CD76FFB2842C6;
IL2CPP_EXTERN_C String_t* _stringLiteral8A59D24CBF24E663CF87FA872FEFB2B09160D266;
IL2CPP_EXTERN_C String_t* _stringLiteral8B0C045D79116B4269C58C2EB0F59E8862E7AD3B;
IL2CPP_EXTERN_C String_t* _stringLiteral90D9B5FDBE9EF4EFC9C438603F71B1D65A6950A0;
IL2CPP_EXTERN_C String_t* _stringLiteral9469D3E8C4475456FB56EDEABAF0BEB4DACFC63F;
IL2CPP_EXTERN_C String_t* _stringLiteral9743B2523ACF6FCABE6B68DCD4AA98B897DD0F78;
IL2CPP_EXTERN_C String_t* _stringLiteral98A5CB137906643C3E7D7B72EB644E2B25C912C5;
IL2CPP_EXTERN_C String_t* _stringLiteral9F78F4F47845424589DF0EB1771DE2AB9A9B65CC;
IL2CPP_EXTERN_C String_t* _stringLiteral9FA823F0753AF2093FAFE2C83F4C9A0F4CA2B5FC;
IL2CPP_EXTERN_C String_t* _stringLiteralA0FA24CDB5506DED0E016B07BDB09EF934176A09;
IL2CPP_EXTERN_C String_t* _stringLiteralA28AFE2E0A873901876A00F9AE7E5318E5FD570C;
IL2CPP_EXTERN_C String_t* _stringLiteralA5F9B39986DF0D12413070A5CE3475A74FAEF0AC;
IL2CPP_EXTERN_C String_t* _stringLiteralA76F28E75D595295080BB6E44805651695401891;
IL2CPP_EXTERN_C String_t* _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B;
IL2CPP_EXTERN_C String_t* _stringLiteralA9F79710EA8A12C353BF5E613C9A1703A422E1B4;
IL2CPP_EXTERN_C String_t* _stringLiteralAB5554409C73D24C24F12DEDEB5739A81E0D0896;
IL2CPP_EXTERN_C String_t* _stringLiteralADA1FFFFE9DDF66C19FB738AB07C7A19881A7F9D;
IL2CPP_EXTERN_C String_t* _stringLiteralADB89CC483AEEF637B26B2169028103379844C17;
IL2CPP_EXTERN_C String_t* _stringLiteralAE634659BB8C0F67675301BFC876B99F404B8F8D;
IL2CPP_EXTERN_C String_t* _stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38;
IL2CPP_EXTERN_C String_t* _stringLiteralB377E1759BD00EBF296EF3C9B84A0C281688D9DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB5303D626BCFF1EBDD1AF194655BF1D53F45A897;
IL2CPP_EXTERN_C String_t* _stringLiteralB624F3CF80C51002D5C4DEF291B893C343D4B70A;
IL2CPP_EXTERN_C String_t* _stringLiteralB6D96A9E53BF000982C3236C6D1DA9D569073EB5;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D709B8F1226745FF5DD2B700A7838910E63619;
IL2CPP_EXTERN_C String_t* _stringLiteralC5823DD3C34DF12E538B9EF646619FC72BE0420C;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E32EA412446CD76F316387C869143B544E9BFE;
IL2CPP_EXTERN_C String_t* _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
IL2CPP_EXTERN_C String_t* _stringLiteralC743A630ABA61A127ECA4568069D239B602D7376;
IL2CPP_EXTERN_C String_t* _stringLiteralC78C5CEC2DD49AB590970B49CBD20BEE0564AA07;
IL2CPP_EXTERN_C String_t* _stringLiteralCAD05574591BC85AE8F74BC78ABA31F4AF74C912;
IL2CPP_EXTERN_C String_t* _stringLiteralD4FD906861B9B7DF6D44E774E0C4CA3DF3FA23DC;
IL2CPP_EXTERN_C String_t* _stringLiteralD72ADDF4129F43A90911945837A2BB69548C6B5E;
IL2CPP_EXTERN_C String_t* _stringLiteralD7DFFD0A5DD53DEF380B12A94138819A4EA1652A;
IL2CPP_EXTERN_C String_t* _stringLiteralD95CB69D4554247F8B4288DA83A56B8A26A617E9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA5B50832527033FA07E04442D19F5DC6B8D0F71;
IL2CPP_EXTERN_C String_t* _stringLiteralDB0E53CB6A1FB7577AB2E448D308EFF0333F601F;
IL2CPP_EXTERN_C String_t* _stringLiteralDC66387D49F92209E100AF8E9114589916287007;
IL2CPP_EXTERN_C String_t* _stringLiteralE1D63E03A8418BBDDE45F30ABFC6C9A5F3F6F6B7;
IL2CPP_EXTERN_C String_t* _stringLiteralE3B9E6D77F813EE26989DA7D1892E63462778A4C;
IL2CPP_EXTERN_C String_t* _stringLiteralE55BDC623C0F797B9134F2E4A42E24B680896D20;
IL2CPP_EXTERN_C String_t* _stringLiteralE602B05933C7313254F7175195220A90D38B15C0;
IL2CPP_EXTERN_C String_t* _stringLiteralE7C105DAB6D0DB0B25457B25F9F6188114382A81;
IL2CPP_EXTERN_C String_t* _stringLiteralE82C8DB2F07AC352D233A1B058BA2B3E9021BD5A;
IL2CPP_EXTERN_C String_t* _stringLiteralEA7ACBC8D54F1AF613E4B8050AF728E984951CB1;
IL2CPP_EXTERN_C String_t* _stringLiteralEBC3BC690EEE2F388AB3BA89D8BC1C374B3D3C4C;
IL2CPP_EXTERN_C String_t* _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C;
IL2CPP_EXTERN_C String_t* _stringLiteralF2F055946DA84C54405ED735EBDBCCDB42353D92;
IL2CPP_EXTERN_C String_t* _stringLiteralF30CC2405E9B0807E1FA0196D242E7F6DC4E0C50;
IL2CPP_EXTERN_C String_t* _stringLiteralF472218591CBFAD4D6454AB0AAF3091B037AAFFD;
IL2CPP_EXTERN_C String_t* _stringLiteralF4BD78F14A295432B64B608CF7B12D9CA73E40A1;
IL2CPP_EXTERN_C String_t* _stringLiteralF4BFE05CD529D1B4E6F1C19C81B21880DEC83CB9;
IL2CPP_EXTERN_C String_t* _stringLiteralFB2309F368A1D0B92AE06D5A12398CFB9C35E7D2;
IL2CPP_EXTERN_C String_t* _stringLiteralFDB960B3F94AC3305FD81EE22E095302BEC15B8C;
IL2CPP_EXTERN_C String_t* _stringLiteralFEA181534336E807D79F29189655FE25E5CCC4EB;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m9266965D02368C3A64AED51B741DA840A0966FE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD4A750E28CFF3DE9AE032540D174398E46DAA39D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mCD80CD167FF931072D6319B4BD1BCC7B85F06C2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF43DCB3BB782DEE371E585AF95DAD52EE17CC9BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var;

struct Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8551361338B9BF5705CA61FFE9EA2EDEA1B1EF34* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t78693409E5147276425329CB69C1414D43C8CCE5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE9183007A5785689F86BDBB22CB72D19AB5E1192* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// GameState
struct GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A  : public RuntimeObject
{
};

struct GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields
{
	// System.Boolean GameState::saved
	bool ___saved_0;
	// System.Int32 GameState::difficulty
	int32_t ___difficulty_1;
	// System.Int32 GameState::region
	int32_t ___region_2;
	// System.Collections.Generic.List`1<System.String> GameState::state_names
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___state_names_3;
	// System.Int32 GameState::correct
	int32_t ___correct_4;
	// System.Int32 GameState::missed
	int32_t ___missed_5;
	// System.Single GameState::score
	float ___score_6;
	// System.Single GameState::timeLeft
	float ___timeLeft_7;
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

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// System.Nullable`1<UnityEngine.Vector2>
struct Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// DifficultyController
struct DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text DifficultyController::EasyLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___EasyLabel_4;
	// UnityEngine.UI.Text DifficultyController::NormalLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___NormalLabel_5;
	// UnityEngine.UI.Text DifficultyController::HardLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___HardLabel_6;
};

struct DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_StaticFields
{
	// System.Int32 DifficultyController::difficulty
	int32_t ___difficulty_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> DifficultyController::difficultyDict
	Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* ___difficultyDict_8;
};

// HighScoreController
struct HighScoreController_tBF7FC79016466DC159F01870EC07F1960B0A92F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text HighScoreController::World_Easy_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___World_Easy_Score_Text_4;
	// UnityEngine.UI.Text HighScoreController::World_Normal_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___World_Normal_Score_Text_5;
	// UnityEngine.UI.Text HighScoreController::World_Hard_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___World_Hard_Score_Text_6;
	// UnityEngine.UI.Text HighScoreController::World_Easy_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___World_Easy_Time_Text_7;
	// UnityEngine.UI.Text HighScoreController::World_Normal_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___World_Normal_Time_Text_8;
	// UnityEngine.UI.Text HighScoreController::World_Hard_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___World_Hard_Time_Text_9;
	// UnityEngine.UI.Text HighScoreController::USAStates_Easy_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___USAStates_Easy_Score_Text_10;
	// UnityEngine.UI.Text HighScoreController::USAStates_Normal_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___USAStates_Normal_Score_Text_11;
	// UnityEngine.UI.Text HighScoreController::USAStates_Hard_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___USAStates_Hard_Score_Text_12;
	// UnityEngine.UI.Text HighScoreController::USAStates_Easy_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___USAStates_Easy_Time_Text_13;
	// UnityEngine.UI.Text HighScoreController::USAStates_Normal_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___USAStates_Normal_Time_Text_14;
	// UnityEngine.UI.Text HighScoreController::USAStates_Hard_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___USAStates_Hard_Time_Text_15;
	// UnityEngine.UI.Text HighScoreController::Africa_Easy_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Africa_Easy_Score_Text_16;
	// UnityEngine.UI.Text HighScoreController::Africa_Normal_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Africa_Normal_Score_Text_17;
	// UnityEngine.UI.Text HighScoreController::Africa_Hard_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Africa_Hard_Score_Text_18;
	// UnityEngine.UI.Text HighScoreController::Africa_Easy_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Africa_Easy_Time_Text_19;
	// UnityEngine.UI.Text HighScoreController::Africa_Normal_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Africa_Normal_Time_Text_20;
	// UnityEngine.UI.Text HighScoreController::Africa_Hard_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Africa_Hard_Time_Text_21;
	// UnityEngine.UI.Text HighScoreController::Asia_Easy_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Asia_Easy_Score_Text_22;
	// UnityEngine.UI.Text HighScoreController::Asia_Normal_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Asia_Normal_Score_Text_23;
	// UnityEngine.UI.Text HighScoreController::Asia_Hard_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Asia_Hard_Score_Text_24;
	// UnityEngine.UI.Text HighScoreController::Asia_Easy_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Asia_Easy_Time_Text_25;
	// UnityEngine.UI.Text HighScoreController::Asia_Normal_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Asia_Normal_Time_Text_26;
	// UnityEngine.UI.Text HighScoreController::Asia_Hard_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Asia_Hard_Time_Text_27;
	// UnityEngine.UI.Text HighScoreController::Europe_Easy_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Europe_Easy_Score_Text_28;
	// UnityEngine.UI.Text HighScoreController::Europe_Normal_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Europe_Normal_Score_Text_29;
	// UnityEngine.UI.Text HighScoreController::Europe_Hard_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Europe_Hard_Score_Text_30;
	// UnityEngine.UI.Text HighScoreController::Europe_Easy_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Europe_Easy_Time_Text_31;
	// UnityEngine.UI.Text HighScoreController::Europe_Normal_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Europe_Normal_Time_Text_32;
	// UnityEngine.UI.Text HighScoreController::Europe_Hard_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Europe_Hard_Time_Text_33;
	// UnityEngine.UI.Text HighScoreController::LatinAmerica_Easy_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___LatinAmerica_Easy_Score_Text_34;
	// UnityEngine.UI.Text HighScoreController::LatinAmerica_Normal_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___LatinAmerica_Normal_Score_Text_35;
	// UnityEngine.UI.Text HighScoreController::LatinAmerica_Hard_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___LatinAmerica_Hard_Score_Text_36;
	// UnityEngine.UI.Text HighScoreController::LatinAmerica_Easy_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___LatinAmerica_Easy_Time_Text_37;
	// UnityEngine.UI.Text HighScoreController::LatinAmerica_Normal_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___LatinAmerica_Normal_Time_Text_38;
	// UnityEngine.UI.Text HighScoreController::LatinAmerica_Hard_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___LatinAmerica_Hard_Time_Text_39;
	// UnityEngine.UI.Text HighScoreController::MiddleEast_Easy_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MiddleEast_Easy_Score_Text_40;
	// UnityEngine.UI.Text HighScoreController::MiddleEast_Normal_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MiddleEast_Normal_Score_Text_41;
	// UnityEngine.UI.Text HighScoreController::MiddleEast_Hard_Score_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MiddleEast_Hard_Score_Text_42;
	// UnityEngine.UI.Text HighScoreController::MiddleEast_Easy_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MiddleEast_Easy_Time_Text_43;
	// UnityEngine.UI.Text HighScoreController::MiddleEast_Normal_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MiddleEast_Normal_Time_Text_44;
	// UnityEngine.UI.Text HighScoreController::MiddleEast_Hard_Time_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MiddleEast_Hard_Time_Text_45;
	// System.Single HighScoreController::World_Easy_Score
	float ___World_Easy_Score_46;
	// System.Single HighScoreController::World_Normal_Score
	float ___World_Normal_Score_47;
	// System.Single HighScoreController::World_Hard_Score
	float ___World_Hard_Score_48;
	// System.Int32 HighScoreController::World_Easy_Time
	int32_t ___World_Easy_Time_49;
	// System.Int32 HighScoreController::World_Normal_Time
	int32_t ___World_Normal_Time_50;
	// System.Int32 HighScoreController::World_Hard_Time
	int32_t ___World_Hard_Time_51;
	// System.Single HighScoreController::USAStates_Easy_Score
	float ___USAStates_Easy_Score_52;
	// System.Single HighScoreController::USAStates_Normal_Score
	float ___USAStates_Normal_Score_53;
	// System.Single HighScoreController::USAStates_Hard_Score
	float ___USAStates_Hard_Score_54;
	// System.Int32 HighScoreController::USAStates_Easy_Time
	int32_t ___USAStates_Easy_Time_55;
	// System.Int32 HighScoreController::USAStates_Normal_Time
	int32_t ___USAStates_Normal_Time_56;
	// System.Int32 HighScoreController::USAStates_Hard_Time
	int32_t ___USAStates_Hard_Time_57;
	// System.Single HighScoreController::Africa_Easy_Score
	float ___Africa_Easy_Score_58;
	// System.Single HighScoreController::Africa_Normal_Score
	float ___Africa_Normal_Score_59;
	// System.Single HighScoreController::Africa_Hard_Score
	float ___Africa_Hard_Score_60;
	// System.Int32 HighScoreController::Africa_Easy_Time
	int32_t ___Africa_Easy_Time_61;
	// System.Int32 HighScoreController::Africa_Normal_Time
	int32_t ___Africa_Normal_Time_62;
	// System.Int32 HighScoreController::Africa_Hard_Time
	int32_t ___Africa_Hard_Time_63;
	// System.Single HighScoreController::Asia_Easy_Score
	float ___Asia_Easy_Score_64;
	// System.Single HighScoreController::Asia_Normal_Score
	float ___Asia_Normal_Score_65;
	// System.Single HighScoreController::Asia_Hard_Score
	float ___Asia_Hard_Score_66;
	// System.Int32 HighScoreController::Asia_Easy_Time
	int32_t ___Asia_Easy_Time_67;
	// System.Int32 HighScoreController::Asia_Normal_Time
	int32_t ___Asia_Normal_Time_68;
	// System.Int32 HighScoreController::Asia_Hard_Time
	int32_t ___Asia_Hard_Time_69;
	// System.Single HighScoreController::Europe_Easy_Score
	float ___Europe_Easy_Score_70;
	// System.Single HighScoreController::Europe_Normal_Score
	float ___Europe_Normal_Score_71;
	// System.Single HighScoreController::Europe_Hard_Score
	float ___Europe_Hard_Score_72;
	// System.Int32 HighScoreController::Europe_Easy_Time
	int32_t ___Europe_Easy_Time_73;
	// System.Int32 HighScoreController::Europe_Normal_Time
	int32_t ___Europe_Normal_Time_74;
	// System.Int32 HighScoreController::Europe_Hard_Time
	int32_t ___Europe_Hard_Time_75;
	// System.Single HighScoreController::LatinAmerica_Easy_Score
	float ___LatinAmerica_Easy_Score_76;
	// System.Single HighScoreController::LatinAmerica_Normal_Score
	float ___LatinAmerica_Normal_Score_77;
	// System.Single HighScoreController::LatinAmerica_Hard_Score
	float ___LatinAmerica_Hard_Score_78;
	// System.Int32 HighScoreController::LatinAmerica_Easy_Time
	int32_t ___LatinAmerica_Easy_Time_79;
	// System.Int32 HighScoreController::LatinAmerica_Normal_Time
	int32_t ___LatinAmerica_Normal_Time_80;
	// System.Int32 HighScoreController::LatinAmerica_Hard_Time
	int32_t ___LatinAmerica_Hard_Time_81;
	// System.Single HighScoreController::MiddleEast_Easy_Score
	float ___MiddleEast_Easy_Score_82;
	// System.Single HighScoreController::MiddleEast_Normal_Score
	float ___MiddleEast_Normal_Score_83;
	// System.Single HighScoreController::MiddleEast_Hard_Score
	float ___MiddleEast_Hard_Score_84;
	// System.Int32 HighScoreController::MiddleEast_Easy_Time
	int32_t ___MiddleEast_Easy_Time_85;
	// System.Int32 HighScoreController::MiddleEast_Normal_Time
	int32_t ___MiddleEast_Normal_Time_86;
	// System.Int32 HighScoreController::MiddleEast_Hard_Time
	int32_t ___MiddleEast_Hard_Time_87;
};

// MainMenuController
struct MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields
{
	// System.Int32 MainMenuController::region
	int32_t ___region_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> MainMenuController::regionDict
	Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* ___regionDict_5;
};

// MapController
struct MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MapController::stateList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___stateList_4;
	// System.Int32 MapController::stateCount
	int32_t ___stateCount_5;
	// UnityEngine.UI.Text MapController::correctText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___correctText_6;
	// UnityEngine.UI.Text MapController::missedText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___missedText_7;
	// UnityEngine.UI.Text MapController::timerText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___timerText_8;
	// UnityEngine.UI.Text MapController::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_9;
	// UnityEngine.UI.Text MapController::stateText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___stateText_10;
	// UnityEngine.UI.Text MapController::incorrectStateText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___incorrectStateText_11;
	// UnityEngine.UI.Text MapController::totalTimeText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___totalTimeText_12;
	// System.Int32 MapController::correct
	int32_t ___correct_13;
	// System.Int32 MapController::missed
	int32_t ___missed_14;
	// System.Int32 MapController::stateIndex
	int32_t ___stateIndex_15;
	// System.Int32 MapController::missedIndex
	int32_t ___missedIndex_16;
	// System.Boolean MapController::missedFlag
	bool ___missedFlag_17;
	// System.Boolean MapController::correctFlag
	bool ___correctFlag_18;
	// System.Single MapController::score
	float ___score_19;
	// System.Int32 MapController::region
	int32_t ___region_20;
	// System.Int32 MapController::difficulty
	int32_t ___difficulty_21;
	// UnityEngine.GameObject[] MapController::states
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___states_22;
	// UnityEngine.GameObject[] MapController::inactive
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___inactive_23;
	// UnityEngine.GameObject MapController::WorldMap
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___WorldMap_24;
	// UnityEngine.GameObject MapController::USA
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___USA_25;
	// UnityEngine.GameObject MapController::Europe
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Europe_26;
	// UnityEngine.GameObject MapController::Africa
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Africa_27;
	// UnityEngine.GameObject MapController::Asia
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Asia_28;
	// UnityEngine.GameObject MapController::LatinAmerica
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LatinAmerica_29;
	// UnityEngine.GameObject MapController::MiddleEast
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MiddleEast_30;
	// UnityEngine.GameObject MapController::UIPanel_Bottom
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UIPanel_Bottom_31;
	// UnityEngine.GameObject MapController::UIPanel_Top
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UIPanel_Top_32;
	// UnityEngine.GameObject MapController::Button_Confirm
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Button_Confirm_33;
	// UnityEngine.GameObject MapController::Pointer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Pointer_34;
	// UnityEngine.GameObject MapController::button_newgame
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___button_newgame_35;
	// UnityEngine.GameObject MapController::button_resume
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___button_resume_36;
	// UnityEngine.GameObject MapController::button_restart
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___button_restart_37;
	// UnityEngine.GameObject MapController::button_mainmenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___button_mainmenu_38;
	// UnityEngine.GameObject MapController::button_options
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___button_options_39;
	// UnityEngine.GameObject MapController::correct_indicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___correct_indicator_40;
	// UnityEngine.GameObject MapController::miss_indicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___miss_indicator_41;
	// UnityEngine.GameObject MapController::sound_correct
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sound_correct_42;
	// UnityEngine.GameObject MapController::sound_miss
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sound_miss_43;
	// UnityEngine.GameObject MapController::sound_victory
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sound_victory_44;
	// System.Single MapController::timeLeft
	float ___timeLeft_45;
	// System.Single MapController::totalTime
	float ___totalTime_46;
	// System.Single MapController::missDelay
	float ___missDelay_47;
	// System.Single MapController::correctDelay
	float ___correctDelay_48;
	// System.Single MapController::blinkTimer
	float ___blinkTimer_49;
	// System.Boolean MapController::blinkFlag
	bool ___blinkFlag_50;
	// System.Boolean MapController::isGameOver
	bool ___isGameOver_51;
	// System.Boolean MapController::isPaused
	bool ___isPaused_52;
};

// OptionsController
struct OptionsController_t0472A8D6752570E1CB2BFFD42F5BB4AADE72E6E4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button OptionsController::soundButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___soundButton_4;
	// UnityEngine.Sprite OptionsController::switchOn
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___switchOn_5;
	// UnityEngine.Sprite OptionsController::switchOff
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___switchOff_6;
	// UnityEngine.UI.Button OptionsController::delayButtonShort
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___delayButtonShort_7;
	// UnityEngine.UI.Button OptionsController::delayButtonMedium
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___delayButtonMedium_8;
	// UnityEngine.UI.Button OptionsController::delayButtonLong
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___delayButtonLong_9;
	// UnityEngine.Sprite OptionsController::radioChecked
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___radioChecked_10;
	// UnityEngine.Sprite OptionsController::radioUnchecked
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___radioUnchecked_11;
};

// PinchZoom
struct PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PinchZoom::perspectiveZoomSpeed
	float ___perspectiveZoomSpeed_5;
	// System.Single PinchZoom::orthoZoomSpeed
	float ___orthoZoomSpeed_6;
};

struct PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_StaticFields
{
	// UnityEngine.Camera PinchZoom::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_4;
};

// PointerController
struct PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button PointerController::confirmButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___confirmButton_4;
	// UnityEngine.Rigidbody2D PointerController::rb2d
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb2d_5;
};

struct PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_StaticFields
{
	// System.Collections.Generic.List`1<System.String> PointerController::collisionList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___collisionList_6;
};

// SpriteSwap
struct SpriteSwap_t4B8952F51EEB1187C9788ECD1B1E6A63ACE0CC05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite SpriteSwap::startingSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___startingSprite_4;
	// UnityEngine.Sprite SpriteSwap::swappedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___swappedSprite_5;
};

// SwapColorInSprite
struct SwapColorInSprite_t916FF70A4A906B2E707461C69EE1312B3DAC216E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Texture2D SwapColorInSprite::uvMap
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___uvMap_4;
	// UnityEngine.Color SwapColorInSprite::correctColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___correctColor_5;
	// UnityEngine.Color SwapColorInSprite::missColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___missColor_6;
};

// TouchCamera
struct TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Nullable`1<UnityEngine.Vector2>[] TouchCamera::oldTouchPositions
	Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* ___oldTouchPositions_8;
	// UnityEngine.Vector2 TouchCamera::oldTouchVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oldTouchVector_9;
	// System.Single TouchCamera::oldTouchDistance
	float ___oldTouchDistance_10;
};

struct TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields
{
	// UnityEngine.Camera TouchCamera::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_4;
	// UnityEngine.Vector3 TouchCamera::starting_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___starting_position_5;
	// UnityEngine.Quaternion TouchCamera::starting_rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___starting_rotation_6;
	// System.Single TouchCamera::starting_size
	float ___starting_size_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.Nullable`1<UnityEngine.Vector2>[]
struct Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB  : public RuntimeArray
{
	ALIGN_FIELD (8) Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD m_Items[1];

	inline Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
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


// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_gshared (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector2>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector2>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_gshared (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mD4A750E28CFF3DE9AE032540D174398E46DAA39D (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Void GameState::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_reset_m4B84717279257EDE1D19FE8C4C2C149B2EA3ADF2 (const RuntimeMethod* method) ;
// System.Int32 MainMenuController::getRegion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MainMenuController_getRegion_m3636606B1E01475129A7642A50C243449EC1B6A4_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
inline void Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4 (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128 (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* __this, int32_t ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9*, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293 (String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String HighScoreController::convertSecondstoString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A (int32_t ___seconds0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F (String_t* ___key0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_fullScreen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_fullScreen_m46FCC49722BE6E27B92301D55A834C24B48B9EA2 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 DifficultyController::getDifficulty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DifficultyController_getDifficulty_m56C0ABDEC81211B96C813843BA6C7871836EBBE0_inline (const RuntimeMethod* method) ;
// System.Void MapController::resetTimeLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_resetTimeLeft_mA872AB41DBB66D0EE2591BF9310E7F255C4CBBCF (const RuntimeMethod* method) ;
// System.Void MapController::resetMissDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_resetMissDelay_mBB44D0E74D73F90CC4ED8AEEE6D7A19D298599FF (const RuntimeMethod* method) ;
// System.Void MapController::resetCorrectDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_resetCorrectDelay_mFADA83D789CFAF391064B8913B76AE50BB2A1E0E (const RuntimeMethod* method) ;
// System.Void MapController::resetBlinkTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_resetBlinkTimer_mDD683023C357A3FB69662904F4AB0ECE81B3F01A (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void MapController::setActiveRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_setActiveRegion_m89EB37AB6A25B3FEB791AF6AF6D68570E658FB3C (const RuntimeMethod* method) ;
// System.Void MapController::setStateList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_setStateList_m2E71C3063175AA50036979C76E67718909CE6B4A (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void MapController::loadGameState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_loadGameState_m5AC028170274077BDAE5984580E800784F4E5A4A (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) ;
// System.Void MapController::SelectStateRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_SelectStateRandomly_m99ADFF35A0C2A18B6B4F212120D685EA60DB7E60 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void MapController::Miss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_Miss_m2B644D72BA0A19DA712A232AA8C41FF91844C52F (const RuntimeMethod* method) ;
// System.String MapController::getMissedRegionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapController_getMissedRegionName_m6D4728D2E3D120157199CF7455A10FC8EF77122A (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// System.Void MapController::blinkMissedRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_blinkMissedRegion_mDA95285DE5434262E96469A2E34E6D0175ECB615 (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String MapController::getCurrentRegionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapController_getCurrentRegionName_mE0D0A49FBC050F5E7069BFB60E5CE9F7659D160F (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// System.Void MapController::RemoveStateFromList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_RemoveStateFromList_m5BD1B57933C6B12158FD96C8E3A6B42FC741BC63 (const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mF43DCB3BB782DEE371E585AF95DAD52EE17CC9BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponentInParent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m9266965D02368C3A64AED51B741DA840A0966FE3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void MapController::SaveScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_SaveScore_mD71301ECAE899EC3D4B1F3866F96D39711B75ECE (const RuntimeMethod* method) ;
// System.Void MapController::PlaySound(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_PlaySound_m8E8F67F9C0C793C6AAEFDC82214B39167EE3C82B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sound0, const RuntimeMethod* method) ;
// System.Void MapController::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_GameOver_m72EAA5E2B0056DD33C391E8A47A012D6EAD9590B (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void TouchCamera::ResetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchCamera_ResetCamera_m5271BB65AC7CD12482648D0A5F5995E042788DF9 (const RuntimeMethod* method) ;
// System.Void MapController::SetCorrectText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_SetCorrectText_mA73385DA0F7AF3CA0B4510793664EA9756811024 (const RuntimeMethod* method) ;
// System.Void MapController::HighlightRegion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_HighlightRegion_mE854B22C1C322DC7EC928EAF122A539C55B6DCE8 (int32_t ___regionIndex0, const RuntimeMethod* method) ;
// System.Void MapController::UpdateScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_UpdateScore_mA357B20E3DE1ECBC44671318AF0F2F5DA882E606 (const RuntimeMethod* method) ;
// System.Void MapController::SetMissedText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_SetMissedText_m0ABB92EAEEAB636EB7ABEC44C32080CB490C70D7 (const RuntimeMethod* method) ;
// System.Void TouchCamera::MoveCamera(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchCamera_MoveCamera_m01C54B50A6005FC51842E6B7FEBA458352DE0779 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) ;
// System.Int32 MapController::getAllowableMisses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapController_getAllowableMisses_m300CE272EAB3E3639F1F896CFB0FD9D9C86538E8 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String MainMenuController::getRegionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MainMenuController_getRegionName_m50ADB40B085CC67064E9CA261C35AA5BF2E039FA (const RuntimeMethod* method) ;
// System.String DifficultyController::getDifficultyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DifficultyController_getDifficultyName_m0B3B123526EC160775AEAEB2C3DFFF15839969DE (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF (String_t* ___key0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void MapController::saveGameState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_saveGameState_mB6435D6449402ABE9BA1F4E8FDE3BDAB1B96B70F (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) ;
// System.Void MapController::clickResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_clickResume_m583E406A7FFA3CB2DAA819F2C7DC97E0F58900A5 (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
inline bool List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void MapController::Correct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_Correct_mEF14CFF0B610D726B17940C11BE9B00B517E0178 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// System.Void SwapColorInSprite::ChangeColor(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwapColorInSprite_ChangeColor_mBD97C841B4F2C55C3B07F82707866926D95704AB (SwapColorInSprite_t916FF70A4A906B2E707461C69EE1312B3DAC216E* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___currentColor0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___newColor1, const RuntimeMethod* method) ;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
inline bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, const RuntimeMethod*))Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(T)
inline void Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73 (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<UnityEngine.Vector2>::GetValueOrDefault()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_gshared_inline)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector2>::get_Value()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7 (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, const RuntimeMethod*))Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_GetComponentInParent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mCD80CD167FF931072D6319B4BD1BCC7B85F06C2A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
// System.Int32 DifficultyController::getDifficulty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DifficultyController_getDifficulty_m56C0ABDEC81211B96C813843BA6C7871836EBBE0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return difficulty;
		il2cpp_codegen_runtime_class_init_inline(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var))->___difficulty_7;
		return L_0;
	}
}
// System.String DifficultyController::getDifficultyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DifficultyController_getDifficultyName_m0B3B123526EC160775AEAEB2C3DFFF15839969DE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD4A750E28CFF3DE9AE032540D174398E46DAA39D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return difficultyDict [difficulty];
		il2cpp_codegen_runtime_class_init_inline(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_0 = ((DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var))->___difficultyDict_8;
		int32_t L_1 = ((DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var))->___difficulty_7;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = Dictionary_2_get_Item_mD4A750E28CFF3DE9AE032540D174398E46DAA39D(L_0, L_1, Dictionary_2_get_Item_mD4A750E28CFF3DE9AE032540D174398E46DAA39D_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void DifficultyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultyController_Start_mF336B59B2DF7AC1C9A395C5DAEF4A9C0B9F5A4AD (DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral112C9279472C3BF1A79309174E15EEC7446EFCDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1202FEA2EC53F017342A09808A42391796DF8D64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral168212FF42159CB0E0978D88C908F089E3EB91F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34C5420DA983EFFEB80AC7814A9A058F7D33760B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C683CE4310FADC37356B863A2E3F944409BF63C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6571F05B1753B9FB7FA5AB76366EEA66970F9DB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72495D11FAC073A6ED5C5DDA401B5B1B3561B33C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C88CAF3EECE92058A9F632252C3C77A3F46B9EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87CAD67FACDB8156124DCE907D5322B0BD4165B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B0C045D79116B4269C58C2EB0F59E8862E7AD3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90D9B5FDBE9EF4EFC9C438603F71B1D65A6950A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9469D3E8C4475456FB56EDEABAF0BEB4DACFC63F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98A5CB137906643C3E7D7B72EB644E2B25C912C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F78F4F47845424589DF0EB1771DE2AB9A9B65CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0FA24CDB5506DED0E016B07BDB09EF934176A09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADA1FFFFE9DDF66C19FB738AB07C7A19881A7F9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAD05574591BC85AE8F74BC78ABA31F4AF74C912);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE82C8DB2F07AC352D233A1B058BA2B3E9021BD5A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GameState.reset();
		il2cpp_codegen_runtime_class_init_inline(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		GameState_reset_m4B84717279257EDE1D19FE8C4C2C149B2EA3ADF2(NULL);
		// switch ( MainMenuController.getRegion() ){
		il2cpp_codegen_runtime_class_init_inline(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = MainMenuController_getRegion_m3636606B1E01475129A7642A50C243449EC1B6A4_inline(NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_0090;
			}
			case 3:
			{
				goto IL_00c1;
			}
			case 4:
			{
				goto IL_00f2;
			}
			case 5:
			{
				goto IL_0123;
			}
			case 6:
			{
				goto IL_0154;
			}
		}
	}
	{
		return;
	}

IL_002e:
	{
		// EasyLabel.text = "50 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___EasyLabel_4;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralCAD05574591BC85AE8F74BC78ABA31F4AF74C912);
		// NormalLabel.text = "100 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___NormalLabel_5;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral98A5CB137906643C3E7D7B72EB644E2B25C912C5);
		// HardLabel.text = "165 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___HardLabel_6;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral72495D11FAC073A6ED5C5DDA401B5B1B3561B33C);
		// break;
		return;
	}

IL_005f:
	{
		// EasyLabel.text = "17 States";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___EasyLabel_4;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral9469D3E8C4475456FB56EDEABAF0BEB4DACFC63F);
		// NormalLabel.text = "34 States";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___NormalLabel_5;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral87CAD67FACDB8156124DCE907D5322B0BD4165B2);
		// HardLabel.text = "50 States";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___HardLabel_6;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteralADA1FFFFE9DDF66C19FB738AB07C7A19881A7F9D);
		// break;
		return;
	}

IL_0090:
	{
		// EasyLabel.text = "13 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___EasyLabel_4;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteralA0FA24CDB5506DED0E016B07BDB09EF934176A09);
		// NormalLabel.text = "27 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___NormalLabel_5;
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteral34C5420DA983EFFEB80AC7814A9A058F7D33760B);
		// HardLabel.text = "40 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___HardLabel_6;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteral8B0C045D79116B4269C58C2EB0F59E8862E7AD3B);
		// break;
		return;
	}

IL_00c1:
	{
		// EasyLabel.text = "15 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___EasyLabel_4;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteral6571F05B1753B9FB7FA5AB76366EEA66970F9DB3);
		// NormalLabel.text = "30 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___NormalLabel_5;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, _stringLiteral1202FEA2EC53F017342A09808A42391796DF8D64);
		// HardLabel.text = "46 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___HardLabel_6;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteral90D9B5FDBE9EF4EFC9C438603F71B1D65A6950A0);
		// break;
		return;
	}

IL_00f2:
	{
		// EasyLabel.text = "9 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___EasyLabel_4;
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteralE82C8DB2F07AC352D233A1B058BA2B3E9021BD5A);
		// NormalLabel.text = "18 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___NormalLabel_5;
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, _stringLiteral3C683CE4310FADC37356B863A2E3F944409BF63C);
		// HardLabel.text = "28 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___HardLabel_6;
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, _stringLiteral168212FF42159CB0E0978D88C908F089E3EB91F3);
		// break;
		return;
	}

IL_0123:
	{
		// EasyLabel.text = "9 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___EasyLabel_4;
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, _stringLiteralE82C8DB2F07AC352D233A1B058BA2B3E9021BD5A);
		// NormalLabel.text = "18 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___NormalLabel_5;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, _stringLiteral3C683CE4310FADC37356B863A2E3F944409BF63C);
		// HardLabel.text = "27 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___HardLabel_6;
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, _stringLiteral34C5420DA983EFFEB80AC7814A9A058F7D33760B);
		// break;
		return;
	}

IL_0154:
	{
		// EasyLabel.text = "7 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___EasyLabel_4;
		NullCheck(L_20);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, _stringLiteral112C9279472C3BF1A79309174E15EEC7446EFCDF);
		// NormalLabel.text = "14 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___NormalLabel_5;
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, _stringLiteral9F78F4F47845424589DF0EB1771DE2AB9A9B65CC);
		// HardLabel.text = "21 Countries";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = __this->___HardLabel_6;
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, _stringLiteral7C88CAF3EECE92058A9F632252C3C77A3F46B9EB);
		// }
		return;
	}
}
// System.Void DifficultyController::LoadDifficultyEasy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultyController_LoadDifficultyEasy_mF2215C124584C3F6B211476B0DD8FDCD2D7C5BD5 (DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// difficulty = 1;
		il2cpp_codegen_runtime_class_init_inline(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		((DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var))->___difficulty_7 = 1;
		// SceneManager.LoadScene ("Map");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38, NULL);
		// }
		return;
	}
}
// System.Void DifficultyController::LoadDifficultyNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultyController_LoadDifficultyNormal_m1637F6CED998CEA67104BBBABAF9811DA09641B3 (DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// difficulty = 2;
		il2cpp_codegen_runtime_class_init_inline(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		((DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var))->___difficulty_7 = 2;
		// SceneManager.LoadScene ("Map");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38, NULL);
		// }
		return;
	}
}
// System.Void DifficultyController::LoadDifficultyHard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultyController_LoadDifficultyHard_m7D8287FA8B795A8CDCEFDBB2BA499C3097C8DB77 (DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// difficulty = 3;
		il2cpp_codegen_runtime_class_init_inline(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		((DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var))->___difficulty_7 = 3;
		// SceneManager.LoadScene ("Map");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38, NULL);
		// }
		return;
	}
}
// System.Void DifficultyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultyController__ctor_m52220EC17FD1929364FC96BDB0A277BBAB0539F5 (DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void DifficultyController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultyController__cctor_mB667BAF1664FB94A5F6017951759FC1D6524A179 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral594DD0BF272B5892AA7F91E62C66BCD2666E72BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7479A72B853B4FDBFCA88205F6F2D9437EE4ED7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<int, string> difficultyDict = new Dictionary<int, string>() {
		//     { 1, "Easy" },
		//     { 2, "Normal" },
		//     { 3, "Hard" },
		// };
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_0 = (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9*)il2cpp_codegen_object_new(Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4(L_0, Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_1, 1, _stringLiteral7479A72B853B4FDBFCA88205F6F2D9437EE4ED7F, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_2, 2, _stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_3, 3, _stringLiteral594DD0BF272B5892AA7F91E62C66BCD2666E72BB, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		((DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var))->___difficultyDict_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var))->___difficultyDict_8), (void*)L_3);
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
// System.Void GameState::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState__cctor_m19F88653C06C03C0381F24F1DDB46321FA7E4634 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// saved = false;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___saved_0 = (bool)0;
		// difficulty = 0;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___difficulty_1 = 0;
		// region = 0;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___region_2 = 0;
		// state_names = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___state_names_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___state_names_3), (void*)L_0);
		// correct = 0;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___correct_4 = 0;
		// missed = 0;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___missed_5 = 0;
		// score = 0;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___score_6 = (0.0f);
		// timeLeft = 0;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___timeLeft_7 = (0.0f);
		// }
		return;
	}
}
// System.Void GameState::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_reset_m4B84717279257EDE1D19FE8C4C2C149B2EA3ADF2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// saved = false;
		il2cpp_codegen_runtime_class_init_inline(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___saved_0 = (bool)0;
		// difficulty = 0;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___difficulty_1 = 0;
		// region = 0;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___region_2 = 0;
		// state_names.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___state_names_3;
		NullCheck(L_0);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_0, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// correct = 0;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___correct_4 = 0;
		// missed = 0;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___missed_5 = 0;
		// score = 0;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___score_6 = (0.0f);
		// timeLeft = 0;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___timeLeft_7 = (0.0f);
		// }
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
// System.Void HighScoreController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScoreController_Start_m2740B2A49D5815B6CB731424816EA2CE84A99B1F (HighScoreController_tBF7FC79016466DC159F01870EC07F1960B0A92F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0266DE950C165BB825DC499BC51ADE94DC27385C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02A8F937D1DEF087338B2EA7072678F61C3F9F93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07DF0E45E276DF117CDB947E07284446E6BC00D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EC4A79C02BB02EE39C704DFDC60AADC90D951FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FE4B38C3ACD443A00F24F2A20626ECDE917F5F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1037CE23F7118834AA478D74659F74F55F56E540);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27C998756EA4CB9A750E0B2967B793EDF912000C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4349BECAC2CD8782A5EE4F42AE8A82284A4D9C39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44CEDE26D2994042229BC124E341833522BA7E5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49BAD7878664DC4C7FB99B3DA70B07103174C214);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B6234BA2B50B171172501BE900CAE6E14AC67B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D6EDBDFB2909692FE0D4C9FD437390223AEEFE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53586F0F6ECF19991181BDDA65C30F6EA84FA60B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral615C459449BE042E44457BBADD7BD612B1B98D2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6735B6D2DFDF9C6FDC4FB037EA8973AD88EE62A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B97A86B3195343C971D40139B9542A4B548E179);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7324103F5DEEED5B606B548F6AD059F65C1AD644);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744D2DC16E26F31320AF9DBC0BE5AB0F32D8DB4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E689CC1037B2B4600732FD79F2BB58A3DD82571);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9743B2523ACF6FCABE6B68DCD4AA98B897DD0F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FA823F0753AF2093FAFE2C83F4C9A0F4CA2B5FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA76F28E75D595295080BB6E44805651695401891);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB5554409C73D24C24F12DEDEB5739A81E0D0896);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADB89CC483AEEF637B26B2169028103379844C17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE634659BB8C0F67675301BFC876B99F404B8F8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5303D626BCFF1EBDD1AF194655BF1D53F45A897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB624F3CF80C51002D5C4DEF291B893C343D4B70A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6D96A9E53BF000982C3236C6D1DA9D569073EB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D709B8F1226745FF5DD2B700A7838910E63619);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5823DD3C34DF12E538B9EF646619FC72BE0420C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5E32EA412446CD76F316387C869143B544E9BFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC743A630ABA61A127ECA4568069D239B602D7376);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC78C5CEC2DD49AB590970B49CBD20BEE0564AA07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7DFFD0A5DD53DEF380B12A94138819A4EA1652A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB0E53CB6A1FB7577AB2E448D308EFF0333F601F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3B9E6D77F813EE26989DA7D1892E63462778A4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE602B05933C7313254F7175195220A90D38B15C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7C105DAB6D0DB0B25457B25F9F6188114382A81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2F055946DA84C54405ED735EBDBCCDB42353D92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4BFE05CD529D1B4E6F1C19C81B21880DEC83CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB2309F368A1D0B92AE06D5A12398CFB9C35E7D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEA181534336E807D79F29189655FE25E5CCC4EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// World_Easy_Score = PlayerPrefs.GetFloat("World_Easy_Score_Key", 0);
		float L_0;
		L_0 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteralE7C105DAB6D0DB0B25457B25F9F6188114382A81, (0.0f), NULL);
		__this->___World_Easy_Score_46 = L_0;
		// World_Normal_Score = PlayerPrefs.GetFloat("World_Normal_Score_Key", 0);
		float L_1;
		L_1 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral6B97A86B3195343C971D40139B9542A4B548E179, (0.0f), NULL);
		__this->___World_Normal_Score_47 = L_1;
		// World_Hard_Score = PlayerPrefs.GetFloat("World_Hard_Score_Key", 0);
		float L_2;
		L_2 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral1037CE23F7118834AA478D74659F74F55F56E540, (0.0f), NULL);
		__this->___World_Hard_Score_48 = L_2;
		// World_Easy_Time = PlayerPrefs.GetInt("World_Easy_Time_Key", 0);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral6735B6D2DFDF9C6FDC4FB037EA8973AD88EE62A0, 0, NULL);
		__this->___World_Easy_Time_49 = L_3;
		// World_Normal_Time = PlayerPrefs.GetInt("World_Normal_Time_Key", 0);
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral0EC4A79C02BB02EE39C704DFDC60AADC90D951FA, 0, NULL);
		__this->___World_Normal_Time_50 = L_4;
		// World_Hard_Time = PlayerPrefs.GetInt("World_Hard_Time_Key", 0);
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralB624F3CF80C51002D5C4DEF291B893C343D4B70A, 0, NULL);
		__this->___World_Hard_Time_51 = L_5;
		// USAStates_Easy_Score = PlayerPrefs.GetFloat("USAStates_Easy_Score_Key", 0);
		float L_6;
		L_6 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteralC5E32EA412446CD76F316387C869143B544E9BFE, (0.0f), NULL);
		__this->___USAStates_Easy_Score_52 = L_6;
		// USAStates_Normal_Score = PlayerPrefs.GetFloat("USAStates_Normal_Score_Key", 0);
		float L_7;
		L_7 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral615C459449BE042E44457BBADD7BD612B1B98D2F, (0.0f), NULL);
		__this->___USAStates_Normal_Score_53 = L_7;
		// USAStates_Hard_Score = PlayerPrefs.GetFloat("USAStates_Hard_Score_Key", 0);
		float L_8;
		L_8 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral4B6234BA2B50B171172501BE900CAE6E14AC67B0, (0.0f), NULL);
		__this->___USAStates_Hard_Score_54 = L_8;
		// USAStates_Easy_Time = PlayerPrefs.GetInt("USAStates_Easy_Time_Key", 0);
		int32_t L_9;
		L_9 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral27C998756EA4CB9A750E0B2967B793EDF912000C, 0, NULL);
		__this->___USAStates_Easy_Time_55 = L_9;
		// USAStates_Normal_Time = PlayerPrefs.GetInt("USAStates_Normal_Time_Key", 0);
		int32_t L_10;
		L_10 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralF2F055946DA84C54405ED735EBDBCCDB42353D92, 0, NULL);
		__this->___USAStates_Normal_Time_56 = L_10;
		// USAStates_Hard_Time = PlayerPrefs.GetInt("USAStates_Hard_Time_Key", 0);
		int32_t L_11;
		L_11 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral9FA823F0753AF2093FAFE2C83F4C9A0F4CA2B5FC, 0, NULL);
		__this->___USAStates_Hard_Time_57 = L_11;
		// Africa_Easy_Score = PlayerPrefs.GetFloat("Africa_Easy_Score_Key", 0);
		float L_12;
		L_12 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteralFEA181534336E807D79F29189655FE25E5CCC4EB, (0.0f), NULL);
		__this->___Africa_Easy_Score_58 = L_12;
		// Africa_Normal_Score = PlayerPrefs.GetFloat("Africa_Normal_Score_Key", 0);
		float L_13;
		L_13 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteralADB89CC483AEEF637B26B2169028103379844C17, (0.0f), NULL);
		__this->___Africa_Normal_Score_59 = L_13;
		// Africa_Hard_Score = PlayerPrefs.GetFloat("Africa_Hard_Score_Key", 0);
		float L_14;
		L_14 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteralC2D709B8F1226745FF5DD2B700A7838910E63619, (0.0f), NULL);
		__this->___Africa_Hard_Score_60 = L_14;
		// Africa_Easy_Time = PlayerPrefs.GetInt("Africa_Easy_Time_Key", 0);
		int32_t L_15;
		L_15 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralDB0E53CB6A1FB7577AB2E448D308EFF0333F601F, 0, NULL);
		__this->___Africa_Easy_Time_61 = L_15;
		// Africa_Normal_Time = PlayerPrefs.GetInt("Africa_Normal_Time_Key", 0);
		int32_t L_16;
		L_16 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral0266DE950C165BB825DC499BC51ADE94DC27385C, 0, NULL);
		__this->___Africa_Normal_Time_62 = L_16;
		// Africa_Hard_Time = PlayerPrefs.GetInt("Africa_Hard_Time_Key", 0);
		int32_t L_17;
		L_17 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral7E689CC1037B2B4600732FD79F2BB58A3DD82571, 0, NULL);
		__this->___Africa_Hard_Time_63 = L_17;
		// Asia_Easy_Score = PlayerPrefs.GetFloat("Asia_Easy_Score_Key", 0);
		float L_18;
		L_18 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteralB5303D626BCFF1EBDD1AF194655BF1D53F45A897, (0.0f), NULL);
		__this->___Asia_Easy_Score_64 = L_18;
		// Asia_Normal_Score = PlayerPrefs.GetFloat("Asia_Normal_Score_Key", 0);
		float L_19;
		L_19 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteralC5823DD3C34DF12E538B9EF646619FC72BE0420C, (0.0f), NULL);
		__this->___Asia_Normal_Score_65 = L_19;
		// Asia_Hard_Score = PlayerPrefs.GetFloat("Asia_Hard_Score_Key", 0);
		float L_20;
		L_20 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral4349BECAC2CD8782A5EE4F42AE8A82284A4D9C39, (0.0f), NULL);
		__this->___Asia_Hard_Score_66 = L_20;
		// Asia_Easy_Time = PlayerPrefs.GetInt("Asia_Easy_Time_Key", 0);
		int32_t L_21;
		L_21 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralA76F28E75D595295080BB6E44805651695401891, 0, NULL);
		__this->___Asia_Easy_Time_67 = L_21;
		// Asia_Normal_Time = PlayerPrefs.GetInt("Asia_Normal_Time_Key", 0);
		int32_t L_22;
		L_22 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral7324103F5DEEED5B606B548F6AD059F65C1AD644, 0, NULL);
		__this->___Asia_Normal_Time_68 = L_22;
		// Asia_Hard_Time = PlayerPrefs.GetInt("Asia_Hard_Time_Key", 0);
		int32_t L_23;
		L_23 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralAB5554409C73D24C24F12DEDEB5739A81E0D0896, 0, NULL);
		__this->___Asia_Hard_Time_69 = L_23;
		// Europe_Easy_Score = PlayerPrefs.GetFloat("Europe_Easy_Score_Key", 0);
		float L_24;
		L_24 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral9743B2523ACF6FCABE6B68DCD4AA98B897DD0F78, (0.0f), NULL);
		__this->___Europe_Easy_Score_70 = L_24;
		// Europe_Normal_Score = PlayerPrefs.GetFloat("Europe_Normal_Score_Key", 0);
		float L_25;
		L_25 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral744D2DC16E26F31320AF9DBC0BE5AB0F32D8DB4B, (0.0f), NULL);
		__this->___Europe_Normal_Score_71 = L_25;
		// Europe_Hard_Score = PlayerPrefs.GetFloat("Europe_Hard_Score_Key", 0);
		float L_26;
		L_26 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral0FE4B38C3ACD443A00F24F2A20626ECDE917F5F5, (0.0f), NULL);
		__this->___Europe_Hard_Score_72 = L_26;
		// Europe_Easy_Time = PlayerPrefs.GetInt("Europe_Easy_Time_Key", 0);
		int32_t L_27;
		L_27 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral53586F0F6ECF19991181BDDA65C30F6EA84FA60B, 0, NULL);
		__this->___Europe_Easy_Time_73 = L_27;
		// Europe_Normal_Time = PlayerPrefs.GetInt("Europe_Normal_Time_Key", 0);
		int32_t L_28;
		L_28 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralAE634659BB8C0F67675301BFC876B99F404B8F8D, 0, NULL);
		__this->___Europe_Normal_Time_74 = L_28;
		// Europe_Hard_Time = PlayerPrefs.GetInt("Europe_Hard_Time_Key", 0);
		int32_t L_29;
		L_29 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralB6D96A9E53BF000982C3236C6D1DA9D569073EB5, 0, NULL);
		__this->___Europe_Hard_Time_75 = L_29;
		// LatinAmerica_Easy_Score = PlayerPrefs.GetFloat("LatinAmerica_Easy_Score_Key", 0);
		float L_30;
		L_30 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteralC743A630ABA61A127ECA4568069D239B602D7376, (0.0f), NULL);
		__this->___LatinAmerica_Easy_Score_76 = L_30;
		// LatinAmerica_Normal_Score = PlayerPrefs.GetFloat("LatinAmerica_Normal_Score_Key", 0);
		float L_31;
		L_31 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral49BAD7878664DC4C7FB99B3DA70B07103174C214, (0.0f), NULL);
		__this->___LatinAmerica_Normal_Score_77 = L_31;
		// LatinAmerica_Hard_Score = PlayerPrefs.GetFloat("LatinAmerica_Hard_Score_Key", 0);
		float L_32;
		L_32 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteralC78C5CEC2DD49AB590970B49CBD20BEE0564AA07, (0.0f), NULL);
		__this->___LatinAmerica_Hard_Score_78 = L_32;
		// LatinAmerica_Easy_Time = PlayerPrefs.GetInt("LatinAmerica_Easy_Time_Key", 0);
		int32_t L_33;
		L_33 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralD7DFFD0A5DD53DEF380B12A94138819A4EA1652A, 0, NULL);
		__this->___LatinAmerica_Easy_Time_79 = L_33;
		// LatinAmerica_Normal_Time = PlayerPrefs.GetInt("LatinAmerica_Normal_Time_Key", 0);
		int32_t L_34;
		L_34 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralE602B05933C7313254F7175195220A90D38B15C0, 0, NULL);
		__this->___LatinAmerica_Normal_Time_80 = L_34;
		// LatinAmerica_Hard_Time = PlayerPrefs.GetInt("LatinAmerica_Hard_Time_Key", 0);
		int32_t L_35;
		L_35 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral02A8F937D1DEF087338B2EA7072678F61C3F9F93, 0, NULL);
		__this->___LatinAmerica_Hard_Time_81 = L_35;
		// MiddleEast_Easy_Score = PlayerPrefs.GetFloat("MiddleEast_Easy_Score_Key", 0);
		float L_36;
		L_36 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteralFB2309F368A1D0B92AE06D5A12398CFB9C35E7D2, (0.0f), NULL);
		__this->___MiddleEast_Easy_Score_82 = L_36;
		// MiddleEast_Normal_Score = PlayerPrefs.GetFloat("MiddleEast_Normal_Score_Key", 0);
		float L_37;
		L_37 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteralF4BFE05CD529D1B4E6F1C19C81B21880DEC83CB9, (0.0f), NULL);
		__this->___MiddleEast_Normal_Score_83 = L_37;
		// MiddleEast_Hard_Score = PlayerPrefs.GetFloat("MiddleEast_Hard_Score_Key", 0);
		float L_38;
		L_38 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral44CEDE26D2994042229BC124E341833522BA7E5D, (0.0f), NULL);
		__this->___MiddleEast_Hard_Score_84 = L_38;
		// MiddleEast_Easy_Time = PlayerPrefs.GetInt("MiddleEast_Easy_Time_Key", 0);
		int32_t L_39;
		L_39 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral4D6EDBDFB2909692FE0D4C9FD437390223AEEFE4, 0, NULL);
		__this->___MiddleEast_Easy_Time_85 = L_39;
		// MiddleEast_Normal_Time = PlayerPrefs.GetInt("MiddleEast_Normal_Time_Key", 0);
		int32_t L_40;
		L_40 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral07DF0E45E276DF117CDB947E07284446E6BC00D0, 0, NULL);
		__this->___MiddleEast_Normal_Time_86 = L_40;
		// MiddleEast_Hard_Time = PlayerPrefs.GetInt("MiddleEast_Hard_Time_Key", 0);
		int32_t L_41;
		L_41 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralE3B9E6D77F813EE26989DA7D1892E63462778A4C, 0, NULL);
		__this->___MiddleEast_Hard_Time_87 = L_41;
		// World_Easy_Score_Text.text = World_Easy_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_42 = __this->___World_Easy_Score_Text_4;
		float* L_43 = (&__this->___World_Easy_Score_46);
		String_t* L_44;
		L_44 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_43, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_42);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_42, L_44);
		// World_Normal_Score_Text.text = World_Normal_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_45 = __this->___World_Normal_Score_Text_5;
		float* L_46 = (&__this->___World_Normal_Score_47);
		String_t* L_47;
		L_47 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_46, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_45);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_45, L_47);
		// World_Hard_Score_Text.text = World_Hard_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_48 = __this->___World_Hard_Score_Text_6;
		float* L_49 = (&__this->___World_Hard_Score_48);
		String_t* L_50;
		L_50 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_49, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_48);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_48, L_50);
		// World_Easy_Time_Text.text = convertSecondstoString(World_Easy_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_51 = __this->___World_Easy_Time_Text_7;
		int32_t L_52 = __this->___World_Easy_Time_49;
		String_t* L_53;
		L_53 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_52, NULL);
		NullCheck(L_51);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_51, L_53);
		// World_Normal_Time_Text.text = convertSecondstoString(World_Normal_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_54 = __this->___World_Normal_Time_Text_8;
		int32_t L_55 = __this->___World_Normal_Time_50;
		String_t* L_56;
		L_56 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_55, NULL);
		NullCheck(L_54);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_54, L_56);
		// World_Hard_Time_Text.text = convertSecondstoString(World_Hard_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_57 = __this->___World_Hard_Time_Text_9;
		int32_t L_58 = __this->___World_Hard_Time_51;
		String_t* L_59;
		L_59 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_58, NULL);
		NullCheck(L_57);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_57, L_59);
		// USAStates_Easy_Score_Text.text = USAStates_Easy_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_60 = __this->___USAStates_Easy_Score_Text_10;
		float* L_61 = (&__this->___USAStates_Easy_Score_52);
		String_t* L_62;
		L_62 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_61, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_60, L_62);
		// USAStates_Normal_Score_Text.text = USAStates_Normal_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_63 = __this->___USAStates_Normal_Score_Text_11;
		float* L_64 = (&__this->___USAStates_Normal_Score_53);
		String_t* L_65;
		L_65 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_64, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_63);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_63, L_65);
		// USAStates_Hard_Score_Text.text = USAStates_Hard_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_66 = __this->___USAStates_Hard_Score_Text_12;
		float* L_67 = (&__this->___USAStates_Hard_Score_54);
		String_t* L_68;
		L_68 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_67, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_66);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_66, L_68);
		// USAStates_Easy_Time_Text.text = convertSecondstoString(USAStates_Easy_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_69 = __this->___USAStates_Easy_Time_Text_13;
		int32_t L_70 = __this->___USAStates_Easy_Time_55;
		String_t* L_71;
		L_71 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_70, NULL);
		NullCheck(L_69);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_69, L_71);
		// USAStates_Normal_Time_Text.text = convertSecondstoString(USAStates_Normal_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_72 = __this->___USAStates_Normal_Time_Text_14;
		int32_t L_73 = __this->___USAStates_Normal_Time_56;
		String_t* L_74;
		L_74 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_73, NULL);
		NullCheck(L_72);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_72, L_74);
		// USAStates_Hard_Time_Text.text = convertSecondstoString(USAStates_Hard_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_75 = __this->___USAStates_Hard_Time_Text_15;
		int32_t L_76 = __this->___USAStates_Hard_Time_57;
		String_t* L_77;
		L_77 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_76, NULL);
		NullCheck(L_75);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_75, L_77);
		// Africa_Easy_Score_Text.text = Africa_Easy_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_78 = __this->___Africa_Easy_Score_Text_16;
		float* L_79 = (&__this->___Africa_Easy_Score_58);
		String_t* L_80;
		L_80 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_79, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_78);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_78, L_80);
		// Africa_Normal_Score_Text.text = Africa_Normal_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_81 = __this->___Africa_Normal_Score_Text_17;
		float* L_82 = (&__this->___Africa_Normal_Score_59);
		String_t* L_83;
		L_83 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_82, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_81);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_81, L_83);
		// Africa_Hard_Score_Text.text = Africa_Hard_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_84 = __this->___Africa_Hard_Score_Text_18;
		float* L_85 = (&__this->___Africa_Hard_Score_60);
		String_t* L_86;
		L_86 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_85, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_84);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_84, L_86);
		// Africa_Easy_Time_Text.text = convertSecondstoString(Africa_Easy_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_87 = __this->___Africa_Easy_Time_Text_19;
		int32_t L_88 = __this->___Africa_Easy_Time_61;
		String_t* L_89;
		L_89 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_88, NULL);
		NullCheck(L_87);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_87, L_89);
		// Africa_Normal_Time_Text.text = convertSecondstoString(Africa_Normal_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_90 = __this->___Africa_Normal_Time_Text_20;
		int32_t L_91 = __this->___Africa_Normal_Time_62;
		String_t* L_92;
		L_92 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_91, NULL);
		NullCheck(L_90);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_90, L_92);
		// Africa_Hard_Time_Text.text = convertSecondstoString(Africa_Hard_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_93 = __this->___Africa_Hard_Time_Text_21;
		int32_t L_94 = __this->___Africa_Hard_Time_63;
		String_t* L_95;
		L_95 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_94, NULL);
		NullCheck(L_93);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_93, L_95);
		// Asia_Easy_Score_Text.text = Asia_Easy_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_96 = __this->___Asia_Easy_Score_Text_22;
		float* L_97 = (&__this->___Asia_Easy_Score_64);
		String_t* L_98;
		L_98 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_97, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_96);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_96, L_98);
		// Asia_Normal_Score_Text.text = Asia_Normal_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_99 = __this->___Asia_Normal_Score_Text_23;
		float* L_100 = (&__this->___Asia_Normal_Score_65);
		String_t* L_101;
		L_101 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_100, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_99);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_99, L_101);
		// Asia_Hard_Score_Text.text = Asia_Hard_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_102 = __this->___Asia_Hard_Score_Text_24;
		float* L_103 = (&__this->___Asia_Hard_Score_66);
		String_t* L_104;
		L_104 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_103, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_102);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_102, L_104);
		// Asia_Easy_Time_Text.text = convertSecondstoString(Asia_Easy_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_105 = __this->___Asia_Easy_Time_Text_25;
		int32_t L_106 = __this->___Asia_Easy_Time_67;
		String_t* L_107;
		L_107 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_106, NULL);
		NullCheck(L_105);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_105, L_107);
		// Asia_Normal_Time_Text.text = convertSecondstoString(Asia_Normal_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_108 = __this->___Asia_Normal_Time_Text_26;
		int32_t L_109 = __this->___Asia_Normal_Time_68;
		String_t* L_110;
		L_110 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_109, NULL);
		NullCheck(L_108);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_108, L_110);
		// Asia_Hard_Time_Text.text = convertSecondstoString(Asia_Hard_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_111 = __this->___Asia_Hard_Time_Text_27;
		int32_t L_112 = __this->___Asia_Hard_Time_69;
		String_t* L_113;
		L_113 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_112, NULL);
		NullCheck(L_111);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_111, L_113);
		// Europe_Easy_Score_Text.text = Europe_Easy_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_114 = __this->___Europe_Easy_Score_Text_28;
		float* L_115 = (&__this->___Europe_Easy_Score_70);
		String_t* L_116;
		L_116 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_115, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_114);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_114, L_116);
		// Europe_Normal_Score_Text.text = Europe_Normal_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_117 = __this->___Europe_Normal_Score_Text_29;
		float* L_118 = (&__this->___Europe_Normal_Score_71);
		String_t* L_119;
		L_119 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_118, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_117);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_117, L_119);
		// Europe_Hard_Score_Text.text = Europe_Hard_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_120 = __this->___Europe_Hard_Score_Text_30;
		float* L_121 = (&__this->___Europe_Hard_Score_72);
		String_t* L_122;
		L_122 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_121, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_120);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_120, L_122);
		// Europe_Easy_Time_Text.text = convertSecondstoString(Europe_Easy_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_123 = __this->___Europe_Easy_Time_Text_31;
		int32_t L_124 = __this->___Europe_Easy_Time_73;
		String_t* L_125;
		L_125 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_124, NULL);
		NullCheck(L_123);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_123, L_125);
		// Europe_Normal_Time_Text.text = convertSecondstoString(Europe_Normal_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_126 = __this->___Europe_Normal_Time_Text_32;
		int32_t L_127 = __this->___Europe_Normal_Time_74;
		String_t* L_128;
		L_128 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_127, NULL);
		NullCheck(L_126);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_126, L_128);
		// Europe_Hard_Time_Text.text = convertSecondstoString(Europe_Hard_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_129 = __this->___Europe_Hard_Time_Text_33;
		int32_t L_130 = __this->___Europe_Hard_Time_75;
		String_t* L_131;
		L_131 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_130, NULL);
		NullCheck(L_129);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_129, L_131);
		// LatinAmerica_Easy_Score_Text.text = LatinAmerica_Easy_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_132 = __this->___LatinAmerica_Easy_Score_Text_34;
		float* L_133 = (&__this->___LatinAmerica_Easy_Score_76);
		String_t* L_134;
		L_134 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_133, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_132);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_132, L_134);
		// LatinAmerica_Normal_Score_Text.text = LatinAmerica_Normal_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_135 = __this->___LatinAmerica_Normal_Score_Text_35;
		float* L_136 = (&__this->___LatinAmerica_Normal_Score_77);
		String_t* L_137;
		L_137 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_136, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_135);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_135, L_137);
		// LatinAmerica_Hard_Score_Text.text = LatinAmerica_Hard_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_138 = __this->___LatinAmerica_Hard_Score_Text_36;
		float* L_139 = (&__this->___LatinAmerica_Hard_Score_78);
		String_t* L_140;
		L_140 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_139, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_138);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_138, L_140);
		// LatinAmerica_Easy_Time_Text.text = convertSecondstoString(LatinAmerica_Easy_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_141 = __this->___LatinAmerica_Easy_Time_Text_37;
		int32_t L_142 = __this->___LatinAmerica_Easy_Time_79;
		String_t* L_143;
		L_143 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_142, NULL);
		NullCheck(L_141);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_141, L_143);
		// LatinAmerica_Normal_Time_Text.text = convertSecondstoString(LatinAmerica_Normal_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_144 = __this->___LatinAmerica_Normal_Time_Text_38;
		int32_t L_145 = __this->___LatinAmerica_Normal_Time_80;
		String_t* L_146;
		L_146 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_145, NULL);
		NullCheck(L_144);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_144, L_146);
		// LatinAmerica_Hard_Time_Text.text = convertSecondstoString(LatinAmerica_Hard_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_147 = __this->___LatinAmerica_Hard_Time_Text_39;
		int32_t L_148 = __this->___LatinAmerica_Hard_Time_81;
		String_t* L_149;
		L_149 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_148, NULL);
		NullCheck(L_147);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_147, L_149);
		// MiddleEast_Easy_Score_Text.text = MiddleEast_Easy_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_150 = __this->___MiddleEast_Easy_Score_Text_40;
		float* L_151 = (&__this->___MiddleEast_Easy_Score_82);
		String_t* L_152;
		L_152 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_151, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_150);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_150, L_152);
		// MiddleEast_Normal_Score_Text.text = MiddleEast_Normal_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_153 = __this->___MiddleEast_Normal_Score_Text_41;
		float* L_154 = (&__this->___MiddleEast_Normal_Score_83);
		String_t* L_155;
		L_155 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_154, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_153);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_153, L_155);
		// MiddleEast_Hard_Score_Text.text = MiddleEast_Hard_Score.ToString("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_156 = __this->___MiddleEast_Hard_Score_Text_42;
		float* L_157 = (&__this->___MiddleEast_Hard_Score_84);
		String_t* L_158;
		L_158 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_157, _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		NullCheck(L_156);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_156, L_158);
		// MiddleEast_Easy_Time_Text.text = convertSecondstoString(MiddleEast_Easy_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_159 = __this->___MiddleEast_Easy_Time_Text_43;
		int32_t L_160 = __this->___MiddleEast_Easy_Time_85;
		String_t* L_161;
		L_161 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_160, NULL);
		NullCheck(L_159);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_159, L_161);
		// MiddleEast_Normal_Time_Text.text = convertSecondstoString(MiddleEast_Normal_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_162 = __this->___MiddleEast_Normal_Time_Text_44;
		int32_t L_163 = __this->___MiddleEast_Normal_Time_86;
		String_t* L_164;
		L_164 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_163, NULL);
		NullCheck(L_162);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_162, L_164);
		// MiddleEast_Hard_Time_Text.text = convertSecondstoString(MiddleEast_Hard_Time);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_165 = __this->___MiddleEast_Hard_Time_Text_45;
		int32_t L_166 = __this->___MiddleEast_Hard_Time_87;
		String_t* L_167;
		L_167 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_166, NULL);
		NullCheck(L_165);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_165, L_167);
		// }
		return;
	}
}
// System.Void HighScoreController::ResetAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScoreController_ResetAll_m54AADD4A1E20C32A4D27A4FD6D9F016B7F19BDC8 (HighScoreController_tBF7FC79016466DC159F01870EC07F1960B0A92F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0266DE950C165BB825DC499BC51ADE94DC27385C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02A8F937D1DEF087338B2EA7072678F61C3F9F93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07DF0E45E276DF117CDB947E07284446E6BC00D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EC4A79C02BB02EE39C704DFDC60AADC90D951FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FE4B38C3ACD443A00F24F2A20626ECDE917F5F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1037CE23F7118834AA478D74659F74F55F56E540);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27C998756EA4CB9A750E0B2967B793EDF912000C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4349BECAC2CD8782A5EE4F42AE8A82284A4D9C39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44CEDE26D2994042229BC124E341833522BA7E5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49BAD7878664DC4C7FB99B3DA70B07103174C214);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B6234BA2B50B171172501BE900CAE6E14AC67B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D6EDBDFB2909692FE0D4C9FD437390223AEEFE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53586F0F6ECF19991181BDDA65C30F6EA84FA60B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral615C459449BE042E44457BBADD7BD612B1B98D2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6735B6D2DFDF9C6FDC4FB037EA8973AD88EE62A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B97A86B3195343C971D40139B9542A4B548E179);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7324103F5DEEED5B606B548F6AD059F65C1AD644);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744D2DC16E26F31320AF9DBC0BE5AB0F32D8DB4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E689CC1037B2B4600732FD79F2BB58A3DD82571);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9743B2523ACF6FCABE6B68DCD4AA98B897DD0F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FA823F0753AF2093FAFE2C83F4C9A0F4CA2B5FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA76F28E75D595295080BB6E44805651695401891);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB5554409C73D24C24F12DEDEB5739A81E0D0896);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADB89CC483AEEF637B26B2169028103379844C17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE634659BB8C0F67675301BFC876B99F404B8F8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5303D626BCFF1EBDD1AF194655BF1D53F45A897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB624F3CF80C51002D5C4DEF291B893C343D4B70A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6D96A9E53BF000982C3236C6D1DA9D569073EB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D709B8F1226745FF5DD2B700A7838910E63619);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5823DD3C34DF12E538B9EF646619FC72BE0420C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5E32EA412446CD76F316387C869143B544E9BFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC743A630ABA61A127ECA4568069D239B602D7376);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC78C5CEC2DD49AB590970B49CBD20BEE0564AA07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7DFFD0A5DD53DEF380B12A94138819A4EA1652A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB0E53CB6A1FB7577AB2E448D308EFF0333F601F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3B9E6D77F813EE26989DA7D1892E63462778A4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE602B05933C7313254F7175195220A90D38B15C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7C105DAB6D0DB0B25457B25F9F6188114382A81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2F055946DA84C54405ED735EBDBCCDB42353D92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4BFE05CD529D1B4E6F1C19C81B21880DEC83CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB2309F368A1D0B92AE06D5A12398CFB9C35E7D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEA181534336E807D79F29189655FE25E5CCC4EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.DeleteKey ("World_Easy_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralE7C105DAB6D0DB0B25457B25F9F6188114382A81, NULL);
		// PlayerPrefs.DeleteKey ("World_Normal_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral6B97A86B3195343C971D40139B9542A4B548E179, NULL);
		// PlayerPrefs.DeleteKey ("World_Hard_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral1037CE23F7118834AA478D74659F74F55F56E540, NULL);
		// PlayerPrefs.DeleteKey ("World_Easy_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral6735B6D2DFDF9C6FDC4FB037EA8973AD88EE62A0, NULL);
		// PlayerPrefs.DeleteKey ("World_Normal_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral0EC4A79C02BB02EE39C704DFDC60AADC90D951FA, NULL);
		// PlayerPrefs.DeleteKey ("World_Hard_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralB624F3CF80C51002D5C4DEF291B893C343D4B70A, NULL);
		// World_Easy_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___World_Easy_Score_Text_4;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// World_Normal_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___World_Normal_Score_Text_5;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// World_Hard_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___World_Hard_Score_Text_6;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// World_Easy_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___World_Easy_Time_Text_7;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// World_Normal_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___World_Normal_Time_Text_8;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// World_Hard_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___World_Hard_Time_Text_9;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// PlayerPrefs.DeleteKey ("USAStates_Easy_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralC5E32EA412446CD76F316387C869143B544E9BFE, NULL);
		// PlayerPrefs.DeleteKey ("USAStates_Normal_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral615C459449BE042E44457BBADD7BD612B1B98D2F, NULL);
		// PlayerPrefs.DeleteKey ("USAStates_Hard_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral4B6234BA2B50B171172501BE900CAE6E14AC67B0, NULL);
		// PlayerPrefs.DeleteKey ("USAStates_Easy_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral27C998756EA4CB9A750E0B2967B793EDF912000C, NULL);
		// PlayerPrefs.DeleteKey ("USAStates_Normal_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralF2F055946DA84C54405ED735EBDBCCDB42353D92, NULL);
		// PlayerPrefs.DeleteKey ("USAStates_Hard_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral9FA823F0753AF2093FAFE2C83F4C9A0F4CA2B5FC, NULL);
		// USAStates_Easy_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___USAStates_Easy_Score_Text_10;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// USAStates_Normal_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___USAStates_Normal_Score_Text_11;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// USAStates_Hard_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___USAStates_Hard_Score_Text_12;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// USAStates_Easy_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___USAStates_Easy_Time_Text_13;
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// USAStates_Normal_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___USAStates_Normal_Time_Text_14;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// USAStates_Hard_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___USAStates_Hard_Time_Text_15;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// PlayerPrefs.DeleteKey ("Africa_Easy_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralFEA181534336E807D79F29189655FE25E5CCC4EB, NULL);
		// PlayerPrefs.DeleteKey ("Africa_Normal_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralADB89CC483AEEF637B26B2169028103379844C17, NULL);
		// PlayerPrefs.DeleteKey ("Africa_Hard_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralC2D709B8F1226745FF5DD2B700A7838910E63619, NULL);
		// PlayerPrefs.DeleteKey ("Africa_Easy_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralDB0E53CB6A1FB7577AB2E448D308EFF0333F601F, NULL);
		// PlayerPrefs.DeleteKey ("Africa_Normal_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral0266DE950C165BB825DC499BC51ADE94DC27385C, NULL);
		// PlayerPrefs.DeleteKey ("Africa_Hard_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral7E689CC1037B2B4600732FD79F2BB58A3DD82571, NULL);
		// Africa_Easy_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___Africa_Easy_Score_Text_16;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// Africa_Normal_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___Africa_Normal_Score_Text_17;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// Africa_Hard_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___Africa_Hard_Score_Text_18;
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// Africa_Easy_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___Africa_Easy_Time_Text_19;
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// Africa_Normal_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___Africa_Normal_Time_Text_20;
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// Africa_Hard_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___Africa_Hard_Time_Text_21;
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// PlayerPrefs.DeleteKey ("Asia_Easy_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralB5303D626BCFF1EBDD1AF194655BF1D53F45A897, NULL);
		// PlayerPrefs.DeleteKey ("Asia_Normal_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralC5823DD3C34DF12E538B9EF646619FC72BE0420C, NULL);
		// PlayerPrefs.DeleteKey ("Asia_Hard_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral4349BECAC2CD8782A5EE4F42AE8A82284A4D9C39, NULL);
		// PlayerPrefs.DeleteKey ("Asia_Easy_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralA76F28E75D595295080BB6E44805651695401891, NULL);
		// PlayerPrefs.DeleteKey ("Asia_Normal_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral7324103F5DEEED5B606B548F6AD059F65C1AD644, NULL);
		// PlayerPrefs.DeleteKey ("Asia_Hard_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralAB5554409C73D24C24F12DEDEB5739A81E0D0896, NULL);
		// Asia_Easy_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___Asia_Easy_Score_Text_22;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// Asia_Normal_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___Asia_Normal_Score_Text_23;
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// Asia_Hard_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___Asia_Hard_Score_Text_24;
		NullCheck(L_20);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// Asia_Easy_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___Asia_Easy_Time_Text_25;
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// Asia_Normal_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = __this->___Asia_Normal_Time_Text_26;
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// Asia_Hard_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = __this->___Asia_Hard_Time_Text_27;
		NullCheck(L_23);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// PlayerPrefs.DeleteKey ("Europe_Easy_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral9743B2523ACF6FCABE6B68DCD4AA98B897DD0F78, NULL);
		// PlayerPrefs.DeleteKey ("Europe_Normal_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral744D2DC16E26F31320AF9DBC0BE5AB0F32D8DB4B, NULL);
		// PlayerPrefs.DeleteKey ("Europe_Hard_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral0FE4B38C3ACD443A00F24F2A20626ECDE917F5F5, NULL);
		// PlayerPrefs.DeleteKey ("Europe_Easy_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral53586F0F6ECF19991181BDDA65C30F6EA84FA60B, NULL);
		// PlayerPrefs.DeleteKey ("Europe_Normal_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralAE634659BB8C0F67675301BFC876B99F404B8F8D, NULL);
		// PlayerPrefs.DeleteKey ("Europe_Hard_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralB6D96A9E53BF000982C3236C6D1DA9D569073EB5, NULL);
		// Europe_Easy_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = __this->___Europe_Easy_Score_Text_28;
		NullCheck(L_24);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// Europe_Normal_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___Europe_Normal_Score_Text_29;
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// Europe_Hard_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = __this->___Europe_Hard_Score_Text_30;
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// Europe_Easy_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27 = __this->___Europe_Easy_Time_Text_31;
		NullCheck(L_27);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// Europe_Normal_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_28 = __this->___Europe_Normal_Time_Text_32;
		NullCheck(L_28);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// Europe_Hard_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = __this->___Europe_Hard_Time_Text_33;
		NullCheck(L_29);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// PlayerPrefs.DeleteKey ("LatinAmerica_Easy_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralC743A630ABA61A127ECA4568069D239B602D7376, NULL);
		// PlayerPrefs.DeleteKey ("LatinAmerica_Normal_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral49BAD7878664DC4C7FB99B3DA70B07103174C214, NULL);
		// PlayerPrefs.DeleteKey ("LatinAmerica_Hard_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralC78C5CEC2DD49AB590970B49CBD20BEE0564AA07, NULL);
		// PlayerPrefs.DeleteKey ("LatinAmerica_Easy_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralD7DFFD0A5DD53DEF380B12A94138819A4EA1652A, NULL);
		// PlayerPrefs.DeleteKey ("LatinAmerica_Normal_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralE602B05933C7313254F7175195220A90D38B15C0, NULL);
		// PlayerPrefs.DeleteKey ("LatinAmerica_Hard_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral02A8F937D1DEF087338B2EA7072678F61C3F9F93, NULL);
		// LatinAmerica_Easy_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = __this->___LatinAmerica_Easy_Score_Text_34;
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// LatinAmerica_Normal_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_31 = __this->___LatinAmerica_Normal_Score_Text_35;
		NullCheck(L_31);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// LatinAmerica_Hard_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_32 = __this->___LatinAmerica_Hard_Score_Text_36;
		NullCheck(L_32);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_32, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// LatinAmerica_Easy_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_33 = __this->___LatinAmerica_Easy_Time_Text_37;
		NullCheck(L_33);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// LatinAmerica_Normal_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_34 = __this->___LatinAmerica_Normal_Time_Text_38;
		NullCheck(L_34);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_34, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// LatinAmerica_Hard_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___LatinAmerica_Hard_Time_Text_39;
		NullCheck(L_35);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// PlayerPrefs.DeleteKey ("MiddleEast_Easy_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralFB2309F368A1D0B92AE06D5A12398CFB9C35E7D2, NULL);
		// PlayerPrefs.DeleteKey ("MiddleEast_Normal_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralF4BFE05CD529D1B4E6F1C19C81B21880DEC83CB9, NULL);
		// PlayerPrefs.DeleteKey ("MiddleEast_Hard_Score_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral44CEDE26D2994042229BC124E341833522BA7E5D, NULL);
		// PlayerPrefs.DeleteKey ("MiddleEast_Easy_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral4D6EDBDFB2909692FE0D4C9FD437390223AEEFE4, NULL);
		// PlayerPrefs.DeleteKey ("MiddleEast_Normal_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral07DF0E45E276DF117CDB947E07284446E6BC00D0, NULL);
		// PlayerPrefs.DeleteKey ("MiddleEast_Hard_Time_Key");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralE3B9E6D77F813EE26989DA7D1892E63462778A4C, NULL);
		// MiddleEast_Easy_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36 = __this->___MiddleEast_Easy_Score_Text_40;
		NullCheck(L_36);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// MiddleEast_Normal_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_37 = __this->___MiddleEast_Normal_Score_Text_41;
		NullCheck(L_37);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// MiddleEast_Hard_Score_Text.text = "0%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_38 = __this->___MiddleEast_Hard_Score_Text_42;
		NullCheck(L_38);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, _stringLiteral0DBBC7FCE9B44625B908FEB0F4ED4C87C7E8B9B3);
		// MiddleEast_Easy_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = __this->___MiddleEast_Easy_Time_Text_43;
		NullCheck(L_39);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// MiddleEast_Normal_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40 = __this->___MiddleEast_Normal_Time_Text_44;
		NullCheck(L_40);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// MiddleEast_Hard_Time_Text.text = "0:00";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_41 = __this->___MiddleEast_Hard_Time_Text_45;
		NullCheck(L_41);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, _stringLiteralA9660DFD9A9A1485FA0162D32F8032B856FB290B);
		// }
		return;
	}
}
// System.String HighScoreController::convertSecondstoString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A (int32_t ___seconds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EBF46B53CAA271F1FBA976E898B2C3A236D6D77);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeString = string.Format ("{0}:{1:00}", seconds / 60, seconds % 60);
		int32_t L_0 = ___seconds0;
		int32_t L_1 = ((int32_t)(L_0/((int32_t)60)));
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___seconds0;
		int32_t L_4 = ((int32_t)(L_3%((int32_t)60)));
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral1EBF46B53CAA271F1FBA976E898B2C3A236D6D77, L_2, L_5, NULL);
		// return timeString;
		return L_6;
	}
}
// System.Void HighScoreController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScoreController__ctor_m48AD85B4E4AB189A7CC8D2B0820D876C29EC3EBB (HighScoreController_tBF7FC79016466DC159F01870EC07F1960B0A92F8* __this, const RuntimeMethod* method) 
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
// System.Void MainMenuController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_Start_m26371D166488BA9A98CE757741C6B0A7503C2E9E (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	{
		// Screen.fullScreen = false;
		Screen_set_fullScreen_m46FCC49722BE6E27B92301D55A834C24B48B9EA2((bool)0, NULL);
		// }
		return;
	}
}
// System.Int32 MainMenuController::getRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainMenuController_getRegion_m3636606B1E01475129A7642A50C243449EC1B6A4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return region;
		il2cpp_codegen_runtime_class_init_inline(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		int32_t L_0 = ((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___region_4;
		return L_0;
	}
}
// System.String MainMenuController::getRegionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MainMenuController_getRegionName_m50ADB40B085CC67064E9CA261C35AA5BF2E039FA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD4A750E28CFF3DE9AE032540D174398E46DAA39D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return regionDict [region];
		il2cpp_codegen_runtime_class_init_inline(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_0 = ((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___regionDict_5;
		int32_t L_1 = ((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___region_4;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = Dictionary_2_get_Item_mD4A750E28CFF3DE9AE032540D174398E46DAA39D(L_0, L_1, Dictionary_2_get_Item_mD4A750E28CFF3DE9AE032540D174398E46DAA39D_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void MainMenuController::SelectNewGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SelectNewGame_mBFBB0FD962425985D0B1346E323E1AF52F036D09 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral526C640E25425AF709DD2D2D123C58663BF7124B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("Menu_Region");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral526C640E25425AF709DD2D2D123C58663BF7124B, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::SelectOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SelectOptions_m4B6FC3DE9CD615E8E6AE11112D85A678196B63FC (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4BD78F14A295432B64B608CF7B12D9CA73E40A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("Options");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralF4BD78F14A295432B64B608CF7B12D9CA73E40A1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::SelectHowToPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SelectHowToPlay_m397ED304BAC8CB9F22FC0D7885665BA3DCF85E02 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30CA0B82CE372F1E1B985B038A413B4B400B27A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("HowToPlay");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral30CA0B82CE372F1E1B985B038A413B4B400B27A3, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::SelectHighScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SelectHighScores_m6F776F42AA88DA939BE8EB65B01691A4BD0E07DF (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E45D4FC5F2F4E3F0826C84CE9DB3CDD754C496);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("HighScores");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral59E45D4FC5F2F4E3F0826C84CE9DB3CDD754C496, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::SelectWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SelectWorld_m391691FCEA80805B573C4017A6E0F9FD72235132 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral463EC0B1488F3C9486F1495362B740AAEA344D5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("Menu_Difficulty");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral463EC0B1488F3C9486F1495362B740AAEA344D5B, NULL);
		// region = 0;
		il2cpp_codegen_runtime_class_init_inline(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___region_4 = 0;
		// }
		return;
	}
}
// System.Void MainMenuController::SelectUSA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SelectUSA_m2749E76AA66210B099C6C2CCE4B2C68258F15CDC (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral463EC0B1488F3C9486F1495362B740AAEA344D5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("Menu_Difficulty");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral463EC0B1488F3C9486F1495362B740AAEA344D5B, NULL);
		// region = 1;
		il2cpp_codegen_runtime_class_init_inline(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___region_4 = 1;
		// }
		return;
	}
}
// System.Void MainMenuController::SelectEurope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SelectEurope_mAAFE4B4F84A68C83F4EE33E84BB236751BC81AF9 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral463EC0B1488F3C9486F1495362B740AAEA344D5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("Menu_Difficulty");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral463EC0B1488F3C9486F1495362B740AAEA344D5B, NULL);
		// region = 2;
		il2cpp_codegen_runtime_class_init_inline(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___region_4 = 2;
		// }
		return;
	}
}
// System.Void MainMenuController::SelectAfrica()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SelectAfrica_m7552D7065D7234310E99728508B6ADC6EDAE823F (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral463EC0B1488F3C9486F1495362B740AAEA344D5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("Menu_Difficulty");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral463EC0B1488F3C9486F1495362B740AAEA344D5B, NULL);
		// region = 3;
		il2cpp_codegen_runtime_class_init_inline(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___region_4 = 3;
		// }
		return;
	}
}
// System.Void MainMenuController::SelectLatinAmerica()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SelectLatinAmerica_m41FB32DCF5BEA31653EA0FBA7BE539CA7E75EDC7 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral463EC0B1488F3C9486F1495362B740AAEA344D5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("Menu_Difficulty");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral463EC0B1488F3C9486F1495362B740AAEA344D5B, NULL);
		// region = 4;
		il2cpp_codegen_runtime_class_init_inline(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___region_4 = 4;
		// }
		return;
	}
}
// System.Void MainMenuController::SelectAsia()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SelectAsia_mA670AEF69EB6CA24AE90DE59BEA80B980915D2DD (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral463EC0B1488F3C9486F1495362B740AAEA344D5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("Menu_Difficulty");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral463EC0B1488F3C9486F1495362B740AAEA344D5B, NULL);
		// region = 5;
		il2cpp_codegen_runtime_class_init_inline(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___region_4 = 5;
		// }
		return;
	}
}
// System.Void MainMenuController::SelectMiddleEast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SelectMiddleEast_m4E29900512B7C4DE401E9DC32BD8403F53659099 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral463EC0B1488F3C9486F1495362B740AAEA344D5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("Menu_Difficulty");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral463EC0B1488F3C9486F1495362B740AAEA344D5B, NULL);
		// region = 6;
		il2cpp_codegen_runtime_class_init_inline(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___region_4 = 6;
		// }
		return;
	}
}
// System.Void MainMenuController::BackfromRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_BackfromRegion_m38BF288FAD2A9793916B77E1854A5C511B4B36A3 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("Menu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::BackfromDifficulty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_BackfromDifficulty_m718B0ED4484D3C2C014BEBB414A82F5EC0041656 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral526C640E25425AF709DD2D2D123C58663BF7124B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("Menu_Region");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral526C640E25425AF709DD2D2D123C58663BF7124B, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_ExitGame_mB36E391F470799B23CA3CF2EF986DA3C2C9D23C1 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit ();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController__ctor_m9727FC638FDF6BDF302E10C6351846B395013EA4 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void MainMenuController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController__cctor_m2B12FB9B4771DC6F86E725B345CE3EBE11F6820B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7377067C038D82CBA8C595FFCF75D65ACA8543DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EFFA786FC102DDE9FDF2BCC37CD76FFB2842C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5F9B39986DF0D12413070A5CE3475A74FAEF0AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD72ADDF4129F43A90911945837A2BB69548C6B5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD95CB69D4554247F8B4288DA83A56B8A26A617E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC66387D49F92209E100AF8E9114589916287007);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF472218591CBFAD4D6454AB0AAF3091B037AAFFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<int, string> regionDict = new Dictionary<int, string> () {
		//     { 0, "World" },
		//     { 1, "USAStates" },
		//     { 2, "Europe" },
		//     { 3, "Africa" },
		//     { 4, "LatinAmerica" },
		//     { 5, "Asia" },
		//     { 6, "MiddleEast" },
		// };
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_0 = (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9*)il2cpp_codegen_object_new(Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4(L_0, Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_1, 0, _stringLiteralD72ADDF4129F43A90911945837A2BB69548C6B5E, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_2, 1, _stringLiteral7377067C038D82CBA8C595FFCF75D65ACA8543DF, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_3, 2, _stringLiteral87EFFA786FC102DDE9FDF2BCC37CD76FFB2842C6, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_4, 3, _stringLiteralF472218591CBFAD4D6454AB0AAF3091B037AAFFD, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_5, 4, _stringLiteralA5F9B39986DF0D12413070A5CE3475A74FAEF0AC, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_6, 5, _stringLiteralD95CB69D4554247F8B4288DA83A56B8A26A617E9, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_7, 6, _stringLiteralDC66387D49F92209E100AF8E9114589916287007, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___regionDict_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___regionDict_5), (void*)L_7);
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
// System.Void MapController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_Start_m06F8596FE8E28CF3A47CA2B2AEE3031A7946FB32 (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01BF865C72CD98F52DD54D5FFE14555997454F61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral032978B9BAABDCE21BFA04FCC658D0235764F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DA5F1287115C49EF9D36AE3B84E6AB8E4CEF0F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral103DAB962B61AD65CCD17B9EAB8BDF3D9F82F4AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22A540D163791CD0F2AD7F17B525DD617A4EFF86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3277F89A3EBD3931B6C017F95461A89B8CE0D0B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC696E198E54A5A5187BD300FFF873F14377195);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443E8381D5459B95A4F96D46D4182B75BE5DE148);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48E763228A0FC2C8C06C89881C52E61A20F3D35B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D690812FF2027A03B2FCEA744A5B91F92BB4F49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50F8D63595F8AB6E12E42A5EEA4EA4864C3796DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BCE038453DF85FF006A92CB7BCD69D497342006);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6956339ED305F552AA9A6C1ED4EF5C50396A63A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71A0228E8A84050B7FDB03873AB3E594787697C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral759224471F830122DE360CA6EACBBADC7B33B6C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E5DD579B9E435A3D3ECCAF52981B61F740B344D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral871C50B2EA6F82F09B5B9A7EF8B17FDCA2EEE958);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A59D24CBF24E663CF87FA872FEFB2B09160D266);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9F79710EA8A12C353BF5E613C9A1703A422E1B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB377E1759BD00EBF296EF3C9B84A0C281688D9DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4FD906861B9B7DF6D44E774E0C4CA3DF3FA23DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA5B50832527033FA07E04442D19F5DC6B8D0F71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1D63E03A8418BBDDE45F30ABFC6C9A5F3F6F6B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA7ACBC8D54F1AF613E4B8050AF728E984951CB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBC3BC690EEE2F388AB3BA89D8BC1C374B3D3C4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF30CC2405E9B0807E1FA0196D242E7F6DC4E0C50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDB960B3F94AC3305FD81EE22E095302BEC15B8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// correctText = GameObject.Find("Correct").GetComponent<Text> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral759224471F830122DE360CA6EACBBADC7B33B6C6, NULL);
		NullCheck(L_0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_0, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctText_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctText_6), (void*)L_1);
		// missedText = GameObject.Find("Missed").GetComponent<Text> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral5BCE038453DF85FF006A92CB7BCD69D497342006, NULL);
		NullCheck(L_2);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3;
		L_3 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_2, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedText_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedText_7), (void*)L_3);
		// timerText = GameObject.Find ("Timer").GetComponent<Text> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral0DA5F1287115C49EF9D36AE3B84E6AB8E4CEF0F5, NULL);
		NullCheck(L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5;
		L_5 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_4, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___timerText_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___timerText_8), (void*)L_5);
		// scoreText = GameObject.Find ("Score").GetComponent<Text> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, NULL);
		NullCheck(L_6);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7;
		L_7 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_6, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___scoreText_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___scoreText_9), (void*)L_7);
		// stateText = GameObject.Find ("StateText").GetComponent<Text> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral50F8D63595F8AB6E12E42A5EEA4EA4864C3796DD, NULL);
		NullCheck(L_8);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9;
		L_9 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_8, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateText_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateText_10), (void*)L_9);
		// incorrectStateText = GameObject.Find ("Text_IncorrectState").GetComponent<Text> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral032978B9BAABDCE21BFA04FCC658D0235764F694, NULL);
		NullCheck(L_10);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11;
		L_11 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_10, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___incorrectStateText_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___incorrectStateText_11), (void*)L_11);
		// totalTimeText = GameObject.Find ("Text_TotalTime").GetComponent<Text> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral22A540D163791CD0F2AD7F17B525DD617A4EFF86, NULL);
		NullCheck(L_12);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13;
		L_13 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_12, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___totalTimeText_12 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___totalTimeText_12), (void*)L_13);
		// WorldMap = GameObject.Find ("World Map");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral8A59D24CBF24E663CF87FA872FEFB2B09160D266, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___WorldMap_24 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___WorldMap_24), (void*)L_14);
		// USA = GameObject.Find ("USA State Map");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral7E5DD579B9E435A3D3ECCAF52981B61F740B344D, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___USA_25 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___USA_25), (void*)L_15);
		// Europe = GameObject.Find ("Europe Map");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral103DAB962B61AD65CCD17B9EAB8BDF3D9F82F4AD, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Europe_26 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Europe_26), (void*)L_16);
		// Africa = GameObject.Find ("Africa Map");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralEBC3BC690EEE2F388AB3BA89D8BC1C374B3D3C4C, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Africa_27 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Africa_27), (void*)L_17);
		// Asia = GameObject.Find ("Asia Map");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralEA7ACBC8D54F1AF613E4B8050AF728E984951CB1, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Asia_28 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Asia_28), (void*)L_18);
		// LatinAmerica = GameObject.Find ("Latin America Map");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralE1D63E03A8418BBDDE45F30ABFC6C9A5F3F6F6B7, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___LatinAmerica_29 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___LatinAmerica_29), (void*)L_19);
		// MiddleEast = GameObject.Find ("Middle East Map");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralF30CC2405E9B0807E1FA0196D242E7F6DC4E0C50, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___MiddleEast_30 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___MiddleEast_30), (void*)L_20);
		// UIPanel_Bottom = GameObject.Find ("UIPanel_Bottom");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralB377E1759BD00EBF296EF3C9B84A0C281688D9DB, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___UIPanel_Bottom_31 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___UIPanel_Bottom_31), (void*)L_21);
		// UIPanel_Top = GameObject.Find ("UIPanel_Top");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralA9F79710EA8A12C353BF5E613C9A1703A422E1B4, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___UIPanel_Top_32 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___UIPanel_Top_32), (void*)L_22);
		// Button_Confirm = GameObject.Find ("Button_Confirm");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral6956339ED305F552AA9A6C1ED4EF5C50396A63A0, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Button_Confirm_33 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Button_Confirm_33), (void*)L_23);
		// Pointer = GameObject.Find ("Pointer");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral871C50B2EA6F82F09B5B9A7EF8B17FDCA2EEE958, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Pointer_34 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Pointer_34), (void*)L_24);
		// button_newgame = GameObject.Find ("Button_NewGame");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralFDB960B3F94AC3305FD81EE22E095302BEC15B8C, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_newgame_35 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_newgame_35), (void*)L_25);
		// button_resume = GameObject.Find ("Button_Resume");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralDA5B50832527033FA07E04442D19F5DC6B8D0F71, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_resume_36 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_resume_36), (void*)L_26);
		// button_restart = GameObject.Find ("Button_Restart");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral3BC696E198E54A5A5187BD300FFF873F14377195, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_restart_37 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_restart_37), (void*)L_27);
		// button_mainmenu = GameObject.Find ("Button_MainMenu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral48E763228A0FC2C8C06C89881C52E61A20F3D35B, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_mainmenu_38 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_mainmenu_38), (void*)L_28);
		// button_options = GameObject.Find ("Button_Options");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral3277F89A3EBD3931B6C017F95461A89B8CE0D0B5, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_options_39 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_options_39), (void*)L_29);
		// correct_indicator = GameObject.Find ("Correct_Indicator");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralD4FD906861B9B7DF6D44E774E0C4CA3DF3FA23DC, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correct_indicator_40 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correct_indicator_40), (void*)L_30);
		// miss_indicator = GameObject.Find ("Miss_Indicator");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral4D690812FF2027A03B2FCEA744A5B91F92BB4F49, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___miss_indicator_41 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___miss_indicator_41), (void*)L_31);
		// sound_correct = GameObject.Find ("Sound_Correct");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral01BF865C72CD98F52DD54D5FFE14555997454F61, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___sound_correct_42 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___sound_correct_42), (void*)L_32);
		// sound_miss = GameObject.Find ("Sound_Miss");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral71A0228E8A84050B7FDB03873AB3E594787697C8, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___sound_miss_43 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___sound_miss_43), (void*)L_33);
		// sound_victory = GameObject.Find ("Sound_Victory");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral443E8381D5459B95A4F96D46D4182B75BE5DE148, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___sound_victory_44 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___sound_victory_44), (void*)L_34);
		// correct = 0;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correct_13 = 0;
		// missed = 0;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missed_14 = 0;
		// stateIndex = 0;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateIndex_15 = 0;
		// missedIndex = 0;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedIndex_16 = 0;
		// missedFlag = false;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedFlag_17 = (bool)0;
		// correctFlag = false;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctFlag_18 = (bool)0;
		// score = 0;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___score_19 = (0.0f);
		// isGameOver = false;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___isGameOver_51 = (bool)0;
		// totalTime = 0;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___totalTime_46 = (0.0f);
		// blinkFlag = false;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___blinkFlag_50 = (bool)0;
		// isPaused = false;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___isPaused_52 = (bool)0;
		// region = MainMenuController.getRegion();
		il2cpp_codegen_runtime_class_init_inline(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = MainMenuController_getRegion_m3636606B1E01475129A7642A50C243449EC1B6A4_inline(NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___region_20 = L_35;
		// difficulty = DifficultyController.getDifficulty();
		il2cpp_codegen_runtime_class_init_inline(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		int32_t L_36;
		L_36 = DifficultyController_getDifficulty_m56C0ABDEC81211B96C813843BA6C7871836EBBE0_inline(NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___difficulty_21 = L_36;
		// resetTimeLeft ();
		MapController_resetTimeLeft_mA872AB41DBB66D0EE2591BF9310E7F255C4CBBCF(NULL);
		// resetMissDelay ();
		MapController_resetMissDelay_mBB44D0E74D73F90CC4ED8AEEE6D7A19D298599FF(NULL);
		// resetCorrectDelay ();
		MapController_resetCorrectDelay_mFADA83D789CFAF391064B8913B76AE50BB2A1E0E(NULL);
		// resetBlinkTimer ();
		MapController_resetBlinkTimer_mDD683023C357A3FB69662904F4AB0ECE81B3F01A(NULL);
		// button_newgame.SetActive (false); // needs to be instantiated and assigned to a variable so that I can use SetActive()
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_newgame_35;
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)0, NULL);
		// button_mainmenu.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_mainmenu_38;
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)0, NULL);
		// button_options.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_options_39;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		// button_resume.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_resume_36;
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
		// button_restart.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_restart_37;
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
		// correct_indicator.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correct_indicator_40;
		NullCheck(L_42);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)0, NULL);
		// miss_indicator.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___miss_indicator_41;
		NullCheck(L_43);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)0, NULL);
		// totalTimeText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_44 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___totalTimeText_12;
		NullCheck(L_44);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_44, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// setActiveRegion();
		MapController_setActiveRegion_m89EB37AB6A25B3FEB791AF6AF6D68570E658FB3C(NULL);
		// setStateList();
		MapController_setStateList_m2E71C3063175AA50036979C76E67718909CE6B4A(NULL);
		// stateCount = stateList.Count;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_45 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_45, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateCount_5 = L_46;
		// loadGameState();
		MapController_loadGameState_m5AC028170274077BDAE5984580E800784F4E5A4A(__this, NULL);
		// SelectStateRandomly();
		MapController_SelectStateRandomly_m99ADFF35A0C2A18B6B4F212120D685EA60DB7E60(NULL);
		// }
		return;
	}
}
// System.Void MapController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_Update_m456861AC51F11BC72FCAAF5A3CF3E81CEE8CFFC8 (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BD9B3CA71C3128EA578106589500854B64EB9B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isPaused) {
		bool L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___isPaused_52;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (isGameOver) {
		bool L_1 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___isGameOver_51;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// UIPanel_Top.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___UIPanel_Top_32;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// return;
		return;
	}

IL_001b:
	{
		// if (!missedFlag && !correctFlag) {
		bool L_3 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedFlag_17;
		if (L_3)
		{
			goto IL_0049;
		}
	}
	{
		bool L_4 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctFlag_18;
		if (L_4)
		{
			goto IL_0049;
		}
	}
	{
		// timeLeft -= Time.deltaTime;
		float L_5 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___timeLeft_45;
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___timeLeft_45 = ((float)il2cpp_codegen_subtract(L_5, L_6));
		// totalTime += Time.deltaTime;
		float L_7 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___totalTime_46;
		float L_8;
		L_8 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___totalTime_46 = ((float)il2cpp_codegen_add(L_7, L_8));
	}

IL_0049:
	{
		// timerText.text = "Timer: " + timeLeft.ToString ("F1");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___timerText_8;
		String_t* L_10;
		L_10 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___timeLeft_45), _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		String_t* L_11;
		L_11 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral5BD9B3CA71C3128EA578106589500854B64EB9B5, L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
		// if (timeLeft <= 0 && !isGameOver) {
		float L_12 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___timeLeft_45;
		if ((!(((float)L_12) <= ((float)(0.0f)))))
		{
			goto IL_0089;
		}
	}
	{
		bool L_13 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___isGameOver_51;
		if (L_13)
		{
			goto IL_0089;
		}
	}
	{
		// Miss ();
		MapController_Miss_m2B644D72BA0A19DA712A232AA8C41FF91844C52F(NULL);
		// resetTimeLeft ();
		MapController_resetTimeLeft_mA872AB41DBB66D0EE2591BF9310E7F255C4CBBCF(NULL);
	}

IL_0089:
	{
		// if (missedFlag) {
		bool L_14 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedFlag_17;
		if (!L_14)
		{
			goto IL_0180;
		}
	}
	{
		// missDelay -= Time.deltaTime;
		float L_15 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missDelay_47;
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missDelay_47 = ((float)il2cpp_codegen_subtract(L_15, L_16));
		// stateText.text = getMissedRegionName ();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateText_10;
		String_t* L_18;
		L_18 = MapController_getMissedRegionName_m6D4728D2E3D120157199CF7455A10FC8EF77122A(NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_18);
		// stateText.color = new Color32 (163, 66, 66, 255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateText_10;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_20;
		memset((&L_20), 0, sizeof(L_20));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_20), (uint8_t)((int32_t)163), (uint8_t)((int32_t)66), (uint8_t)((int32_t)66), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_20, NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_21);
		// miss_indicator.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___miss_indicator_41;
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)1, NULL);
		// blinkMissedRegion ();
		MapController_blinkMissedRegion_mDA95285DE5434262E96469A2E34E6D0175ECB615(__this, NULL);
		// if (missDelay <= 0) {
		float L_23 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missDelay_47;
		if ((!(((float)L_23) <= ((float)(0.0f)))))
		{
			goto IL_0180;
		}
	}
	{
		// stateList [missedIndex].gameObject.GetComponent<SpriteRenderer> ().enabled = false;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_24 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		int32_t L_25 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedIndex_16;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_24, L_25, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_26, NULL);
		NullCheck(L_27);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_28;
		L_28 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_27, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_28);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_28, (bool)0, NULL);
		// miss_indicator.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___miss_indicator_41;
		NullCheck(L_29);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)0, NULL);
		// SelectStateRandomly ();
		MapController_SelectStateRandomly_m99ADFF35A0C2A18B6B4F212120D685EA60DB7E60(NULL);
		// if (isGameOver) {
		bool L_30 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___isGameOver_51;
		if (!L_30)
		{
			goto IL_0137;
		}
	}
	{
		// UIPanel_Top.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___UIPanel_Top_32;
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)0, NULL);
		goto IL_0170;
	}

IL_0137:
	{
		// resetTimeLeft ();
		MapController_resetTimeLeft_mA872AB41DBB66D0EE2591BF9310E7F255C4CBBCF(NULL);
		// stateText.text = getCurrentRegionName ();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_32 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateText_10;
		String_t* L_33;
		L_33 = MapController_getCurrentRegionName_mE0D0A49FBC050F5E7069BFB60E5CE9F7659D160F(NULL);
		NullCheck(L_32);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_32, L_33);
		// stateText.color = Color.black;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_34 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateText_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		NullCheck(L_34);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_34, L_35);
		// Button_Confirm.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Button_Confirm_33;
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)1, NULL);
		// Pointer.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Pointer_34;
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)1, NULL);
	}

IL_0170:
	{
		// resetMissDelay ();
		MapController_resetMissDelay_mBB44D0E74D73F90CC4ED8AEEE6D7A19D298599FF(NULL);
		// resetBlinkTimer ();
		MapController_resetBlinkTimer_mDD683023C357A3FB69662904F4AB0ECE81B3F01A(NULL);
		// missedFlag = false;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedFlag_17 = (bool)0;
	}

IL_0180:
	{
		// if (correctFlag) {
		bool L_38 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctFlag_18;
		if (!L_38)
		{
			goto IL_025e;
		}
	}
	{
		// correctDelay -= Time.deltaTime;
		float L_39 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctDelay_48;
		float L_40;
		L_40 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctDelay_48 = ((float)il2cpp_codegen_subtract(L_39, L_40));
		// correct_indicator.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correct_indicator_40;
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)1, NULL);
		// stateList [stateIndex].gameObject.GetComponent<SpriteRenderer> ().enabled = true;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_42 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		int32_t L_43 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateIndex_15;
		NullCheck(L_42);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_42, L_43, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_44, NULL);
		NullCheck(L_45);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_46;
		L_46 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_45, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_46);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_46, (bool)1, NULL);
		// if (correctDelay <= 0) {
		float L_47 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctDelay_48;
		if ((!(((float)L_47) <= ((float)(0.0f)))))
		{
			goto IL_025e;
		}
	}
	{
		// stateList [stateIndex].gameObject.GetComponent<SpriteRenderer> ().enabled = false;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_48 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		int32_t L_49 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateIndex_15;
		NullCheck(L_48);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_48, L_49, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_50);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51;
		L_51 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_50, NULL);
		NullCheck(L_51);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_52;
		L_52 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_51, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_52);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_52, (bool)0, NULL);
		// correct_indicator.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correct_indicator_40;
		NullCheck(L_53);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_53, (bool)0, NULL);
		// RemoveStateFromList ();
		MapController_RemoveStateFromList_m5BD1B57933C6B12158FD96C8E3A6B42FC741BC63(NULL);
		// SelectStateRandomly ();
		MapController_SelectStateRandomly_m99ADFF35A0C2A18B6B4F212120D685EA60DB7E60(NULL);
		// if (isGameOver) {
		bool L_54 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___isGameOver_51;
		if (!L_54)
		{
			goto IL_021a;
		}
	}
	{
		// UIPanel_Top.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___UIPanel_Top_32;
		NullCheck(L_55);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_55, (bool)0, NULL);
		return;
	}

IL_021a:
	{
		// resetTimeLeft ();
		MapController_resetTimeLeft_mA872AB41DBB66D0EE2591BF9310E7F255C4CBBCF(NULL);
		// stateText.text = getCurrentRegionName ();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_56 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateText_10;
		String_t* L_57;
		L_57 = MapController_getCurrentRegionName_mE0D0A49FBC050F5E7069BFB60E5CE9F7659D160F(NULL);
		NullCheck(L_56);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_56, L_57);
		// stateText.color = Color.black;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_58 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateText_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59;
		L_59 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		NullCheck(L_58);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_58, L_59);
		// Button_Confirm.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Button_Confirm_33;
		NullCheck(L_60);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)1, NULL);
		// Pointer.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Pointer_34;
		NullCheck(L_61);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_61, (bool)1, NULL);
		// resetCorrectDelay ();
		MapController_resetCorrectDelay_mFADA83D789CFAF391064B8913B76AE50BB2A1E0E(NULL);
		// correctFlag = false;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctFlag_18 = (bool)0;
	}

IL_025e:
	{
		// }
		return;
	}
}
// System.Void MapController::setActiveRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_setActiveRegion_m89EB37AB6A25B3FEB791AF6AF6D68570E658FB3C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (region)
		int32_t L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___region_20;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_00af;
			}
			case 3:
			{
				goto IL_00f2;
			}
			case 4:
			{
				goto IL_0135;
			}
			case 5:
			{
				goto IL_0178;
			}
			case 6:
			{
				goto IL_01bb;
			}
		}
	}
	{
		return;
	}

IL_0029:
	{
		// USA.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___USA_25;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// Europe.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Europe_26;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// Africa.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Africa_27;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// Asia.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Asia_28;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// LatinAmerica.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___LatinAmerica_29;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// MiddleEast.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___MiddleEast_30;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// break;
		return;
	}

IL_006c:
	{
		// WorldMap.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___WorldMap_24;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// Europe.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Europe_26;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// Africa.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Africa_27;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// Asia.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Asia_28;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// LatinAmerica.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___LatinAmerica_29;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// MiddleEast.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___MiddleEast_30;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// break;
		return;
	}

IL_00af:
	{
		// WorldMap.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___WorldMap_24;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// USA.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___USA_25;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// Africa.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Africa_27;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		// Asia.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Asia_28;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// LatinAmerica.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___LatinAmerica_29;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)0, NULL);
		// MiddleEast.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___MiddleEast_30;
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
		// break;
		return;
	}

IL_00f2:
	{
		// WorldMap.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___WorldMap_24;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
		// USA.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___USA_25;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
		// Asia.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Asia_28;
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		// Europe.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Europe_26;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
		// LatinAmerica.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___LatinAmerica_29;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		// MiddleEast.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___MiddleEast_30;
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
		// break;
		return;
	}

IL_0135:
	{
		// WorldMap.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___WorldMap_24;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)0, NULL);
		// USA.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___USA_25;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// Asia.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Asia_28;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
		// Europe.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Europe_26;
		NullCheck(L_29);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)0, NULL);
		// Africa.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Africa_27;
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)0, NULL);
		// MiddleEast.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___MiddleEast_30;
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)0, NULL);
		// break;
		return;
	}

IL_0178:
	{
		// WorldMap.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___WorldMap_24;
		NullCheck(L_32);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)0, NULL);
		// USA.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___USA_25;
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
		// Europe.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Europe_26;
		NullCheck(L_34);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)0, NULL);
		// Africa.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Africa_27;
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
		// LatinAmerica.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___LatinAmerica_29;
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)0, NULL);
		// MiddleEast.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___MiddleEast_30;
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)0, NULL);
		// break;
		return;
	}

IL_01bb:
	{
		// WorldMap.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___WorldMap_24;
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)0, NULL);
		// USA.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___USA_25;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		// Europe.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Europe_26;
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
		// Africa.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Africa_27;
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
		// Asia.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Asia_28;
		NullCheck(L_42);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)0, NULL);
		// LatinAmerica.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___LatinAmerica_29;
		NullCheck(L_43);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MapController::setStateList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_setStateList_m2E71C3063175AA50036979C76E67718909CE6B4A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF43DCB3BB782DEE371E585AF95DAD52EE17CC9BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral594DD0BF272B5892AA7F91E62C66BCD2666E72BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7479A72B853B4FDBFCA88205F6F2D9437EE4ED7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// states = GameObject.FindGameObjectsWithTag ("Easy");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral7479A72B853B4FDBFCA88205F6F2D9437EE4ED7F, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___states_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___states_22), (void*)L_0);
		// stateList = new List<GameObject> (states);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___states_22;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF43DCB3BB782DEE371E585AF95DAD52EE17CC9BC(L_2, (RuntimeObject*)L_1, List_1__ctor_mF43DCB3BB782DEE371E585AF95DAD52EE17CC9BC_RuntimeMethod_var);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4), (void*)L_2);
		// if (difficulty == 2 || difficulty == 3) {
		int32_t L_3 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___difficulty_21;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___difficulty_21;
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_004c;
		}
	}

IL_002e:
	{
		// states = GameObject.FindGameObjectsWithTag ("Normal");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5;
		L_5 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___states_22 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___states_22), (void*)L_5);
		// stateList.AddRange (states);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___states_22;
		NullCheck(L_6);
		List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C(L_6, (RuntimeObject*)L_7, List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var);
	}

IL_004c:
	{
		// if (difficulty == 3) {
		int32_t L_8 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___difficulty_21;
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_0072;
		}
	}
	{
		// states = GameObject.FindGameObjectsWithTag ("Hard");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9;
		L_9 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral594DD0BF272B5892AA7F91E62C66BCD2666E72BB, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___states_22 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___states_22), (void*)L_9);
		// stateList.AddRange (states);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___states_22;
		NullCheck(L_10);
		List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C(L_10, (RuntimeObject*)L_11, List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void MapController::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_GameOver_m72EAA5E2B0056DD33C391E8A47A012D6EAD9590B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m9266965D02368C3A64AED51B741DA840A0966FE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// isGameOver = true;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___isGameOver_51 = (bool)1;
		// button_mainmenu.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_mainmenu_38;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// button_newgame.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_newgame_35;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// scoreText.GetComponentInParent<RectTransform>().localPosition = new Vector3(-150,500,0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___scoreText_9;
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = Component_GetComponentInParent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m9266965D02368C3A64AED51B741DA840A0966FE3(L_2, Component_GetComponentInParent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m9266965D02368C3A64AED51B741DA840A0966FE3_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (-150.0f), (500.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_3, L_4, NULL);
		// correctText.GetComponentInParent<RectTransform>().localPosition = new Vector3(-150,350,0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctText_6;
		NullCheck(L_5);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = Component_GetComponentInParent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m9266965D02368C3A64AED51B741DA840A0966FE3(L_5, Component_GetComponentInParent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m9266965D02368C3A64AED51B741DA840A0966FE3_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (-150.0f), (350.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
		// missedText.GetComponentInParent<RectTransform>().localPosition = new Vector3(150,350,0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedText_7;
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = Component_GetComponentInParent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m9266965D02368C3A64AED51B741DA840A0966FE3(L_8, Component_GetComponentInParent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m9266965D02368C3A64AED51B741DA840A0966FE3_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (150.0f), (350.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_10, NULL);
		// timerText.gameObject.SetActive (false);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___timerText_8;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// UIPanel_Bottom.GetComponent<Image> ().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___UIPanel_Bottom_31;
		NullCheck(L_13);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14;
		L_14 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_13, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		NullCheck(L_14);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_14, (bool)0, NULL);
		// UIPanel_Top.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___UIPanel_Top_32;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// Button_Confirm.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Button_Confirm_33;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		// Pointer.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Pointer_34;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// foreach (string s in PointerController.collisionList) {
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = ((PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_StaticFields*)il2cpp_codegen_static_fields_for(PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var))->___collisionList_6;
		NullCheck(L_18);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_19;
		L_19 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_18, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_0 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f5:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_0), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ea_1;
			}

IL_00d3_1:
			{
				// foreach (string s in PointerController.collisionList) {
				String_t* L_20;
				L_20 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_0), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				// GameObject.Find (s).GetComponent<SpriteRenderer> ().enabled = false;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
				L_21 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_20, NULL);
				NullCheck(L_21);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22;
				L_22 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_21, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
				NullCheck(L_22);
				Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_22, (bool)0, NULL);
			}

IL_00ea_1:
			{
				// foreach (string s in PointerController.collisionList) {
				bool L_23;
				L_23 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_0), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_00d3_1;
				}
			}
			{
				goto IL_0103;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0103:
	{
		// PointerController.collisionList.Clear ();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = ((PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_StaticFields*)il2cpp_codegen_static_fields_for(PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var))->___collisionList_6;
		NullCheck(L_24);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_24, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MapController::SelectStateRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_SelectStateRandomly_m99ADFF35A0C2A18B6B4F212120D685EA60DB7E60 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (stateList.Count == 0) {
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		// SaveScore();
		MapController_SaveScore_mD71301ECAE899EC3D4B1F3866F96D39711B75ECE(NULL);
		// PlaySound (sound_victory);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___sound_victory_44;
		MapController_PlaySound_m8E8F67F9C0C793C6AAEFDC82214B39167EE3C82B(L_2, NULL);
		// GameOver();
		MapController_GameOver_m72EAA5E2B0056DD33C391E8A47A012D6EAD9590B(NULL);
		return;
	}

IL_0021:
	{
		// stateIndex = Random.Range (0, stateList.Count);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_3, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_4, NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateIndex_15 = L_5;
		// stateText.text = getCurrentRegionName ();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateText_10;
		String_t* L_7;
		L_7 = MapController_getCurrentRegionName_mE0D0A49FBC050F5E7069BFB60E5CE9F7659D160F(NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		// TouchCamera.ResetCamera ();
		TouchCamera_ResetCamera_m5271BB65AC7CD12482648D0A5F5995E042788DF9(NULL);
		// }
		return;
	}
}
// System.Void MapController::Correct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_Correct_mEF14CFF0B610D726B17940C11BE9B00B517E0178 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// correct++;
		int32_t L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correct_13;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correct_13 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// correctFlag = true;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctFlag_18 = (bool)1;
		// resetCorrectDelay ();
		MapController_resetCorrectDelay_mFADA83D789CFAF391064B8913B76AE50BB2A1E0E(NULL);
		// SetCorrectText ();
		MapController_SetCorrectText_mA73385DA0F7AF3CA0B4510793664EA9756811024(NULL);
		// HighlightRegion (stateIndex);
		int32_t L_1 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateIndex_15;
		MapController_HighlightRegion_mE854B22C1C322DC7EC928EAF122A539C55B6DCE8(L_1, NULL);
		// PlaySound (sound_correct);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___sound_correct_42;
		MapController_PlaySound_m8E8F67F9C0C793C6AAEFDC82214B39167EE3C82B(L_2, NULL);
		// UpdateScore (); // must be before SelectStateRandomly(), otherwise timer will reset
		MapController_UpdateScore_mA357B20E3DE1ECBC44671318AF0F2F5DA882E606(NULL);
		// }
		return;
	}
}
// System.Void MapController::Miss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_Miss_m2B644D72BA0A19DA712A232AA8C41FF91844C52F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// missed++;
		int32_t L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missed_14;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missed_14 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// missedIndex = stateIndex;
		int32_t L_1 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateIndex_15;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedIndex_16 = L_1;
		// missedFlag = true;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedFlag_17 = (bool)1;
		// resetMissDelay ();
		MapController_resetMissDelay_mBB44D0E74D73F90CC4ED8AEEE6D7A19D298599FF(NULL);
		// resetBlinkTimer ();
		MapController_resetBlinkTimer_mDD683023C357A3FB69662904F4AB0ECE81B3F01A(NULL);
		// SetMissedText ();
		MapController_SetMissedText_m0ABB92EAEEAB636EB7ABEC44C32080CB490C70D7(NULL);
		// HighlightRegion (missedIndex);
		int32_t L_2 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedIndex_16;
		MapController_HighlightRegion_mE854B22C1C322DC7EC928EAF122A539C55B6DCE8(L_2, NULL);
		// TouchCamera.MoveCamera (stateList [missedIndex].gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		int32_t L_4 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedIndex_16;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_5, NULL);
		TouchCamera_MoveCamera_m01C54B50A6005FC51842E6B7FEBA458352DE0779(L_6, NULL);
		// PlaySound (sound_miss);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___sound_miss_43;
		MapController_PlaySound_m8E8F67F9C0C793C6AAEFDC82214B39167EE3C82B(L_7, NULL);
		// UpdateScore ();
		MapController_UpdateScore_mA357B20E3DE1ECBC44671318AF0F2F5DA882E606(NULL);
		// if (missed >= getAllowableMisses()) {
		int32_t L_8 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missed_14;
		int32_t L_9;
		L_9 = MapController_getAllowableMisses_m300CE272EAB3E3639F1F896CFB0FD9D9C86538E8(NULL);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0073;
		}
	}
	{
		// SaveScore ();
		MapController_SaveScore_mD71301ECAE899EC3D4B1F3866F96D39711B75ECE(NULL);
		// GameOver ();
		MapController_GameOver_m72EAA5E2B0056DD33C391E8A47A012D6EAD9590B(NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void MapController::SetCorrectText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_SetCorrectText_mA73385DA0F7AF3CA0B4510793664EA9756811024 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CE1ACFE6A3A038F5D34296DAA194619925F9738);
		s_Il2CppMethodInitialized = true;
	}
	{
		// correctText.text = "Correct: " + correct.ToString ();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctText_6;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correct_13), NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4CE1ACFE6A3A038F5D34296DAA194619925F9738, L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void MapController::SetMissedText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_SetMissedText_m0ABB92EAEEAB636EB7ABEC44C32080CB490C70D7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10683CFF9CA6EAB777DC61AF2F1C26E8FC481042);
		s_Il2CppMethodInitialized = true;
	}
	{
		// missedText.text = "Missed: " + missed.ToString ();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedText_7;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missed_14), NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral10683CFF9CA6EAB777DC61AF2F1C26E8FC481042, L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void MapController::HighlightRegion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_HighlightRegion_mE854B22C1C322DC7EC928EAF122A539C55B6DCE8 (int32_t ___regionIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// stateList [regionIndex].gameObject.GetComponent<SpriteRenderer> ().enabled = true;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		int32_t L_1 = ___regionIndex0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		NullCheck(L_3);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4;
		L_4 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_3, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_4);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)1, NULL);
		// Button_Confirm.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Button_Confirm_33;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// Pointer.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Pointer_34;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// foreach (string s in PointerController.collisionList) {
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ((PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_StaticFields*)il2cpp_codegen_static_fields_for(PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var))->___collisionList_6;
		NullCheck(L_7);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_8;
		L_8 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_7, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_0), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0055_1;
			}

IL_003e_1:
			{
				// foreach (string s in PointerController.collisionList) {
				String_t* L_9;
				L_9 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_0), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				// GameObject.Find (s).GetComponent<SpriteRenderer> ().enabled = false;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_9, NULL);
				NullCheck(L_10);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11;
				L_11 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_10, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
				NullCheck(L_11);
				Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_11, (bool)0, NULL);
			}

IL_0055_1:
			{
				// foreach (string s in PointerController.collisionList) {
				bool L_12;
				L_12 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_0), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_003e_1;
				}
			}
			{
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// PointerController.collisionList.Clear ();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = ((PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_StaticFields*)il2cpp_codegen_static_fields_for(PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var))->___collisionList_6;
		NullCheck(L_13);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_13, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MapController::SetIncorrectStateText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_SetIncorrectStateText_mA90B0125D1DD79914531D2450DA5B8CFF7B93E20 (String_t* ___stateString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// incorrectStateText.text = stateString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___incorrectStateText_11;
		String_t* L_1 = ___stateString0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void MapController::UpdateScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_UpdateScore_mA357B20E3DE1ECBC44671318AF0F2F5DA882E606 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score = (float)correct / stateCount;
		int32_t L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correct_13;
		int32_t L_1 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateCount_5;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___score_19 = ((float)(((float)L_0)/((float)L_1)));
		// scoreText.text = "Score: " + score.ToString ("P0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___scoreText_9;
		String_t* L_3;
		L_3 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___score_19), _stringLiteralF0BA5B9EA0CDB48160EBD3C9455CE3EC1802454C, NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Single MapController::getTimeLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MapController_getTimeLeft_mDCEBA4D8771E275EC0E71CA7B9FB16AF66BD377F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return timeLeft;
		float L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___timeLeft_45;
		return L_0;
	}
}
// System.Void MapController::resetTimeLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_resetTimeLeft_mA872AB41DBB66D0EE2591BF9310E7F255C4CBBCF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeLeft = MISS_TIMER;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___timeLeft_45 = (30.0f);
		// }
		return;
	}
}
// System.Void MapController::resetMissDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_resetMissDelay_mBB44D0E74D73F90CC4ED8AEEE6D7A19D298599FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B10D9BAEAD3AF50869E35A030561BACF8CB76A2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (PlayerPrefs.GetInt ("SETTINGS_Delay")) {
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral6B10D9BAEAD3AF50869E35A030561BACF8CB76A2, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0037;
			}
		}
	}
	{
		goto IL_0042;
	}

IL_0021:
	{
		// missDelay = DELAY_TIMER_SHORT;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missDelay_47 = (0.5f);
		// break;
		return;
	}

IL_002c:
	{
		// missDelay = DELAY_TIMER_MEDIUM;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missDelay_47 = (1.25f);
		// break;
		return;
	}

IL_0037:
	{
		// missDelay = DELAY_TIMER_LONG;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missDelay_47 = (2.5f);
		// break;
		return;
	}

IL_0042:
	{
		// missDelay = DELAY_TIMER_MEDIUM;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missDelay_47 = (1.25f);
		// }
		return;
	}
}
// System.Void MapController::resetCorrectDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_resetCorrectDelay_mFADA83D789CFAF391064B8913B76AE50BB2A1E0E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B10D9BAEAD3AF50869E35A030561BACF8CB76A2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (PlayerPrefs.GetInt ("SETTINGS_Delay")) {
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral6B10D9BAEAD3AF50869E35A030561BACF8CB76A2, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0037;
			}
		}
	}
	{
		goto IL_0042;
	}

IL_0021:
	{
		// correctDelay = DELAY_TIMER_SHORT;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctDelay_48 = (0.5f);
		// break;
		return;
	}

IL_002c:
	{
		// correctDelay = DELAY_TIMER_MEDIUM;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctDelay_48 = (1.25f);
		// break;
		return;
	}

IL_0037:
	{
		// correctDelay = DELAY_TIMER_LONG;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctDelay_48 = (2.5f);
		// break;
		return;
	}

IL_0042:
	{
		// correctDelay = DELAY_TIMER_MEDIUM;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correctDelay_48 = (1.25f);
		// }
		return;
	}
}
// System.Void MapController::resetBlinkTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_resetBlinkTimer_mDD683023C357A3FB69662904F4AB0ECE81B3F01A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// blinkTimer = BLINK_TIMER_INTERVAL;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___blinkTimer_49 = (0.150000006f);
		// }
		return;
	}
}
// System.Int32 MapController::getAllowableMisses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapController_getAllowableMisses_m300CE272EAB3E3639F1F896CFB0FD9D9C86538E8 (const RuntimeMethod* method) 
{
	{
		// return ALLOWABLE_MISSES;
		return 5;
	}
}
// System.Void MapController::RemoveStateFromList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_RemoveStateFromList_m5BD1B57933C6B12158FD96C8E3A6B42FC741BC63 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stateList.RemoveAt(stateIndex);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		int32_t L_1 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateIndex_15;
		NullCheck(L_0);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_0, L_1, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String MapController::getCurrentRegionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapController_getCurrentRegionName_mE0D0A49FBC050F5E7069BFB60E5CE9F7659D160F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return stateList [stateIndex].gameObject.name.ToString ();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		int32_t L_1 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateIndex_15;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		return L_5;
	}
}
// System.String MapController::getMissedRegionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapController_getMissedRegionName_m6D4728D2E3D120157199CF7455A10FC8EF77122A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return stateList [missedIndex].gameObject.name.ToString ();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		int32_t L_1 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedIndex_16;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		return L_5;
	}
}
// System.Void MapController::SaveScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_SaveScore_mD71301ECAE899EC3D4B1F3866F96D39711B75ECE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA28AFE2E0A873901876A00F9AE7E5318E5FD570C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE55BDC623C0F797B9134F2E4A42E24B680896D20);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	{
		// int timeScore = (int)totalTime;
		float L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___totalTime_46;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_0);
		// totalTimeText.text = "Time: " + HighScoreController.convertSecondstoString (timeScore);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___totalTimeText_12;
		int32_t L_2 = V_0;
		String_t* L_3;
		L_3 = HighScoreController_convertSecondstoString_m7CF27B5AC9859E6B5BFC6E3D7B226D9F95B5913A(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC, L_3, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// string regionName = MainMenuController.getRegionName ();
		il2cpp_codegen_runtime_class_init_inline(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = MainMenuController_getRegionName_m50ADB40B085CC67064E9CA261C35AA5BF2E039FA(NULL);
		// string difficultyName = DifficultyController.getDifficultyName ();
		il2cpp_codegen_runtime_class_init_inline(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = DifficultyController_getDifficultyName_m0B3B123526EC160775AEAEB2C3DFFF15839969DE(NULL);
		V_1 = L_6;
		// string scoreKey = regionName + "_" + difficultyName + "_Score_Key";
		String_t* L_7 = L_5;
		String_t* L_8 = V_1;
		String_t* L_9;
		L_9 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_7, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_8, _stringLiteralA28AFE2E0A873901876A00F9AE7E5318E5FD570C, NULL);
		V_2 = L_9;
		// string timeKey = regionName + "_" + difficultyName + "_Time_Key";
		String_t* L_10 = V_1;
		String_t* L_11;
		L_11 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_7, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_10, _stringLiteralE55BDC623C0F797B9134F2E4A42E24B680896D20, NULL);
		V_3 = L_11;
		// float highScore = PlayerPrefs.GetFloat (scoreKey);
		String_t* L_12 = V_2;
		float L_13;
		L_13 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(L_12, NULL);
		V_4 = L_13;
		// int bestTime = PlayerPrefs.GetInt (timeKey);
		String_t* L_14 = V_3;
		int32_t L_15;
		L_15 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_14, NULL);
		V_5 = L_15;
		// if (score > highScore || (score >= highScore && timeScore < bestTime)) {
		float L_16 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___score_19;
		float L_17 = V_4;
		if ((((float)L_16) > ((float)L_17)))
		{
			goto IL_0076;
		}
	}
	{
		float L_18 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___score_19;
		float L_19 = V_4;
		if ((!(((float)L_18) >= ((float)L_19))))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_20 = V_0;
		int32_t L_21 = V_5;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_0088;
		}
	}

IL_0076:
	{
		// PlayerPrefs.SetFloat (scoreKey, score);
		String_t* L_22 = V_2;
		float L_23 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___score_19;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(L_22, L_23, NULL);
		// PlayerPrefs.SetInt (timeKey, timeScore);
		String_t* L_24 = V_3;
		int32_t L_25 = V_0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_24, L_25, NULL);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void MapController::PlaySound(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_PlaySound_m8E8F67F9C0C793C6AAEFDC82214B39167EE3C82B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sound0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BD6EA199D5C184ADEA262717B0A4F385BB437D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt ("SETTINGS_Sound") == 1) {
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral0BD6EA199D5C184ADEA262717B0A4F385BB437D3, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		// sound.GetComponent<AudioSource> ().Play ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___sound0;
		NullCheck(L_1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_1, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void MapController::clickMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_clickMainMenu_m3A0E03B0F783D92EE563AC8271BF21F0D4E20DE8 (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("Menu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
		// }
		return;
	}
}
// System.Void MapController::clickNewGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_clickNewGame_m159F8FE11C1D8FC8C9F11431162D33D18B1DB087 (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("Map");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38, NULL);
		// }
		return;
	}
}
// System.Void MapController::clickOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_clickOptions_m2443F04A8537A3CF182147889808084F0CACB18F (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4BD78F14A295432B64B608CF7B12D9CA73E40A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// saveGameState();
		MapController_saveGameState_mB6435D6449402ABE9BA1F4E8FDE3BDAB1B96B70F(__this, NULL);
		// SceneManager.LoadScene ("Options");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralF4BD78F14A295432B64B608CF7B12D9CA73E40A1, NULL);
		// }
		return;
	}
}
// System.Void MapController::clickResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_clickResume_m583E406A7FFA3CB2DAA819F2C7DC97E0F58900A5 (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// button_resume.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_resume_36;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// button_restart.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_restart_37;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// button_mainmenu.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_mainmenu_38;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// button_options.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_options_39;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// Button_Confirm.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Button_Confirm_33;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// UIPanel_Top.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___UIPanel_Top_32;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// UIPanel_Bottom.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___UIPanel_Bottom_31;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// isPaused = false;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___isPaused_52 = (bool)0;
		// }
		return;
	}
}
// System.Void MapController::clickPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_clickPause_m00D9583ED1D620506F9D188086E099A079482DED (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isPaused) {
		bool L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___isPaused_52;
		if (L_0)
		{
			goto IL_005b;
		}
	}
	{
		// isPaused = true;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___isPaused_52 = (bool)1;
		// Button_Confirm.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___Button_Confirm_33;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// button_resume.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_resume_36;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// button_restart.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_restart_37;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// button_mainmenu.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_mainmenu_38;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// button_options.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___button_options_39;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// UIPanel_Top.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___UIPanel_Top_32;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// UIPanel_Bottom.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___UIPanel_Bottom_31;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		return;
	}

IL_005b:
	{
		// clickResume ();
		MapController_clickResume_m583E406A7FFA3CB2DAA819F2C7DC97E0F58900A5(__this, NULL);
		// }
		return;
	}
}
// System.Void MapController::blinkMissedRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_blinkMissedRegion_mDA95285DE5434262E96469A2E34E6D0175ECB615 (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// blinkTimer -= Time.deltaTime;
		float L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___blinkTimer_49;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___blinkTimer_49 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (blinkTimer <= 0) {
		float L_2 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___blinkTimer_49;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_002e;
		}
	}
	{
		// blinkFlag = !blinkFlag;
		bool L_3 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___blinkFlag_50;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___blinkFlag_50 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		// resetBlinkTimer ();
		MapController_resetBlinkTimer_mDD683023C357A3FB69662904F4AB0ECE81B3F01A(NULL);
	}

IL_002e:
	{
		// if (blinkFlag)
		bool L_4 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___blinkFlag_50;
		if (!L_4)
		{
			goto IL_0055;
		}
	}
	{
		// stateList [missedIndex].gameObject.GetComponent<SpriteRenderer> ().enabled = true;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		int32_t L_6 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedIndex_16;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, L_6, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_7, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_9);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_9, (bool)1, NULL);
		return;
	}

IL_0055:
	{
		// stateList [missedIndex].gameObject.GetComponent<SpriteRenderer> ().enabled = false;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		int32_t L_11 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missedIndex_16;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_10, L_11, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_12, NULL);
		NullCheck(L_13);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_14;
		L_14 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_13, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_14);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_14, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MapController::saveGameState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_saveGameState_mB6435D6449402ABE9BA1F4E8FDE3BDAB1B96B70F (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GameState.saved = true;
		il2cpp_codegen_runtime_class_init_inline(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___saved_0 = (bool)1;
		// GameState.region = region;
		int32_t L_0 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___region_20;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___region_2 = L_0;
		// GameState.difficulty = difficulty;
		int32_t L_1 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___difficulty_21;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___difficulty_1 = L_1;
		// GameState.correct = correct;
		int32_t L_2 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correct_13;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___correct_4 = L_2;
		// GameState.missed = missed;
		int32_t L_3 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missed_14;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___missed_5 = L_3;
		// GameState.score = score;
		float L_4 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___score_19;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___score_6 = L_4;
		// GameState.timeLeft = timeLeft;
		float L_5 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___timeLeft_45;
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___timeLeft_7 = L_5;
		// GameState.state_names.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = ((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___state_names_3;
		NullCheck(L_6);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_6, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// for (int i = 0; i < stateList.Count; i++) {
		V_0 = 0;
		goto IL_006e;
	}

IL_0050:
	{
		// GameState.state_names.Add(stateList[i].name);
		il2cpp_codegen_runtime_class_init_inline(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___state_names_3;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_8, L_9, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		NullCheck(L_7);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, L_11, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = 0; i < stateList.Count; i++) {
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_006e:
	{
		// for (int i = 0; i < stateList.Count; i++) {
		int32_t L_13 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_14, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0050;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MapController::loadGameState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_loadGameState_m5AC028170274077BDAE5984580E800784F4E5A4A (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (GameState.saved == true) {
		il2cpp_codegen_runtime_class_init_inline(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		bool L_0 = ((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___saved_0;
		if (!L_0)
		{
			goto IL_00a0;
		}
	}
	{
		// GameState.saved = false;
		il2cpp_codegen_runtime_class_init_inline(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___saved_0 = (bool)0;
		// region = GameState.region;
		int32_t L_1 = ((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___region_2;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___region_20 = L_1;
		// difficulty = GameState.difficulty;
		int32_t L_2 = ((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___difficulty_1;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___difficulty_21 = L_2;
		// correct = GameState.correct;
		int32_t L_3 = ((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___correct_4;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___correct_13 = L_3;
		// missed = GameState.missed;
		int32_t L_4 = ((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___missed_5;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___missed_14 = L_4;
		// score = GameState.score;
		float L_5 = ((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___score_6;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___score_19 = L_5;
		// timeLeft = GameState.timeLeft;
		float L_6 = ((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___timeLeft_7;
		((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___timeLeft_45 = L_6;
		// for (int i = 0; i < stateList.Count; i++) {
		V_0 = 0;
		goto IL_007f;
	}

IL_0050:
	{
		// if (!GameState.state_names.Contains(stateList[i].name)) {
		il2cpp_codegen_runtime_class_init_inline(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___state_names_3;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_8, L_9, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		NullCheck(L_7);
		bool L_12;
		L_12 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_7, L_11, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_007b;
		}
	}
	{
		// stateList.RemoveAt(i);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_13 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_13, L_14, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		// i--;
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_007b:
	{
		// for (int i = 0; i < stateList.Count; i++) {
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_007f:
	{
		// for (int i = 0; i < stateList.Count; i++) {
		int32_t L_17 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = ((MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_StaticFields*)il2cpp_codegen_static_fields_for(MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_il2cpp_TypeInfo_var))->___stateList_4;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_18, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0050;
		}
	}
	{
		// setActiveRegion();
		MapController_setActiveRegion_m89EB37AB6A25B3FEB791AF6AF6D68570E658FB3C(NULL);
		// SetCorrectText ();
		MapController_SetCorrectText_mA73385DA0F7AF3CA0B4510793664EA9756811024(NULL);
		// SetMissedText ();
		MapController_SetMissedText_m0ABB92EAEEAB636EB7ABEC44C32080CB490C70D7(NULL);
		// UpdateScore ();
		MapController_UpdateScore_mA357B20E3DE1ECBC44671318AF0F2F5DA882E606(NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void MapController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController__ctor_m00E8FD02C6C4C34F39E2AE09EDB82BD51066766E (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) 
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
// System.Void OptionsController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsController_Start_m7FB54C08ADB2E8776E68CB77278BF8158C28EADC (OptionsController_t0472A8D6752570E1CB2BFFD42F5BB4AADE72E6E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BD6EA199D5C184ADEA262717B0A4F385BB437D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B10D9BAEAD3AF50869E35A030561BACF8CB76A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt ("SETTINGS_Sound") == 0) {
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral0BD6EA199D5C184ADEA262717B0A4F385BB437D3, NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// soundButton.GetComponent<Image> ().sprite = switchOff;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___soundButton_4;
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_1, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___switchOff_6;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		goto IL_003a;
	}

IL_0024:
	{
		// soundButton.GetComponent<Image> ().sprite = switchOn;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___soundButton_4;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_4, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = __this->___switchOn_5;
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
	}

IL_003a:
	{
		// if (PlayerPrefs.GetInt ("SETTINGS_Delay") == 1) {
		int32_t L_7;
		L_7 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral6B10D9BAEAD3AF50869E35A030561BACF8CB76A2, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		// delayButtonShort.GetComponent<Image> ().sprite = radioChecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___delayButtonShort_7;
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9;
		L_9 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_8, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = __this->___radioChecked_10;
		NullCheck(L_9);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_9, L_10, NULL);
		// delayButtonMedium.GetComponent<Image> ().sprite = radioUnchecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___delayButtonMedium_8;
		NullCheck(L_11);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12;
		L_12 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_11, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13 = __this->___radioUnchecked_11;
		NullCheck(L_12);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_12, L_13, NULL);
		// delayButtonLong.GetComponent<Image> ().sprite = radioUnchecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___delayButtonLong_9;
		NullCheck(L_14);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15;
		L_15 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_14, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16 = __this->___radioUnchecked_11;
		NullCheck(L_15);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_15, L_16, NULL);
		return;
	}

IL_008a:
	{
		// else if (PlayerPrefs.GetInt ("SETTINGS_Delay") == 3) {
		int32_t L_17;
		L_17 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral6B10D9BAEAD3AF50869E35A030561BACF8CB76A2, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_00da;
		}
	}
	{
		// delayButtonShort.GetComponent<Image> ().sprite = radioUnchecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___delayButtonShort_7;
		NullCheck(L_18);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19;
		L_19 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_18, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_20 = __this->___radioUnchecked_11;
		NullCheck(L_19);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_19, L_20, NULL);
		// delayButtonMedium.GetComponent<Image> ().sprite = radioUnchecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21 = __this->___delayButtonMedium_8;
		NullCheck(L_21);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22;
		L_22 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_21, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_23 = __this->___radioUnchecked_11;
		NullCheck(L_22);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_22, L_23, NULL);
		// delayButtonLong.GetComponent<Image> ().sprite = radioChecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_24 = __this->___delayButtonLong_9;
		NullCheck(L_24);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25;
		L_25 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_24, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_26 = __this->___radioChecked_10;
		NullCheck(L_25);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_25, L_26, NULL);
		return;
	}

IL_00da:
	{
		// delayButtonShort.GetComponent<Image> ().sprite = radioUnchecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_27 = __this->___delayButtonShort_7;
		NullCheck(L_27);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28;
		L_28 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_27, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_29 = __this->___radioUnchecked_11;
		NullCheck(L_28);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_28, L_29, NULL);
		// delayButtonMedium.GetComponent<Image> ().sprite = radioChecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_30 = __this->___delayButtonMedium_8;
		NullCheck(L_30);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_31;
		L_31 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_30, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_32 = __this->___radioChecked_10;
		NullCheck(L_31);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_31, L_32, NULL);
		// delayButtonLong.GetComponent<Image> ().sprite = radioUnchecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_33 = __this->___delayButtonLong_9;
		NullCheck(L_33);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_34;
		L_34 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_33, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_35 = __this->___radioUnchecked_11;
		NullCheck(L_34);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_34, L_35, NULL);
		// }
		return;
	}
}
// System.Void OptionsController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsController_Update_mAD55EE1E130702C3F5AE173C98D40EB92144A527 (OptionsController_t0472A8D6752570E1CB2BFFD42F5BB4AADE72E6E4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OptionsController::pressSwitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsController_pressSwitch_m8F7275E132814A5936CC0A823403996BC038BE46 (OptionsController_t0472A8D6752570E1CB2BFFD42F5BB4AADE72E6E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BD6EA199D5C184ADEA262717B0A4F385BB437D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (soundButton.GetComponent<Image> ().sprite.Equals(switchOn) ) {
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___soundButton_4;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_0, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		NullCheck(L_1);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2;
		L_2 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_1, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___switchOn_5;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_2, L_3);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// soundButton.GetComponent<Image> ().sprite = switchOff;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___soundButton_4;
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_5, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___switchOff_6;
		NullCheck(L_6);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_6, L_7, NULL);
		// PlayerPrefs.SetInt ("SETTINGS_Sound", 0);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral0BD6EA199D5C184ADEA262717B0A4F385BB437D3, 0, NULL);
		return;
	}

IL_003f:
	{
		// soundButton.GetComponent<Image> ().sprite = switchOn;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___soundButton_4;
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9;
		L_9 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_8, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = __this->___switchOn_5;
		NullCheck(L_9);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_9, L_10, NULL);
		// PlayerPrefs.SetInt ("SETTINGS_Sound", 1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral0BD6EA199D5C184ADEA262717B0A4F385BB437D3, 1, NULL);
		// }
		return;
	}
}
// System.Void OptionsController::pressDelayButtonShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsController_pressDelayButtonShort_mFB0B57E9BA97356B6F6B1F203820947465B8E1D8 (OptionsController_t0472A8D6752570E1CB2BFFD42F5BB4AADE72E6E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B10D9BAEAD3AF50869E35A030561BACF8CB76A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// delayButtonShort.GetComponent<Image> ().sprite = radioChecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___delayButtonShort_7;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_0, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___radioChecked_10;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_2, NULL);
		// delayButtonMedium.GetComponent<Image> ().sprite = radioUnchecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___delayButtonMedium_8;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_3, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___radioUnchecked_11;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_5, NULL);
		// delayButtonLong.GetComponent<Image> ().sprite = radioUnchecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___delayButtonLong_9;
		NullCheck(L_6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_6, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = __this->___radioUnchecked_11;
		NullCheck(L_7);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, L_8, NULL);
		// PlayerPrefs.SetInt ("SETTINGS_Delay", 1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral6B10D9BAEAD3AF50869E35A030561BACF8CB76A2, 1, NULL);
		// }
		return;
	}
}
// System.Void OptionsController::pressDelayButtonMedium()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsController_pressDelayButtonMedium_m06F99C5B21E6B791F1B9A38EAE324708B1A1EF6F (OptionsController_t0472A8D6752570E1CB2BFFD42F5BB4AADE72E6E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B10D9BAEAD3AF50869E35A030561BACF8CB76A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// delayButtonShort.GetComponent<Image> ().sprite = radioUnchecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___delayButtonShort_7;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_0, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___radioUnchecked_11;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_2, NULL);
		// delayButtonMedium.GetComponent<Image> ().sprite = radioChecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___delayButtonMedium_8;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_3, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___radioChecked_10;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_5, NULL);
		// delayButtonLong.GetComponent<Image> ().sprite = radioUnchecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___delayButtonLong_9;
		NullCheck(L_6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_6, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = __this->___radioUnchecked_11;
		NullCheck(L_7);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, L_8, NULL);
		// PlayerPrefs.SetInt ("SETTINGS_Delay", 2);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral6B10D9BAEAD3AF50869E35A030561BACF8CB76A2, 2, NULL);
		// }
		return;
	}
}
// System.Void OptionsController::pressDelayButtonLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsController_pressDelayButtonLong_mDE8345D17EC9D3387AA8E00A09D990E57939AF89 (OptionsController_t0472A8D6752570E1CB2BFFD42F5BB4AADE72E6E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B10D9BAEAD3AF50869E35A030561BACF8CB76A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// delayButtonShort.GetComponent<Image> ().sprite = radioUnchecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___delayButtonShort_7;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_0, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___radioUnchecked_11;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_2, NULL);
		// delayButtonMedium.GetComponent<Image> ().sprite = radioUnchecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___delayButtonMedium_8;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_3, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___radioUnchecked_11;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_5, NULL);
		// delayButtonLong.GetComponent<Image> ().sprite = radioChecked;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___delayButtonLong_9;
		NullCheck(L_6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_6, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = __this->___radioChecked_10;
		NullCheck(L_7);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, L_8, NULL);
		// PlayerPrefs.SetInt ("SETTINGS_Delay", 3);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral6B10D9BAEAD3AF50869E35A030561BACF8CB76A2, 3, NULL);
		// }
		return;
	}
}
// System.Void OptionsController::returnToPreviousScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsController_returnToPreviousScreen_m2A640AD79EF37135424BBD985087670AB39AB77F (OptionsController_t0472A8D6752570E1CB2BFFD42F5BB4AADE72E6E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameState.saved) {
		il2cpp_codegen_runtime_class_init_inline(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		bool L_0 = ((GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var))->___saved_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// SceneManager.LoadScene ("Map");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38, NULL);
		return;
	}

IL_0012:
	{
		// SceneManager.LoadScene ("Menu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
		// }
		return;
	}
}
// System.Void OptionsController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsController__ctor_m8C6DC4B8120C4B1D055A51C0127CCF1997410C8E (OptionsController_t0472A8D6752570E1CB2BFFD42F5BB4AADE72E6E4* __this, const RuntimeMethod* method) 
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
// System.Void PinchZoom::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchZoom_Start_m8C0B684E61B26AD0F4BBF032E3C8B0F7DC9A2B29 (PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		((PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_StaticFields*)il2cpp_codegen_static_fields_for(PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_il2cpp_TypeInfo_var))->___cam_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_StaticFields*)il2cpp_codegen_static_fields_for(PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_il2cpp_TypeInfo_var))->___cam_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PinchZoom::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchZoom_Update_mBFF5F6FCEC0EC441DD5D827CFCB2A7E042D49CB7 (PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (Input.touchCount == 2)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_00f2;
		}
	}
	{
		// Touch touchZero = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_1;
		// Touch touchOne = Input.GetTouch(1);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_1 = L_2;
		// Vector2 touchZeroPrevPos = touchZero.position - touchZero.deltaPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_3, L_4, NULL);
		// Vector2 touchOnePrevPos = touchOne.position - touchOne.deltaPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_6, L_7, NULL);
		V_2 = L_8;
		// float prevTouchDeltaMag = (touchZeroPrevPos - touchOnePrevPos).magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_5, L_9, NULL);
		V_5 = L_10;
		float L_11;
		L_11 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_5), NULL);
		// float touchDeltaMag = (touchZero.position - touchOne.position).magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_12, L_13, NULL);
		V_5 = L_14;
		float L_15;
		L_15 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_5), NULL);
		V_3 = L_15;
		// float deltaMagnitudeDiff = prevTouchDeltaMag - touchDeltaMag;
		float L_16 = V_3;
		V_4 = ((float)il2cpp_codegen_subtract(L_11, L_16));
		// if (cam.orthographic)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = ((PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_StaticFields*)il2cpp_codegen_static_fields_for(PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_il2cpp_TypeInfo_var))->___cam_4;
		NullCheck(L_17);
		bool L_18;
		L_18 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_17, NULL);
		if (!L_18)
		{
			goto IL_00b5;
		}
	}
	{
		// cam.orthographicSize += deltaMagnitudeDiff * orthoZoomSpeed;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = ((PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_StaticFields*)il2cpp_codegen_static_fields_for(PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_il2cpp_TypeInfo_var))->___cam_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = L_19;
		NullCheck(L_20);
		float L_21;
		L_21 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_20, NULL);
		float L_22 = V_4;
		float L_23 = __this->___orthoZoomSpeed_6;
		NullCheck(L_20);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_20, ((float)il2cpp_codegen_add(L_21, ((float)il2cpp_codegen_multiply(L_22, L_23)))), NULL);
		// cam.orthographicSize = Mathf.Max(cam.orthographicSize, 0.1f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = ((PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_StaticFields*)il2cpp_codegen_static_fields_for(PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_il2cpp_TypeInfo_var))->___cam_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = ((PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_StaticFields*)il2cpp_codegen_static_fields_for(PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_il2cpp_TypeInfo_var))->___cam_4;
		NullCheck(L_25);
		float L_26;
		L_26 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_25, NULL);
		float L_27;
		L_27 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_26, (0.100000001f), NULL);
		NullCheck(L_24);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_24, L_27, NULL);
		return;
	}

IL_00b5:
	{
		// cam.fieldOfView += deltaMagnitudeDiff * perspectiveZoomSpeed;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28 = ((PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_StaticFields*)il2cpp_codegen_static_fields_for(PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_il2cpp_TypeInfo_var))->___cam_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_29 = L_28;
		NullCheck(L_29);
		float L_30;
		L_30 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_29, NULL);
		float L_31 = V_4;
		float L_32 = __this->___perspectiveZoomSpeed_5;
		NullCheck(L_29);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_29, ((float)il2cpp_codegen_add(L_30, ((float)il2cpp_codegen_multiply(L_31, L_32)))), NULL);
		// cam.fieldOfView = Mathf.Clamp(cam.fieldOfView, 0.1f, 179.9f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_33 = ((PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_StaticFields*)il2cpp_codegen_static_fields_for(PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_il2cpp_TypeInfo_var))->___cam_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_34 = ((PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_StaticFields*)il2cpp_codegen_static_fields_for(PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD_il2cpp_TypeInfo_var))->___cam_4;
		NullCheck(L_34);
		float L_35;
		L_35 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_34, NULL);
		float L_36;
		L_36 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_35, (0.100000001f), (179.899994f), NULL);
		NullCheck(L_33);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_33, L_36, NULL);
	}

IL_00f2:
	{
		// }
		return;
	}
}
// System.Void PinchZoom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchZoom__ctor_mAAE60A9DD0F80622D8E447F7103BCB115B083AE7 (PinchZoom_t94309269E7A55D4CA4DDD01EB4CB93A0B47CFEDD* __this, const RuntimeMethod* method) 
{
	{
		// public float perspectiveZoomSpeed = 0.5f;   // The rate of change of the field of view in perspective mode.
		__this->___perspectiveZoomSpeed_5 = (0.5f);
		// public float orthoZoomSpeed = 0.5f;        // The rate of change of the orthographic size in orthographic mode.
		__this->___orthoZoomSpeed_6 = (0.5f);
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
// System.Void PointerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerController_Start_m8C86D8FFAC6DFB8C96DDA06F054227AB86E7ABA0 (PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb2d = GetComponent<Rigidbody2D> ();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb2d_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb2d_5), (void*)L_0);
		// collisionList = new List<string> ();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		((PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_StaticFields*)il2cpp_codegen_static_fields_for(PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var))->___collisionList_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_StaticFields*)il2cpp_codegen_static_fields_for(PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var))->___collisionList_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void PointerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerController_FixedUpdate_m036DC905EB87237026A26A56CEC00CCF51E39EF5 (PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 pos = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width/2,Screen.height/2,0));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		int32_t L_1;
		L_1 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), ((float)((int32_t)(L_1/2))), ((float)((int32_t)(L_2/2))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_0, L_3, NULL);
		V_0 = L_4;
		// rb2d.MovePosition (pos);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5 = __this->___rb2d_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_6, NULL);
		NullCheck(L_5);
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_5, L_7, NULL);
		// }
		return;
	}
}
// System.Void PointerController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerController_OnTriggerEnter2D_m53665F6BEDA30FA050B320D900A45189F4C7F006 (PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// other.gameObject.GetComponent<SpriteRenderer> ().enabled = true;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_1, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)1, NULL);
		// collisionList.Add (other.gameObject.name.ToString());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ((PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_StaticFields*)il2cpp_codegen_static_fields_for(PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var))->___collisionList_6;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___other0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PointerController::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerController_OnTriggerExit2D_mDCFD2ADC4C4EBC48D23163F1ED4CFC38E082EDC7 (PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// other.gameObject.GetComponent<SpriteRenderer> ().enabled = false;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_1, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)0, NULL);
		// collisionList.Remove (other.gameObject.name.ToString());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ((PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_StaticFields*)il2cpp_codegen_static_fields_for(PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var))->___collisionList_6;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___other0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		NullCheck(L_3);
		bool L_8;
		L_8 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_3, L_7, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PointerController::clickConfirm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerController_clickConfirm_mA357099E57528E1F9A3E0BE7BD845030A3DC6C8A (PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collisionList.Contains(MapController.getCurrentRegionName ())) {
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_StaticFields*)il2cpp_codegen_static_fields_for(PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9_il2cpp_TypeInfo_var))->___collisionList_6;
		String_t* L_1;
		L_1 = MapController_getCurrentRegionName_mE0D0A49FBC050F5E7069BFB60E5CE9F7659D160F(NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_1, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// MapController.Correct ();
		MapController_Correct_mEF14CFF0B610D726B17940C11BE9B00B517E0178(NULL);
		return;
	}

IL_0017:
	{
		// MapController.Miss ();
		MapController_Miss_m2B644D72BA0A19DA712A232AA8C41FF91844C52F(NULL);
		// }
		return;
	}
}
// System.Void PointerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerController__ctor_mAB15D747AE605869D5A18225D057FD714527D520 (PointerController_t98E25D42A87A4AAECD9C165153E1493DEFB978F9* __this, const RuntimeMethod* method) 
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
// System.Void SpriteSwap::Swap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteSwap_Swap_m9D241F2B38C7562CED93EF99D0B52B9BB67713B6 (SpriteSwap_t4B8952F51EEB1187C9788ECD1B1E6A63ACE0CC05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.GetComponent<SpriteRenderer> ().sprite == startingSprite) {
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_0);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1;
		L_1 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_0, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___startingSprite_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this.GetComponent<SpriteRenderer> ().sprite = swappedSprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4;
		L_4 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___swappedSprite_5;
		NullCheck(L_4);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_4, L_5, NULL);
		return;
	}

IL_002a:
	{
		// this.GetComponent<SpriteRenderer> ().sprite = startingSprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___startingSprite_4;
		NullCheck(L_6);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void SpriteSwap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteSwap__ctor_m3FB94E7D719B87BCDEA368B91045CE9B6A77FD3F (SpriteSwap_t4B8952F51EEB1187C9788ECD1B1E6A63ACE0CC05* __this, const RuntimeMethod* method) 
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
// System.Void SwapColorInSprite::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwapColorInSprite_Start_mE58E7122B988D88DA1DD71C402EE91A04E9142EA (SwapColorInSprite_t916FF70A4A906B2E707461C69EE1312B3DAC216E* __this, const RuntimeMethod* method) 
{
	{
		// correctColor = new Color32(100,173,229,255); // light blue
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_0), (uint8_t)((int32_t)100), (uint8_t)((int32_t)173), (uint8_t)((int32_t)229), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_0, NULL);
		__this->___correctColor_5 = L_1;
		// missColor = new Color32(212,25,25,255); // red
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_2), (uint8_t)((int32_t)212), (uint8_t)((int32_t)25), (uint8_t)((int32_t)25), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_2, NULL);
		__this->___missColor_6 = L_3;
		// }
		return;
	}
}
// System.Void SwapColorInSprite::SetMissColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwapColorInSprite_SetMissColor_mBA8AB292F074629B2D7E1F9588AEFEB285FBF5F0 (SwapColorInSprite_t916FF70A4A906B2E707461C69EE1312B3DAC216E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// uvMap = GetComponent<SpriteRenderer> ().sprite.texture;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_0);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1;
		L_1 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_0, NULL);
		NullCheck(L_1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_1, NULL);
		__this->___uvMap_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uvMap_4), (void*)L_2);
		// this.ChangeColor (correctColor, missColor);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___correctColor_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___missColor_6;
		SwapColorInSprite_ChangeColor_mBD97C841B4F2C55C3B07F82707866926D95704AB(__this, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void SwapColorInSprite::SetCorrectColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwapColorInSprite_SetCorrectColor_m65D24C342F0D3AFFAE23CF333C19EF5DC20AA543 (SwapColorInSprite_t916FF70A4A906B2E707461C69EE1312B3DAC216E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// uvMap = GetComponent<SpriteRenderer> ().sprite.texture;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_0);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1;
		L_1 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_0, NULL);
		NullCheck(L_1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_1, NULL);
		__this->___uvMap_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uvMap_4), (void*)L_2);
		// this.ChangeColor (missColor, correctColor);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___missColor_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___correctColor_5;
		SwapColorInSprite_ChangeColor_mBD97C841B4F2C55C3B07F82707866926D95704AB(__this, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void SwapColorInSprite::ChangeColor(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwapColorInSprite_ChangeColor_mBD97C841B4F2C55C3B07F82707866926D95704AB (SwapColorInSprite_t916FF70A4A906B2E707461C69EE1312B3DAC216E* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___currentColor0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___newColor1, const RuntimeMethod* method) 
{
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Color[] Pixels = uvMap.GetPixels ();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___uvMap_4;
		NullCheck(L_0);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1;
		L_1 = Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039(L_0, NULL);
		V_0 = L_1;
		// for(int x = 0; x < uvMap.width; x++) {
		V_1 = 0;
		goto IL_005d;
	}

IL_0010:
	{
		// for (int y = 0; y < uvMap.height; y++) {
		V_2 = 0;
		goto IL_004b;
	}

IL_0014:
	{
		// Color currentPixel = Pixels [x + y * uvMap.width];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = V_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->___uvMap_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		NullCheck(L_2);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_6))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// if (currentPixel == currentColor) {
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___currentColor0;
		bool L_10;
		L_10 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		// Pixels [x + y * uvMap.width] = newColor;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = __this->___uvMap_4;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___newColor1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, ((int32_t)il2cpp_codegen_multiply(L_13, L_15))))), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_16);
	}

IL_0047:
	{
		// for (int y = 0; y < uvMap.height; y++) {
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004b:
	{
		// for (int y = 0; y < uvMap.height; y++) {
		int32_t L_18 = V_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = __this->___uvMap_4;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0014;
		}
	}
	{
		// for(int x = 0; x < uvMap.width; x++) {
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_005d:
	{
		// for(int x = 0; x < uvMap.width; x++) {
		int32_t L_22 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = __this->___uvMap_4;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_23);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0010;
		}
	}
	{
		// uvMap.SetPixels (Pixels);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = __this->___uvMap_4;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_26 = V_0;
		NullCheck(L_25);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_25, L_26, NULL);
		// uvMap.Apply ();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = __this->___uvMap_4;
		NullCheck(L_27);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_27, NULL);
		// }
		return;
	}
}
// System.Void SwapColorInSprite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwapColorInSprite__ctor_m5512A0CD9F9AE45B3078C975E8FBC8EB719DAE16 (SwapColorInSprite_t916FF70A4A906B2E707461C69EE1312B3DAC216E* __this, const RuntimeMethod* method) 
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
// System.Void TouchCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchCamera_Start_m1A3C4108F7DA06B33DF888823F83314C4C876177 (TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4), (void*)L_0);
		// starting_position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___starting_position_5 = L_2;
		// starting_rotation = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_3, NULL);
		((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___starting_rotation_6 = L_4;
		// starting_size = cam.orthographicSize;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		NullCheck(L_5);
		float L_6;
		L_6 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_5, NULL);
		((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___starting_size_7 = L_6;
		// }
		return;
	}
}
// System.Void TouchCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchCamera_Update_m72C56EB6FD7B755309A69A890FD903C041643BC7 (TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_10 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	float V_12 = 0.0f;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_13;
	memset((&V_13), 0, sizeof(V_13));
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_14;
	memset((&V_14), 0, sizeof(V_14));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B8_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B8_1;
	memset((&G_B8_1), 0, sizeof(G_B8_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B8_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_2 = NULL;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B9_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_2;
	memset((&G_B9_2), 0, sizeof(G_B9_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B9_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B11_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B11_1;
	memset((&G_B11_1), 0, sizeof(G_B11_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B11_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B10_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B10_1;
	memset((&G_B10_1), 0, sizeof(G_B10_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B10_2 = NULL;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B12_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B12_2;
	memset((&G_B12_2), 0, sizeof(G_B12_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B12_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B14_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B14_1;
	memset((&G_B14_1), 0, sizeof(G_B14_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B14_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B13_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B13_1;
	memset((&G_B13_1), 0, sizeof(G_B13_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B13_2 = NULL;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B15_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B15_2;
	memset((&G_B15_2), 0, sizeof(G_B15_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B15_3 = NULL;
	TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9* G_B19_0 = NULL;
	TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9* G_B18_0 = NULL;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD G_B20_0;
	memset((&G_B20_0), 0, sizeof(G_B20_0));
	TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9* G_B20_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B23_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B23_1;
	memset((&G_B23_1), 0, sizeof(G_B23_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B23_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B22_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B22_1;
	memset((&G_B22_1), 0, sizeof(G_B22_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B22_2 = NULL;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B24_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B24_2;
	memset((&G_B24_2), 0, sizeof(G_B24_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B24_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B26_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B26_1;
	memset((&G_B26_1), 0, sizeof(G_B26_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B26_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B25_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B25_1;
	memset((&G_B25_1), 0, sizeof(G_B25_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B25_2 = NULL;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD G_B27_0;
	memset((&G_B27_0), 0, sizeof(G_B27_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B27_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B27_2;
	memset((&G_B27_2), 0, sizeof(G_B27_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B27_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B29_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B29_1;
	memset((&G_B29_1), 0, sizeof(G_B29_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B29_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B28_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B28_1;
	memset((&G_B28_1), 0, sizeof(G_B28_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B28_2 = NULL;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD G_B30_0;
	memset((&G_B30_0), 0, sizeof(G_B30_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B30_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B30_2;
	memset((&G_B30_2), 0, sizeof(G_B30_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B30_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B32_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B32_1;
	memset((&G_B32_1), 0, sizeof(G_B32_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B32_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B31_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B31_1;
	memset((&G_B31_1), 0, sizeof(G_B31_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B31_2 = NULL;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD G_B33_0;
	memset((&G_B33_0), 0, sizeof(G_B33_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B33_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B33_2;
	memset((&G_B33_2), 0, sizeof(G_B33_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B33_3 = NULL;
	{
		// if (Input.touchCount == 0) {
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// oldTouchPositions[0] = null;
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_1 = __this->___oldTouchPositions_8;
		NullCheck(L_1);
		il2cpp_codegen_initobj(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		// oldTouchPositions[1] = null;
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_2 = __this->___oldTouchPositions_8;
		NullCheck(L_2);
		il2cpp_codegen_initobj(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		return;
	}

IL_002c:
	{
		// else if (Input.touchCount == 1) {
		int32_t L_3;
		L_3 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_018d;
		}
	}
	{
		// if (oldTouchPositions[0] == null || oldTouchPositions[1] != null) {
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_4 = __this->___oldTouchPositions_8;
		NullCheck(L_4);
		bool L_5;
		L_5 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_6 = __this->___oldTouchPositions_8;
		NullCheck(L_6);
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_008f;
		}
	}

IL_005d:
	{
		// oldTouchPositions[0] = Input.GetTouch(0).position;
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_8 = __this->___oldTouchPositions_8;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_9;
		L_9 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_11), L_10, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD)L_11);
		// oldTouchPositions[1] = null;
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_12 = __this->___oldTouchPositions_8;
		NullCheck(L_12);
		il2cpp_codegen_initobj(((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		return;
	}

IL_008f:
	{
		// Vector2 newTouchPosition = Input.GetTouch(0).position;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_13;
		L_13 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		V_1 = L_14;
		// transform.position += transform.TransformDirection((Vector3)((oldTouchPositions[0] - newTouchPosition) * cam.orthographicSize / cam.pixelHeight * 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = L_15;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_19 = __this->___oldTouchPositions_8;
		NullCheck(L_19);
		int32_t L_20 = 0;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_6 = L_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_1;
		V_7 = L_22;
		bool L_23;
		L_23 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline((&V_6), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		G_B7_0 = L_18;
		G_B7_1 = L_17;
		G_B7_2 = L_16;
		if (L_23)
		{
			G_B8_0 = L_18;
			G_B8_1 = L_17;
			G_B8_2 = L_16;
			goto IL_00d6;
		}
	}
	{
		il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_24 = V_8;
		G_B9_0 = L_24;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_00e9;
	}

IL_00d6:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_inline((&V_6), Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_25, L_26, NULL);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_28;
		memset((&L_28), 0, sizeof(L_28));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_28), L_27, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		G_B9_0 = L_28;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_00e9:
	{
		V_4 = G_B9_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_29 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		NullCheck(L_29);
		float L_30;
		L_30 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_29, NULL);
		V_5 = L_30;
		bool L_31;
		L_31 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline((&V_4), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		G_B10_0 = G_B9_1;
		G_B10_1 = G_B9_2;
		G_B10_2 = G_B9_3;
		if (L_31)
		{
			G_B11_0 = G_B9_1;
			G_B11_1 = G_B9_2;
			G_B11_2 = G_B9_3;
			goto IL_010c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_32 = V_6;
		G_B12_0 = L_32;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_011f;
	}

IL_010c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_inline((&V_4), Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_RuntimeMethod_var);
		float L_34 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_33, L_34, NULL);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_36;
		memset((&L_36), 0, sizeof(L_36));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_36), L_35, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		G_B12_0 = L_36;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_011f:
	{
		V_2 = G_B12_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_37 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_37, NULL);
		V_3 = ((float)L_38);
		bool L_39;
		L_39 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline((&V_2), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		G_B13_0 = G_B12_1;
		G_B13_1 = G_B12_2;
		G_B13_2 = G_B12_3;
		if (L_39)
		{
			G_B14_0 = G_B12_1;
			G_B14_1 = G_B12_2;
			G_B14_2 = G_B12_3;
			goto IL_0141;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_40 = V_4;
		G_B15_0 = L_40;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		G_B15_3 = G_B13_2;
		goto IL_015d;
	}

IL_0141:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_inline((&V_2), Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_RuntimeMethod_var);
		float L_42 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		L_43 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_41, L_42, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_43, (2.0f), NULL);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_45;
		memset((&L_45), 0, sizeof(L_45));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_45), L_44, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		G_B15_0 = L_45;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		G_B15_3 = G_B14_2;
	}

IL_015d:
	{
		V_4 = G_B15_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7((&V_4), Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_46, NULL);
		NullCheck(G_B15_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(G_B15_1, L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(G_B15_2, L_48, NULL);
		NullCheck(G_B15_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B15_3, L_49, NULL);
		// oldTouchPositions[0] = newTouchPosition;
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_50 = __this->___oldTouchPositions_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_1;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_52;
		memset((&L_52), 0, sizeof(L_52));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_52), L_51, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD)L_52);
		return;
	}

IL_018d:
	{
		// if (oldTouchPositions[1] == null) {
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_53 = __this->___oldTouchPositions_8;
		NullCheck(L_53);
		bool L_54;
		L_54 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline(((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		if (L_54)
		{
			goto IL_0252;
		}
	}
	{
		// oldTouchPositions[0] = Input.GetTouch(0).position;
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_55 = __this->___oldTouchPositions_8;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_56;
		L_56 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_56;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		L_57 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_58;
		memset((&L_58), 0, sizeof(L_58));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_58), L_57, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD)L_58);
		// oldTouchPositions[1] = Input.GetTouch(1).position;
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_59 = __this->___oldTouchPositions_8;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_60;
		L_60 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_0 = L_60;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_62;
		memset((&L_62), 0, sizeof(L_62));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_62), L_61, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD)L_62);
		// oldTouchVector = (Vector2)(oldTouchPositions[0] - oldTouchPositions[1]);
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_63 = __this->___oldTouchPositions_8;
		NullCheck(L_63);
		int32_t L_64 = 0;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_2 = L_65;
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_66 = __this->___oldTouchPositions_8;
		NullCheck(L_66);
		int32_t L_67 = 1;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_4 = L_68;
		bool L_69;
		L_69 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline((&V_2), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		bool L_70;
		L_70 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline((&V_4), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		G_B18_0 = __this;
		if (((int32_t)((int32_t)L_69&(int32_t)L_70)))
		{
			G_B19_0 = __this;
			goto IL_021a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_71 = V_6;
		G_B20_0 = L_71;
		G_B20_1 = G_B18_0;
		goto IL_0232;
	}

IL_021a:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		L_72 = Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_inline((&V_2), Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
		L_73 = Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_inline((&V_4), Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		L_74 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_72, L_73, NULL);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_75;
		memset((&L_75), 0, sizeof(L_75));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_75), L_74, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		G_B20_0 = L_75;
		G_B20_1 = G_B19_0;
	}

IL_0232:
	{
		V_6 = G_B20_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76;
		L_76 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7((&V_6), Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		NullCheck(G_B20_1);
		G_B20_1->___oldTouchVector_9 = L_76;
		// oldTouchDistance = oldTouchVector.magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_77 = (&__this->___oldTouchVector_9);
		float L_78;
		L_78 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_77, NULL);
		__this->___oldTouchDistance_10 = L_78;
		return;
	}

IL_0252:
	{
		// Vector2 screen = new Vector2(cam.pixelWidth, cam.pixelHeight);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_79 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D(L_79, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_81 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_81, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_9), ((float)L_80), ((float)L_82), NULL);
		// Vector2[] newTouchPositions = {
		//     Input.GetTouch(0).position,
		//     Input.GetTouch(1).position
		// };
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_83 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)2);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_84 = L_83;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_85;
		L_85 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_85;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_86;
		L_86 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_86);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_87 = L_84;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_88;
		L_88 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89;
		L_89 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_89);
		V_10 = L_87;
		// Vector2 newTouchVector = newTouchPositions[0] - newTouchPositions[1];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_90 = V_10;
		NullCheck(L_90);
		int32_t L_91 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_93 = V_10;
		NullCheck(L_93);
		int32_t L_94 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_96;
		L_96 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_92, L_95, NULL);
		V_11 = L_96;
		// float newTouchDistance = newTouchVector.magnitude;
		float L_97;
		L_97 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_11), NULL);
		V_12 = L_97;
		// transform.position += transform.TransformDirection((Vector3)((oldTouchPositions[0] + oldTouchPositions[1] - screen) * cam.orthographicSize / screen.y));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99 = L_98;
		NullCheck(L_99);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_99, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_102 = __this->___oldTouchPositions_8;
		NullCheck(L_102);
		int32_t L_103 = 0;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		V_8 = L_104;
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_105 = __this->___oldTouchPositions_8;
		NullCheck(L_105);
		int32_t L_106 = 1;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_107 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_13 = L_107;
		bool L_108;
		L_108 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline((&V_8), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		bool L_109;
		L_109 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline((&V_13), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		G_B22_0 = L_101;
		G_B22_1 = L_100;
		G_B22_2 = L_99;
		if (((int32_t)((int32_t)L_108&(int32_t)L_109)))
		{
			G_B23_0 = L_101;
			G_B23_1 = L_100;
			G_B23_2 = L_99;
			goto IL_030c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_14), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_110 = V_14;
		G_B24_0 = L_110;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		G_B24_3 = G_B22_2;
		goto IL_0324;
	}

IL_030c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_111;
		L_111 = Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_inline((&V_8), Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112;
		L_112 = Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_inline((&V_13), Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_113;
		L_113 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_111, L_112, NULL);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_114;
		memset((&L_114), 0, sizeof(L_114));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_114), L_113, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		G_B24_0 = L_114;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
		G_B24_3 = G_B23_2;
	}

IL_0324:
	{
		V_6 = G_B24_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_115 = V_9;
		V_7 = L_115;
		bool L_116;
		L_116 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline((&V_6), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		G_B25_0 = G_B24_1;
		G_B25_1 = G_B24_2;
		G_B25_2 = G_B24_3;
		if (L_116)
		{
			G_B26_0 = G_B24_1;
			G_B26_1 = G_B24_2;
			G_B26_2 = G_B24_3;
			goto IL_033f;
		}
	}
	{
		il2cpp_codegen_initobj((&V_13), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_117 = V_13;
		G_B27_0 = L_117;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		G_B27_3 = G_B25_2;
		goto IL_0352;
	}

IL_033f:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118;
		L_118 = Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_inline((&V_6), Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_119 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_120;
		L_120 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_118, L_119, NULL);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_121;
		memset((&L_121), 0, sizeof(L_121));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_121), L_120, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		G_B27_0 = L_121;
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
		G_B27_3 = G_B26_2;
	}

IL_0352:
	{
		V_4 = G_B27_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_122 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		NullCheck(L_122);
		float L_123;
		L_123 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_122, NULL);
		V_5 = L_123;
		bool L_124;
		L_124 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline((&V_4), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		G_B28_0 = G_B27_1;
		G_B28_1 = G_B27_2;
		G_B28_2 = G_B27_3;
		if (L_124)
		{
			G_B29_0 = G_B27_1;
			G_B29_1 = G_B27_2;
			G_B29_2 = G_B27_3;
			goto IL_0375;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_125 = V_6;
		G_B30_0 = L_125;
		G_B30_1 = G_B28_0;
		G_B30_2 = G_B28_1;
		G_B30_3 = G_B28_2;
		goto IL_0388;
	}

IL_0375:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_126;
		L_126 = Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_inline((&V_4), Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_RuntimeMethod_var);
		float L_127 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_128;
		L_128 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_126, L_127, NULL);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_129;
		memset((&L_129), 0, sizeof(L_129));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_129), L_128, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		G_B30_0 = L_129;
		G_B30_1 = G_B29_0;
		G_B30_2 = G_B29_1;
		G_B30_3 = G_B29_2;
	}

IL_0388:
	{
		V_2 = G_B30_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_130 = V_9;
		float L_131 = L_130.___y_1;
		V_3 = L_131;
		bool L_132;
		L_132 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline((&V_2), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		G_B31_0 = G_B30_1;
		G_B31_1 = G_B30_2;
		G_B31_2 = G_B30_3;
		if (L_132)
		{
			G_B32_0 = G_B30_1;
			G_B32_1 = G_B30_2;
			G_B32_2 = G_B30_3;
			goto IL_03a6;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_133 = V_4;
		G_B33_0 = L_133;
		G_B33_1 = G_B31_0;
		G_B33_2 = G_B31_1;
		G_B33_3 = G_B31_2;
		goto IL_03b8;
	}

IL_03a6:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_134;
		L_134 = Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_inline((&V_2), Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_RuntimeMethod_var);
		float L_135 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_136;
		L_136 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_134, L_135, NULL);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_137;
		memset((&L_137), 0, sizeof(L_137));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_137), L_136, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		G_B33_0 = L_137;
		G_B33_1 = G_B32_0;
		G_B33_2 = G_B32_1;
		G_B33_3 = G_B32_2;
	}

IL_03b8:
	{
		V_4 = G_B33_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_138;
		L_138 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7((&V_4), Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		L_139 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_138, NULL);
		NullCheck(G_B33_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(G_B33_1, L_139, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(G_B33_2, L_140, NULL);
		NullCheck(G_B33_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B33_3, L_141, NULL);
		// cam.orthographicSize *= oldTouchDistance / newTouchDistance;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_142 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_143 = L_142;
		NullCheck(L_143);
		float L_144;
		L_144 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_143, NULL);
		float L_145 = __this->___oldTouchDistance_10;
		float L_146 = V_12;
		NullCheck(L_143);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_143, ((float)il2cpp_codegen_multiply(L_144, ((float)(L_145/L_146)))), NULL);
		// transform.position -= transform.TransformDirection((newTouchPositions[0] + newTouchPositions[1] - screen) * cam.orthographicSize / screen.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_147;
		L_147 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_148 = L_147;
		NullCheck(L_148);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_148, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_150;
		L_150 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_151 = V_10;
		NullCheck(L_151);
		int32_t L_152 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_153 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_154 = V_10;
		NullCheck(L_154);
		int32_t L_155 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_156 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_157;
		L_157 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_153, L_156, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_158 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_159;
		L_159 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_157, L_158, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_160 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		NullCheck(L_160);
		float L_161;
		L_161 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_160, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_162;
		L_162 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_159, L_161, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_163 = V_9;
		float L_164 = L_163.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_165;
		L_165 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_162, L_164, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166;
		L_166 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_165, NULL);
		NullCheck(L_150);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167;
		L_167 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_150, L_166, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168;
		L_168 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_149, L_167, NULL);
		NullCheck(L_148);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_148, L_168, NULL);
		// oldTouchPositions[0] = newTouchPositions[0];
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_169 = __this->___oldTouchPositions_8;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_170 = V_10;
		NullCheck(L_170);
		int32_t L_171 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_172 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_173;
		memset((&L_173), 0, sizeof(L_173));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_173), L_172, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(0), (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD)L_173);
		// oldTouchPositions[1] = newTouchPositions[1];
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_174 = __this->___oldTouchPositions_8;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_175 = V_10;
		NullCheck(L_175);
		int32_t L_176 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_177 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_178;
		memset((&L_178), 0, sizeof(L_178));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_178), L_177, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		NullCheck(L_174);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(1), (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD)L_178);
		// oldTouchVector = newTouchVector;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_179 = V_11;
		__this->___oldTouchVector_9 = L_179;
		// oldTouchDistance = newTouchDistance;
		float L_180 = V_12;
		__this->___oldTouchDistance_10 = L_180;
		// }
		return;
	}
}
// System.Void TouchCamera::ResetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchCamera_ResetCamera_m5271BB65AC7CD12482648D0A5F5995E042788DF9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cam != null) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// cam.transform.position = starting_position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___starting_position_5;
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_4, NULL);
		// cam.transform.localRotation = starting_rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___starting_rotation_6;
		NullCheck(L_6);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_6, L_7, NULL);
		// cam.orthographicSize = starting_size;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		float L_9 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___starting_size_7;
		NullCheck(L_8);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_8, L_9, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void TouchCamera::MoveCamera(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchCamera_MoveCamera_m01C54B50A6005FC51842E6B7FEBA458352DE0779 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mCD80CD167FF931072D6319B4BD1BCC7B85F06C2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 new_position = obj.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___obj0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// if (MainMenuController.getRegion() == 1 || MainMenuController.getRegion() == 2) {
		il2cpp_codegen_runtime_class_init_inline(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = MainMenuController_getRegion_m3636606B1E01475129A7642A50C243449EC1B6A4_inline(NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = MainMenuController_getRegion_m3636606B1E01475129A7642A50C243449EC1B6A4_inline(NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0052;
		}
	}

IL_001c:
	{
		// new_position.x *= obj.GetComponentInParent<Transform> ().localScale.x;
		float* L_5 = (&(&V_0)->___x_2);
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___obj0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_GetComponentInParent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mCD80CD167FF931072D6319B4BD1BCC7B85F06C2A(L_8, GameObject_GetComponentInParent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mCD80CD167FF931072D6319B4BD1BCC7B85F06C2A_RuntimeMethod_var);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_9, NULL);
		float L_11 = L_10.___x_2;
		*((float*)L_6) = (float)((float)il2cpp_codegen_multiply(L_7, L_11));
		// new_position.y *= obj.GetComponentInParent<Transform> ().localScale.y;
		float* L_12 = (&(&V_0)->___y_3);
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ___obj0;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_GetComponentInParent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mCD80CD167FF931072D6319B4BD1BCC7B85F06C2A(L_15, GameObject_GetComponentInParent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mCD80CD167FF931072D6319B4BD1BCC7B85F06C2A_RuntimeMethod_var);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_16, NULL);
		float L_18 = L_17.___y_3;
		*((float*)L_13) = (float)((float)il2cpp_codegen_multiply(L_14, L_18));
	}

IL_0052:
	{
		// if (cam != null) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_009c;
		}
	}
	{
		// cam.transform.localRotation = starting_rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___starting_rotation_6;
		NullCheck(L_22);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_22, L_23, NULL);
		// cam.orthographicSize = starting_size;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		float L_25 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___starting_size_7;
		NullCheck(L_24);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_24, L_25, NULL);
		// cam.transform.position = starting_position + new_position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___cam_4;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ((TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_StaticFields*)il2cpp_codegen_static_fields_for(TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9_il2cpp_TypeInfo_var))->___starting_position_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_28, L_29, NULL);
		NullCheck(L_27);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_30, NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void TouchCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchCamera__ctor_m034A55CD90397F0099CE7BF797AC549E7E159865 (TouchCamera_t7B801FE27C02B7BFE341AB5C4CBEEF5E2192E5D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector2?[] oldTouchPositions = {
		//     null,
		//     null
		// };
		Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB* L_0 = (Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB*)(Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB*)SZArrayNew(Nullable_1U5BU5D_t64E33AA314E295A305B57788F7D1F689384FD9BB_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___oldTouchPositions_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___oldTouchPositions_8), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MainMenuController_getRegion_m3636606B1E01475129A7642A50C243449EC1B6A4_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return region;
		il2cpp_codegen_runtime_class_init_inline(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		int32_t L_0 = ((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___region_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DifficultyController_getDifficulty_m56C0ABDEC81211B96C813843BA6C7871836EBBE0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return difficulty;
		il2cpp_codegen_runtime_class_init_inline(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t6C9948212D46E2607BD5F84A12FF918BA32654B4_il2cpp_TypeInfo_var))->___difficulty_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Sprite; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_Sprite_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
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
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_GetValueOrDefault_m5D8208F74E7F81ED6503E51361C8705A887AD96B_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
