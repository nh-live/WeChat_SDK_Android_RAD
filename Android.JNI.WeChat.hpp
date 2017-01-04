// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Android.JNI.WeChat.pas' rev: 31.00 (Android)

#ifndef Android_Jni_WechatHPP
#define Android_Jni_WechatHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Androidapi.JNIBridge.hpp>
#include <Androidapi.JNI.App.hpp>
#include <Androidapi.JNI.GraphicsContentViewText.hpp>
#include <Androidapi.JNI.Java.Net.hpp>
#include <Androidapi.JNI.JavaTypes.hpp>
#include <Androidapi.JNI.Media.hpp>
#include <Androidapi.JNI.Net.hpp>
#include <Androidapi.JNI.Os.hpp>
#include <Androidapi.JNI.Provider.hpp>
#include <Androidapi.JNI.Telephony.hpp>
#include <Androidapi.JNI.Util.hpp>
#include <Androidapi.JNI.Widget.hpp>
#include <Androidapi.Jni.hpp>
#include <System.Rtti.hpp>

//-- user supplied -----------------------------------------------------------

namespace Android
{
namespace Jni
{
namespace Wechat
{
//-- forward type declarations -----------------------------------------------
__interface JAccountClass;
typedef System::DelphiInterface<JAccountClass> _di_JAccountClass;
__interface JAccount;
typedef System::DelphiInterface<JAccount> _di_JAccount;
class DELPHICLASS TJAccount;
__interface JAnimatorClass;
typedef System::DelphiInterface<JAnimatorClass> _di_JAnimatorClass;
__interface JAnimator;
typedef System::DelphiInterface<JAnimator> _di_JAnimator;
class DELPHICLASS TJAnimator;
__interface JAnimator_AnimatorListenerClass;
typedef System::DelphiInterface<JAnimator_AnimatorListenerClass> _di_JAnimator_AnimatorListenerClass;
__interface JAnimator_AnimatorListener;
typedef System::DelphiInterface<JAnimator_AnimatorListener> _di_JAnimator_AnimatorListener;
class DELPHICLASS TJAnimator_AnimatorListener;
__interface JAnimator_AnimatorPauseListenerClass;
typedef System::DelphiInterface<JAnimator_AnimatorPauseListenerClass> _di_JAnimator_AnimatorPauseListenerClass;
__interface JAnimator_AnimatorPauseListener;
typedef System::DelphiInterface<JAnimator_AnimatorPauseListener> _di_JAnimator_AnimatorPauseListener;
class DELPHICLASS TJAnimator_AnimatorPauseListener;
__interface JKeyframeClass;
typedef System::DelphiInterface<JKeyframeClass> _di_JKeyframeClass;
__interface JKeyframe;
typedef System::DelphiInterface<JKeyframe> _di_JKeyframe;
class DELPHICLASS TJKeyframe;
__interface JLayoutTransitionClass;
typedef System::DelphiInterface<JLayoutTransitionClass> _di_JLayoutTransitionClass;
__interface JLayoutTransition;
typedef System::DelphiInterface<JLayoutTransition> _di_JLayoutTransition;
class DELPHICLASS TJLayoutTransition;
__interface JLayoutTransition_TransitionListenerClass;
typedef System::DelphiInterface<JLayoutTransition_TransitionListenerClass> _di_JLayoutTransition_TransitionListenerClass;
__interface JLayoutTransition_TransitionListener;
typedef System::DelphiInterface<JLayoutTransition_TransitionListener> _di_JLayoutTransition_TransitionListener;
class DELPHICLASS TJLayoutTransition_TransitionListener;
__interface JPropertyValuesHolderClass;
typedef System::DelphiInterface<JPropertyValuesHolderClass> _di_JPropertyValuesHolderClass;
__interface JPropertyValuesHolder;
typedef System::DelphiInterface<JPropertyValuesHolder> _di_JPropertyValuesHolder;
class DELPHICLASS TJPropertyValuesHolder;
__interface JStateListAnimatorClass;
typedef System::DelphiInterface<JStateListAnimatorClass> _di_JStateListAnimatorClass;
__interface JStateListAnimator;
typedef System::DelphiInterface<JStateListAnimator> _di_JStateListAnimator;
class DELPHICLASS TJStateListAnimator;
__interface JTimeInterpolatorClass;
typedef System::DelphiInterface<JTimeInterpolatorClass> _di_JTimeInterpolatorClass;
__interface JTimeInterpolator;
typedef System::DelphiInterface<JTimeInterpolator> _di_JTimeInterpolator;
class DELPHICLASS TJTimeInterpolator;
__interface JTypeConverterClass;
typedef System::DelphiInterface<JTypeConverterClass> _di_JTypeConverterClass;
__interface JTypeConverter;
typedef System::DelphiInterface<JTypeConverter> _di_JTypeConverter;
class DELPHICLASS TJTypeConverter;
__interface JTypeEvaluatorClass;
typedef System::DelphiInterface<JTypeEvaluatorClass> _di_JTypeEvaluatorClass;
__interface JTypeEvaluator;
typedef System::DelphiInterface<JTypeEvaluator> _di_JTypeEvaluator;
class DELPHICLASS TJTypeEvaluator;
__interface JValueAnimatorClass;
typedef System::DelphiInterface<JValueAnimatorClass> _di_JValueAnimatorClass;
__interface JValueAnimator;
typedef System::DelphiInterface<JValueAnimator> _di_JValueAnimator;
class DELPHICLASS TJValueAnimator;
__interface JValueAnimator_AnimatorUpdateListenerClass;
typedef System::DelphiInterface<JValueAnimator_AnimatorUpdateListenerClass> _di_JValueAnimator_AnimatorUpdateListenerClass;
__interface JValueAnimator_AnimatorUpdateListener;
typedef System::DelphiInterface<JValueAnimator_AnimatorUpdateListener> _di_JValueAnimator_AnimatorUpdateListener;
class DELPHICLASS TJValueAnimator_AnimatorUpdateListener;
__interface JSensorClass;
typedef System::DelphiInterface<JSensorClass> _di_JSensorClass;
__interface JSensor;
typedef System::DelphiInterface<JSensor> _di_JSensor;
class DELPHICLASS TJSensor;
__interface JSensorEventClass;
typedef System::DelphiInterface<JSensorEventClass> _di_JSensorEventClass;
__interface JSensorEvent;
typedef System::DelphiInterface<JSensorEvent> _di_JSensorEvent;
class DELPHICLASS TJSensorEvent;
__interface JPathMotionClass;
typedef System::DelphiInterface<JPathMotionClass> _di_JPathMotionClass;
__interface JPathMotion;
typedef System::DelphiInterface<JPathMotion> _di_JPathMotion;
class DELPHICLASS TJPathMotion;
__interface JSceneClass;
typedef System::DelphiInterface<JSceneClass> _di_JSceneClass;
__interface JScene;
typedef System::DelphiInterface<JScene> _di_JScene;
class DELPHICLASS TJScene;
__interface JTransitionClass;
typedef System::DelphiInterface<JTransitionClass> _di_JTransitionClass;
__interface JTransition;
typedef System::DelphiInterface<JTransition> _di_JTransition;
class DELPHICLASS TJTransition;
__interface JTransition_EpicenterCallbackClass;
typedef System::DelphiInterface<JTransition_EpicenterCallbackClass> _di_JTransition_EpicenterCallbackClass;
__interface JTransition_EpicenterCallback;
typedef System::DelphiInterface<JTransition_EpicenterCallback> _di_JTransition_EpicenterCallback;
class DELPHICLASS TJTransition_EpicenterCallback;
__interface JTransition_TransitionListenerClass;
typedef System::DelphiInterface<JTransition_TransitionListenerClass> _di_JTransition_TransitionListenerClass;
__interface JTransition_TransitionListener;
typedef System::DelphiInterface<JTransition_TransitionListener> _di_JTransition_TransitionListener;
class DELPHICLASS TJTransition_TransitionListener;
__interface JTransitionManagerClass;
typedef System::DelphiInterface<JTransitionManagerClass> _di_JTransitionManagerClass;
__interface JTransitionManager;
typedef System::DelphiInterface<JTransitionManager> _di_JTransitionManager;
class DELPHICLASS TJTransitionManager;
__interface JTransitionPropagationClass;
typedef System::DelphiInterface<JTransitionPropagationClass> _di_JTransitionPropagationClass;
__interface JTransitionPropagation;
typedef System::DelphiInterface<JTransitionPropagation> _di_JTransitionPropagation;
class DELPHICLASS TJTransitionPropagation;
__interface JTransitionValuesClass;
typedef System::DelphiInterface<JTransitionValuesClass> _di_JTransitionValuesClass;
__interface JTransitionValues;
typedef System::DelphiInterface<JTransitionValues> _di_JTransitionValues;
class DELPHICLASS TJTransitionValues;
__interface JInterpolatorClass;
typedef System::DelphiInterface<JInterpolatorClass> _di_JInterpolatorClass;
__interface JInterpolator;
typedef System::DelphiInterface<JInterpolator> _di_JInterpolator;
class DELPHICLASS TJInterpolator;
__interface JToolbar_LayoutParamsClass;
typedef System::DelphiInterface<JToolbar_LayoutParamsClass> _di_JToolbar_LayoutParamsClass;
__interface JToolbar_LayoutParams;
typedef System::DelphiInterface<JToolbar_LayoutParams> _di_JToolbar_LayoutParams;
class DELPHICLASS TJToolbar_LayoutParams;
__interface Jalgorithm_Base64Class;
typedef System::DelphiInterface<Jalgorithm_Base64Class> _di_Jalgorithm_Base64Class;
__interface Jalgorithm_Base64;
typedef System::DelphiInterface<Jalgorithm_Base64> _di_Jalgorithm_Base64;
class DELPHICLASS TJalgorithm_Base64;
__interface JLRUMapClass;
typedef System::DelphiInterface<JLRUMapClass> _di_JLRUMapClass;
__interface JLRUMap;
typedef System::DelphiInterface<JLRUMap> _di_JLRUMap;
class DELPHICLASS TJLRUMap;
__interface JLRUMap_1Class;
typedef System::DelphiInterface<JLRUMap_1Class> _di_JLRUMap_1Class;
__interface JLRUMap_1;
typedef System::DelphiInterface<JLRUMap_1> _di_JLRUMap_1;
class DELPHICLASS TJLRUMap_1;
__interface JLRUMap_OnClearListenerClass;
typedef System::DelphiInterface<JLRUMap_OnClearListenerClass> _di_JLRUMap_OnClearListenerClass;
__interface JLRUMap_OnClearListener;
typedef System::DelphiInterface<JLRUMap_OnClearListener> _di_JLRUMap_OnClearListener;
class DELPHICLASS TJLRUMap_OnClearListener;
__interface JLRUMap_PreRemoveCallbackClass;
typedef System::DelphiInterface<JLRUMap_PreRemoveCallbackClass> _di_JLRUMap_PreRemoveCallbackClass;
__interface JLRUMap_PreRemoveCallback;
typedef System::DelphiInterface<JLRUMap_PreRemoveCallback> _di_JLRUMap_PreRemoveCallback;
class DELPHICLASS TJLRUMap_PreRemoveCallback;
__interface JLRUMap_TimeValClass;
typedef System::DelphiInterface<JLRUMap_TimeValClass> _di_JLRUMap_TimeValClass;
__interface JLRUMap_TimeVal;
typedef System::DelphiInterface<JLRUMap_TimeVal> _di_JLRUMap_TimeVal;
class DELPHICLASS TJLRUMap_TimeVal;
__interface JMD5Class;
typedef System::DelphiInterface<JMD5Class> _di_JMD5Class;
__interface JMD5;
typedef System::DelphiInterface<JMD5> _di_JMD5;
class DELPHICLASS TJMD5;
__interface JTypeTransformClass;
typedef System::DelphiInterface<JTypeTransformClass> _di_JTypeTransformClass;
__interface JTypeTransform;
typedef System::DelphiInterface<JTypeTransform> _di_JTypeTransform;
class DELPHICLASS TJTypeTransform;
__interface JUINClass;
typedef System::DelphiInterface<JUINClass> _di_JUINClass;
__interface JUIN;
typedef System::DelphiInterface<JUIN> _di_JUIN;
class DELPHICLASS TJUIN;
__interface Jsdk_BuildClass;
typedef System::DelphiInterface<Jsdk_BuildClass> _di_Jsdk_BuildClass;
__interface Jsdk_Build;
typedef System::DelphiInterface<Jsdk_Build> _di_Jsdk_Build;
class DELPHICLASS TJsdk_Build;
__interface Jsdk_BuildConfigClass;
typedef System::DelphiInterface<Jsdk_BuildConfigClass> _di_Jsdk_BuildConfigClass;
__interface Jsdk_BuildConfig;
typedef System::DelphiInterface<Jsdk_BuildConfig> _di_Jsdk_BuildConfig;
class DELPHICLASS TJsdk_BuildConfig;
__interface JConstantsUIClass;
typedef System::DelphiInterface<JConstantsUIClass> _di_JConstantsUIClass;
__interface JConstantsUI;
typedef System::DelphiInterface<JConstantsUI> _di_JConstantsUI;
class DELPHICLASS TJConstantsUI;
__interface JConstantsUI_ContactClass;
typedef System::DelphiInterface<JConstantsUI_ContactClass> _di_JConstantsUI_ContactClass;
__interface JConstantsUI_Contact;
typedef System::DelphiInterface<JConstantsUI_Contact> _di_JConstantsUI_Contact;
class DELPHICLASS TJConstantsUI_Contact;
__interface JMMAppMgrClass;
typedef System::DelphiInterface<JMMAppMgrClass> _di_JMMAppMgrClass;
__interface JMMAppMgr;
typedef System::DelphiInterface<JMMAppMgr> _di_JMMAppMgr;
class DELPHICLASS TJMMAppMgr;
__interface JMMSharedPreferencesClass;
typedef System::DelphiInterface<JMMSharedPreferencesClass> _di_JMMSharedPreferencesClass;
__interface JMMSharedPreferences;
typedef System::DelphiInterface<JMMSharedPreferences> _di_JMMSharedPreferences;
class DELPHICLASS TJMMSharedPreferences;
__interface JMMSharedPreferences_REditorClass;
typedef System::DelphiInterface<JMMSharedPreferences_REditorClass> _di_JMMSharedPreferences_REditorClass;
__interface JMMSharedPreferences_REditor;
typedef System::DelphiInterface<JMMSharedPreferences_REditor> _di_JMMSharedPreferences_REditor;
class DELPHICLASS TJMMSharedPreferences_REditor;
__interface JConstantsMMessageClass;
typedef System::DelphiInterface<JConstantsMMessageClass> _di_JConstantsMMessageClass;
__interface JConstantsMMessage;
typedef System::DelphiInterface<JConstantsMMessage> _di_JConstantsMMessage;
class DELPHICLASS TJConstantsMMessage;
__interface JMMessageClass;
typedef System::DelphiInterface<JMMessageClass> _di_JMMessageClass;
__interface JMMessage;
typedef System::DelphiInterface<JMMessage> _di_JMMessage;
class DELPHICLASS TJMMessage;
__interface JMMessage_CallBackClass;
typedef System::DelphiInterface<JMMessage_CallBackClass> _di_JMMessage_CallBackClass;
__interface JMMessage_CallBack;
typedef System::DelphiInterface<JMMessage_CallBack> _di_JMMessage_CallBack;
class DELPHICLASS TJMMessage_CallBack;
__interface JMMessage_ReceiverClass;
typedef System::DelphiInterface<JMMessage_ReceiverClass> _di_JMMessage_ReceiverClass;
__interface JMMessage_Receiver;
typedef System::DelphiInterface<JMMessage_Receiver> _di_JMMessage_Receiver;
class DELPHICLASS TJMMessage_Receiver;
__interface JMMessageActClass;
typedef System::DelphiInterface<JMMessageActClass> _di_JMMessageActClass;
__interface JMMessageAct;
typedef System::DelphiInterface<JMMessageAct> _di_JMMessageAct;
class DELPHICLASS TJMMessageAct;
__interface JMMessageUtilClass;
typedef System::DelphiInterface<JMMessageUtilClass> _di_JMMessageUtilClass;
__interface JMMessageUtil;
typedef System::DelphiInterface<JMMessageUtil> _di_JMMessageUtil;
class DELPHICLASS TJMMessageUtil;
__interface Jpackage_infoClass;
typedef System::DelphiInterface<Jpackage_infoClass> _di_Jpackage_infoClass;
__interface Jpackage_info;
typedef System::DelphiInterface<Jpackage_info> _di_Jpackage_info;
class DELPHICLASS TJpackage_info;
__interface JMDBItemClass;
typedef System::DelphiInterface<JMDBItemClass> _di_JMDBItemClass;
__interface JMDBItem;
typedef System::DelphiInterface<JMDBItem> _di_JMDBItem;
class DELPHICLASS TJMDBItem;
__interface JMAutoDBItemClass;
typedef System::DelphiInterface<JMAutoDBItemClass> _di_JMAutoDBItemClass;
__interface JMAutoDBItem;
typedef System::DelphiInterface<JMAutoDBItem> _di_JMAutoDBItem;
class DELPHICLASS TJMAutoDBItem;
__interface JRContactClass;
typedef System::DelphiInterface<JRContactClass> _di_JRContactClass;
__interface JRContact;
typedef System::DelphiInterface<JRContact> _di_JRContact;
class DELPHICLASS TJRContact;
__interface JRContactAvatarClass;
typedef System::DelphiInterface<JRContactAvatarClass> _di_JRContactAvatarClass;
__interface JRContactAvatar;
typedef System::DelphiInterface<JRContactAvatar> _di_JRContactAvatar;
class DELPHICLASS TJRContactAvatar;
__interface JISQLiteDatabaseClass;
typedef System::DelphiInterface<JISQLiteDatabaseClass> _di_JISQLiteDatabaseClass;
__interface JISQLiteDatabase;
typedef System::DelphiInterface<JISQLiteDatabase> _di_JISQLiteDatabase;
class DELPHICLASS TJISQLiteDatabase;
__interface JContentProviderDBClass;
typedef System::DelphiInterface<JContentProviderDBClass> _di_JContentProviderDBClass;
__interface JContentProviderDB;
typedef System::DelphiInterface<JContentProviderDB> _di_JContentProviderDB;
class DELPHICLASS TJContentProviderDB;
__interface JRContactDBClass;
typedef System::DelphiInterface<JRContactDBClass> _di_JRContactDBClass;
__interface JRContactDB;
typedef System::DelphiInterface<JRContactDB> _di_JRContactDB;
class DELPHICLASS TJRContactDB;
__interface JMStorageClass;
typedef System::DelphiInterface<JMStorageClass> _di_JMStorageClass;
__interface JMStorage;
typedef System::DelphiInterface<JMStorage> _di_JMStorage;
class DELPHICLASS TJMStorage;
__interface JMAutoStorageClass;
typedef System::DelphiInterface<JMAutoStorageClass> _di_JMAutoStorageClass;
__interface JMAutoStorage;
typedef System::DelphiInterface<JMAutoStorage> _di_JMAutoStorage;
class DELPHICLASS TJMAutoStorage;
__interface JRContactStorageClass;
typedef System::DelphiInterface<JRContactStorageClass> _di_JRContactStorageClass;
__interface JRContactStorage;
typedef System::DelphiInterface<JRContactStorage> _di_JRContactStorage;
class DELPHICLASS TJRContactStorage;
__interface Jcontact_package_infoClass;
typedef System::DelphiInterface<Jcontact_package_infoClass> _di_Jcontact_package_infoClass;
__interface Jcontact_package_info;
typedef System::DelphiInterface<Jcontact_package_info> _di_Jcontact_package_info;
class DELPHICLASS TJcontact_package_info;
__interface JRConversationClass;
typedef System::DelphiInterface<JRConversationClass> _di_JRConversationClass;
__interface JRConversation;
typedef System::DelphiInterface<JRConversation> _di_JRConversation;
class DELPHICLASS TJRConversation;
__interface JRConversationDBClass;
typedef System::DelphiInterface<JRConversationDBClass> _di_JRConversationDBClass;
__interface JRConversationDB;
typedef System::DelphiInterface<JRConversationDB> _di_JRConversationDB;
class DELPHICLASS TJRConversationDB;
__interface JRConversationStorageClass;
typedef System::DelphiInterface<JRConversationStorageClass> _di_JRConversationStorageClass;
__interface JRConversationStorage;
typedef System::DelphiInterface<JRConversationStorage> _di_JRConversationStorage;
class DELPHICLASS TJRConversationStorage;
__interface Jconversation_package_infoClass;
typedef System::DelphiInterface<Jconversation_package_infoClass> _di_Jconversation_package_infoClass;
__interface Jconversation_package_info;
typedef System::DelphiInterface<Jconversation_package_info> _di_Jconversation_package_info;
class DELPHICLASS TJconversation_package_info;
__interface JRMsgInfoClass;
typedef System::DelphiInterface<JRMsgInfoClass> _di_JRMsgInfoClass;
__interface JRMsgInfo;
typedef System::DelphiInterface<JRMsgInfo> _di_JRMsgInfo;
class DELPHICLASS TJRMsgInfo;
__interface JRMsgInfoDBClass;
typedef System::DelphiInterface<JRMsgInfoDBClass> _di_JRMsgInfoDBClass;
__interface JRMsgInfoDB;
typedef System::DelphiInterface<JRMsgInfoDB> _di_JRMsgInfoDB;
class DELPHICLASS TJRMsgInfoDB;
__interface JRMsgInfoStorageClass;
typedef System::DelphiInterface<JRMsgInfoStorageClass> _di_JRMsgInfoStorageClass;
__interface JRMsgInfoStorage;
typedef System::DelphiInterface<JRMsgInfoStorage> _di_JRMsgInfoStorage;
class DELPHICLASS TJRMsgInfoStorage;
__interface JBaseReqClass;
typedef System::DelphiInterface<JBaseReqClass> _di_JBaseReqClass;
__interface JBaseReq;
typedef System::DelphiInterface<JBaseReq> _di_JBaseReq;
class DELPHICLASS TJBaseReq;
__interface JBaseRespClass;
typedef System::DelphiInterface<JBaseRespClass> _di_JBaseRespClass;
__interface JBaseResp;
typedef System::DelphiInterface<JBaseResp> _di_JBaseResp;
class DELPHICLASS TJBaseResp;
__interface JBaseResp_ErrCodeClass;
typedef System::DelphiInterface<JBaseResp_ErrCodeClass> _di_JBaseResp_ErrCodeClass;
__interface JBaseResp_ErrCode;
typedef System::DelphiInterface<JBaseResp_ErrCode> _di_JBaseResp_ErrCode;
class DELPHICLASS TJBaseResp_ErrCode;
__interface JConstantsAPIClass;
typedef System::DelphiInterface<JConstantsAPIClass> _di_JConstantsAPIClass;
__interface JConstantsAPI;
typedef System::DelphiInterface<JConstantsAPI> _di_JConstantsAPI;
class DELPHICLASS TJConstantsAPI;
__interface JGetMessageFromWXClass;
typedef System::DelphiInterface<JGetMessageFromWXClass> _di_JGetMessageFromWXClass;
__interface JGetMessageFromWX;
typedef System::DelphiInterface<JGetMessageFromWX> _di_JGetMessageFromWX;
class DELPHICLASS TJGetMessageFromWX;
__interface JGetMessageFromWX_ReqClass;
typedef System::DelphiInterface<JGetMessageFromWX_ReqClass> _di_JGetMessageFromWX_ReqClass;
__interface JGetMessageFromWX_Req;
typedef System::DelphiInterface<JGetMessageFromWX_Req> _di_JGetMessageFromWX_Req;
class DELPHICLASS TJGetMessageFromWX_Req;
__interface JGetMessageFromWX_RespClass;
typedef System::DelphiInterface<JGetMessageFromWX_RespClass> _di_JGetMessageFromWX_RespClass;
__interface JGetMessageFromWX_Resp;
typedef System::DelphiInterface<JGetMessageFromWX_Resp> _di_JGetMessageFromWX_Resp;
class DELPHICLASS TJGetMessageFromWX_Resp;
__interface JIWXAPIClass;
typedef System::DelphiInterface<JIWXAPIClass> _di_JIWXAPIClass;
__interface JIWXAPI;
typedef System::DelphiInterface<JIWXAPI> _di_JIWXAPI;
class DELPHICLASS TJIWXAPI;
__interface JIWXAPIEventHandlerClass;
typedef System::DelphiInterface<JIWXAPIEventHandlerClass> _di_JIWXAPIEventHandlerClass;
__interface JIWXAPIEventHandler;
typedef System::DelphiInterface<JIWXAPIEventHandler> _di_JIWXAPIEventHandler;
class DELPHICLASS TJIWXAPIEventHandler;
__interface JSendAuthClass;
typedef System::DelphiInterface<JSendAuthClass> _di_JSendAuthClass;
__interface JSendAuth;
typedef System::DelphiInterface<JSendAuth> _di_JSendAuth;
class DELPHICLASS TJSendAuth;
__interface JSendAuth_ReqClass;
typedef System::DelphiInterface<JSendAuth_ReqClass> _di_JSendAuth_ReqClass;
__interface JSendAuth_Req;
typedef System::DelphiInterface<JSendAuth_Req> _di_JSendAuth_Req;
class DELPHICLASS TJSendAuth_Req;
__interface JSendAuth_RespClass;
typedef System::DelphiInterface<JSendAuth_RespClass> _di_JSendAuth_RespClass;
__interface JSendAuth_Resp;
typedef System::DelphiInterface<JSendAuth_Resp> _di_JSendAuth_Resp;
class DELPHICLASS TJSendAuth_Resp;
__interface JSendMessageToWXClass;
typedef System::DelphiInterface<JSendMessageToWXClass> _di_JSendMessageToWXClass;
__interface JSendMessageToWX;
typedef System::DelphiInterface<JSendMessageToWX> _di_JSendMessageToWX;
class DELPHICLASS TJSendMessageToWX;
__interface JSendMessageToWX_ReqClass;
typedef System::DelphiInterface<JSendMessageToWX_ReqClass> _di_JSendMessageToWX_ReqClass;
__interface JSendMessageToWX_Req;
typedef System::DelphiInterface<JSendMessageToWX_Req> _di_JSendMessageToWX_Req;
class DELPHICLASS TJSendMessageToWX_Req;
__interface JSendMessageToWX_RespClass;
typedef System::DelphiInterface<JSendMessageToWX_RespClass> _di_JSendMessageToWX_RespClass;
__interface JSendMessageToWX_Resp;
typedef System::DelphiInterface<JSendMessageToWX_Resp> _di_JSendMessageToWX_Resp;
class DELPHICLASS TJSendMessageToWX_Resp;
__interface JShowMessageFromWXClass;
typedef System::DelphiInterface<JShowMessageFromWXClass> _di_JShowMessageFromWXClass;
__interface JShowMessageFromWX;
typedef System::DelphiInterface<JShowMessageFromWX> _di_JShowMessageFromWX;
class DELPHICLASS TJShowMessageFromWX;
__interface JShowMessageFromWX_ReqClass;
typedef System::DelphiInterface<JShowMessageFromWX_ReqClass> _di_JShowMessageFromWX_ReqClass;
__interface JShowMessageFromWX_Req;
typedef System::DelphiInterface<JShowMessageFromWX_Req> _di_JShowMessageFromWX_Req;
class DELPHICLASS TJShowMessageFromWX_Req;
__interface JShowMessageFromWX_RespClass;
typedef System::DelphiInterface<JShowMessageFromWX_RespClass> _di_JShowMessageFromWX_RespClass;
__interface JShowMessageFromWX_Resp;
typedef System::DelphiInterface<JShowMessageFromWX_Resp> _di_JShowMessageFromWX_Resp;
class DELPHICLASS TJShowMessageFromWX_Resp;
__interface JWXAPIFactoryClass;
typedef System::DelphiInterface<JWXAPIFactoryClass> _di_JWXAPIFactoryClass;
__interface JWXAPIFactory;
typedef System::DelphiInterface<JWXAPIFactory> _di_JWXAPIFactory;
class DELPHICLASS TJWXAPIFactory;
__interface JWXApiImplV10Class;
typedef System::DelphiInterface<JWXApiImplV10Class> _di_JWXApiImplV10Class;
__interface JWXApiImplV10;
typedef System::DelphiInterface<JWXApiImplV10> _di_JWXApiImplV10;
class DELPHICLASS TJWXApiImplV10;
__interface JWXMediaMessage_IMediaObjectClass;
typedef System::DelphiInterface<JWXMediaMessage_IMediaObjectClass> _di_JWXMediaMessage_IMediaObjectClass;
__interface JWXMediaMessage_IMediaObject;
typedef System::DelphiInterface<JWXMediaMessage_IMediaObject> _di_JWXMediaMessage_IMediaObject;
class DELPHICLASS TJWXMediaMessage_IMediaObject;
__interface JWXAppExtendObjectClass;
typedef System::DelphiInterface<JWXAppExtendObjectClass> _di_JWXAppExtendObjectClass;
__interface JWXAppExtendObject;
typedef System::DelphiInterface<JWXAppExtendObject> _di_JWXAppExtendObject;
class DELPHICLASS TJWXAppExtendObject;
__interface JWXAppLaunchDataClass;
typedef System::DelphiInterface<JWXAppLaunchDataClass> _di_JWXAppLaunchDataClass;
__interface JWXAppLaunchData;
typedef System::DelphiInterface<JWXAppLaunchData> _di_JWXAppLaunchData;
class DELPHICLASS TJWXAppLaunchData;
__interface JWXAppLaunchData_BuilderClass;
typedef System::DelphiInterface<JWXAppLaunchData_BuilderClass> _di_JWXAppLaunchData_BuilderClass;
__interface JWXAppLaunchData_Builder;
typedef System::DelphiInterface<JWXAppLaunchData_Builder> _di_JWXAppLaunchData_Builder;
class DELPHICLASS TJWXAppLaunchData_Builder;
__interface JWXEmojiObjectClass;
typedef System::DelphiInterface<JWXEmojiObjectClass> _di_JWXEmojiObjectClass;
__interface JWXEmojiObject;
typedef System::DelphiInterface<JWXEmojiObject> _di_JWXEmojiObject;
class DELPHICLASS TJWXEmojiObject;
__interface JWXFileObjectClass;
typedef System::DelphiInterface<JWXFileObjectClass> _di_JWXFileObjectClass;
__interface JWXFileObject;
typedef System::DelphiInterface<JWXFileObject> _di_JWXFileObject;
class DELPHICLASS TJWXFileObject;
__interface JWXImageObjectClass;
typedef System::DelphiInterface<JWXImageObjectClass> _di_JWXImageObjectClass;
__interface JWXImageObject;
typedef System::DelphiInterface<JWXImageObject> _di_JWXImageObject;
class DELPHICLASS TJWXImageObject;
__interface JWXMediaMessageClass;
typedef System::DelphiInterface<JWXMediaMessageClass> _di_JWXMediaMessageClass;
__interface JWXMediaMessage;
typedef System::DelphiInterface<JWXMediaMessage> _di_JWXMediaMessage;
class DELPHICLASS TJWXMediaMessage;
__interface JWXMediaMessage_BuilderClass;
typedef System::DelphiInterface<JWXMediaMessage_BuilderClass> _di_JWXMediaMessage_BuilderClass;
__interface JWXMediaMessage_Builder;
typedef System::DelphiInterface<JWXMediaMessage_Builder> _di_JWXMediaMessage_Builder;
class DELPHICLASS TJWXMediaMessage_Builder;
__interface JWXMusicObjectClass;
typedef System::DelphiInterface<JWXMusicObjectClass> _di_JWXMusicObjectClass;
__interface JWXMusicObject;
typedef System::DelphiInterface<JWXMusicObject> _di_JWXMusicObject;
class DELPHICLASS TJWXMusicObject;
__interface JWXTextObjectClass;
typedef System::DelphiInterface<JWXTextObjectClass> _di_JWXTextObjectClass;
__interface JWXTextObject;
typedef System::DelphiInterface<JWXTextObject> _di_JWXTextObject;
class DELPHICLASS TJWXTextObject;
__interface JWXVideoObjectClass;
typedef System::DelphiInterface<JWXVideoObjectClass> _di_JWXVideoObjectClass;
__interface JWXVideoObject;
typedef System::DelphiInterface<JWXVideoObject> _di_JWXVideoObject;
class DELPHICLASS TJWXVideoObject;
__interface JWXWebpageObjectClass;
typedef System::DelphiInterface<JWXWebpageObjectClass> _di_JWXWebpageObjectClass;
__interface JWXWebpageObject;
typedef System::DelphiInterface<JWXWebpageObject> _di_JWXWebpageObject;
class DELPHICLASS TJWXWebpageObject;
__interface Jopenapi_package_infoClass;
typedef System::DelphiInterface<Jopenapi_package_infoClass> _di_Jopenapi_package_infoClass;
__interface Jopenapi_package_info;
typedef System::DelphiInterface<Jopenapi_package_info> _di_Jopenapi_package_info;
class DELPHICLASS TJopenapi_package_info;
__interface Jsdk_package_infoClass;
typedef System::DelphiInterface<Jsdk_package_infoClass> _di_Jsdk_package_infoClass;
__interface Jsdk_package_info;
typedef System::DelphiInterface<Jsdk_package_info> _di_Jsdk_package_info;
class DELPHICLASS TJsdk_package_info;
__interface JAnimationHelper_IHelperClass;
typedef System::DelphiInterface<JAnimationHelper_IHelperClass> _di_JAnimationHelper_IHelperClass;
__interface JAnimationHelper_IHelper;
typedef System::DelphiInterface<JAnimationHelper_IHelper> _di_JAnimationHelper_IHelper;
class DELPHICLASS TJAnimationHelper_IHelper;
__interface JAnimationHelperImpl21belowClass;
typedef System::DelphiInterface<JAnimationHelperImpl21belowClass> _di_JAnimationHelperImpl21belowClass;
__interface JAnimationHelperImpl21below;
typedef System::DelphiInterface<JAnimationHelperImpl21below> _di_JAnimationHelperImpl21below;
class DELPHICLASS TJAnimationHelperImpl21below;
__interface JAnimationHelperImpl22Class;
typedef System::DelphiInterface<JAnimationHelperImpl22Class> _di_JAnimationHelperImpl22Class;
__interface JAnimationHelperImpl22;
typedef System::DelphiInterface<JAnimationHelperImpl22> _di_JAnimationHelperImpl22;
class DELPHICLASS TJAnimationHelperImpl22;
__interface JBackwardSupportUtilClass;
typedef System::DelphiInterface<JBackwardSupportUtilClass> _di_JBackwardSupportUtilClass;
__interface JBackwardSupportUtil;
typedef System::DelphiInterface<JBackwardSupportUtil> _di_JBackwardSupportUtil;
class DELPHICLASS TJBackwardSupportUtil;
__interface JBackwardSupportUtil_AnimationHelperClass;
typedef System::DelphiInterface<JBackwardSupportUtil_AnimationHelperClass> _di_JBackwardSupportUtil_AnimationHelperClass;
__interface JBackwardSupportUtil_AnimationHelper;
typedef System::DelphiInterface<JBackwardSupportUtil_AnimationHelper> _di_JBackwardSupportUtil_AnimationHelper;
class DELPHICLASS TJBackwardSupportUtil_AnimationHelper;
__interface JBackwardSupportUtil_BitmapFactoryClass;
typedef System::DelphiInterface<JBackwardSupportUtil_BitmapFactoryClass> _di_JBackwardSupportUtil_BitmapFactoryClass;
__interface JBackwardSupportUtil_BitmapFactory;
typedef System::DelphiInterface<JBackwardSupportUtil_BitmapFactory> _di_JBackwardSupportUtil_BitmapFactory;
class DELPHICLASS TJBackwardSupportUtil_BitmapFactory;
__interface JBackwardSupportUtil_ExifHelperClass;
typedef System::DelphiInterface<JBackwardSupportUtil_ExifHelperClass> _di_JBackwardSupportUtil_ExifHelperClass;
__interface JBackwardSupportUtil_ExifHelper;
typedef System::DelphiInterface<JBackwardSupportUtil_ExifHelper> _di_JBackwardSupportUtil_ExifHelper;
class DELPHICLASS TJBackwardSupportUtil_ExifHelper;
__interface JBackwardSupportUtil_SmoothScrollFactoryClass;
typedef System::DelphiInterface<JBackwardSupportUtil_SmoothScrollFactoryClass> _di_JBackwardSupportUtil_SmoothScrollFactoryClass;
__interface JBackwardSupportUtil_SmoothScrollFactory;
typedef System::DelphiInterface<JBackwardSupportUtil_SmoothScrollFactory> _di_JBackwardSupportUtil_SmoothScrollFactory;
class DELPHICLASS TJBackwardSupportUtil_SmoothScrollFactory;
__interface JSmoothScrollFactory_IScrollClass;
typedef System::DelphiInterface<JSmoothScrollFactory_IScrollClass> _di_JSmoothScrollFactory_IScrollClass;
__interface JSmoothScrollFactory_IScroll;
typedef System::DelphiInterface<JSmoothScrollFactory_IScroll> _di_JSmoothScrollFactory_IScroll;
class DELPHICLASS TJSmoothScrollFactory_IScroll;
__interface JChannelUtilClass;
typedef System::DelphiInterface<JChannelUtilClass> _di_JChannelUtilClass;
__interface JChannelUtil;
typedef System::DelphiInterface<JChannelUtil> _di_JChannelUtil;
class DELPHICLASS TJChannelUtil;
__interface JCharSequencesClass;
typedef System::DelphiInterface<JCharSequencesClass> _di_JCharSequencesClass;
__interface JCharSequences;
typedef System::DelphiInterface<JCharSequences> _di_JCharSequences;
class DELPHICLASS TJCharSequences;
__interface JCharSequences_1Class;
typedef System::DelphiInterface<JCharSequences_1Class> _di_JCharSequences_1Class;
__interface JCharSequences_1;
typedef System::DelphiInterface<JCharSequences_1> _di_JCharSequences_1;
class DELPHICLASS TJCharSequences_1;
__interface JCharSequences_2Class;
typedef System::DelphiInterface<JCharSequences_2Class> _di_JCharSequences_2Class;
__interface JCharSequences_2;
typedef System::DelphiInterface<JCharSequences_2> _di_JCharSequences_2;
class DELPHICLASS TJCharSequences_2;
__interface JInetUtilClass;
typedef System::DelphiInterface<JInetUtilClass> _di_JInetUtilClass;
__interface JInetUtil;
typedef System::DelphiInterface<JInetUtil> _di_JInetUtil;
class DELPHICLASS TJInetUtil;
__interface JKVConfigClass;
typedef System::DelphiInterface<JKVConfigClass> _di_JKVConfigClass;
__interface JKVConfig;
typedef System::DelphiInterface<JKVConfig> _di_JKVConfig;
class DELPHICLASS TJKVConfig;
__interface JLBSManagerClass;
typedef System::DelphiInterface<JLBSManagerClass> _di_JLBSManagerClass;
__interface JLBSManager;
typedef System::DelphiInterface<JLBSManager> _di_JLBSManager;
class DELPHICLASS TJLBSManager;
__interface JMTimerHandler_CallBackClass;
typedef System::DelphiInterface<JMTimerHandler_CallBackClass> _di_JMTimerHandler_CallBackClass;
__interface JMTimerHandler_CallBack;
typedef System::DelphiInterface<JMTimerHandler_CallBack> _di_JMTimerHandler_CallBack;
class DELPHICLASS TJMTimerHandler_CallBack;
__interface JLBSManager_1Class;
typedef System::DelphiInterface<JLBSManager_1Class> _di_JLBSManager_1Class;
__interface JLBSManager_1;
typedef System::DelphiInterface<JLBSManager_1> _di_JLBSManager_1;
class DELPHICLASS TJLBSManager_1;
__interface JLBSManager_LocationCacheClass;
typedef System::DelphiInterface<JLBSManager_LocationCacheClass> _di_JLBSManager_LocationCacheClass;
__interface JLBSManager_LocationCache;
typedef System::DelphiInterface<JLBSManager_LocationCache> _di_JLBSManager_LocationCache;
class DELPHICLASS TJLBSManager_LocationCache;
__interface JLBSManager_OnLocationGotListenerClass;
typedef System::DelphiInterface<JLBSManager_OnLocationGotListenerClass> _di_JLBSManager_OnLocationGotListenerClass;
__interface JLBSManager_OnLocationGotListener;
typedef System::DelphiInterface<JLBSManager_OnLocationGotListener> _di_JLBSManager_OnLocationGotListener;
class DELPHICLASS TJLBSManager_OnLocationGotListener;
__interface JLVBufferClass;
typedef System::DelphiInterface<JLVBufferClass> _di_JLVBufferClass;
__interface JLVBuffer;
typedef System::DelphiInterface<JLVBuffer> _di_JLVBuffer;
class DELPHICLASS TJLVBuffer;
__interface JLocaleUtilClass;
typedef System::DelphiInterface<JLocaleUtilClass> _di_JLocaleUtilClass;
__interface JLocaleUtil;
typedef System::DelphiInterface<JLocaleUtil> _di_JLocaleUtil;
class DELPHICLASS TJLocaleUtil;
__interface Jplatformtools_LogClass;
typedef System::DelphiInterface<Jplatformtools_LogClass> _di_Jplatformtools_LogClass;
__interface Jplatformtools_Log;
typedef System::DelphiInterface<Jplatformtools_Log> _di_Jplatformtools_Log;
class DELPHICLASS TJplatformtools_Log;
__interface JLogHelperClass;
typedef System::DelphiInterface<JLogHelperClass> _di_JLogHelperClass;
__interface JLogHelper;
typedef System::DelphiInterface<JLogHelper> _di_JLogHelper;
class DELPHICLASS TJLogHelper;
__interface JMAlarmHandlerClass;
typedef System::DelphiInterface<JMAlarmHandlerClass> _di_JMAlarmHandlerClass;
__interface JMAlarmHandler;
typedef System::DelphiInterface<JMAlarmHandler> _di_JMAlarmHandler;
class DELPHICLASS TJMAlarmHandler;
__interface JMAlarmHandler_CallBackClass;
typedef System::DelphiInterface<JMAlarmHandler_CallBackClass> _di_JMAlarmHandler_CallBackClass;
__interface JMAlarmHandler_CallBack;
typedef System::DelphiInterface<JMAlarmHandler_CallBack> _di_JMAlarmHandler_CallBack;
class DELPHICLASS TJMAlarmHandler_CallBack;
__interface JMAlarmHandler_IBumperClass;
typedef System::DelphiInterface<JMAlarmHandler_IBumperClass> _di_JMAlarmHandler_IBumperClass;
__interface JMAlarmHandler_IBumper;
typedef System::DelphiInterface<JMAlarmHandler_IBumper> _di_JMAlarmHandler_IBumper;
class DELPHICLASS TJMAlarmHandler_IBumper;
__interface JMMApplicationContextClass;
typedef System::DelphiInterface<JMMApplicationContextClass> _di_JMMApplicationContextClass;
__interface JMMApplicationContext;
typedef System::DelphiInterface<JMMApplicationContext> _di_JMMApplicationContext;
class DELPHICLASS TJMMApplicationContext;
__interface JMMEntryLockClass;
typedef System::DelphiInterface<JMMEntryLockClass> _di_JMMEntryLockClass;
__interface JMMEntryLock;
typedef System::DelphiInterface<JMMEntryLock> _di_JMMEntryLock;
class DELPHICLASS TJMMEntryLock;
__interface JMTimerHandlerClass;
typedef System::DelphiInterface<JMTimerHandlerClass> _di_JMTimerHandlerClass;
__interface JMTimerHandler;
typedef System::DelphiInterface<JMTimerHandler> _di_JMTimerHandler;
class DELPHICLASS TJMTimerHandler;
__interface JNetStatusUtilClass;
typedef System::DelphiInterface<JNetStatusUtilClass> _di_JNetStatusUtilClass;
__interface JNetStatusUtil;
typedef System::DelphiInterface<JNetStatusUtil> _di_JNetStatusUtil;
class DELPHICLASS TJNetStatusUtil;
__interface JPhoneUtilClass;
typedef System::DelphiInterface<JPhoneUtilClass> _di_JPhoneUtilClass;
__interface JPhoneUtil;
typedef System::DelphiInterface<JPhoneUtil> _di_JPhoneUtil;
class DELPHICLASS TJPhoneUtil;
__interface JPhoneUtil_CellInfoClass;
typedef System::DelphiInterface<JPhoneUtil_CellInfoClass> _di_JPhoneUtil_CellInfoClass;
__interface JPhoneUtil_CellInfo;
typedef System::DelphiInterface<JPhoneUtil_CellInfo> _di_JPhoneUtil_CellInfo;
class DELPHICLASS TJPhoneUtil_CellInfo;
__interface JPhoneUtil_MacInfoClass;
typedef System::DelphiInterface<JPhoneUtil_MacInfoClass> _di_JPhoneUtil_MacInfoClass;
__interface JPhoneUtil_MacInfo;
typedef System::DelphiInterface<JPhoneUtil_MacInfo> _di_JPhoneUtil_MacInfo;
class DELPHICLASS TJPhoneUtil_MacInfo;
__interface JPhoneUtil16ImplClass;
typedef System::DelphiInterface<JPhoneUtil16ImplClass> _di_JPhoneUtil16ImplClass;
__interface JPhoneUtil16Impl;
typedef System::DelphiInterface<JPhoneUtil16Impl> _di_JPhoneUtil16Impl;
class DELPHICLASS TJPhoneUtil16Impl;
__interface JPhoneUtil16Impl_1Class;
typedef System::DelphiInterface<JPhoneUtil16Impl_1Class> _di_JPhoneUtil16Impl_1Class;
__interface JPhoneUtil16Impl_1;
typedef System::DelphiInterface<JPhoneUtil16Impl_1> _di_JPhoneUtil16Impl_1;
class DELPHICLASS TJPhoneUtil16Impl_1;
__interface JPhoneUtil20ImplClass;
typedef System::DelphiInterface<JPhoneUtil20ImplClass> _di_JPhoneUtil20ImplClass;
__interface JPhoneUtil20Impl;
typedef System::DelphiInterface<JPhoneUtil20Impl> _di_JPhoneUtil20Impl;
class DELPHICLASS TJPhoneUtil20Impl;
__interface JPhoneUtil20Impl_1Class;
typedef System::DelphiInterface<JPhoneUtil20Impl_1Class> _di_JPhoneUtil20Impl_1Class;
__interface JPhoneUtil20Impl_1;
typedef System::DelphiInterface<JPhoneUtil20Impl_1> _di_JPhoneUtil20Impl_1;
class DELPHICLASS TJPhoneUtil20Impl_1;
__interface JSensorControllerClass;
typedef System::DelphiInterface<JSensorControllerClass> _di_JSensorControllerClass;
__interface JSensorController;
typedef System::DelphiInterface<JSensorController> _di_JSensorController;
class DELPHICLASS TJSensorController;
__interface JSensorController_SensorEventCallBackClass;
typedef System::DelphiInterface<JSensorController_SensorEventCallBackClass> _di_JSensorController_SensorEventCallBackClass;
__interface JSensorController_SensorEventCallBack;
typedef System::DelphiInterface<JSensorController_SensorEventCallBack> _di_JSensorController_SensorEventCallBack;
class DELPHICLASS TJSensorController_SensorEventCallBack;
__interface JSmoothScrollToPosition21belowClass;
typedef System::DelphiInterface<JSmoothScrollToPosition21belowClass> _di_JSmoothScrollToPosition21belowClass;
__interface JSmoothScrollToPosition21below;
typedef System::DelphiInterface<JSmoothScrollToPosition21below> _di_JSmoothScrollToPosition21below;
class DELPHICLASS TJSmoothScrollToPosition21below;
__interface JSmoothScrollToPosition22Class;
typedef System::DelphiInterface<JSmoothScrollToPosition22Class> _di_JSmoothScrollToPosition22Class;
__interface JSmoothScrollToPosition22;
typedef System::DelphiInterface<JSmoothScrollToPosition22> _di_JSmoothScrollToPosition22;
class DELPHICLASS TJSmoothScrollToPosition22;
__interface JSyncTaskClass;
typedef System::DelphiInterface<JSyncTaskClass> _di_JSyncTaskClass;
__interface JSyncTask;
typedef System::DelphiInterface<JSyncTask> _di_JSyncTask;
class DELPHICLASS TJSyncTask;
__interface JSyncTask_1Class;
typedef System::DelphiInterface<JSyncTask_1Class> _di_JSyncTask_1Class;
__interface JSyncTask_1;
typedef System::DelphiInterface<JSyncTask_1> _di_JSyncTask_1;
class DELPHICLASS TJSyncTask_1;
__interface JSystemPropertyClass;
typedef System::DelphiInterface<JSystemPropertyClass> _di_JSystemPropertyClass;
__interface JSystemProperty;
typedef System::DelphiInterface<JSystemProperty> _di_JSystemProperty;
class DELPHICLASS TJSystemProperty;
__interface JTimeLoggerClass;
typedef System::DelphiInterface<JTimeLoggerClass> _di_JTimeLoggerClass;
__interface JTimeLogger;
typedef System::DelphiInterface<JTimeLogger> _di_JTimeLogger;
class DELPHICLASS TJTimeLogger;
__interface Jplatformtools_TrafficStatsClass;
typedef System::DelphiInterface<Jplatformtools_TrafficStatsClass> _di_Jplatformtools_TrafficStatsClass;
__interface Jplatformtools_TrafficStats;
typedef System::DelphiInterface<Jplatformtools_TrafficStats> _di_Jplatformtools_TrafficStats;
class DELPHICLASS TJplatformtools_TrafficStats;
__interface JUtilClass;
typedef System::DelphiInterface<JUtilClass> _di_JUtilClass;
__interface JUtil;
typedef System::DelphiInterface<JUtil> _di_JUtil;
class DELPHICLASS TJUtil;
__interface JUtil_1Class;
typedef System::DelphiInterface<JUtil_1Class> _di_JUtil_1Class;
__interface JUtil_1;
typedef System::DelphiInterface<JUtil_1> _di_JUtil_1;
class DELPHICLASS TJUtil_1;
__interface JUtil_2Class;
typedef System::DelphiInterface<JUtil_2Class> _di_JUtil_2Class;
__interface JUtil_2;
typedef System::DelphiInterface<JUtil_2> _di_JUtil_2;
class DELPHICLASS TJUtil_2;
__interface Jplatformtools_package_infoClass;
typedef System::DelphiInterface<Jplatformtools_package_infoClass> _di_Jplatformtools_package_infoClass;
__interface Jplatformtools_package_info;
typedef System::DelphiInterface<Jplatformtools_package_info> _di_Jplatformtools_package_info;
class DELPHICLASS TJplatformtools_package_info;
__interface JIMMPluginAPIClass;
typedef System::DelphiInterface<JIMMPluginAPIClass> _di_JIMMPluginAPIClass;
__interface JIMMPluginAPI;
typedef System::DelphiInterface<JIMMPluginAPI> _di_JIMMPluginAPI;
class DELPHICLASS TJIMMPluginAPI;
__interface JMMPluginAPIImplClass;
typedef System::DelphiInterface<JMMPluginAPIImplClass> _di_JMMPluginAPIImplClass;
__interface JMMPluginAPIImpl;
typedef System::DelphiInterface<JMMPluginAPIImpl> _di_JMMPluginAPIImpl;
class DELPHICLASS TJMMPluginAPIImpl;
__interface JMMPluginMsgClass;
typedef System::DelphiInterface<JMMPluginMsgClass> _di_JMMPluginMsgClass;
__interface JMMPluginMsg;
typedef System::DelphiInterface<JMMPluginMsg> _di_JMMPluginMsg;
class DELPHICLASS TJMMPluginMsg;
__interface JMMPluginMsg_ReceiverHelperClass;
typedef System::DelphiInterface<JMMPluginMsg_ReceiverHelperClass> _di_JMMPluginMsg_ReceiverHelperClass;
__interface JMMPluginMsg_ReceiverHelper;
typedef System::DelphiInterface<JMMPluginMsg_ReceiverHelper> _di_JMMPluginMsg_ReceiverHelper;
class DELPHICLASS TJMMPluginMsg_ReceiverHelper;
__interface JMMPluginOAuthClass;
typedef System::DelphiInterface<JMMPluginOAuthClass> _di_JMMPluginOAuthClass;
__interface JMMPluginOAuth;
typedef System::DelphiInterface<JMMPluginOAuth> _di_JMMPluginOAuth;
class DELPHICLASS TJMMPluginOAuth;
__interface JMMPluginOAuth_1Class;
typedef System::DelphiInterface<JMMPluginOAuth_1Class> _di_JMMPluginOAuth_1Class;
__interface JMMPluginOAuth_1;
typedef System::DelphiInterface<JMMPluginOAuth_1> _di_JMMPluginOAuth_1;
class DELPHICLASS TJMMPluginOAuth_1;
__interface JMMPluginOAuth_IResultClass;
typedef System::DelphiInterface<JMMPluginOAuth_IResultClass> _di_JMMPluginOAuth_IResultClass;
__interface JMMPluginOAuth_IResult;
typedef System::DelphiInterface<JMMPluginOAuth_IResult> _di_JMMPluginOAuth_IResult;
class DELPHICLASS TJMMPluginOAuth_IResult;
__interface JMMPluginOAuth_ReceiverClass;
typedef System::DelphiInterface<JMMPluginOAuth_ReceiverClass> _di_JMMPluginOAuth_ReceiverClass;
__interface JMMPluginOAuth_Receiver;
typedef System::DelphiInterface<JMMPluginOAuth_Receiver> _di_JMMPluginOAuth_Receiver;
class DELPHICLASS TJMMPluginOAuth_Receiver;
__interface JReceiver_1Class;
typedef System::DelphiInterface<JReceiver_1Class> _di_JReceiver_1Class;
__interface JReceiver_1;
typedef System::DelphiInterface<JReceiver_1> _di_JReceiver_1;
class DELPHICLASS TJReceiver_1;
__interface JMMPluginProviderConstantsClass;
typedef System::DelphiInterface<JMMPluginProviderConstantsClass> _di_JMMPluginProviderConstantsClass;
__interface JMMPluginProviderConstants;
typedef System::DelphiInterface<JMMPluginProviderConstants> _di_JMMPluginProviderConstants;
class DELPHICLASS TJMMPluginProviderConstants;
__interface JMMPluginProviderConstants_OAuthClass;
typedef System::DelphiInterface<JMMPluginProviderConstants_OAuthClass> _di_JMMPluginProviderConstants_OAuthClass;
__interface JMMPluginProviderConstants_OAuth;
typedef System::DelphiInterface<JMMPluginProviderConstants_OAuth> _di_JMMPluginProviderConstants_OAuth;
class DELPHICLASS TJMMPluginProviderConstants_OAuth;
__interface JMMPluginProviderConstants_PluginDBClass;
typedef System::DelphiInterface<JMMPluginProviderConstants_PluginDBClass> _di_JMMPluginProviderConstants_PluginDBClass;
__interface JMMPluginProviderConstants_PluginDB;
typedef System::DelphiInterface<JMMPluginProviderConstants_PluginDB> _di_JMMPluginProviderConstants_PluginDB;
class DELPHICLASS TJMMPluginProviderConstants_PluginDB;
__interface JMMPluginProviderConstants_PluginIntentClass;
typedef System::DelphiInterface<JMMPluginProviderConstants_PluginIntentClass> _di_JMMPluginProviderConstants_PluginIntentClass;
__interface JMMPluginProviderConstants_PluginIntent;
typedef System::DelphiInterface<JMMPluginProviderConstants_PluginIntent> _di_JMMPluginProviderConstants_PluginIntent;
class DELPHICLASS TJMMPluginProviderConstants_PluginIntent;
__interface JMMPluginProviderConstants_ResolverClass;
typedef System::DelphiInterface<JMMPluginProviderConstants_ResolverClass> _di_JMMPluginProviderConstants_ResolverClass;
__interface JMMPluginProviderConstants_Resolver;
typedef System::DelphiInterface<JMMPluginProviderConstants_Resolver> _di_JMMPluginProviderConstants_Resolver;
class DELPHICLASS TJMMPluginProviderConstants_Resolver;
__interface JMMPluginProviderConstants_SharedPrefClass;
typedef System::DelphiInterface<JMMPluginProviderConstants_SharedPrefClass> _di_JMMPluginProviderConstants_SharedPrefClass;
__interface JMMPluginProviderConstants_SharedPref;
typedef System::DelphiInterface<JMMPluginProviderConstants_SharedPref> _di_JMMPluginProviderConstants_SharedPref;
class DELPHICLASS TJMMPluginProviderConstants_SharedPref;
__interface JMMPluginUtilClass;
typedef System::DelphiInterface<JMMPluginUtilClass> _di_JMMPluginUtilClass;
__interface JMMPluginUtil;
typedef System::DelphiInterface<JMMPluginUtil> _di_JMMPluginUtil;
class DELPHICLASS TJMMPluginUtil;
__interface JProfileClass;
typedef System::DelphiInterface<JProfileClass> _di_JProfileClass;
__interface JProfile;
typedef System::DelphiInterface<JProfile> _di_JProfile;
class DELPHICLASS TJProfile;
__interface Jplugin_package_infoClass;
typedef System::DelphiInterface<Jplugin_package_infoClass> _di_Jplugin_package_infoClass;
__interface Jplugin_package_info;
typedef System::DelphiInterface<Jplugin_package_info> _di_Jplugin_package_info;
class DELPHICLASS TJplugin_package_info;
__interface JCursorFieldHelperClass;
typedef System::DelphiInterface<JCursorFieldHelperClass> _di_JCursorFieldHelperClass;
__interface JCursorFieldHelper;
typedef System::DelphiInterface<JCursorFieldHelper> _di_JCursorFieldHelper;
class DELPHICLASS TJCursorFieldHelper;
__interface JMStorageEventClass;
typedef System::DelphiInterface<JMStorageEventClass> _di_JMStorageEventClass;
__interface JMStorageEvent;
typedef System::DelphiInterface<JMStorageEvent> _di_JMStorageEvent;
class DELPHICLASS TJMStorageEvent;
__interface JMStorage_1Class;
typedef System::DelphiInterface<JMStorage_1Class> _di_JMStorage_1Class;
__interface JMStorage_1;
typedef System::DelphiInterface<JMStorage_1> _di_JMStorage_1;
class DELPHICLASS TJMStorage_1;
__interface JMStorage_2Class;
typedef System::DelphiInterface<JMStorage_2Class> _di_JMStorage_2Class;
__interface JMStorage_2;
typedef System::DelphiInterface<JMStorage_2> _di_JMStorage_2;
class DELPHICLASS TJMStorage_2;
__interface JMStorage_IOnStorageChangeClass;
typedef System::DelphiInterface<JMStorage_IOnStorageChangeClass> _di_JMStorage_IOnStorageChangeClass;
__interface JMStorage_IOnStorageChange;
typedef System::DelphiInterface<JMStorage_IOnStorageChange> _di_JMStorage_IOnStorageChange;
class DELPHICLASS TJMStorage_IOnStorageChange;
__interface JMStorage_IOnStorageLoadedClass;
typedef System::DelphiInterface<JMStorage_IOnStorageLoadedClass> _di_JMStorage_IOnStorageLoadedClass;
__interface JMStorage_IOnStorageLoaded;
typedef System::DelphiInterface<JMStorage_IOnStorageLoaded> _di_JMStorage_IOnStorageLoaded;
class DELPHICLASS TJMStorage_IOnStorageLoaded;
__interface JMStorageEvent_1Class;
typedef System::DelphiInterface<JMStorageEvent_1Class> _di_JMStorageEvent_1Class;
__interface JMStorageEvent_1;
typedef System::DelphiInterface<JMStorageEvent_1> _di_JMStorageEvent_1;
class DELPHICLASS TJMStorageEvent_1;
__interface Jstorage_package_infoClass;
typedef System::DelphiInterface<Jstorage_package_infoClass> _di_Jstorage_package_infoClass;
__interface Jstorage_package_info;
typedef System::DelphiInterface<Jstorage_package_info> _di_Jstorage_package_info;
class DELPHICLASS TJstorage_package_info;
__interface JLinkedHashMapClass;
typedef System::DelphiInterface<JLinkedHashMapClass> _di_JLinkedHashMapClass;
__interface JLinkedHashMap;
typedef System::DelphiInterface<JLinkedHashMap> _di_JLinkedHashMap;
class DELPHICLASS TJLinkedHashMap;
__interface JMap_EntryClass;
typedef System::DelphiInterface<JMap_EntryClass> _di_JMap_EntryClass;
__interface JMap_Entry;
typedef System::DelphiInterface<JMap_Entry> _di_JMap_Entry;
class DELPHICLASS TJMap_Entry;
__interface JNodeClass;
typedef System::DelphiInterface<JNodeClass> _di_JNodeClass;
__interface JNode;
typedef System::DelphiInterface<JNode> _di_JNode;
class DELPHICLASS TJNode;
__interface JAttrClass;
typedef System::DelphiInterface<JAttrClass> _di_JAttrClass;
__interface JAttr;
typedef System::DelphiInterface<JAttr> _di_JAttr;
class DELPHICLASS TJAttr;
__interface JCharacterDataClass;
typedef System::DelphiInterface<JCharacterDataClass> _di_JCharacterDataClass;
__interface JCharacterData;
typedef System::DelphiInterface<JCharacterData> _di_JCharacterData;
class DELPHICLASS TJCharacterData;
__interface JTextClass;
typedef System::DelphiInterface<JTextClass> _di_JTextClass;
__interface JText;
typedef System::DelphiInterface<JText> _di_JText;
class DELPHICLASS TJText;
__interface JCDATASectionClass;
typedef System::DelphiInterface<JCDATASectionClass> _di_JCDATASectionClass;
__interface JCDATASection;
typedef System::DelphiInterface<JCDATASection> _di_JCDATASection;
class DELPHICLASS TJCDATASection;
__interface JCommentClass;
typedef System::DelphiInterface<JCommentClass> _di_JCommentClass;
__interface JComment;
typedef System::DelphiInterface<JComment> _di_JComment;
class DELPHICLASS TJComment;
__interface JDOMConfigurationClass;
typedef System::DelphiInterface<JDOMConfigurationClass> _di_JDOMConfigurationClass;
__interface JDOMConfiguration;
typedef System::DelphiInterface<JDOMConfiguration> _di_JDOMConfiguration;
class DELPHICLASS TJDOMConfiguration;
__interface JDOMImplementationClass;
typedef System::DelphiInterface<JDOMImplementationClass> _di_JDOMImplementationClass;
__interface JDOMImplementation;
typedef System::DelphiInterface<JDOMImplementation> _di_JDOMImplementation;
class DELPHICLASS TJDOMImplementation;
__interface JDOMStringListClass;
typedef System::DelphiInterface<JDOMStringListClass> _di_JDOMStringListClass;
__interface JDOMStringList;
typedef System::DelphiInterface<JDOMStringList> _di_JDOMStringList;
class DELPHICLASS TJDOMStringList;
__interface JDocumentClass;
typedef System::DelphiInterface<JDocumentClass> _di_JDocumentClass;
__interface JDocument;
typedef System::DelphiInterface<JDocument> _di_JDocument;
class DELPHICLASS TJDocument;
__interface JDocumentFragmentClass;
typedef System::DelphiInterface<JDocumentFragmentClass> _di_JDocumentFragmentClass;
__interface JDocumentFragment;
typedef System::DelphiInterface<JDocumentFragment> _di_JDocumentFragment;
class DELPHICLASS TJDocumentFragment;
__interface JDocumentTypeClass;
typedef System::DelphiInterface<JDocumentTypeClass> _di_JDocumentTypeClass;
__interface JDocumentType;
typedef System::DelphiInterface<JDocumentType> _di_JDocumentType;
class DELPHICLASS TJDocumentType;
__interface JElementClass;
typedef System::DelphiInterface<JElementClass> _di_JElementClass;
__interface JElement;
typedef System::DelphiInterface<JElement> _di_JElement;
class DELPHICLASS TJElement;
__interface JEntityReferenceClass;
typedef System::DelphiInterface<JEntityReferenceClass> _di_JEntityReferenceClass;
__interface JEntityReference;
typedef System::DelphiInterface<JEntityReference> _di_JEntityReference;
class DELPHICLASS TJEntityReference;
__interface JNamedNodeMapClass;
typedef System::DelphiInterface<JNamedNodeMapClass> _di_JNamedNodeMapClass;
__interface JNamedNodeMap;
typedef System::DelphiInterface<JNamedNodeMap> _di_JNamedNodeMap;
class DELPHICLASS TJNamedNodeMap;
__interface JNodeListClass;
typedef System::DelphiInterface<JNodeListClass> _di_JNodeListClass;
__interface JNodeList;
typedef System::DelphiInterface<JNodeList> _di_JNodeList;
class DELPHICLASS TJNodeList;
__interface JProcessingInstructionClass;
typedef System::DelphiInterface<JProcessingInstructionClass> _di_JProcessingInstructionClass;
__interface JProcessingInstruction;
typedef System::DelphiInterface<JProcessingInstruction> _di_JProcessingInstruction;
class DELPHICLASS TJProcessingInstruction;
__interface JTypeInfoClass;
typedef System::DelphiInterface<JTypeInfoClass> _di_JTypeInfoClass;
__interface JTypeInfo;
typedef System::DelphiInterface<JTypeInfo> _di_JTypeInfo;
class DELPHICLASS TJTypeInfo;
__interface JUserDataHandlerClass;
typedef System::DelphiInterface<JUserDataHandlerClass> _di_JUserDataHandlerClass;
__interface JUserDataHandler;
typedef System::DelphiInterface<JUserDataHandler> _di_JUserDataHandler;
class DELPHICLASS TJUserDataHandler;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{94EE6861-F326-489F-8919-E20B39E3D9C1}") JAccountClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Os::_di_JParcelable_Creator __cdecl _GetCREATOR(void) = 0 ;
	HIDESBASE virtual _di_JAccount __cdecl init(Androidapi::Jni::Javatypes::_di_JString name, Androidapi::Jni::Javatypes::_di_JString type_) = 0 /* overload */;
	HIDESBASE virtual _di_JAccount __cdecl init(Androidapi::Jni::Os::_di_JParcel in_) = 0 /* overload */;
	virtual int __cdecl hashCode(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
	virtual void __cdecl writeToParcel(Androidapi::Jni::Os::_di_JParcel dest, int flags) = 0 ;
	__property Androidapi::Jni::Os::_di_JParcelable_Creator CREATOR = {read=_GetCREATOR};
};

__interface  INTERFACE_UUID("{71476381-8B6E-471F-9189-9857ECD7508C}") JAccount  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getname(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Gettype(void) = 0 ;
	virtual int __cdecl describeContents(void) = 0 ;
	HIDESBASE virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject o) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString name = {read=_Getname};
	__property Androidapi::Jni::Javatypes::_di_JString type = {read=_Gettype};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAccount : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAccountClass,_di_JAccount> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAccountClass,_di_JAccount>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAccount(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAccountClass,_di_JAccount> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAccount(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{3F76A5DF-389E-4BD3-9861-04C5B00CEADE}") JAnimatorClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JAnimator __cdecl init(void) = 0 ;
	virtual void __cdecl addListener(_di_JAnimator_AnimatorListener listener) = 0 ;
	virtual void __cdecl addPauseListener(_di_JAnimator_AnimatorPauseListener listener) = 0 ;
	virtual __int64 __cdecl getDuration(void) = 0 ;
	virtual _di_JTimeInterpolator __cdecl getInterpolator(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JArrayList __cdecl getListeners(void) = 0 ;
	virtual bool __cdecl isStarted(void) = 0 ;
	virtual void __cdecl pause(void) = 0 ;
	virtual void __cdecl removeAllListeners(void) = 0 ;
	virtual _di_JAnimator __cdecl setDuration(__int64 duration) = 0 ;
	virtual void __cdecl setInterpolator(_di_JTimeInterpolator value) = 0 ;
	virtual void __cdecl setStartDelay(__int64 startDelay) = 0 ;
	virtual void __cdecl setupStartValues(void) = 0 ;
	virtual void __cdecl start(void) = 0 ;
};

__interface  INTERFACE_UUID("{FA13E56D-1B6D-4A3D-8327-9E5BA785CF21}") JAnimator  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl cancel(void) = 0 ;
	virtual _di_JAnimator __cdecl clone(void) = 0 ;
	virtual void __cdecl end(void) = 0 ;
	virtual __int64 __cdecl getStartDelay(void) = 0 ;
	virtual bool __cdecl isPaused(void) = 0 ;
	virtual bool __cdecl isRunning(void) = 0 ;
	virtual void __cdecl removeListener(_di_JAnimator_AnimatorListener listener) = 0 ;
	virtual void __cdecl removePauseListener(_di_JAnimator_AnimatorPauseListener listener) = 0 ;
	virtual void __cdecl resume(void) = 0 ;
	virtual void __cdecl setTarget(Androidapi::Jni::Javatypes::_di_JObject target) = 0 ;
	virtual void __cdecl setupEndValues(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAnimator : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimatorClass,_di_JAnimator> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimatorClass,_di_JAnimator>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAnimator(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimatorClass,_di_JAnimator> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAnimator(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{5ED6075A-B997-469C-B8D9-0AA8FB7E4798}") JAnimator_AnimatorListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl onAnimationCancel(_di_JAnimator animation) = 0 ;
	virtual void __cdecl onAnimationEnd(_di_JAnimator animation) = 0 ;
	virtual void __cdecl onAnimationRepeat(_di_JAnimator animation) = 0 ;
};

__interface  INTERFACE_UUID("{E2DE8DD6-628B-4D84-AA46-8A1E3F00FF13}") JAnimator_AnimatorListener  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onAnimationStart(_di_JAnimator animation) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAnimator_AnimatorListener : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimator_AnimatorListenerClass,_di_JAnimator_AnimatorListener> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimator_AnimatorListenerClass,_di_JAnimator_AnimatorListener>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAnimator_AnimatorListener(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimator_AnimatorListenerClass,_di_JAnimator_AnimatorListener> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAnimator_AnimatorListener(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{CB0DC3F0-63BC-4284-ADD0-2ED367AE11E5}") JAnimator_AnimatorPauseListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl onAnimationPause(_di_JAnimator animation) = 0 ;
};

__interface  INTERFACE_UUID("{43C9C106-65EA-4A7D-A958-FAB9E43FA4A6}") JAnimator_AnimatorPauseListener  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onAnimationResume(_di_JAnimator animation) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAnimator_AnimatorPauseListener : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimator_AnimatorPauseListenerClass,_di_JAnimator_AnimatorPauseListener> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimator_AnimatorPauseListenerClass,_di_JAnimator_AnimatorPauseListener>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAnimator_AnimatorPauseListener(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimator_AnimatorPauseListenerClass,_di_JAnimator_AnimatorPauseListener> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAnimator_AnimatorPauseListener(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D383116E-5CCF-48D8-9EA1-B26FBF24BA39}") JKeyframeClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JKeyframe __cdecl init(void) = 0 ;
	virtual _di_JKeyframe __cdecl clone(void) = 0 ;
	virtual float __cdecl getFraction(void) = 0 ;
	virtual bool __cdecl hasValue(void) = 0 ;
	virtual _di_JKeyframe __cdecl ofFloat(float fraction, float value) = 0 /* overload */;
	virtual _di_JKeyframe __cdecl ofFloat(float fraction) = 0 /* overload */;
	virtual _di_JKeyframe __cdecl ofInt(float fraction, int value) = 0 /* overload */;
	virtual _di_JKeyframe __cdecl ofInt(float fraction) = 0 /* overload */;
	virtual _di_JKeyframe __cdecl ofObject(float fraction, Androidapi::Jni::Javatypes::_di_JObject value) = 0 /* overload */;
	virtual _di_JKeyframe __cdecl ofObject(float fraction) = 0 /* overload */;
	virtual void __cdecl setFraction(float fraction) = 0 ;
	virtual void __cdecl setInterpolator(_di_JTimeInterpolator interpolator) = 0 ;
};

__interface  INTERFACE_UUID("{9D0687A4-669E-440F-8290-154739405019}") JKeyframe  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual _di_JTimeInterpolator __cdecl getInterpolator(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_Jlang_Class __cdecl getType(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getValue(void) = 0 ;
	virtual void __cdecl setValue(Androidapi::Jni::Javatypes::_di_JObject value) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJKeyframe : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JKeyframeClass,_di_JKeyframe> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JKeyframeClass,_di_JKeyframe>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJKeyframe(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JKeyframeClass,_di_JKeyframe> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJKeyframe(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{433C5359-0A96-4796-AD7B-8084EF7EF7C4}") JLayoutTransitionClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl _GetAPPEARING(void) = 0 ;
	virtual int __cdecl _GetCHANGE_APPEARING(void) = 0 ;
	virtual int __cdecl _GetCHANGE_DISAPPEARING(void) = 0 ;
	virtual int __cdecl _GetCHANGING(void) = 0 ;
	virtual int __cdecl _GetDISAPPEARING(void) = 0 ;
	HIDESBASE virtual _di_JLayoutTransition __cdecl init(void) = 0 ;
	virtual void __cdecl addChild(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup parent, Androidapi::Jni::Graphicscontentviewtext::_di_JView child) = 0 ;
	virtual _di_JAnimator __cdecl getAnimator(int transitionType) = 0 ;
	virtual __int64 __cdecl getDuration(int transitionType) = 0 ;
	virtual _di_JTimeInterpolator __cdecl getInterpolator(int transitionType) = 0 ;
	virtual void __cdecl hideChild(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup parent, Androidapi::Jni::Graphicscontentviewtext::_di_JView child) = 0 /* overload */;
	virtual void __cdecl hideChild(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup parent, Androidapi::Jni::Graphicscontentviewtext::_di_JView child, int newVisibility) = 0 /* overload */;
	virtual bool __cdecl isChangingLayout(void) = 0 ;
	virtual void __cdecl removeTransitionListener(_di_JLayoutTransition_TransitionListener listener) = 0 ;
	virtual void __cdecl setAnimateParentHierarchy(bool animateParentHierarchy) = 0 ;
	virtual void __cdecl setAnimator(int transitionType, _di_JAnimator animator) = 0 ;
	virtual void __cdecl setInterpolator(int transitionType, _di_JTimeInterpolator interpolator) = 0 ;
	virtual void __cdecl setStagger(int transitionType, __int64 duration) = 0 ;
	virtual void __cdecl setStartDelay(int transitionType, __int64 delay) = 0 ;
	__property int APPEARING = {read=_GetAPPEARING};
	__property int CHANGE_APPEARING = {read=_GetCHANGE_APPEARING};
	__property int CHANGE_DISAPPEARING = {read=_GetCHANGE_DISAPPEARING};
	__property int CHANGING = {read=_GetCHANGING};
	__property int DISAPPEARING = {read=_GetDISAPPEARING};
};

__interface  INTERFACE_UUID("{42450BEE-EBF2-4954-B9B7-F8DAE7DF0EC1}") JLayoutTransition  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl addTransitionListener(_di_JLayoutTransition_TransitionListener listener) = 0 ;
	virtual void __cdecl disableTransitionType(int transitionType) = 0 ;
	virtual void __cdecl enableTransitionType(int transitionType) = 0 ;
	virtual __int64 __cdecl getStagger(int transitionType) = 0 ;
	virtual __int64 __cdecl getStartDelay(int transitionType) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getTransitionListeners(void) = 0 ;
	virtual bool __cdecl isRunning(void) = 0 ;
	virtual bool __cdecl isTransitionTypeEnabled(int transitionType) = 0 ;
	virtual void __cdecl removeChild(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup parent, Androidapi::Jni::Graphicscontentviewtext::_di_JView child) = 0 ;
	virtual void __cdecl setDuration(__int64 duration) = 0 /* overload */;
	virtual void __cdecl setDuration(int transitionType, __int64 duration) = 0 /* overload */;
	virtual void __cdecl showChild(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup parent, Androidapi::Jni::Graphicscontentviewtext::_di_JView child) = 0 /* overload */;
	virtual void __cdecl showChild(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup parent, Androidapi::Jni::Graphicscontentviewtext::_di_JView child, int oldVisibility) = 0 /* overload */;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLayoutTransition : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLayoutTransitionClass,_di_JLayoutTransition> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLayoutTransitionClass,_di_JLayoutTransition>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLayoutTransition(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLayoutTransitionClass,_di_JLayoutTransition> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLayoutTransition(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9FA6F1EC-8EDB-4A05-AF58-B55A525AE114}") JLayoutTransition_TransitionListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl endTransition(_di_JLayoutTransition transition, Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup container, Androidapi::Jni::Graphicscontentviewtext::_di_JView view, int transitionType) = 0 ;
};

__interface  INTERFACE_UUID("{0FBE048F-FCDA-4692-B6F1-DE0F07FAE885}") JLayoutTransition_TransitionListener  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl startTransition(_di_JLayoutTransition transition, Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup container, Androidapi::Jni::Graphicscontentviewtext::_di_JView view, int transitionType) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLayoutTransition_TransitionListener : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLayoutTransition_TransitionListenerClass,_di_JLayoutTransition_TransitionListener> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLayoutTransition_TransitionListenerClass,_di_JLayoutTransition_TransitionListener>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLayoutTransition_TransitionListener(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLayoutTransition_TransitionListenerClass,_di_JLayoutTransition_TransitionListener> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLayoutTransition_TransitionListener(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{36C77AFF-9C3F-42B6-88F3-320FE8CF9B25}") JPropertyValuesHolderClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_JPropertyValuesHolder __cdecl ofMultiFloat(Androidapi::Jni::Javatypes::_di_JString propertyName, Androidapi::Jnibridge::TJavaBiArray__1<float> * values) = 0 /* overload */;
	virtual _di_JPropertyValuesHolder __cdecl ofMultiFloat(Androidapi::Jni::Javatypes::_di_JString propertyName, Androidapi::Jni::Graphicscontentviewtext::_di_JPath path) = 0 /* overload */;
	virtual _di_JPropertyValuesHolder __cdecl ofMultiInt(Androidapi::Jni::Javatypes::_di_JString propertyName, Androidapi::Jnibridge::TJavaBiArray__1<int> * values) = 0 /* overload */;
	virtual _di_JPropertyValuesHolder __cdecl ofMultiInt(Androidapi::Jni::Javatypes::_di_JString propertyName, Androidapi::Jni::Graphicscontentviewtext::_di_JPath path) = 0 /* overload */;
	virtual _di_JPropertyValuesHolder __cdecl ofObject(Androidapi::Jni::Javatypes::_di_JString propertyName, _di_JTypeConverter converter, Androidapi::Jni::Graphicscontentviewtext::_di_JPath path) = 0 /* overload */;
	virtual _di_JPropertyValuesHolder __cdecl ofObject(Androidapi::Jni::Util::_di_JProperty property_, _di_JTypeConverter converter, Androidapi::Jni::Graphicscontentviewtext::_di_JPath path) = 0 /* overload */;
	virtual void __cdecl setConverter(_di_JTypeConverter converter) = 0 ;
	virtual void __cdecl setEvaluator(_di_JTypeEvaluator evaluator) = 0 ;
	virtual void __cdecl setProperty(Androidapi::Jni::Util::_di_JProperty property_) = 0 ;
	virtual void __cdecl setPropertyName(Androidapi::Jni::Javatypes::_di_JString propertyName) = 0 ;
};

__interface  INTERFACE_UUID("{12B4ABFD-CBCA-4636-AF2D-C386EF895DC3}") JPropertyValuesHolder  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual _di_JPropertyValuesHolder __cdecl clone(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPropertyName(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJPropertyValuesHolder : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPropertyValuesHolderClass,_di_JPropertyValuesHolder> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPropertyValuesHolderClass,_di_JPropertyValuesHolder>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJPropertyValuesHolder(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPropertyValuesHolderClass,_di_JPropertyValuesHolder> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJPropertyValuesHolder(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{109E4067-E218-47B1-93EB-65B8916A98D8}") JStateListAnimatorClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JStateListAnimator __cdecl init(void) = 0 ;
	virtual void __cdecl jumpToCurrentState(void) = 0 ;
};

__interface  INTERFACE_UUID("{CA2A9587-26AA-4DC2-8DFF-A1305A37608F}") JStateListAnimator  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl addState(Androidapi::Jnibridge::TJavaArray__1<int> * specs, _di_JAnimator animator) = 0 ;
	virtual _di_JStateListAnimator __cdecl clone(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJStateListAnimator : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JStateListAnimatorClass,_di_JStateListAnimator> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JStateListAnimatorClass,_di_JStateListAnimator>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJStateListAnimator(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JStateListAnimatorClass,_di_JStateListAnimator> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJStateListAnimator(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1E682A1C-9102-461D-A3CA-5596683F1D66}") JTimeInterpolatorClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{639F8A83-7D9B-49AF-A19E-96B27E46D2AB}") JTimeInterpolator  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual float __cdecl getInterpolation(float input) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTimeInterpolator : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTimeInterpolatorClass,_di_JTimeInterpolator> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTimeInterpolatorClass,_di_JTimeInterpolator>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTimeInterpolator(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTimeInterpolatorClass,_di_JTimeInterpolator> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTimeInterpolator(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{BE2DD177-6D79-4B0C-B4F5-4E4CD9D7436D}") JTypeConverterClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JTypeConverter __cdecl init(Androidapi::Jni::Javatypes::_di_Jlang_Class fromClass, Androidapi::Jni::Javatypes::_di_Jlang_Class toClass) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl convert(Androidapi::Jni::Javatypes::_di_JObject value) = 0 ;
};

__interface  INTERFACE_UUID("{BFEA4116-0766-4AD9-AA8F-4C15A583EB2E}") JTypeConverter  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTypeConverter : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTypeConverterClass,_di_JTypeConverter> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTypeConverterClass,_di_JTypeConverter>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTypeConverter(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTypeConverterClass,_di_JTypeConverter> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTypeConverter(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{15B67CAF-6F50-4AA3-A88F-C5AF78D62FD4}") JTypeEvaluatorClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{F436383D-6F44-40D8-ACDD-9057777691FC}") JTypeEvaluator  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl evaluate(float fraction, Androidapi::Jni::Javatypes::_di_JObject startValue, Androidapi::Jni::Javatypes::_di_JObject endValue) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTypeEvaluator : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTypeEvaluatorClass,_di_JTypeEvaluator> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTypeEvaluatorClass,_di_JTypeEvaluator>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTypeEvaluator(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTypeEvaluatorClass,_di_JTypeEvaluator> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTypeEvaluator(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FF3B71ED-5A33-45B0-8500-7672B0B98E2C}") JValueAnimatorClass  : public JAnimatorClass 
{
	virtual int __cdecl _GetINFINITE(void) = 0 ;
	virtual int __cdecl _GetRESTART(void) = 0 ;
	virtual int __cdecl _GetREVERSE(void) = 0 ;
	HIDESBASE virtual _di_JValueAnimator __cdecl init(void) = 0 ;
	virtual void __cdecl end(void) = 0 ;
	virtual float __cdecl getAnimatedFraction(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getAnimatedValue(void) = 0 /* overload */;
	virtual __int64 __cdecl getFrameDelay(void) = 0 ;
	HIDESBASE virtual _di_JTimeInterpolator __cdecl getInterpolator(void) = 0 ;
	virtual int __cdecl getRepeatCount(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<_di_JPropertyValuesHolder> * __cdecl getValues(void) = 0 ;
	virtual bool __cdecl isRunning(void) = 0 ;
	HIDESBASE virtual bool __cdecl isStarted(void) = 0 ;
	HIDESBASE virtual void __cdecl pause(void) = 0 ;
	virtual void __cdecl reverse(void) = 0 ;
	virtual void __cdecl setCurrentFraction(float fraction) = 0 ;
	virtual void __cdecl setCurrentPlayTime(__int64 playTime) = 0 ;
	virtual void __cdecl setFrameDelay(__int64 frameDelay) = 0 ;
	HIDESBASE virtual void __cdecl setInterpolator(_di_JTimeInterpolator value) = 0 ;
	HIDESBASE virtual void __cdecl setStartDelay(__int64 startDelay) = 0 ;
	HIDESBASE virtual void __cdecl start(void) = 0 ;
	__property int INFINITE = {read=_GetINFINITE};
	__property int RESTART = {read=_GetRESTART};
	__property int REVERSE = {read=_GetREVERSE};
};

__interface  INTERFACE_UUID("{70F92B14-EFD4-4DC7-91DE-6617417AE194}") JValueAnimator  : public JAnimator 
{
	virtual void __cdecl addUpdateListener(_di_JValueAnimator_AnimatorUpdateListener listener) = 0 ;
	HIDESBASE virtual void __cdecl cancel(void) = 0 ;
	HIDESBASE virtual _di_JValueAnimator __cdecl clone(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getAnimatedValue(Androidapi::Jni::Javatypes::_di_JString propertyName) = 0 /* overload */;
	virtual __int64 __cdecl getCurrentPlayTime(void) = 0 ;
	virtual __int64 __cdecl getDuration(void) = 0 ;
	virtual int __cdecl getRepeatMode(void) = 0 ;
	HIDESBASE virtual __int64 __cdecl getStartDelay(void) = 0 ;
	virtual void __cdecl removeAllUpdateListeners(void) = 0 ;
	virtual void __cdecl removeUpdateListener(_di_JValueAnimator_AnimatorUpdateListener listener) = 0 ;
	HIDESBASE virtual void __cdecl resume(void) = 0 ;
	virtual _di_JValueAnimator __cdecl setDuration(__int64 duration) = 0 ;
	virtual void __cdecl setEvaluator(_di_JTypeEvaluator value) = 0 ;
	virtual void __cdecl setRepeatCount(int value) = 0 ;
	virtual void __cdecl setRepeatMode(int value) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJValueAnimator : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JValueAnimatorClass,_di_JValueAnimator> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JValueAnimatorClass,_di_JValueAnimator>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJValueAnimator(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JValueAnimatorClass,_di_JValueAnimator> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJValueAnimator(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9CA50CBF-4462-4445-82CD-13CE985E2DE4}") JValueAnimator_AnimatorUpdateListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl onAnimationUpdate(_di_JValueAnimator animation) = 0 ;
};

__interface  INTERFACE_UUID("{0F883491-52EF-4A40-B7D2-FC23E11E46FE}") JValueAnimator_AnimatorUpdateListener  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJValueAnimator_AnimatorUpdateListener : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JValueAnimator_AnimatorUpdateListenerClass,_di_JValueAnimator_AnimatorUpdateListener> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JValueAnimator_AnimatorUpdateListenerClass,_di_JValueAnimator_AnimatorUpdateListener>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJValueAnimator_AnimatorUpdateListener(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JValueAnimator_AnimatorUpdateListenerClass,_di_JValueAnimator_AnimatorUpdateListener> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJValueAnimator_AnimatorUpdateListener(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9025B1D0-DA48-4D2C-9D19-2E1F23FB7B8E}") JSensorClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl _GetREPORTING_MODE_CONTINUOUS(void) = 0 ;
	virtual int __cdecl _GetREPORTING_MODE_ONE_SHOT(void) = 0 ;
	virtual int __cdecl _GetREPORTING_MODE_ON_CHANGE(void) = 0 ;
	virtual int __cdecl _GetREPORTING_MODE_SPECIAL_TRIGGER(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_ACCELEROMETER(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_AMBIENT_TEMPERATURE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_GAME_ROTATION_VECTOR(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_GRAVITY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_GYROSCOPE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_GYROSCOPE_UNCALIBRATED(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_HEART_RATE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_LIGHT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_LINEAR_ACCELERATION(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_MAGNETIC_FIELD(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_ORIENTATION(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_PRESSURE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_PROXIMITY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_RELATIVE_HUMIDITY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_ROTATION_VECTOR(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_SIGNIFICANT_MOTION(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_STEP_COUNTER(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_STEP_DETECTOR(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSTRING_TYPE_TEMPERATURE(void) = 0 ;
	virtual int __cdecl _GetTYPE_ACCELEROMETER(void) = 0 ;
	virtual int __cdecl _GetTYPE_ALL(void) = 0 ;
	virtual int __cdecl _GetTYPE_AMBIENT_TEMPERATURE(void) = 0 ;
	virtual int __cdecl _GetTYPE_GAME_ROTATION_VECTOR(void) = 0 ;
	virtual int __cdecl _GetTYPE_GEOMAGNETIC_ROTATION_VECTOR(void) = 0 ;
	virtual int __cdecl _GetTYPE_GRAVITY(void) = 0 ;
	virtual int __cdecl _GetTYPE_GYROSCOPE(void) = 0 ;
	virtual int __cdecl _GetTYPE_GYROSCOPE_UNCALIBRATED(void) = 0 ;
	virtual int __cdecl _GetTYPE_HEART_RATE(void) = 0 ;
	virtual int __cdecl _GetTYPE_LIGHT(void) = 0 ;
	virtual int __cdecl _GetTYPE_LINEAR_ACCELERATION(void) = 0 ;
	virtual int __cdecl _GetTYPE_MAGNETIC_FIELD(void) = 0 ;
	virtual int __cdecl _GetTYPE_MAGNETIC_FIELD_UNCALIBRATED(void) = 0 ;
	virtual int __cdecl _GetTYPE_ORIENTATION(void) = 0 ;
	virtual int __cdecl _GetTYPE_PRESSURE(void) = 0 ;
	virtual int __cdecl _GetTYPE_PROXIMITY(void) = 0 ;
	virtual int __cdecl _GetTYPE_RELATIVE_HUMIDITY(void) = 0 ;
	virtual int __cdecl _GetTYPE_ROTATION_VECTOR(void) = 0 ;
	virtual int __cdecl _GetTYPE_SIGNIFICANT_MOTION(void) = 0 ;
	virtual int __cdecl _GetTYPE_STEP_COUNTER(void) = 0 ;
	virtual int __cdecl _GetTYPE_STEP_DETECTOR(void) = 0 ;
	virtual int __cdecl _GetTYPE_TEMPERATURE(void) = 0 ;
	virtual float __cdecl getMaximumRange(void) = 0 ;
	virtual int __cdecl getMinDelay(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getName(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getStringType(void) = 0 ;
	virtual int __cdecl getType(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getVendor(void) = 0 ;
	__property int REPORTING_MODE_CONTINUOUS = {read=_GetREPORTING_MODE_CONTINUOUS};
	__property int REPORTING_MODE_ONE_SHOT = {read=_GetREPORTING_MODE_ONE_SHOT};
	__property int REPORTING_MODE_ON_CHANGE = {read=_GetREPORTING_MODE_ON_CHANGE};
	__property int REPORTING_MODE_SPECIAL_TRIGGER = {read=_GetREPORTING_MODE_SPECIAL_TRIGGER};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_ACCELEROMETER = {read=_GetSTRING_TYPE_ACCELEROMETER};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_AMBIENT_TEMPERATURE = {read=_GetSTRING_TYPE_AMBIENT_TEMPERATURE};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_GAME_ROTATION_VECTOR = {read=_GetSTRING_TYPE_GAME_ROTATION_VECTOR};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR = {read=_GetSTRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_GRAVITY = {read=_GetSTRING_TYPE_GRAVITY};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_GYROSCOPE = {read=_GetSTRING_TYPE_GYROSCOPE};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_GYROSCOPE_UNCALIBRATED = {read=_GetSTRING_TYPE_GYROSCOPE_UNCALIBRATED};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_HEART_RATE = {read=_GetSTRING_TYPE_HEART_RATE};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_LIGHT = {read=_GetSTRING_TYPE_LIGHT};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_LINEAR_ACCELERATION = {read=_GetSTRING_TYPE_LINEAR_ACCELERATION};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_MAGNETIC_FIELD = {read=_GetSTRING_TYPE_MAGNETIC_FIELD};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED = {read=_GetSTRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_ORIENTATION = {read=_GetSTRING_TYPE_ORIENTATION};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_PRESSURE = {read=_GetSTRING_TYPE_PRESSURE};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_PROXIMITY = {read=_GetSTRING_TYPE_PROXIMITY};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_RELATIVE_HUMIDITY = {read=_GetSTRING_TYPE_RELATIVE_HUMIDITY};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_ROTATION_VECTOR = {read=_GetSTRING_TYPE_ROTATION_VECTOR};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_SIGNIFICANT_MOTION = {read=_GetSTRING_TYPE_SIGNIFICANT_MOTION};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_STEP_COUNTER = {read=_GetSTRING_TYPE_STEP_COUNTER};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_STEP_DETECTOR = {read=_GetSTRING_TYPE_STEP_DETECTOR};
	__property Androidapi::Jni::Javatypes::_di_JString STRING_TYPE_TEMPERATURE = {read=_GetSTRING_TYPE_TEMPERATURE};
	__property int TYPE_ACCELEROMETER = {read=_GetTYPE_ACCELEROMETER};
	__property int TYPE_ALL = {read=_GetTYPE_ALL};
	__property int TYPE_AMBIENT_TEMPERATURE = {read=_GetTYPE_AMBIENT_TEMPERATURE};
	__property int TYPE_GAME_ROTATION_VECTOR = {read=_GetTYPE_GAME_ROTATION_VECTOR};
	__property int TYPE_GEOMAGNETIC_ROTATION_VECTOR = {read=_GetTYPE_GEOMAGNETIC_ROTATION_VECTOR};
	__property int TYPE_GRAVITY = {read=_GetTYPE_GRAVITY};
	__property int TYPE_GYROSCOPE = {read=_GetTYPE_GYROSCOPE};
	__property int TYPE_GYROSCOPE_UNCALIBRATED = {read=_GetTYPE_GYROSCOPE_UNCALIBRATED};
	__property int TYPE_HEART_RATE = {read=_GetTYPE_HEART_RATE};
	__property int TYPE_LIGHT = {read=_GetTYPE_LIGHT};
	__property int TYPE_LINEAR_ACCELERATION = {read=_GetTYPE_LINEAR_ACCELERATION};
	__property int TYPE_MAGNETIC_FIELD = {read=_GetTYPE_MAGNETIC_FIELD};
	__property int TYPE_MAGNETIC_FIELD_UNCALIBRATED = {read=_GetTYPE_MAGNETIC_FIELD_UNCALIBRATED};
	__property int TYPE_ORIENTATION = {read=_GetTYPE_ORIENTATION};
	__property int TYPE_PRESSURE = {read=_GetTYPE_PRESSURE};
	__property int TYPE_PROXIMITY = {read=_GetTYPE_PROXIMITY};
	__property int TYPE_RELATIVE_HUMIDITY = {read=_GetTYPE_RELATIVE_HUMIDITY};
	__property int TYPE_ROTATION_VECTOR = {read=_GetTYPE_ROTATION_VECTOR};
	__property int TYPE_SIGNIFICANT_MOTION = {read=_GetTYPE_SIGNIFICANT_MOTION};
	__property int TYPE_STEP_COUNTER = {read=_GetTYPE_STEP_COUNTER};
	__property int TYPE_STEP_DETECTOR = {read=_GetTYPE_STEP_DETECTOR};
	__property int TYPE_TEMPERATURE = {read=_GetTYPE_TEMPERATURE};
};

__interface  INTERFACE_UUID("{6A4E470B-F097-434E-B27D-6C771C44F318}") JSensor  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl getFifoMaxEventCount(void) = 0 ;
	virtual int __cdecl getFifoReservedEventCount(void) = 0 ;
	virtual int __cdecl getMaxDelay(void) = 0 ;
	virtual float __cdecl getPower(void) = 0 ;
	virtual int __cdecl getReportingMode(void) = 0 ;
	virtual float __cdecl getResolution(void) = 0 ;
	virtual int __cdecl getVersion(void) = 0 ;
	virtual bool __cdecl isWakeUpSensor(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSensor : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSensorClass,_di_JSensor> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSensorClass,_di_JSensor>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSensor(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSensorClass,_di_JSensor> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSensor(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F24352F6-3196-48D5-8512-A337867AB54C}") JSensorEventClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_JSensor __cdecl _Getsensor(void) = 0 ;
	virtual __int64 __cdecl _Gettimestamp(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<float> * __cdecl _Getvalues(void) = 0 ;
	__property _di_JSensor sensor = {read=_Getsensor};
	__property __int64 timestamp = {read=_Gettimestamp};
	__property Androidapi::Jnibridge::TJavaArray__1<float> * values = {read=_Getvalues};
};

__interface  INTERFACE_UUID("{583C4821-4D8A-407E-8797-BA1D2853CC36}") JSensorEvent  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl _Getaccuracy(void) = 0 ;
	virtual void __cdecl _Setaccuracy(int Value) = 0 ;
	__property int accuracy = {read=_Getaccuracy, write=_Setaccuracy};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSensorEvent : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSensorEventClass,_di_JSensorEvent> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSensorEventClass,_di_JSensorEvent>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSensorEvent(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSensorEventClass,_di_JSensorEvent> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSensorEvent(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E1CD1A94-115C-492C-A490-37F0E72956EB}") JPathMotionClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JPathMotion __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JPathMotion __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context, Androidapi::Jni::Util::_di_JAttributeSet attrs) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{BDC08353-C9FB-42D7-97CC-C35837D2F536}") JPathMotion  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JPath __cdecl getPath(float startX, float startY, float endX, float endY) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJPathMotion : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPathMotionClass,_di_JPathMotion> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPathMotionClass,_di_JPathMotion>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJPathMotion(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPathMotionClass,_di_JPathMotion> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJPathMotion(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{8B9120CA-AEEA-4DE3-BDC9-15CFD23A7B07}") JSceneClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JScene __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup sceneRoot) = 0 /* overload */;
	HIDESBASE virtual _di_JScene __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup sceneRoot, Androidapi::Jni::Graphicscontentviewtext::_di_JView layout) = 0 /* overload */;
	HIDESBASE virtual _di_JScene __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup sceneRoot, Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup layout) = 0 /* overload */;
	virtual void __cdecl exit(void) = 0 ;
	virtual _di_JScene __cdecl getSceneForLayout(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup sceneRoot, int layoutId, Androidapi::Jni::Graphicscontentviewtext::_di_JContext context) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup __cdecl getSceneRoot(void) = 0 ;
};

__interface  INTERFACE_UUID("{85A60B99-5837-4F1F-A344-C627DD586B82}") JScene  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl enter(void) = 0 ;
	virtual void __cdecl setEnterAction(Androidapi::Jni::Javatypes::_di_JRunnable action) = 0 ;
	virtual void __cdecl setExitAction(Androidapi::Jni::Javatypes::_di_JRunnable action) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJScene : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSceneClass,_di_JScene> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSceneClass,_di_JScene>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJScene(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSceneClass,_di_JScene> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJScene(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{60EC06BC-8F7A-4416-A04B-5B57987EB18E}") JTransitionClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl _GetMATCH_ID(void) = 0 ;
	virtual int __cdecl _GetMATCH_INSTANCE(void) = 0 ;
	virtual int __cdecl _GetMATCH_ITEM_ID(void) = 0 ;
	virtual int __cdecl _GetMATCH_NAME(void) = 0 ;
	HIDESBASE virtual _di_JTransition __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JTransition __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context, Androidapi::Jni::Util::_di_JAttributeSet attrs) = 0 /* overload */;
	virtual _di_JTransition __cdecl addListener(_di_JTransition_TransitionListener listener) = 0 ;
	virtual _di_JTransition __cdecl addTarget(int targetId) = 0 /* overload */;
	virtual _di_JTransition __cdecl addTarget(Androidapi::Jni::Javatypes::_di_JString targetName) = 0 /* overload */;
	virtual bool __cdecl canRemoveViews(void) = 0 ;
	virtual void __cdecl captureEndValues(_di_JTransitionValues transitionValues) = 0 ;
	virtual void __cdecl captureStartValues(_di_JTransitionValues transitionValues) = 0 ;
	virtual _di_JTransition __cdecl excludeChildren(Androidapi::Jni::Graphicscontentviewtext::_di_JView target, bool exclude) = 0 /* overload */;
	virtual _di_JTransition __cdecl excludeChildren(Androidapi::Jni::Javatypes::_di_Jlang_Class type_, bool exclude) = 0 /* overload */;
	virtual _di_JTransition __cdecl excludeTarget(int targetId, bool exclude) = 0 /* overload */;
	virtual __int64 __cdecl getDuration(void) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JRect __cdecl getEpicenter(void) = 0 ;
	virtual _di_JTransition_EpicenterCallback __cdecl getEpicenterCallback(void) = 0 ;
	virtual _di_JTransitionPropagation __cdecl getPropagation(void) = 0 ;
	virtual __int64 __cdecl getStartDelay(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getTargetIds(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * __cdecl getTransitionProperties(void) = 0 ;
	virtual _di_JTransitionValues __cdecl getTransitionValues(Androidapi::Jni::Graphicscontentviewtext::_di_JView view, bool start) = 0 ;
	virtual bool __cdecl isTransitionRequired(_di_JTransitionValues startValues, _di_JTransitionValues endValues) = 0 ;
	virtual _di_JTransition __cdecl removeTarget(Androidapi::Jni::Graphicscontentviewtext::_di_JView target) = 0 /* overload */;
	virtual _di_JTransition __cdecl removeTarget(Androidapi::Jni::Javatypes::_di_Jlang_Class target) = 0 /* overload */;
	virtual void __cdecl setPathMotion(_di_JPathMotion pathMotion) = 0 ;
	virtual void __cdecl setPropagation(_di_JTransitionPropagation transitionPropagation) = 0 ;
	__property int MATCH_ID = {read=_GetMATCH_ID};
	__property int MATCH_INSTANCE = {read=_GetMATCH_INSTANCE};
	__property int MATCH_ITEM_ID = {read=_GetMATCH_ITEM_ID};
	__property int MATCH_NAME = {read=_GetMATCH_NAME};
};

__interface  INTERFACE_UUID("{C2F8200F-1C83-40AE-8C5B-C0C8BFF17F88}") JTransition  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual _di_JTransition __cdecl addTarget(Androidapi::Jni::Javatypes::_di_Jlang_Class targetType) = 0 /* overload */;
	virtual _di_JTransition __cdecl addTarget(Androidapi::Jni::Graphicscontentviewtext::_di_JView target) = 0 /* overload */;
	virtual _di_JTransition __cdecl clone(void) = 0 ;
	virtual _di_JAnimator __cdecl createAnimator(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup sceneRoot, _di_JTransitionValues startValues, _di_JTransitionValues endValues) = 0 ;
	virtual _di_JTransition __cdecl excludeChildren(int targetId, bool exclude) = 0 /* overload */;
	virtual _di_JTransition __cdecl excludeTarget(Androidapi::Jni::Javatypes::_di_JString targetName, bool exclude) = 0 /* overload */;
	virtual _di_JTransition __cdecl excludeTarget(Androidapi::Jni::Graphicscontentviewtext::_di_JView target, bool exclude) = 0 /* overload */;
	virtual _di_JTransition __cdecl excludeTarget(Androidapi::Jni::Javatypes::_di_Jlang_Class type_, bool exclude) = 0 /* overload */;
	virtual _di_JTimeInterpolator __cdecl getInterpolator(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getName(void) = 0 ;
	virtual _di_JPathMotion __cdecl getPathMotion(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getTargetNames(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getTargetTypes(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getTargets(void) = 0 ;
	virtual _di_JTransition __cdecl removeListener(_di_JTransition_TransitionListener listener) = 0 ;
	virtual _di_JTransition __cdecl removeTarget(int targetId) = 0 /* overload */;
	virtual _di_JTransition __cdecl removeTarget(Androidapi::Jni::Javatypes::_di_JString targetName) = 0 /* overload */;
	virtual _di_JTransition __cdecl setDuration(__int64 duration) = 0 ;
	virtual void __cdecl setEpicenterCallback(_di_JTransition_EpicenterCallback epicenterCallback) = 0 ;
	virtual _di_JTransition __cdecl setInterpolator(_di_JTimeInterpolator interpolator) = 0 ;
	virtual _di_JTransition __cdecl setStartDelay(__int64 startDelay) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTransition : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransitionClass,_di_JTransition> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransitionClass,_di_JTransition>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTransition(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransitionClass,_di_JTransition> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTransition(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{8141257A-130B-466C-A08D-AA3A00946F4C}") JTransition_EpicenterCallbackClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JTransition_EpicenterCallback __cdecl init(void) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JRect __cdecl onGetEpicenter(_di_JTransition transition) = 0 ;
};

__interface  INTERFACE_UUID("{CE004917-266F-4076-8913-F23184824FBA}") JTransition_EpicenterCallback  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTransition_EpicenterCallback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransition_EpicenterCallbackClass,_di_JTransition_EpicenterCallback> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransition_EpicenterCallbackClass,_di_JTransition_EpicenterCallback>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTransition_EpicenterCallback(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransition_EpicenterCallbackClass,_di_JTransition_EpicenterCallback> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTransition_EpicenterCallback(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D5083752-E8A6-46DF-BE40-AE11073C387E}") JTransition_TransitionListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual void __cdecl onTransitionPause(_di_JTransition transition) = 0 ;
	virtual void __cdecl onTransitionResume(_di_JTransition transition) = 0 ;
	virtual void __cdecl onTransitionStart(_di_JTransition transition) = 0 ;
};

__interface  INTERFACE_UUID("{C32BE107-6E05-4898-AF0A-FAD970D66E29}") JTransition_TransitionListener  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onTransitionCancel(_di_JTransition transition) = 0 ;
	virtual void __cdecl onTransitionEnd(_di_JTransition transition) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTransition_TransitionListener : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransition_TransitionListenerClass,_di_JTransition_TransitionListener> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransition_TransitionListenerClass,_di_JTransition_TransitionListener>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTransition_TransitionListener(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransition_TransitionListenerClass,_di_JTransition_TransitionListener> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTransition_TransitionListener(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{4160EFA0-3499-4964-817E-46497BB5B957}") JTransitionManagerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JTransitionManager __cdecl init(void) = 0 ;
	virtual void __cdecl beginDelayedTransition(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup sceneRoot) = 0 /* overload */;
	virtual void __cdecl beginDelayedTransition(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup sceneRoot, _di_JTransition transition) = 0 /* overload */;
	virtual void __cdecl endTransitions(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup sceneRoot) = 0 ;
	virtual void __cdecl go(_di_JScene scene) = 0 /* overload */;
	virtual void __cdecl go(_di_JScene scene, _di_JTransition transition) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{FF5E1210-1F04-4F81-9CAC-3D7A5C4E972B}") JTransitionManager  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl setTransition(_di_JScene scene, _di_JTransition transition) = 0 /* overload */;
	virtual void __cdecl setTransition(_di_JScene fromScene, _di_JScene toScene, _di_JTransition transition) = 0 /* overload */;
	virtual void __cdecl transitionTo(_di_JScene scene) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTransitionManager : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransitionManagerClass,_di_JTransitionManager> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransitionManagerClass,_di_JTransitionManager>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTransitionManager(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransitionManagerClass,_di_JTransitionManager> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTransitionManager(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A881388A-C877-4DD9-9BAD-1BA4F56133EE}") JTransitionPropagationClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JTransitionPropagation __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{7595B7EF-6BCE-4281-BC67-335E2FB6C091}") JTransitionPropagation  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl captureValues(_di_JTransitionValues transitionValues) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * __cdecl getPropagationProperties(void) = 0 ;
	virtual __int64 __cdecl getStartDelay(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup sceneRoot, _di_JTransition transition, _di_JTransitionValues startValues, _di_JTransitionValues endValues) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTransitionPropagation : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransitionPropagationClass,_di_JTransitionPropagation> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransitionPropagationClass,_di_JTransitionPropagation>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTransitionPropagation(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransitionPropagationClass,_di_JTransitionPropagation> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTransitionPropagation(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{3BF98CFA-6A4D-4815-8D42-15E97C916D91}") JTransitionValuesClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JTransitionValues __cdecl init(void) = 0 ;
	virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject other) = 0 ;
	virtual int __cdecl hashCode(void) = 0 ;
};

__interface  INTERFACE_UUID("{178E09E6-D32C-48A9-ADCF-8CCEA804052A}") JTransitionValues  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl _Getvalues(void) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JView __cdecl _Getview(void) = 0 ;
	virtual void __cdecl _Setview(Androidapi::Jni::Graphicscontentviewtext::_di_JView Value) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JMap values = {read=_Getvalues};
	__property Androidapi::Jni::Graphicscontentviewtext::_di_JView view = {read=_Getview, write=_Setview};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTransitionValues : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransitionValuesClass,_di_JTransitionValues> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransitionValuesClass,_di_JTransitionValues>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTransitionValues(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTransitionValuesClass,_di_JTransitionValues> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTransitionValues(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A575B46A-E489-409C-807A-1B8F2BE092E8}") JInterpolatorClass  : public JTimeInterpolatorClass 
{
	
};

__interface  INTERFACE_UUID("{F1082403-52DA-4AF0-B017-DAB334325FC7}") JInterpolator  : public JTimeInterpolator 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJInterpolator : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JInterpolatorClass,_di_JInterpolator> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JInterpolatorClass,_di_JInterpolator>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJInterpolator(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JInterpolatorClass,_di_JInterpolator> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJInterpolator(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6D43796C-C163-4084-BB30-6FE68AFD7ABB}") JToolbar_LayoutParamsClass  : public Androidapi::Jni::App::JActionBar_LayoutParamsClass 
{
	HIDESBASE virtual _di_JToolbar_LayoutParams __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext c, Androidapi::Jni::Util::_di_JAttributeSet attrs) = 0 /* overload */;
	HIDESBASE virtual _di_JToolbar_LayoutParams __cdecl init(int width, int height) = 0 /* overload */;
	HIDESBASE virtual _di_JToolbar_LayoutParams __cdecl init(int width, int height, int gravity) = 0 /* overload */;
	HIDESBASE virtual _di_JToolbar_LayoutParams __cdecl init(int gravity) = 0 /* overload */;
	HIDESBASE virtual _di_JToolbar_LayoutParams __cdecl init(_di_JToolbar_LayoutParams source) = 0 /* overload */;
	HIDESBASE virtual _di_JToolbar_LayoutParams __cdecl init(Androidapi::Jni::App::_di_JActionBar_LayoutParams source) = 0 /* overload */;
	HIDESBASE virtual _di_JToolbar_LayoutParams __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup_MarginLayoutParams source) = 0 /* overload */;
	HIDESBASE virtual _di_JToolbar_LayoutParams __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JViewGroup_LayoutParams source) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{BCD101F9-B7B7-4B2F-9460-056B3EA7B9F0}") JToolbar_LayoutParams  : public Androidapi::Jni::App::JActionBar_LayoutParams 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJToolbar_LayoutParams : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JToolbar_LayoutParamsClass,_di_JToolbar_LayoutParams> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JToolbar_LayoutParamsClass,_di_JToolbar_LayoutParams>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJToolbar_LayoutParams(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JToolbar_LayoutParamsClass,_di_JToolbar_LayoutParams> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJToolbar_LayoutParams(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{37A14099-2B62-42A6-A377-D84DC3E07CFC}") Jalgorithm_Base64Class  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl decode(Androidapi::Jnibridge::TJavaArray__1<System::WideChar> * P1) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl decode(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl decode(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl decodeFast(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl decodeFast(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl decodeFast(Androidapi::Jnibridge::TJavaArray__1<System::WideChar> * P1) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl encodeToByte(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, bool P2) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::WideChar> * __cdecl encodeToChar(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, bool P2) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl encodeToString(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, bool P2) = 0 ;
	HIDESBASE virtual _di_Jalgorithm_Base64 __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{627AB58D-41D2-4DAF-AD1A-A9651282E17B}") Jalgorithm_Base64  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJalgorithm_Base64 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalgorithm_Base64Class,_di_Jalgorithm_Base64> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalgorithm_Base64Class,_di_Jalgorithm_Base64>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJalgorithm_Base64(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jalgorithm_Base64Class,_di_Jalgorithm_Base64> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJalgorithm_Base64(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{DD1203E7-D7D1-46B6-9A43-0263225C9F87}") JLRUMapClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JLRUMap __cdecl init(int P1) = 0 /* overload */;
	HIDESBASE virtual _di_JLRUMap __cdecl init(int P1, _di_JLRUMap_PreRemoveCallback P2) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{E69FD8B6-71D9-4F0C-AC7B-0D9CBFECE57F}") JLRUMap  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual bool __cdecl check(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual bool __cdecl checkAndUpTime(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual void __cdecl clear(void) = 0 /* overload */;
	virtual void __cdecl clear(_di_JLRUMap_OnClearListener P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl get(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getAndUptime(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual void __cdecl remove(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual void __cdecl setMaxSize(int P1) = 0 ;
	virtual void __cdecl setPerDeleteSize(int P1) = 0 ;
	virtual int __cdecl size(void) = 0 ;
	virtual void __cdecl update(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_JObject P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLRUMap : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLRUMapClass,_di_JLRUMap> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLRUMapClass,_di_JLRUMap>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLRUMap(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLRUMapClass,_di_JLRUMap> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLRUMap(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E38CB8DA-0220-425F-9713-2D11938F8C64}") JLRUMap_1Class  : public Androidapi::Jni::Javatypes::JComparatorClass 
{
	virtual _di_JLRUMap_1 __cdecl init(_di_JLRUMap P1) = 0 ;
};

__interface  INTERFACE_UUID("{3DB00DE7-6427-4F9F-8235-A633A23CB7E7}") JLRUMap_1  : public Androidapi::Jni::Javatypes::JComparator 
{
	HIDESBASE virtual int __cdecl compare(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_JObject P2) = 0 /* overload */;
	HIDESBASE virtual int __cdecl compare(_di_JMap_Entry P1, _di_JMap_Entry P2) = 0 /* overload */;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLRUMap_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLRUMap_1Class,_di_JLRUMap_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLRUMap_1Class,_di_JLRUMap_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLRUMap_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLRUMap_1Class,_di_JLRUMap_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLRUMap_1(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{515B15F9-143C-4017-A19B-DEFC730E07DC}") JLRUMap_OnClearListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{46D2539B-1AF7-48BE-B28C-2E999A19AD71}") JLRUMap_OnClearListener  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onClear(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_JObject P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLRUMap_OnClearListener : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLRUMap_OnClearListenerClass,_di_JLRUMap_OnClearListener> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLRUMap_OnClearListenerClass,_di_JLRUMap_OnClearListener>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLRUMap_OnClearListener(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLRUMap_OnClearListenerClass,_di_JLRUMap_OnClearListener> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLRUMap_OnClearListener(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A103F6A8-1B38-4A63-97AD-44AFDB438F71}") JLRUMap_PreRemoveCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{9D4BCC66-363B-4FA2-8873-16777CA414ED}") JLRUMap_PreRemoveCallback  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl preRemoveCallback(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_JObject P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLRUMap_PreRemoveCallback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLRUMap_PreRemoveCallbackClass,_di_JLRUMap_PreRemoveCallback> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLRUMap_PreRemoveCallbackClass,_di_JLRUMap_PreRemoveCallback>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLRUMap_PreRemoveCallback(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLRUMap_PreRemoveCallbackClass,_di_JLRUMap_PreRemoveCallback> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLRUMap_PreRemoveCallback(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C8727649-87F4-4390-A04F-4BA0C468518A}") JLRUMap_TimeValClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{0FBC5E72-600E-4E71-A780-C4C6A17F2B86}") JLRUMap_TimeVal  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual _di_JLRUMap __cdecl _Getg(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JLong __cdecl _Gett(void) = 0 ;
	virtual void __cdecl UpTime(void) = 0 ;
	__property _di_JLRUMap g = {read=_Getg};
	__property Androidapi::Jni::Javatypes::_di_JLong t = {read=_Gett};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLRUMap_TimeVal : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLRUMap_TimeValClass,_di_JLRUMap_TimeVal> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLRUMap_TimeValClass,_di_JLRUMap_TimeVal>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLRUMap_TimeVal(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLRUMap_TimeValClass,_di_JLRUMap_TimeVal> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLRUMap_TimeVal(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{434A47C1-ED78-460F-A88A-5503E719EB0C}") JMD5Class  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMD5(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMD5(Androidapi::Jni::Javatypes::_di_JFile P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMD5(Androidapi::Jni::Javatypes::_di_JFileInputStream P1, int P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMD5(Androidapi::Jni::Javatypes::_di_JFile P1, int P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMD5(Androidapi::Jni::Javatypes::_di_JString P1, int P2, int P3) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMD5(Androidapi::Jni::Javatypes::_di_JFile P1, int P2, int P3) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMD5(Androidapi::Jni::Javatypes::_di_JFileInputStream P1, int P2, int P3, int P4) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMessageDigest(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl getRawDigest(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 ;
};

__interface  INTERFACE_UUID("{78B664E7-04FA-48FE-917E-CF523A58BB1D}") JMD5  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMD5 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMD5Class,_di_JMD5> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMD5Class,_di_JMD5>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMD5(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMD5Class,_di_JMD5> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMD5(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A4BF98A9-D317-403A-ACB1-EBBD416C6077}") JTypeTransformClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl byteArrayHLToInt(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 /* overload */;
	virtual int __cdecl byteArrayHLToInt(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2) = 0 /* overload */;
	virtual __int64 __cdecl byteArrayHLToLong(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 /* overload */;
	virtual __int64 __cdecl byteArrayHLToLong(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2) = 0 /* overload */;
	virtual int __cdecl byteArrayLHToInt(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 /* overload */;
	virtual int __cdecl byteArrayLHToInt(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2) = 0 /* overload */;
	virtual __int64 __cdecl byteArrayLHToLong(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 /* overload */;
	virtual __int64 __cdecl byteArrayLHToLong(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2) = 0 /* overload */;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl intToByteArrayHL(int P1) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl intToByteArrayLH(int P1) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl longToByteArrayHL(__int64 P1) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl longToByteArrayLH(__int64 P1) = 0 ;
};

__interface  INTERFACE_UUID("{73A23ACB-1C42-4FB8-9071-0174D44C23E2}") JTypeTransform  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTypeTransform : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTypeTransformClass,_di_JTypeTransform> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTypeTransformClass,_di_JTypeTransform>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTypeTransform(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTypeTransformClass,_di_JTypeTransform> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTypeTransform(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B093DB33-19C0-4592-9D5A-2991B7293634}") JUINClass  : public Androidapi::Jni::Javatypes::JNumberClass 
{
	HIDESBASE virtual _di_JUIN __cdecl init(int P1) = 0 /* overload */;
	HIDESBASE virtual _di_JUIN __cdecl init(__int64 P1) = 0 /* overload */;
	virtual int __cdecl valueOf(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{86F6449F-A4CA-45A2-8524-17664F61D211}") JUIN  : public Androidapi::Jni::Javatypes::JNumber 
{
	HIDESBASE virtual double __cdecl doubleValue(void) = 0 ;
	HIDESBASE virtual float __cdecl floatValue(void) = 0 ;
	HIDESBASE virtual int __cdecl intValue(void) = 0 ;
	HIDESBASE virtual __int64 __cdecl longValue(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
	virtual int __cdecl value(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJUIN : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUINClass,_di_JUIN> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUINClass,_di_JUIN>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUIN(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUINClass,_di_JUIN> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUIN(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2D234297-0A35-4DA0-AF21-4707D69FCF5C}") Jsdk_BuildClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl _GetEMOJI_SUPPORTED_SDK_INT(void) = 0 ;
	virtual int __cdecl _GetSDK_INT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSDK_VERSION_NAME(void) = 0 ;
	virtual int __cdecl _GetTIMELINE_SUPPORTED_SDK_INT(void) = 0 ;
	__property int EMOJI_SUPPORTED_SDK_INT = {read=_GetEMOJI_SUPPORTED_SDK_INT};
	__property int SDK_INT = {read=_GetSDK_INT};
	__property Androidapi::Jni::Javatypes::_di_JString SDK_VERSION_NAME = {read=_GetSDK_VERSION_NAME};
	__property int TIMELINE_SUPPORTED_SDK_INT = {read=_GetTIMELINE_SUPPORTED_SDK_INT};
};

__interface  INTERFACE_UUID("{3DD0BC43-1D97-495A-BFED-D566113B3F23}") Jsdk_Build  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJsdk_Build : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jsdk_BuildClass,_di_Jsdk_Build> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jsdk_BuildClass,_di_Jsdk_Build>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJsdk_Build(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jsdk_BuildClass,_di_Jsdk_Build> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJsdk_Build(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9430DC2D-C68A-4C30-8C5D-FA4948DDEE94}") Jsdk_BuildConfigClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl _GetDEBUG(void) = 0 ;
	HIDESBASE virtual _di_Jsdk_BuildConfig __cdecl init(void) = 0 ;
	__property bool DEBUG = {read=_GetDEBUG};
};

__interface  INTERFACE_UUID("{66EE8C2D-B37C-4423-8949-23891AF27093}") Jsdk_BuildConfig  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJsdk_BuildConfig : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jsdk_BuildConfigClass,_di_Jsdk_BuildConfig> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jsdk_BuildConfigClass,_di_Jsdk_BuildConfig>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJsdk_BuildConfig(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jsdk_BuildConfigClass,_di_Jsdk_BuildConfig> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJsdk_BuildConfig(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{BA0E547F-98FC-4CCD-8822-202C2C9C5777}") JConstantsUIClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetPREF_FILE_PATH(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString PREF_FILE_PATH = {read=_GetPREF_FILE_PATH};
};

__interface  INTERFACE_UUID("{3A6A0634-06C7-4C68-97CC-5BC4587C9903}") JConstantsUI  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJConstantsUI : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConstantsUIClass,_di_JConstantsUI> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConstantsUIClass,_di_JConstantsUI>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJConstantsUI(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConstantsUIClass,_di_JConstantsUI> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJConstantsUI(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{45545E6D-50A3-4B4E-9B8F-FC6F2006A100}") JConstantsUI_ContactClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetKUser(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString KUser = {read=_GetKUser};
};

__interface  INTERFACE_UUID("{349FDE6C-30F1-46BD-AC1E-4D1DC5E7EA2A}") JConstantsUI_Contact  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJConstantsUI_Contact : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConstantsUI_ContactClass,_di_JConstantsUI_Contact> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConstantsUI_ContactClass,_di_JConstantsUI_Contact>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJConstantsUI_Contact(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConstantsUI_ContactClass,_di_JConstantsUI_Contact> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJConstantsUI_Contact(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{3E21BE3C-5A73-4715-91EA-D7D8AC159558}") JMMAppMgrClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl activate(bool P1) = 0 ;
	virtual _di_JIMMPluginAPI __cdecl getPluginMgr(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences __cdecl getSharedPreferences(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, int P2) = 0 ;
};

__interface  INTERFACE_UUID("{D1033934-FF90-4D6F-97E5-AE0A96FA7E55}") JMMAppMgr  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMAppMgr : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMAppMgrClass,_di_JMMAppMgr> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMAppMgrClass,_di_JMMAppMgr>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMAppMgr(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMAppMgrClass,_di_JMMAppMgr> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMAppMgr(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{12E86B64-E980-4616-90F3-67C80AC170C5}") JMMSharedPreferencesClass  : public Androidapi::Jni::Graphicscontentviewtext::JSharedPreferencesClass 
{
	virtual _di_JMMSharedPreferences __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{BFCF96ED-7129-4D94-80FC-ABD5DC035BC9}") JMMSharedPreferences  : public Androidapi::Jni::Graphicscontentviewtext::JSharedPreferences 
{
	HIDESBASE virtual bool __cdecl contains(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences_Editor __cdecl edit(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl getAll(void) = 0 ;
	HIDESBASE virtual bool __cdecl getBoolean(Androidapi::Jni::Javatypes::_di_JString P1, bool P2) = 0 ;
	HIDESBASE virtual float __cdecl getFloat(Androidapi::Jni::Javatypes::_di_JString P1, float P2) = 0 ;
	HIDESBASE virtual int __cdecl getInt(Androidapi::Jni::Javatypes::_di_JString P1, int P2) = 0 ;
	HIDESBASE virtual __int64 __cdecl getLong(Androidapi::Jni::Javatypes::_di_JString P1, __int64 P2) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getString(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JSet __cdecl getStringSet(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JSet P2) = 0 ;
	HIDESBASE virtual void __cdecl registerOnSharedPreferenceChangeListener(Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences_OnSharedPreferenceChangeListener P1) = 0 ;
	HIDESBASE virtual void __cdecl unregisterOnSharedPreferenceChangeListener(Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences_OnSharedPreferenceChangeListener P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMSharedPreferences : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMSharedPreferencesClass,_di_JMMSharedPreferences> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMSharedPreferencesClass,_di_JMMSharedPreferences>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMSharedPreferences(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMSharedPreferencesClass,_di_JMMSharedPreferences> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMSharedPreferences(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{8DCF9A17-CA51-4FF5-915C-2AABFD7D2251}") JMMSharedPreferences_REditorClass  : public Androidapi::Jni::Graphicscontentviewtext::JSharedPreferences_EditorClass 
{
	virtual _di_JMMSharedPreferences_REditor __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContentResolver P1) = 0 ;
};

__interface  INTERFACE_UUID("{C5C461B9-715D-4A06-85CB-9A364920A1A8}") JMMSharedPreferences_REditor  : public Androidapi::Jni::Graphicscontentviewtext::JSharedPreferences_Editor 
{
	HIDESBASE virtual void __cdecl apply(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences_Editor __cdecl clear(void) = 0 ;
	HIDESBASE virtual bool __cdecl commit(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences_Editor __cdecl putBoolean(Androidapi::Jni::Javatypes::_di_JString P1, bool P2) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences_Editor __cdecl putFloat(Androidapi::Jni::Javatypes::_di_JString P1, float P2) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences_Editor __cdecl putInt(Androidapi::Jni::Javatypes::_di_JString P1, int P2) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences_Editor __cdecl putLong(Androidapi::Jni::Javatypes::_di_JString P1, __int64 P2) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences_Editor __cdecl putString(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences_Editor __cdecl putStringSet(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JSet P2) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences_Editor __cdecl remove(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMSharedPreferences_REditor : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMSharedPreferences_REditorClass,_di_JMMSharedPreferences_REditor> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMSharedPreferences_REditorClass,_di_JMMSharedPreferences_REditor>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMSharedPreferences_REditor(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMSharedPreferences_REditorClass,_di_JMMSharedPreferences_REditor> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMSharedPreferences_REditor(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{CCAFBA9F-A591-42CA-AEFF-6E2D96DE08A5}") JConstantsMMessageClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_MESSAGE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetAPP_PACKAGE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCHECK_SUM(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCONTENT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSDK_VERSION(void) = 0 ;
	HIDESBASE virtual _di_JConstantsMMessage __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_MESSAGE = {read=_GetACTION_MESSAGE};
	__property Androidapi::Jni::Javatypes::_di_JString APP_PACKAGE = {read=_GetAPP_PACKAGE};
	__property Androidapi::Jni::Javatypes::_di_JString CHECK_SUM = {read=_GetCHECK_SUM};
	__property Androidapi::Jni::Javatypes::_di_JString CONTENT = {read=_GetCONTENT};
	__property Androidapi::Jni::Javatypes::_di_JString SDK_VERSION = {read=_GetSDK_VERSION};
};

__interface  INTERFACE_UUID("{2DE125B1-D71E-4E2D-B6B2-4DBEB6E0C1CA}") JConstantsMMessage  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJConstantsMMessage : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConstantsMMessageClass,_di_JConstantsMMessage> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConstantsMMessageClass,_di_JConstantsMMessage>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJConstantsMMessage(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConstantsMMessageClass,_di_JConstantsMMessage> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJConstantsMMessage(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{AAC40733-1725-47D9-AD4C-6EABA0D6FFC6}") JMMessageClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JMMessage __cdecl init(void) = 0 ;
	virtual void __cdecl send(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 /* overload */;
	virtual void __cdecl send(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4) = 0 /* overload */;
	virtual bool __cdecl send(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4, Androidapi::Jni::Os::_di_JBundle P5) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{1EB2423C-E9A6-49C1-9D8F-248927F4F30D}") JMMessage  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMessage : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMessageClass,_di_JMMessage> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMessageClass,_di_JMMessage>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMessage(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMessageClass,_di_JMMessage> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMessage(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D4D9A5E6-D309-456D-AD30-12D039298AD1}") JMMessage_CallBackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{3BA81BF8-0817-4D63-AF1F-51D78A78D836}") JMMessage_CallBack  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl handleMessage(Androidapi::Jni::Graphicscontentviewtext::_di_JIntent P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMessage_CallBack : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMessage_CallBackClass,_di_JMMessage_CallBack> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMessage_CallBackClass,_di_JMMessage_CallBack>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMessage_CallBack(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMessage_CallBackClass,_di_JMMessage_CallBack> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMessage_CallBack(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2E2047DF-244B-4BCF-92D3-F6C17E576407}") JMMessage_ReceiverClass  : public Androidapi::Jni::Graphicscontentviewtext::JBroadcastReceiverClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl _Getcallbacks(void) = 0 ;
	HIDESBASE virtual _di_JMMessage_Receiver __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JMMessage_Receiver __cdecl init(_di_JMMessage_CallBack P1) = 0 /* overload */;
	virtual void __cdecl registerCallBack(Androidapi::Jni::Javatypes::_di_JString P1, _di_JMMessage_CallBack P2) = 0 ;
	virtual void __cdecl unregisterCallBack(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JMap callbacks = {read=_Getcallbacks};
};

__interface  INTERFACE_UUID("{F8308DE1-7DA1-493E-835C-7FAFC3EBA4D0}") JMMessage_Receiver  : public Androidapi::Jni::Graphicscontentviewtext::JBroadcastReceiver 
{
	HIDESBASE virtual void __cdecl onReceive(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Graphicscontentviewtext::_di_JIntent P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMessage_Receiver : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMessage_ReceiverClass,_di_JMMessage_Receiver> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMessage_ReceiverClass,_di_JMMessage_Receiver>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMessage_Receiver(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMessage_ReceiverClass,_di_JMMessage_Receiver> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMessage_Receiver(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1218CD0C-EED1-4812-B047-CFD6F317EB69}") JMMessageActClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JMMessageAct __cdecl init(void) = 0 ;
	virtual bool __cdecl send(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 /* overload */;
	virtual bool __cdecl send(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Os::_di_JBundle P4) = 0 /* overload */;
	virtual bool __cdecl send(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4, Androidapi::Jni::Os::_di_JBundle P5) = 0 /* overload */;
	virtual bool __cdecl sendToWx(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual bool __cdecl sendToWx(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Os::_di_JBundle P3) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{3962F180-66E8-465B-924B-7EA0F4815DC7}") JMMessageAct  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMessageAct : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMessageActClass,_di_JMMessageAct> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMessageActClass,_di_JMMessageAct>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMessageAct(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMessageActClass,_di_JMMessageAct> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMessageAct(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{73B835A6-2A39-460A-BE56-14B3A43B9CEC}") JMMessageUtilClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{DAE32003-6E9E-43A3-97DE-7E35EBC3A8BD}") JMMessageUtil  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMessageUtil : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMessageUtilClass,_di_JMMessageUtil> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMessageUtilClass,_di_JMMessageUtil>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMessageUtil(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMessageUtilClass,_di_JMMessageUtil> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMessageUtil(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{7B67FA98-8923-44F3-835F-737170AB6431}") Jpackage_infoClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{47A92DB5-A29E-47B4-86AD-86421FC1A304}") Jpackage_info  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJpackage_info : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jpackage_infoClass,_di_Jpackage_info> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jpackage_infoClass,_di_Jpackage_info>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJpackage_info(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jpackage_infoClass,_di_Jpackage_info> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJpackage_info(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1C84B877-A3BD-450E-BD47-8DBACA08991E}") JMDBItemClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{08A0F32A-7CEA-48BC-BC14-C5F7759A1268}") JMDBItem  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl convertFrom(Androidapi::Jni::Graphicscontentviewtext::_di_JCursor P1) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues __cdecl convertTo(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMDBItem : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMDBItemClass,_di_JMDBItem> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMDBItemClass,_di_JMDBItem>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMDBItem(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMDBItemClass,_di_JMDBItem> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMDBItem(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{60AB1525-AA4C-422C-B948-8E285D7EBE84}") JMAutoDBItemClass  : public JMDBItemClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSYSTEM_ROWID_FIELD(void) = 0 ;
	virtual bool __cdecl checkIOEqual(Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P1, Androidapi::Jni::Graphicscontentviewtext::_di_JCursor P2) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JCursor __cdecl getCursorForProjection(Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P1, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P2) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * __cdecl getFullColumns(Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JField> * P1) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JField> * __cdecl getValidFields(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 ;
	virtual _di_JMAutoDBItem __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString SYSTEM_ROWID_FIELD = {read=_GetSYSTEM_ROWID_FIELD};
};

__interface  INTERFACE_UUID("{D1289611-FC7E-43D6-96A9-60B271119E7D}") JMAutoDBItem  : public JMDBItem 
{
	virtual __int64 __cdecl _GetsystemRowid(void) = 0 ;
	HIDESBASE virtual void __cdecl convertFrom(Androidapi::Jni::Graphicscontentviewtext::_di_JCursor P1) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues __cdecl convertTo(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JField> * __cdecl fields(void) = 0 ;
	__property __int64 systemRowid = {read=_GetsystemRowid};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMAutoDBItem : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMAutoDBItemClass,_di_JMAutoDBItem> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMAutoDBItemClass,_di_JMAutoDBItem>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMAutoDBItem(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMAutoDBItemClass,_di_JMAutoDBItem> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMAutoDBItem(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{EC262931-C469-4D9C-A61F-CE7EEA33948C}") JRContactClass  : public JMAutoDBItemClass 
{
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * __cdecl _GetCOLUMNS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_ALIAS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_CONREMARK(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_CONREMARK_PYFULL(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_CONREMARK_PYSHORT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_DOMAINLIST(void) = 0 ;
	virtual int __cdecl _GetCOL_ID_INVALID_VALUE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_NICKNAME(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_PYINITIAL(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_QUANPIN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_SHOWHEAD(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_TYPE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_USERNAME(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_VERIFY_FLAG(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_WEIBOFLAG(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_WEIBONICKNAME(void) = 0 ;
	virtual int __cdecl _GetDEL_CONTACT_MSG(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetFAVOUR_CONTACT_SHOW_HEAD_CHAR(void) = 0 ;
	virtual int __cdecl _GetFAVOUR_CONTACT_SHOW_HEAD_CODE(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACTFLAG_ALL(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACTFLAG_BLACKLISTCONTACT(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACTFLAG_CHATCONTACT(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACTFLAG_CHATROOMCONTACT(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACTFLAG_CONTACT(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACTFLAG_DOMAINCONTACT(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACTFLAG_FAVOURCONTACT(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACTFLAG_HIDECONTACT(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACTFLAG_NULL(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACTIMGFLAG_HAS_HEADIMG(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACTIMGFLAG_HAS_NO_HEADIMG(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACTIMGFLAG_LOCAL_EXIST(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACTIMGFLAG_MODIFY(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACTIMGFLAG_NOTMODIFY(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACT_BOTTLE(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACT_CHATROOM(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACT_EMAIL(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACT_QQ(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACT_QQMICROBLOG(void) = 0 ;
	virtual int __cdecl _GetMM_CONTACT_WEIXIN(void) = 0 ;
	virtual int __cdecl _GetMM_SEX_FEMALE(void) = 0 ;
	virtual int __cdecl _GetMM_SEX_MALE(void) = 0 ;
	virtual int __cdecl _GetMM_SEX_UNKNOWN(void) = 0 ;
	virtual int __cdecl _GetNOT_IN_CHAT_LIST(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl formatDisplayNick(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual int __cdecl getBlackListContactBit(void) = 0 ;
	virtual int __cdecl getContactBit(void) = 0 ;
	virtual int __cdecl getDomainContactBit(void) = 0 ;
	virtual int __cdecl getHiddenContactBit(void) = 0 ;
	HIDESBASE virtual _di_JRContact __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JRContact __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual bool __cdecl isContact(int P1) = 0 /* overload */;
	virtual void __cdecl setHardCodeAliasMaps(Androidapi::Jni::Javatypes::_di_JMap P1) = 0 ;
	virtual void __cdecl setHardCodeNickMaps(Androidapi::Jni::Javatypes::_di_JMap P1) = 0 ;
	__property Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * COLUMNS = {read=_GetCOLUMNS};
	__property Androidapi::Jni::Javatypes::_di_JString COL_ALIAS = {read=_GetCOL_ALIAS};
	__property Androidapi::Jni::Javatypes::_di_JString COL_CONREMARK = {read=_GetCOL_CONREMARK};
	__property Androidapi::Jni::Javatypes::_di_JString COL_CONREMARK_PYFULL = {read=_GetCOL_CONREMARK_PYFULL};
	__property Androidapi::Jni::Javatypes::_di_JString COL_CONREMARK_PYSHORT = {read=_GetCOL_CONREMARK_PYSHORT};
	__property Androidapi::Jni::Javatypes::_di_JString COL_DOMAINLIST = {read=_GetCOL_DOMAINLIST};
	__property int COL_ID_INVALID_VALUE = {read=_GetCOL_ID_INVALID_VALUE};
	__property Androidapi::Jni::Javatypes::_di_JString COL_NICKNAME = {read=_GetCOL_NICKNAME};
	__property Androidapi::Jni::Javatypes::_di_JString COL_PYINITIAL = {read=_GetCOL_PYINITIAL};
	__property Androidapi::Jni::Javatypes::_di_JString COL_QUANPIN = {read=_GetCOL_QUANPIN};
	__property Androidapi::Jni::Javatypes::_di_JString COL_SHOWHEAD = {read=_GetCOL_SHOWHEAD};
	__property Androidapi::Jni::Javatypes::_di_JString COL_TYPE = {read=_GetCOL_TYPE};
	__property Androidapi::Jni::Javatypes::_di_JString COL_USERNAME = {read=_GetCOL_USERNAME};
	__property Androidapi::Jni::Javatypes::_di_JString COL_VERIFY_FLAG = {read=_GetCOL_VERIFY_FLAG};
	__property Androidapi::Jni::Javatypes::_di_JString COL_WEIBOFLAG = {read=_GetCOL_WEIBOFLAG};
	__property Androidapi::Jni::Javatypes::_di_JString COL_WEIBONICKNAME = {read=_GetCOL_WEIBONICKNAME};
	__property int DEL_CONTACT_MSG = {read=_GetDEL_CONTACT_MSG};
	__property Androidapi::Jni::Javatypes::_di_JString FAVOUR_CONTACT_SHOW_HEAD_CHAR = {read=_GetFAVOUR_CONTACT_SHOW_HEAD_CHAR};
	__property int FAVOUR_CONTACT_SHOW_HEAD_CODE = {read=_GetFAVOUR_CONTACT_SHOW_HEAD_CODE};
	__property int MM_CONTACTFLAG_ALL = {read=_GetMM_CONTACTFLAG_ALL};
	__property int MM_CONTACTFLAG_BLACKLISTCONTACT = {read=_GetMM_CONTACTFLAG_BLACKLISTCONTACT};
	__property int MM_CONTACTFLAG_CHATCONTACT = {read=_GetMM_CONTACTFLAG_CHATCONTACT};
	__property int MM_CONTACTFLAG_CHATROOMCONTACT = {read=_GetMM_CONTACTFLAG_CHATROOMCONTACT};
	__property int MM_CONTACTFLAG_CONTACT = {read=_GetMM_CONTACTFLAG_CONTACT};
	__property int MM_CONTACTFLAG_DOMAINCONTACT = {read=_GetMM_CONTACTFLAG_DOMAINCONTACT};
	__property int MM_CONTACTFLAG_FAVOURCONTACT = {read=_GetMM_CONTACTFLAG_FAVOURCONTACT};
	__property int MM_CONTACTFLAG_HIDECONTACT = {read=_GetMM_CONTACTFLAG_HIDECONTACT};
	__property int MM_CONTACTFLAG_NULL = {read=_GetMM_CONTACTFLAG_NULL};
	__property int MM_CONTACTIMGFLAG_HAS_HEADIMG = {read=_GetMM_CONTACTIMGFLAG_HAS_HEADIMG};
	__property int MM_CONTACTIMGFLAG_HAS_NO_HEADIMG = {read=_GetMM_CONTACTIMGFLAG_HAS_NO_HEADIMG};
	__property int MM_CONTACTIMGFLAG_LOCAL_EXIST = {read=_GetMM_CONTACTIMGFLAG_LOCAL_EXIST};
	__property int MM_CONTACTIMGFLAG_MODIFY = {read=_GetMM_CONTACTIMGFLAG_MODIFY};
	__property int MM_CONTACTIMGFLAG_NOTMODIFY = {read=_GetMM_CONTACTIMGFLAG_NOTMODIFY};
	__property int MM_CONTACT_BOTTLE = {read=_GetMM_CONTACT_BOTTLE};
	__property int MM_CONTACT_CHATROOM = {read=_GetMM_CONTACT_CHATROOM};
	__property int MM_CONTACT_EMAIL = {read=_GetMM_CONTACT_EMAIL};
	__property int MM_CONTACT_QQ = {read=_GetMM_CONTACT_QQ};
	__property int MM_CONTACT_QQMICROBLOG = {read=_GetMM_CONTACT_QQMICROBLOG};
	__property int MM_CONTACT_WEIXIN = {read=_GetMM_CONTACT_WEIXIN};
	__property int MM_SEX_FEMALE = {read=_GetMM_SEX_FEMALE};
	__property int MM_SEX_MALE = {read=_GetMM_SEX_MALE};
	__property int MM_SEX_UNKNOWN = {read=_GetMM_SEX_UNKNOWN};
	__property int NOT_IN_CHAT_LIST = {read=_GetNOT_IN_CHAT_LIST};
};

__interface  INTERFACE_UUID("{E1AFB211-43C3-4272-937F-77F17BA66AEF}") JRContact  : public JMAutoDBItem 
{
	virtual __int64 __cdecl _GetcontactId(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_alias(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_conRemark(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_conRemarkPYFull(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_conRemarkPYShort(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_domainList(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl _Getfield_lvbuff(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_nickname(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_pyInitial(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_quanPin(void) = 0 ;
	virtual int __cdecl _Getfield_showHead(void) = 0 ;
	virtual int __cdecl _Getfield_type(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_username(void) = 0 ;
	virtual int __cdecl _Getfield_verifyFlag(void) = 0 ;
	virtual int __cdecl _Getfield_weiboFlag(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_weiboNickname(void) = 0 ;
	virtual int __cdecl calculateShowHead(void) = 0 ;
	HIDESBASE virtual void __cdecl convertFrom(Androidapi::Jni::Graphicscontentviewtext::_di_JCursor P1) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues __cdecl convertTo(void) = 0 ;
	HIDESBASE virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JField> * __cdecl fields(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getAlias(void) = 0 ;
	virtual int __cdecl getChatroomNotify(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getCity(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getConQQMBlog(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getConRemark(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getConRemarkPYFull(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getConRemarkPYShort(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getConSMBlog(void) = 0 ;
	virtual int __cdecl getConType(void) = 0 ;
	virtual int __cdecl getContactID(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDisplayNick(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDisplayRemark(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDisplayUser(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDistance(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDomainList(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getEmail(void) = 0 ;
	virtual __int64 __cdecl getFaceBookId(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getFaceBookUsername(void) = 0 ;
	virtual int __cdecl getFromType(void) = 0 ;
	virtual int __cdecl getImgFlag(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMobile(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getNickname(void) = 0 ;
	virtual int __cdecl getPersonalCard(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getProvince(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPyInitial(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getQuanPin(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getRegionCode(void) = 0 ;
	virtual int __cdecl getSex(void) = 0 ;
	virtual int __cdecl getShowFlag(void) = 0 ;
	virtual int __cdecl getShowHead(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getSignature(void) = 0 ;
	virtual int __cdecl getSource(void) = 0 ;
	virtual int __cdecl getType(void) = 0 ;
	virtual int __cdecl getUin(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUsername(void) = 0 ;
	virtual int __cdecl getVerifyFlag(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getVerifyInfo(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getWeibo(void) = 0 ;
	virtual int __cdecl getWeiboFlag(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getWeiboNickName(void) = 0 ;
	virtual bool __cdecl isBlackListContact(void) = 0 ;
	virtual bool __cdecl isChatContact(void) = 0 ;
	virtual bool __cdecl isChatRoomContact(void) = 0 ;
	virtual bool __cdecl isContact(void) = 0 /* overload */;
	virtual bool __cdecl isDomainContact(void) = 0 ;
	virtual bool __cdecl isFavourContact(void) = 0 ;
	virtual bool __cdecl isHidden(void) = 0 ;
	virtual bool __cdecl isImgLocalExist(void) = 0 ;
	virtual void __cdecl reset(void) = 0 ;
	virtual void __cdecl setAlias(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setBlackList(void) = 0 ;
	virtual void __cdecl setChatContact(void) = 0 ;
	virtual void __cdecl setChatroomContact(void) = 0 ;
	virtual void __cdecl setChatroomNotify(int P1) = 0 ;
	virtual void __cdecl setCity(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setConQQMBlog(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setConRemark(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setConRemarkPYFull(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setConRemarkPYShort(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setConSMBlog(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setConType(int P1) = 0 ;
	virtual void __cdecl setContact(void) = 0 ;
	virtual void __cdecl setDistance(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setDomainList(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setEmail(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setFaceBookId(__int64 P1) = 0 ;
	virtual void __cdecl setFaceBookUsername(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setFavour(void) = 0 ;
	virtual void __cdecl setFromType(int P1) = 0 ;
	virtual void __cdecl setHidden(void) = 0 ;
	virtual void __cdecl setImgFlag(int P1) = 0 ;
	virtual void __cdecl setMobile(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setNickname(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setNullContact(void) = 0 ;
	virtual void __cdecl setPersonalCard(int P1) = 0 ;
	virtual void __cdecl setProvince(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setPyInitial(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setQuanPin(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setRegionCode(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setSex(int P1) = 0 ;
	virtual void __cdecl setShowFlag(int P1) = 0 ;
	virtual void __cdecl setShowHead(int P1) = 0 ;
	virtual void __cdecl setSignature(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setSource(int P1) = 0 ;
	virtual void __cdecl setType(int P1) = 0 ;
	virtual void __cdecl setUin(int P1) = 0 ;
	virtual void __cdecl setUsername(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setVerifyFlag(int P1) = 0 ;
	virtual void __cdecl setVerifyInfo(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setWeibo(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setWeiboFlag(int P1) = 0 ;
	virtual void __cdecl setWeiboNickName(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl unSetBlackList(void) = 0 ;
	virtual void __cdecl unSetChatContact(void) = 0 ;
	virtual void __cdecl unSetContact(void) = 0 ;
	virtual void __cdecl unSetFavour(void) = 0 ;
	virtual void __cdecl unSetHidden(void) = 0 ;
	__property __int64 contactId = {read=_GetcontactId};
	__property Androidapi::Jni::Javatypes::_di_JString field_alias = {read=_Getfield_alias};
	__property Androidapi::Jni::Javatypes::_di_JString field_conRemark = {read=_Getfield_conRemark};
	__property Androidapi::Jni::Javatypes::_di_JString field_conRemarkPYFull = {read=_Getfield_conRemarkPYFull};
	__property Androidapi::Jni::Javatypes::_di_JString field_conRemarkPYShort = {read=_Getfield_conRemarkPYShort};
	__property Androidapi::Jni::Javatypes::_di_JString field_domainList = {read=_Getfield_domainList};
	__property Androidapi::Jnibridge::TJavaArray__1<System::Byte> * field_lvbuff = {read=_Getfield_lvbuff};
	__property Androidapi::Jni::Javatypes::_di_JString field_nickname = {read=_Getfield_nickname};
	__property Androidapi::Jni::Javatypes::_di_JString field_pyInitial = {read=_Getfield_pyInitial};
	__property Androidapi::Jni::Javatypes::_di_JString field_quanPin = {read=_Getfield_quanPin};
	__property int field_showHead = {read=_Getfield_showHead};
	__property int field_type = {read=_Getfield_type};
	__property Androidapi::Jni::Javatypes::_di_JString field_username = {read=_Getfield_username};
	__property int field_verifyFlag = {read=_Getfield_verifyFlag};
	__property int field_weiboFlag = {read=_Getfield_weiboFlag};
	__property Androidapi::Jni::Javatypes::_di_JString field_weiboNickname = {read=_Getfield_weiboNickname};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRContact : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRContactClass,_di_JRContact> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRContactClass,_di_JRContact>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRContact(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRContactClass,_di_JRContact> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRContact(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2E71372C-322C-475B-AB41-5087D1077736}") JRContactAvatarClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JRContactAvatar __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{08A904DE-78DC-4CCE-B935-15FE86B8B64A}") JRContactAvatar  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRContactAvatar : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRContactAvatarClass,_di_JRContactAvatar> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRContactAvatarClass,_di_JRContactAvatar>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRContactAvatar(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRContactAvatarClass,_di_JRContactAvatar> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRContactAvatar(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{84F602C0-9F5B-4201-B8B9-4C5A22D421BA}") JISQLiteDatabaseClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{19BE4CA7-195E-4D32-BB8A-27651E51A388}") JISQLiteDatabase  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual int __cdecl Delete(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P3) = 0 ;
	virtual bool __cdecl execSQL(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual __int64 __cdecl insert(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P3) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JCursor __cdecl query(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P4, Androidapi::Jni::Javatypes::_di_JString P5, Androidapi::Jni::Javatypes::_di_JString P6, Androidapi::Jni::Javatypes::_di_JString P7) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JCursor __cdecl rawQuery(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P2) = 0 ;
	virtual __int64 __cdecl replace(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P3) = 0 ;
	virtual int __cdecl update(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P4) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJISQLiteDatabase : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JISQLiteDatabaseClass,_di_JISQLiteDatabase> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JISQLiteDatabaseClass,_di_JISQLiteDatabase>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJISQLiteDatabase(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JISQLiteDatabaseClass,_di_JISQLiteDatabase> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJISQLiteDatabase(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{32848B93-D552-4514-B4C7-02D6668A8DC7}") JContentProviderDBClass  : public JISQLiteDatabaseClass 
{
	virtual _di_JContentProviderDB __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{A19A379D-025D-46A7-BF50-1BEB44A5CC8B}") JContentProviderDB  : public JISQLiteDatabase 
{
	HIDESBASE virtual int __cdecl Delete(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P3) = 0 ;
	HIDESBASE virtual bool __cdecl execSQL(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual Androidapi::Jni::Net::_di_Jnet_Uri __cdecl getUriFromTable(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual __int64 __cdecl insert(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P3) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Graphicscontentviewtext::_di_JCursor __cdecl query(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P4, Androidapi::Jni::Javatypes::_di_JString P5, Androidapi::Jni::Javatypes::_di_JString P6, Androidapi::Jni::Javatypes::_di_JString P7) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Graphicscontentviewtext::_di_JCursor __cdecl rawQuery(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P2) = 0 ;
	HIDESBASE virtual __int64 __cdecl replace(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P3) = 0 ;
	HIDESBASE virtual int __cdecl update(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P4) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJContentProviderDB : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JContentProviderDBClass,_di_JContentProviderDB> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JContentProviderDBClass,_di_JContentProviderDB>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJContentProviderDB(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JContentProviderDBClass,_di_JContentProviderDB> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJContentProviderDB(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E271C2F7-EF53-45EF-BC42-4B81450BF886}") JRContactDBClass  : public JContentProviderDBClass 
{
	HIDESBASE virtual _di_JRContactDB __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{10C289D3-8529-4C9B-BC61-7896F9ECDF96}") JRContactDB  : public JContentProviderDB 
{
	HIDESBASE virtual Androidapi::Jni::Net::_di_Jnet_Uri __cdecl getUriFromTable(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRContactDB : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRContactDBClass,_di_JRContactDB> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRContactDBClass,_di_JRContactDB>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRContactDB(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRContactDBClass,_di_JRContactDB> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRContactDB(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{04894A7E-8BDA-4667-8281-CA5FC526B6FC}") JMStorageClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JMStorage __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{1E02057C-2642-4A94-9DF6-7A1ACC4AB8A3}") JMStorage  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl add(_di_JMStorage_IOnStorageChange P1) = 0 ;
	virtual void __cdecl addLoadedListener(_di_JMStorage_IOnStorageLoaded P1) = 0 ;
	virtual void __cdecl doNotify(void) = 0 /* overload */;
	virtual void __cdecl doNotify(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual void __cdecl lock(void) = 0 ;
	virtual void __cdecl remove(_di_JMStorage_IOnStorageChange P1) = 0 ;
	virtual void __cdecl removeLoadedListener(_di_JMStorage_IOnStorageLoaded P1) = 0 ;
	virtual void __cdecl unlock(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMStorage : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorageClass,_di_JMStorage> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorageClass,_di_JMStorage>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMStorage(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorageClass,_di_JMStorage> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMStorage(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2328E7F1-A579-4F62-AD24-62FE77740122}") JMAutoStorageClass  : public JMStorageClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getUpdateSQLs(Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JField> * P1, Androidapi::Jni::Javatypes::_di_JString P2, _di_JISQLiteDatabase P3) = 0 ;
	HIDESBASE virtual _di_JMAutoStorage __cdecl init(_di_JISQLiteDatabase P1) = 0 ;
};

__interface  INTERFACE_UUID("{0A25EBE1-975B-457C-B46A-D0C21AE259B0}") JMAutoStorage  : public JMStorage 
{
	virtual bool __cdecl Delete(__int64 P1) = 0 /* overload */;
	virtual bool __cdecl get(__int64 P1, _di_JMAutoDBItem P2) = 0 /* overload */;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JCursor __cdecl getAll(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * __cdecl getColumns(void) = 0 ;
	virtual int __cdecl getCount(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPrimaryKey(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getTableName(void) = 0 ;
	virtual bool __cdecl insert(_di_JMAutoDBItem P1) = 0 ;
	virtual bool __cdecl replace(_di_JMAutoDBItem P1) = 0 ;
	virtual bool __cdecl update(__int64 P1, _di_JMAutoDBItem P2) = 0 /* overload */;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMAutoStorage : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMAutoStorageClass,_di_JMAutoStorage> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMAutoStorageClass,_di_JMAutoStorage>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMAutoStorage(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMAutoStorageClass,_di_JMAutoStorage> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMAutoStorage(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{278D12CA-7CBE-414F-905B-890B2267D072}") JRContactStorageClass  : public JMAutoStorageClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetAUTHORITY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetPRIMARY_KEY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetTABLE(void) = 0 ;
	virtual _di_JRContactStorage __cdecl create(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString AUTHORITY = {read=_GetAUTHORITY};
	__property Androidapi::Jni::Javatypes::_di_JString PRIMARY_KEY = {read=_GetPRIMARY_KEY};
	__property Androidapi::Jni::Javatypes::_di_JString TABLE = {read=_GetTABLE};
};

__interface  INTERFACE_UUID("{885A9E67-87B0-4B45-9A89-60950848394D}") JRContactStorage  : public JMAutoStorage 
{
	HIDESBASE virtual _di_JRContact __cdecl get(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * __cdecl getColumns(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPrimaryKey(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getTableName(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRContactStorage : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRContactStorageClass,_di_JRContactStorage> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRContactStorageClass,_di_JRContactStorage>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRContactStorage(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRContactStorageClass,_di_JRContactStorage> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRContactStorage(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{5321413D-9111-4E10-94B7-3C59FF565030}") Jcontact_package_infoClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{B13170AC-3AB8-4319-9187-378539050DD8}") Jcontact_package_info  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJcontact_package_info : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcontact_package_infoClass,_di_Jcontact_package_info> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcontact_package_infoClass,_di_Jcontact_package_info>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJcontact_package_info(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jcontact_package_infoClass,_di_Jcontact_package_info> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJcontact_package_info(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{41F88A8E-85D2-4D7F-A3CC-2098D347E447}") JRConversationClass  : public JMAutoDBItemClass 
{
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * __cdecl _GetCOLUMNS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_CHATMODE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_CONTENT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_CONVERSATION_TIME(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_FLAG(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_IS_SEND(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_MSGTYPE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_STATUS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_UNREAD_COUNT(void) = 0 ;
	virtual int __cdecl _GetCOL_UNREAD_COUNT_INVALID_VALUE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_USERNAME(void) = 0 ;
	virtual int __cdecl _GetFLAG_NORMAL(void) = 0 ;
	virtual int __cdecl _GetHAS_SHOWN_TIPS(void) = 0 ;
	virtual int __cdecl _GetINDEX_CONTENT(void) = 0 ;
	virtual int __cdecl _GetINDEX_CONVERSATION_TIME(void) = 0 ;
	virtual int __cdecl _GetINDEX_FLAG(void) = 0 ;
	virtual int __cdecl _GetINDEX_IS_SEND(void) = 0 ;
	virtual int __cdecl _GetINDEX_MSGTYPE(void) = 0 ;
	virtual int __cdecl _GetINDEX_STATUE(void) = 0 ;
	virtual int __cdecl _GetINDEX_UNREAD_COUNT(void) = 0 ;
	virtual int __cdecl _GetINDEX_USERNAME(void) = 0 ;
	virtual __int64 __cdecl _GetMAX_TIME(void) = 0 ;
	virtual int __cdecl _GetNOT_SHOWN_TIPS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetOLD_BOTTLE_TABLE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetOLD_TABLE(void) = 0 ;
	virtual int __cdecl _GetROOM_MUTE_OFF(void) = 0 ;
	virtual int __cdecl _GetROOM_MUTE_ON(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JField> * __cdecl getFields(void) = 0 ;
	HIDESBASE virtual _di_JRConversation __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JRConversation __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	__property Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * COLUMNS = {read=_GetCOLUMNS};
	__property Androidapi::Jni::Javatypes::_di_JString COL_CHATMODE = {read=_GetCOL_CHATMODE};
	__property Androidapi::Jni::Javatypes::_di_JString COL_CONTENT = {read=_GetCOL_CONTENT};
	__property Androidapi::Jni::Javatypes::_di_JString COL_CONVERSATION_TIME = {read=_GetCOL_CONVERSATION_TIME};
	__property Androidapi::Jni::Javatypes::_di_JString COL_FLAG = {read=_GetCOL_FLAG};
	__property Androidapi::Jni::Javatypes::_di_JString COL_IS_SEND = {read=_GetCOL_IS_SEND};
	__property Androidapi::Jni::Javatypes::_di_JString COL_MSGTYPE = {read=_GetCOL_MSGTYPE};
	__property Androidapi::Jni::Javatypes::_di_JString COL_STATUS = {read=_GetCOL_STATUS};
	__property Androidapi::Jni::Javatypes::_di_JString COL_UNREAD_COUNT = {read=_GetCOL_UNREAD_COUNT};
	__property int COL_UNREAD_COUNT_INVALID_VALUE = {read=_GetCOL_UNREAD_COUNT_INVALID_VALUE};
	__property Androidapi::Jni::Javatypes::_di_JString COL_USERNAME = {read=_GetCOL_USERNAME};
	__property int FLAG_NORMAL = {read=_GetFLAG_NORMAL};
	__property int HAS_SHOWN_TIPS = {read=_GetHAS_SHOWN_TIPS};
	__property int INDEX_CONTENT = {read=_GetINDEX_CONTENT};
	__property int INDEX_CONVERSATION_TIME = {read=_GetINDEX_CONVERSATION_TIME};
	__property int INDEX_FLAG = {read=_GetINDEX_FLAG};
	__property int INDEX_IS_SEND = {read=_GetINDEX_IS_SEND};
	__property int INDEX_MSGTYPE = {read=_GetINDEX_MSGTYPE};
	__property int INDEX_STATUE = {read=_GetINDEX_STATUE};
	__property int INDEX_UNREAD_COUNT = {read=_GetINDEX_UNREAD_COUNT};
	__property int INDEX_USERNAME = {read=_GetINDEX_USERNAME};
	__property __int64 MAX_TIME = {read=_GetMAX_TIME};
	__property int NOT_SHOWN_TIPS = {read=_GetNOT_SHOWN_TIPS};
	__property Androidapi::Jni::Javatypes::_di_JString OLD_BOTTLE_TABLE = {read=_GetOLD_BOTTLE_TABLE};
	__property Androidapi::Jni::Javatypes::_di_JString OLD_TABLE = {read=_GetOLD_TABLE};
	__property int ROOM_MUTE_OFF = {read=_GetROOM_MUTE_OFF};
	__property int ROOM_MUTE_ON = {read=_GetROOM_MUTE_ON};
};

__interface  INTERFACE_UUID("{9DFE298E-002F-4E42-9E60-4137892E4941}") JRConversation  : public JMAutoDBItem 
{
	virtual int __cdecl _Getfield_chatmode(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_content(void) = 0 ;
	virtual __int64 __cdecl _Getfield_conversationTime(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_customNotify(void) = 0 ;
	virtual __int64 __cdecl _Getfield_flag(void) = 0 ;
	virtual int __cdecl _Getfield_isSend(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_msgType(void) = 0 ;
	virtual int __cdecl _Getfield_showTips(void) = 0 ;
	virtual int __cdecl _Getfield_status(void) = 0 ;
	virtual int __cdecl _Getfield_unReadCount(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_username(void) = 0 ;
	HIDESBASE virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JField> * __cdecl fields(void) = 0 ;
	virtual int __cdecl getChatmode(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getContent(void) = 0 ;
	virtual __int64 __cdecl getConversationTime(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getCustomNotify(void) = 0 ;
	virtual __int64 __cdecl getFlag(void) = 0 ;
	virtual int __cdecl getIsSend(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMsgType(void) = 0 ;
	virtual int __cdecl getShowTips(void) = 0 ;
	virtual int __cdecl getStatus(void) = 0 ;
	virtual int __cdecl getUnReadCount(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUsername(void) = 0 ;
	virtual void __cdecl setChatmode(int P1) = 0 ;
	virtual void __cdecl setContent(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setConversationTime(__int64 P1) = 0 ;
	virtual void __cdecl setCustomNotify(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setFlag(__int64 P1) = 0 ;
	virtual void __cdecl setIsSend(int P1) = 0 ;
	virtual void __cdecl setMsgType(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setShowTips(int P1) = 0 ;
	virtual void __cdecl setStatus(int P1) = 0 ;
	virtual void __cdecl setUnReadCount(int P1) = 0 ;
	virtual void __cdecl setUsername(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	__property int field_chatmode = {read=_Getfield_chatmode};
	__property Androidapi::Jni::Javatypes::_di_JString field_content = {read=_Getfield_content};
	__property __int64 field_conversationTime = {read=_Getfield_conversationTime};
	__property Androidapi::Jni::Javatypes::_di_JString field_customNotify = {read=_Getfield_customNotify};
	__property __int64 field_flag = {read=_Getfield_flag};
	__property int field_isSend = {read=_Getfield_isSend};
	__property Androidapi::Jni::Javatypes::_di_JString field_msgType = {read=_Getfield_msgType};
	__property int field_showTips = {read=_Getfield_showTips};
	__property int field_status = {read=_Getfield_status};
	__property int field_unReadCount = {read=_Getfield_unReadCount};
	__property Androidapi::Jni::Javatypes::_di_JString field_username = {read=_Getfield_username};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRConversation : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRConversationClass,_di_JRConversation> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRConversationClass,_di_JRConversation>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRConversation(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRConversationClass,_di_JRConversation> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRConversation(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{54F96031-7D00-4759-9A3D-297D1E8A9307}") JRConversationDBClass  : public JContentProviderDBClass 
{
	HIDESBASE virtual _di_JRConversationDB __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{AB13D0B8-4458-44F4-98DF-4D0A37BEDED0}") JRConversationDB  : public JContentProviderDB 
{
	HIDESBASE virtual Androidapi::Jni::Net::_di_Jnet_Uri __cdecl getUriFromTable(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRConversationDB : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRConversationDBClass,_di_JRConversationDB> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRConversationDBClass,_di_JRConversationDB>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRConversationDB(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRConversationDBClass,_di_JRConversationDB> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRConversationDB(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{DA3CD1D7-56F3-4F49-9193-D1B7E1AFBC6D}") JRConversationStorageClass  : public JMAutoStorageClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetAUTHORITY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetPRIMARY_KEY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetTABLE(void) = 0 ;
	virtual _di_JRConversationStorage __cdecl create(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString AUTHORITY = {read=_GetAUTHORITY};
	__property Androidapi::Jni::Javatypes::_di_JString PRIMARY_KEY = {read=_GetPRIMARY_KEY};
	__property Androidapi::Jni::Javatypes::_di_JString TABLE = {read=_GetTABLE};
};

__interface  INTERFACE_UUID("{A2F2EA8B-3525-410E-A0BD-D081447AE677}") JRConversationStorage  : public JMAutoStorage 
{
	HIDESBASE virtual _di_JRConversation __cdecl get(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * __cdecl getColumns(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPrimaryKey(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getTableName(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRConversationStorage : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRConversationStorageClass,_di_JRConversationStorage> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRConversationStorageClass,_di_JRConversationStorage>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRConversationStorage(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRConversationStorageClass,_di_JRConversationStorage> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRConversationStorage(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1978C908-8546-4132-AB8A-8A4026887ED2}") Jconversation_package_infoClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{A2A42BC0-E77B-41B9-A443-0F32C7F71728}") Jconversation_package_info  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJconversation_package_info : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jconversation_package_infoClass,_di_Jconversation_package_info> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jconversation_package_infoClass,_di_Jconversation_package_info>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJconversation_package_info(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jconversation_package_infoClass,_di_Jconversation_package_info> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJconversation_package_info(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1FDE0166-65CB-4D82-BAB1-F8EE3F603D8E}") JRMsgInfoClass  : public JMAutoDBItemClass 
{
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * __cdecl _GetCOLUMNS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_CONTENT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_CREATE_TIME(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_ID(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_ID_SVR(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_IMG_PATH(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_IS_SEND(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_IS_SHOWTIMER(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_LVBUFFER(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_RESERVED(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_STATUS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_TALKER(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCOL_TYPE(void) = 0 ;
	HIDESBASE virtual _di_JRMsgInfo __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JRMsgInfo __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	HIDESBASE virtual _di_JRMsgInfo __cdecl init(__int64 P1) = 0 /* overload */;
	__property Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * COLUMNS = {read=_GetCOLUMNS};
	__property Androidapi::Jni::Javatypes::_di_JString COL_CONTENT = {read=_GetCOL_CONTENT};
	__property Androidapi::Jni::Javatypes::_di_JString COL_CREATE_TIME = {read=_GetCOL_CREATE_TIME};
	__property Androidapi::Jni::Javatypes::_di_JString COL_ID = {read=_GetCOL_ID};
	__property Androidapi::Jni::Javatypes::_di_JString COL_ID_SVR = {read=_GetCOL_ID_SVR};
	__property Androidapi::Jni::Javatypes::_di_JString COL_IMG_PATH = {read=_GetCOL_IMG_PATH};
	__property Androidapi::Jni::Javatypes::_di_JString COL_IS_SEND = {read=_GetCOL_IS_SEND};
	__property Androidapi::Jni::Javatypes::_di_JString COL_IS_SHOWTIMER = {read=_GetCOL_IS_SHOWTIMER};
	__property Androidapi::Jni::Javatypes::_di_JString COL_LVBUFFER = {read=_GetCOL_LVBUFFER};
	__property Androidapi::Jni::Javatypes::_di_JString COL_RESERVED = {read=_GetCOL_RESERVED};
	__property Androidapi::Jni::Javatypes::_di_JString COL_STATUS = {read=_GetCOL_STATUS};
	__property Androidapi::Jni::Javatypes::_di_JString COL_TALKER = {read=_GetCOL_TALKER};
	__property Androidapi::Jni::Javatypes::_di_JString COL_TYPE = {read=_GetCOL_TYPE};
};

__interface  INTERFACE_UUID("{6653697D-6D68-41D3-8BF5-13B3D58D4226}") JRMsgInfo  : public JMAutoDBItem 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetcommentUrl(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_content(void) = 0 ;
	virtual __int64 __cdecl _Getfield_createTime(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_imgPath(void) = 0 ;
	virtual int __cdecl _Getfield_isSend(void) = 0 ;
	virtual int __cdecl _Getfield_isShowTimer(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl _Getfield_lvBuffer(void) = 0 ;
	virtual __int64 __cdecl _Getfield_msgId(void) = 0 ;
	virtual int __cdecl _Getfield_msgSvrId(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_reserved(void) = 0 ;
	virtual int __cdecl _Getfield_status(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_talker(void) = 0 ;
	virtual int __cdecl _Getfield_type(void) = 0 ;
	HIDESBASE virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JField> * __cdecl fields(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString commentUrl = {read=_GetcommentUrl};
	__property Androidapi::Jni::Javatypes::_di_JString field_content = {read=_Getfield_content};
	__property __int64 field_createTime = {read=_Getfield_createTime};
	__property Androidapi::Jni::Javatypes::_di_JString field_imgPath = {read=_Getfield_imgPath};
	__property int field_isSend = {read=_Getfield_isSend};
	__property int field_isShowTimer = {read=_Getfield_isShowTimer};
	__property Androidapi::Jnibridge::TJavaArray__1<System::Byte> * field_lvBuffer = {read=_Getfield_lvBuffer};
	__property __int64 field_msgId = {read=_Getfield_msgId};
	__property int field_msgSvrId = {read=_Getfield_msgSvrId};
	__property Androidapi::Jni::Javatypes::_di_JString field_reserved = {read=_Getfield_reserved};
	__property int field_status = {read=_Getfield_status};
	__property Androidapi::Jni::Javatypes::_di_JString field_talker = {read=_Getfield_talker};
	__property int field_type = {read=_Getfield_type};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRMsgInfo : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRMsgInfoClass,_di_JRMsgInfo> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRMsgInfoClass,_di_JRMsgInfo>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRMsgInfo(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRMsgInfoClass,_di_JRMsgInfo> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRMsgInfo(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{15B0904C-A6A5-4EDE-868F-21300BE6EE2B}") JRMsgInfoDBClass  : public JContentProviderDBClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetTABLE(void) = 0 ;
	HIDESBASE virtual _di_JRMsgInfoDB __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString TABLE = {read=_GetTABLE};
};

__interface  INTERFACE_UUID("{B3ED898D-2AF9-4DA5-9D02-5C262A0175F3}") JRMsgInfoDB  : public JContentProviderDB 
{
	HIDESBASE virtual Androidapi::Jni::Net::_di_Jnet_Uri __cdecl getUriFromTable(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRMsgInfoDB : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRMsgInfoDBClass,_di_JRMsgInfoDB> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRMsgInfoDBClass,_di_JRMsgInfoDB>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRMsgInfoDB(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRMsgInfoDBClass,_di_JRMsgInfoDB> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRMsgInfoDB(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{0ED6115E-65B2-4E27-93C8-3D37988CD0F4}") JRMsgInfoStorageClass  : public JMStorageClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetAUTHORITY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetPRIMARY_KEY(void) = 0 ;
	virtual _di_JRMsgInfoStorage __cdecl create(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString AUTHORITY = {read=_GetAUTHORITY};
	__property Androidapi::Jni::Javatypes::_di_JString PRIMARY_KEY = {read=_GetPRIMARY_KEY};
};

__interface  INTERFACE_UUID("{3860F28F-6E68-492E-A136-40515ABAEAB9}") JRMsgInfoStorage  : public JMStorage 
{
	virtual _di_JISQLiteDatabase __cdecl _GetP(void) = 0 ;
	virtual int __cdecl doDelete(__int64 P1) = 0 ;
	virtual __int64 __cdecl doInsert(_di_JRMsgInfo P1) = 0 ;
	virtual int __cdecl doUpdate(__int64 P1, _di_JRMsgInfo P2) = 0 ;
	virtual _di_JRMsgInfo __cdecl getMsgById(__int64 P1) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JCursor __cdecl getMsgByTalker(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	__property _di_JISQLiteDatabase P = {read=_GetP};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRMsgInfoStorage : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRMsgInfoStorageClass,_di_JRMsgInfoStorage> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRMsgInfoStorageClass,_di_JRMsgInfoStorage>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJRMsgInfoStorage(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRMsgInfoStorageClass,_di_JRMsgInfoStorage> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJRMsgInfoStorage(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{10678999-A955-4DC3-BEF2-1BF1F5AE113C}") JBaseReqClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JBaseReq __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{4D3380B8-0D7F-4EB2-AE5A-B8C11EF2E684}") JBaseReq  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Gettransaction(void) = 0 ;
	virtual void __cdecl _Settransaction(Androidapi::Jni::Javatypes::_di_JString Value) = 0 ;
	virtual bool __cdecl checkArgs(void) = 0 ;
	virtual void __cdecl fromBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	virtual int __cdecl getType(void) = 0 ;
	virtual void __cdecl toBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString transaction = {read=_Gettransaction, write=_Settransaction};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJBaseReq : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBaseReqClass,_di_JBaseReq> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBaseReqClass,_di_JBaseReq>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBaseReq(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBaseReqClass,_di_JBaseReq> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBaseReq(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1E1C9DC6-0732-47B9-94F8-91488E117CD5}") JBaseRespClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JBaseResp __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{35AE2069-2046-4BA6-A3AA-9EDCFF36CCC3}") JBaseResp  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl _GeterrCode(void) = 0 ;
	virtual void __cdecl _SeterrCode(int Value) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GeterrStr(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Gettransaction(void) = 0 ;
	virtual bool __cdecl checkArgs(void) = 0 ;
	virtual void __cdecl fromBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	virtual int __cdecl getType(void) = 0 ;
	virtual void __cdecl toBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property int errCode = {read=_GeterrCode, write=_SeterrCode};
	__property Androidapi::Jni::Javatypes::_di_JString errStr = {read=_GeterrStr};
	__property Androidapi::Jni::Javatypes::_di_JString transaction = {read=_Gettransaction};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJBaseResp : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBaseRespClass,_di_JBaseResp> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBaseRespClass,_di_JBaseResp>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBaseResp(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBaseRespClass,_di_JBaseResp> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBaseResp(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A5BBBF5E-2E2F-4A96-AA44-0B77A93707D0}") JBaseResp_ErrCodeClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual int __cdecl _GetERR_AUTH_DENIED(void) = 0 ;
	virtual int __cdecl _GetERR_COMM(void) = 0 ;
	virtual int __cdecl _GetERR_OK(void) = 0 ;
	virtual int __cdecl _GetERR_SENT_FAILED(void) = 0 ;
	virtual int __cdecl _GetERR_UNSUPPORT(void) = 0 ;
	virtual int __cdecl _GetERR_USER_CANCEL(void) = 0 ;
	__property int ERR_AUTH_DENIED = {read=_GetERR_AUTH_DENIED};
	__property int ERR_COMM = {read=_GetERR_COMM};
	__property int ERR_OK = {read=_GetERR_OK};
	__property int ERR_SENT_FAILED = {read=_GetERR_SENT_FAILED};
	__property int ERR_UNSUPPORT = {read=_GetERR_UNSUPPORT};
	__property int ERR_USER_CANCEL = {read=_GetERR_USER_CANCEL};
};

__interface  INTERFACE_UUID("{57F96E4C-6A29-4250-BB65-94B60512BCB1}") JBaseResp_ErrCode  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJBaseResp_ErrCode : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBaseResp_ErrCodeClass,_di_JBaseResp_ErrCode> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBaseResp_ErrCodeClass,_di_JBaseResp_ErrCode>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBaseResp_ErrCode(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBaseResp_ErrCodeClass,_di_JBaseResp_ErrCode> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBaseResp_ErrCode(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E7542ED8-984D-4F15-9C72-2B135629F972}") JConstantsAPIClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_HANDLE_APP_REGISTER(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_HANDLE_APP_UNREGISTER(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_REFRESH_WXAPP(void) = 0 ;
	virtual int __cdecl _GetCOMMAND_GETMESSAGE_FROM_WX(void) = 0 ;
	virtual int __cdecl _GetCOMMAND_SENDAUTH(void) = 0 ;
	virtual int __cdecl _GetCOMMAND_SENDMESSAGE_TO_WX(void) = 0 ;
	virtual int __cdecl _GetCOMMAND_SHOWMESSAGE_FROM_WX(void) = 0 ;
	virtual int __cdecl _GetCOMMAND_UNKNOWN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetWX_TOKEN_KEY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetWX_TOKEN_VALUE(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_HANDLE_APP_REGISTER = {read=_GetACTION_HANDLE_APP_REGISTER};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_HANDLE_APP_UNREGISTER = {read=_GetACTION_HANDLE_APP_UNREGISTER};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_REFRESH_WXAPP = {read=_GetACTION_REFRESH_WXAPP};
	__property int COMMAND_GETMESSAGE_FROM_WX = {read=_GetCOMMAND_GETMESSAGE_FROM_WX};
	__property int COMMAND_SENDAUTH = {read=_GetCOMMAND_SENDAUTH};
	__property int COMMAND_SENDMESSAGE_TO_WX = {read=_GetCOMMAND_SENDMESSAGE_TO_WX};
	__property int COMMAND_SHOWMESSAGE_FROM_WX = {read=_GetCOMMAND_SHOWMESSAGE_FROM_WX};
	__property int COMMAND_UNKNOWN = {read=_GetCOMMAND_UNKNOWN};
	__property Androidapi::Jni::Javatypes::_di_JString WX_TOKEN_KEY = {read=_GetWX_TOKEN_KEY};
	__property Androidapi::Jni::Javatypes::_di_JString WX_TOKEN_VALUE = {read=_GetWX_TOKEN_VALUE};
};

__interface  INTERFACE_UUID("{49CF05AB-5310-4E30-BD7B-E2F6E20FDAE6}") JConstantsAPI  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJConstantsAPI : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConstantsAPIClass,_di_JConstantsAPI> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConstantsAPIClass,_di_JConstantsAPI>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJConstantsAPI(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JConstantsAPIClass,_di_JConstantsAPI> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJConstantsAPI(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B1B617EE-B29B-42A9-8141-2862F4700C3F}") JGetMessageFromWXClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{EFC26640-64D9-46E4-A107-AEB753A4B365}") JGetMessageFromWX  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJGetMessageFromWX : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JGetMessageFromWXClass,_di_JGetMessageFromWX> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JGetMessageFromWXClass,_di_JGetMessageFromWX>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJGetMessageFromWX(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JGetMessageFromWXClass,_di_JGetMessageFromWX> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJGetMessageFromWX(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{37B70042-1ADB-4CB4-8FA8-EE0DEF7B1F43}") JGetMessageFromWX_ReqClass  : public JBaseReqClass 
{
	HIDESBASE virtual _di_JGetMessageFromWX_Req __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JGetMessageFromWX_Req __cdecl init(Androidapi::Jni::Os::_di_JBundle P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{CA66A822-46C5-4C3E-B388-A9661861AEFF}") JGetMessageFromWX_Req  : public JBaseReq 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getusername(void) = 0 ;
	virtual void __cdecl _Setusername(Androidapi::Jni::Javatypes::_di_JString Value) = 0 ;
	HIDESBASE virtual bool __cdecl checkArgs(void) = 0 ;
	HIDESBASE virtual void __cdecl fromBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	HIDESBASE virtual int __cdecl getType(void) = 0 ;
	HIDESBASE virtual void __cdecl toBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString username = {read=_Getusername, write=_Setusername};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJGetMessageFromWX_Req : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JGetMessageFromWX_ReqClass,_di_JGetMessageFromWX_Req> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JGetMessageFromWX_ReqClass,_di_JGetMessageFromWX_Req>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJGetMessageFromWX_Req(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JGetMessageFromWX_ReqClass,_di_JGetMessageFromWX_Req> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJGetMessageFromWX_Req(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A0758660-1363-46EF-9721-A0601B791AEC}") JGetMessageFromWX_RespClass  : public JBaseRespClass 
{
	HIDESBASE virtual _di_JGetMessageFromWX_Resp __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JGetMessageFromWX_Resp __cdecl init(Androidapi::Jni::Os::_di_JBundle P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{551AC0B6-7EDA-45E6-915B-D98C4D8E6449}") JGetMessageFromWX_Resp  : public JBaseResp 
{
	virtual _di_JWXMediaMessage __cdecl _Getmessage(void) = 0 ;
	virtual void __cdecl _Setmessage(_di_JWXMediaMessage Value) = 0 ;
	HIDESBASE virtual bool __cdecl checkArgs(void) = 0 ;
	HIDESBASE virtual void __cdecl fromBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	HIDESBASE virtual int __cdecl getType(void) = 0 ;
	HIDESBASE virtual void __cdecl toBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property _di_JWXMediaMessage message = {read=_Getmessage, write=_Setmessage};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJGetMessageFromWX_Resp : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JGetMessageFromWX_RespClass,_di_JGetMessageFromWX_Resp> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JGetMessageFromWX_RespClass,_di_JGetMessageFromWX_Resp>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJGetMessageFromWX_Resp(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JGetMessageFromWX_RespClass,_di_JGetMessageFromWX_Resp> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJGetMessageFromWX_Resp(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{44BECCC9-B44B-4193-9D9E-F725F731F4CD}") JIWXAPIClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{C366D93B-E4F7-44D0-A7E6-BEF155D4CD96}") JIWXAPI  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual int __cdecl getWXAppSupportAPI(void) = 0 ;
	virtual bool __cdecl handleIntent(Androidapi::Jni::Graphicscontentviewtext::_di_JIntent P1, _di_JIWXAPIEventHandler P2) = 0 ;
	virtual bool __cdecl isWXAppInstalled(void) = 0 ;
	virtual bool __cdecl isWXAppSupportAPI(void) = 0 ;
	virtual bool __cdecl openWXApp(void) = 0 ;
	virtual bool __cdecl registerApp(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual bool __cdecl sendReq(_di_JBaseReq P1) = 0 ;
	virtual bool __cdecl sendResp(_di_JBaseResp P1) = 0 ;
	virtual void __cdecl unregisterApp(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJIWXAPI : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JIWXAPIClass,_di_JIWXAPI> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JIWXAPIClass,_di_JIWXAPI>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJIWXAPI(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JIWXAPIClass,_di_JIWXAPI> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJIWXAPI(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F36CBD24-2B29-44BF-8F5D-143D1C393D8C}") JIWXAPIEventHandlerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{E27AE9BA-CE43-44B7-98F4-45526560E0E4}") JIWXAPIEventHandler  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onReq(_di_JBaseReq P1) = 0 ;
	virtual void __cdecl onResp(_di_JBaseResp P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJIWXAPIEventHandler : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JIWXAPIEventHandlerClass,_di_JIWXAPIEventHandler> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JIWXAPIEventHandlerClass,_di_JIWXAPIEventHandler>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJIWXAPIEventHandler(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JIWXAPIEventHandlerClass,_di_JIWXAPIEventHandler> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJIWXAPIEventHandler(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{3E12CABB-3B8D-49EB-919C-9BD7CC39D99F}") JSendAuthClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{FBEE600A-AEFB-4119-A2B7-472F86D2B4D4}") JSendAuth  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSendAuth : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendAuthClass,_di_JSendAuth> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendAuthClass,_di_JSendAuth>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSendAuth(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendAuthClass,_di_JSendAuth> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSendAuth(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B8ACD33C-75B7-4D39-B6F9-77537F6DB2BE}") JSendAuth_ReqClass  : public JBaseReqClass 
{
	HIDESBASE virtual _di_JSendAuth_Req __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JSendAuth_Req __cdecl init(Androidapi::Jni::Os::_di_JBundle P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{7B97B314-BA97-4A2E-9546-4D29DD23DB70}") JSendAuth_Req  : public JBaseReq 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getscope(void) = 0 ;
	virtual void __cdecl _Setscope(Androidapi::Jni::Javatypes::_di_JString Value) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getstate(void) = 0 ;
	HIDESBASE virtual bool __cdecl checkArgs(void) = 0 ;
	HIDESBASE virtual void __cdecl fromBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	HIDESBASE virtual int __cdecl getType(void) = 0 ;
	HIDESBASE virtual void __cdecl toBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString scope = {read=_Getscope, write=_Setscope};
	__property Androidapi::Jni::Javatypes::_di_JString state = {read=_Getstate};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSendAuth_Req : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendAuth_ReqClass,_di_JSendAuth_Req> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendAuth_ReqClass,_di_JSendAuth_Req>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSendAuth_Req(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendAuth_ReqClass,_di_JSendAuth_Req> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSendAuth_Req(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{836CB87D-D499-48EF-975C-1015477D7E6F}") JSendAuth_RespClass  : public JBaseRespClass 
{
	HIDESBASE virtual _di_JSendAuth_Resp __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JSendAuth_Resp __cdecl init(Androidapi::Jni::Os::_di_JBundle P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{53FEFF94-7683-4325-A9C5-54744F123A0D}") JSendAuth_Resp  : public JBaseResp 
{
	virtual int __cdecl _GetexpireDate(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetresultUrl(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getstate(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Gettoken(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetuserName(void) = 0 ;
	virtual void __cdecl _SetuserName(Androidapi::Jni::Javatypes::_di_JString Value) = 0 ;
	HIDESBASE virtual bool __cdecl checkArgs(void) = 0 ;
	HIDESBASE virtual void __cdecl fromBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	HIDESBASE virtual int __cdecl getType(void) = 0 ;
	HIDESBASE virtual void __cdecl toBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property int expireDate = {read=_GetexpireDate};
	__property Androidapi::Jni::Javatypes::_di_JString resultUrl = {read=_GetresultUrl};
	__property Androidapi::Jni::Javatypes::_di_JString state = {read=_Getstate};
	__property Androidapi::Jni::Javatypes::_di_JString token = {read=_Gettoken};
	__property Androidapi::Jni::Javatypes::_di_JString userName = {read=_GetuserName, write=_SetuserName};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSendAuth_Resp : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendAuth_RespClass,_di_JSendAuth_Resp> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendAuth_RespClass,_di_JSendAuth_Resp>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSendAuth_Resp(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendAuth_RespClass,_di_JSendAuth_Resp> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSendAuth_Resp(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{5BA534AA-A863-42B2-B040-E783560F6F98}") JSendMessageToWXClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{52CC11D6-556A-465A-8682-435D5BBAEBEE}") JSendMessageToWX  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSendMessageToWX : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendMessageToWXClass,_di_JSendMessageToWX> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendMessageToWXClass,_di_JSendMessageToWX>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSendMessageToWX(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendMessageToWXClass,_di_JSendMessageToWX> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSendMessageToWX(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{5F834C0A-38AE-48B2-BB76-6F18BC7F3130}") JSendMessageToWX_ReqClass  : public JBaseReqClass 
{
	virtual int __cdecl _GetWXSceneSession(void) = 0 ;
	virtual int __cdecl _GetWXSceneTimeline(void) = 0 ;
	HIDESBASE virtual _di_JSendMessageToWX_Req __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JSendMessageToWX_Req __cdecl init(Androidapi::Jni::Os::_di_JBundle P1) = 0 /* overload */;
	__property int WXSceneSession = {read=_GetWXSceneSession};
	__property int WXSceneTimeline = {read=_GetWXSceneTimeline};
};

__interface  INTERFACE_UUID("{FCBEF190-2024-4693-8A20-3A62EC3BDA8A}") JSendMessageToWX_Req  : public JBaseReq 
{
	virtual _di_JWXMediaMessage __cdecl _Getmessage(void) = 0 ;
	virtual int __cdecl _Getscene(void) = 0 ;
	HIDESBASE virtual bool __cdecl checkArgs(void) = 0 ;
	HIDESBASE virtual void __cdecl fromBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	HIDESBASE virtual int __cdecl getType(void) = 0 ;
	HIDESBASE virtual void __cdecl toBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property _di_JWXMediaMessage message = {read=_Getmessage};
	__property int scene = {read=_Getscene};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSendMessageToWX_Req : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendMessageToWX_ReqClass,_di_JSendMessageToWX_Req> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendMessageToWX_ReqClass,_di_JSendMessageToWX_Req>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSendMessageToWX_Req(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendMessageToWX_ReqClass,_di_JSendMessageToWX_Req> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSendMessageToWX_Req(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2A13DEA9-2603-49D2-99BB-A10CC183CBAB}") JSendMessageToWX_RespClass  : public JBaseRespClass 
{
	HIDESBASE virtual _di_JSendMessageToWX_Resp __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JSendMessageToWX_Resp __cdecl init(Androidapi::Jni::Os::_di_JBundle P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{8891200D-4801-4E9F-9783-57700364BC59}") JSendMessageToWX_Resp  : public JBaseResp 
{
	HIDESBASE virtual void __cdecl fromBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	HIDESBASE virtual int __cdecl getType(void) = 0 ;
	HIDESBASE virtual void __cdecl toBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSendMessageToWX_Resp : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendMessageToWX_RespClass,_di_JSendMessageToWX_Resp> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendMessageToWX_RespClass,_di_JSendMessageToWX_Resp>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSendMessageToWX_Resp(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSendMessageToWX_RespClass,_di_JSendMessageToWX_Resp> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSendMessageToWX_Resp(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D5433962-4F66-4218-85B5-198A58064F54}") JShowMessageFromWXClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{1AA97737-7959-4EDF-B0C5-185E2311036B}") JShowMessageFromWX  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJShowMessageFromWX : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JShowMessageFromWXClass,_di_JShowMessageFromWX> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JShowMessageFromWXClass,_di_JShowMessageFromWX>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJShowMessageFromWX(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JShowMessageFromWXClass,_di_JShowMessageFromWX> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJShowMessageFromWX(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{EAE46555-E86B-4FEC-A655-7A20655D7C8E}") JShowMessageFromWX_ReqClass  : public JBaseReqClass 
{
	HIDESBASE virtual _di_JShowMessageFromWX_Req __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JShowMessageFromWX_Req __cdecl init(Androidapi::Jni::Os::_di_JBundle P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{0C1F76D8-A676-4D32-BD49-5328E6EB2A90}") JShowMessageFromWX_Req  : public JBaseReq 
{
	virtual _di_JWXMediaMessage __cdecl _Getmessage(void) = 0 ;
	virtual void __cdecl _Setmessage(_di_JWXMediaMessage Value) = 0 ;
	HIDESBASE virtual bool __cdecl checkArgs(void) = 0 ;
	HIDESBASE virtual void __cdecl fromBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	HIDESBASE virtual int __cdecl getType(void) = 0 ;
	HIDESBASE virtual void __cdecl toBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property _di_JWXMediaMessage message = {read=_Getmessage, write=_Setmessage};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJShowMessageFromWX_Req : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JShowMessageFromWX_ReqClass,_di_JShowMessageFromWX_Req> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JShowMessageFromWX_ReqClass,_di_JShowMessageFromWX_Req>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJShowMessageFromWX_Req(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JShowMessageFromWX_ReqClass,_di_JShowMessageFromWX_Req> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJShowMessageFromWX_Req(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6DD2C5FE-9EC3-4501-8648-A1A03A573122}") JShowMessageFromWX_RespClass  : public JBaseRespClass 
{
	HIDESBASE virtual _di_JShowMessageFromWX_Resp __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JShowMessageFromWX_Resp __cdecl init(Androidapi::Jni::Os::_di_JBundle P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{BA6E73FF-F21D-4325-91AC-7DAC2D8C5C7C}") JShowMessageFromWX_Resp  : public JBaseResp 
{
	HIDESBASE virtual int __cdecl getType(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJShowMessageFromWX_Resp : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JShowMessageFromWX_RespClass,_di_JShowMessageFromWX_Resp> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JShowMessageFromWX_RespClass,_di_JShowMessageFromWX_Resp>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJShowMessageFromWX_Resp(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JShowMessageFromWX_RespClass,_di_JShowMessageFromWX_Resp> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJShowMessageFromWX_Resp(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{03B4076E-9122-4417-BBAB-537F4F22024B}") JWXAPIFactoryClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_JIWXAPI __cdecl createWXAPI(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual _di_JIWXAPI __cdecl createWXAPI(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2, bool P3) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{3250CFB1-8792-47D5-BABD-0323930E4844}") JWXAPIFactory  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJWXAPIFactory : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXAPIFactoryClass,_di_JWXAPIFactory> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXAPIFactoryClass,_di_JWXAPIFactory>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJWXAPIFactory(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXAPIFactoryClass,_di_JWXAPIFactory> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJWXAPIFactory(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{904BE600-3E6B-4FC4-9C0C-1EB6D282C1E1}") JWXApiImplV10Class  : public JIWXAPIClass 
{
	
};

__interface  INTERFACE_UUID("{EDF58979-096C-4F53-B6A1-1F9175BD2C69}") JWXApiImplV10  : public JIWXAPI 
{
	HIDESBASE virtual int __cdecl getWXAppSupportAPI(void) = 0 ;
	HIDESBASE virtual bool __cdecl handleIntent(Androidapi::Jni::Graphicscontentviewtext::_di_JIntent P1, _di_JIWXAPIEventHandler P2) = 0 ;
	HIDESBASE virtual bool __cdecl isWXAppInstalled(void) = 0 ;
	HIDESBASE virtual bool __cdecl isWXAppSupportAPI(void) = 0 ;
	HIDESBASE virtual bool __cdecl openWXApp(void) = 0 ;
	HIDESBASE virtual bool __cdecl registerApp(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual bool __cdecl sendReq(_di_JBaseReq P1) = 0 ;
	HIDESBASE virtual bool __cdecl sendResp(_di_JBaseResp P1) = 0 ;
	HIDESBASE virtual void __cdecl unregisterApp(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJWXApiImplV10 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXApiImplV10Class,_di_JWXApiImplV10> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXApiImplV10Class,_di_JWXApiImplV10>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJWXApiImplV10(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXApiImplV10Class,_di_JWXApiImplV10> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJWXApiImplV10(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B8C149B4-86DC-4203-91F3-6A464DB022A3}") JWXMediaMessage_IMediaObjectClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual int __cdecl _GetTYPE_APPDATA(void) = 0 ;
	virtual int __cdecl _GetTYPE_EMOJI(void) = 0 ;
	virtual int __cdecl _GetTYPE_FILE(void) = 0 ;
	virtual int __cdecl _GetTYPE_IMAGE(void) = 0 ;
	virtual int __cdecl _GetTYPE_MUSIC(void) = 0 ;
	virtual int __cdecl _GetTYPE_TEXT(void) = 0 ;
	virtual int __cdecl _GetTYPE_UNKNOWN(void) = 0 ;
	virtual int __cdecl _GetTYPE_URL(void) = 0 ;
	virtual int __cdecl _GetTYPE_VIDEO(void) = 0 ;
	__property int TYPE_APPDATA = {read=_GetTYPE_APPDATA};
	__property int TYPE_EMOJI = {read=_GetTYPE_EMOJI};
	__property int TYPE_FILE = {read=_GetTYPE_FILE};
	__property int TYPE_IMAGE = {read=_GetTYPE_IMAGE};
	__property int TYPE_MUSIC = {read=_GetTYPE_MUSIC};
	__property int TYPE_TEXT = {read=_GetTYPE_TEXT};
	__property int TYPE_UNKNOWN = {read=_GetTYPE_UNKNOWN};
	__property int TYPE_URL = {read=_GetTYPE_URL};
	__property int TYPE_VIDEO = {read=_GetTYPE_VIDEO};
};

__interface  INTERFACE_UUID("{CA832E06-7E94-4F7C-8040-6EAFE2BACEE3}") JWXMediaMessage_IMediaObject  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual bool __cdecl checkArgs(void) = 0 ;
	virtual void __cdecl serialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	virtual int __cdecl type(void) = 0 ;
	virtual void __cdecl unserialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJWXMediaMessage_IMediaObject : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXMediaMessage_IMediaObjectClass,_di_JWXMediaMessage_IMediaObject> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXMediaMessage_IMediaObjectClass,_di_JWXMediaMessage_IMediaObject>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJWXMediaMessage_IMediaObject(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXMediaMessage_IMediaObjectClass,_di_JWXMediaMessage_IMediaObject> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJWXMediaMessage_IMediaObject(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{8FDA1772-50B5-4183-9792-ECC1C85A646F}") JWXAppExtendObjectClass  : public JWXMediaMessage_IMediaObjectClass 
{
	virtual _di_JWXAppExtendObject __cdecl init(void) = 0 /* overload */;
	virtual _di_JWXAppExtendObject __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual _di_JWXAppExtendObject __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P2) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{D97CAA04-51AA-408F-A465-5FD07235D784}") JWXAppExtendObject  : public JWXMediaMessage_IMediaObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetextInfo(void) = 0 ;
	virtual void __cdecl _SetextInfo(Androidapi::Jni::Javatypes::_di_JString Value) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl _GetfileData(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetfilePath(void) = 0 ;
	HIDESBASE virtual bool __cdecl checkArgs(void) = 0 ;
	HIDESBASE virtual void __cdecl serialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	HIDESBASE virtual int __cdecl type(void) = 0 ;
	HIDESBASE virtual void __cdecl unserialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString extInfo = {read=_GetextInfo, write=_SetextInfo};
	__property Androidapi::Jnibridge::TJavaArray__1<System::Byte> * fileData = {read=_GetfileData};
	__property Androidapi::Jni::Javatypes::_di_JString filePath = {read=_GetfilePath};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJWXAppExtendObject : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXAppExtendObjectClass,_di_JWXAppExtendObject> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXAppExtendObjectClass,_di_JWXAppExtendObject>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJWXAppExtendObject(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXAppExtendObjectClass,_di_JWXAppExtendObject> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJWXAppExtendObject(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FF565835-06E5-4668-B139-E2320D04E8E5}") JWXAppLaunchDataClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_HANDLE_WXAPPLAUNCH(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_HANDLE_WXAPP_RESULT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_HANDLE_WXAPP_SHOW(void) = 0 ;
	HIDESBASE virtual _di_JWXAppLaunchData __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_HANDLE_WXAPPLAUNCH = {read=_GetACTION_HANDLE_WXAPPLAUNCH};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_HANDLE_WXAPP_RESULT = {read=_GetACTION_HANDLE_WXAPP_RESULT};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_HANDLE_WXAPP_SHOW = {read=_GetACTION_HANDLE_WXAPP_SHOW};
};

__interface  INTERFACE_UUID("{B12F31F4-A5AF-4AB5-9508-647A54971EBB}") JWXAppLaunchData  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl _GetlaunchType(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getmessage(void) = 0 ;
	__property int launchType = {read=_GetlaunchType};
	__property Androidapi::Jni::Javatypes::_di_JString message = {read=_Getmessage};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJWXAppLaunchData : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXAppLaunchDataClass,_di_JWXAppLaunchData> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXAppLaunchDataClass,_di_JWXAppLaunchData>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJWXAppLaunchData(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXAppLaunchDataClass,_di_JWXAppLaunchData> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJWXAppLaunchData(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{EE6871BF-A87D-4792-8DE5-F67401D13267}") JWXAppLaunchData_BuilderClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_JWXAppLaunchData __cdecl fromBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	HIDESBASE virtual _di_JWXAppLaunchData_Builder __cdecl init(void) = 0 ;
	virtual Androidapi::Jni::Os::_di_JBundle __cdecl toBundle(_di_JWXAppLaunchData P1) = 0 ;
};

__interface  INTERFACE_UUID("{84B34567-7E39-4F42-9E99-07F32489DDAB}") JWXAppLaunchData_Builder  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJWXAppLaunchData_Builder : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXAppLaunchData_BuilderClass,_di_JWXAppLaunchData_Builder> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXAppLaunchData_BuilderClass,_di_JWXAppLaunchData_Builder>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJWXAppLaunchData_Builder(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXAppLaunchData_BuilderClass,_di_JWXAppLaunchData_Builder> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJWXAppLaunchData_Builder(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B97B1841-DDB9-4952-89A0-EF812CD24347}") JWXEmojiObjectClass  : public JWXMediaMessage_IMediaObjectClass 
{
	virtual _di_JWXEmojiObject __cdecl init(void) = 0 /* overload */;
	virtual _di_JWXEmojiObject __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual _di_JWXEmojiObject __cdecl init(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{25259221-39A2-496D-B328-8EC557545959}") JWXEmojiObject  : public JWXMediaMessage_IMediaObject 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl _GetemojiData(void) = 0 ;
	virtual void __cdecl _SetemojiData(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * Value) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetemojiPath(void) = 0 ;
	HIDESBASE virtual bool __cdecl checkArgs(void) = 0 ;
	HIDESBASE virtual void __cdecl serialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	virtual void __cdecl setEmojiData(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 ;
	virtual void __cdecl setEmojiPath(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual int __cdecl type(void) = 0 ;
	HIDESBASE virtual void __cdecl unserialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property Androidapi::Jnibridge::TJavaArray__1<System::Byte> * emojiData = {read=_GetemojiData, write=_SetemojiData};
	__property Androidapi::Jni::Javatypes::_di_JString emojiPath = {read=_GetemojiPath};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJWXEmojiObject : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXEmojiObjectClass,_di_JWXEmojiObject> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXEmojiObjectClass,_di_JWXEmojiObject>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJWXEmojiObject(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXEmojiObjectClass,_di_JWXEmojiObject> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJWXEmojiObject(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FEF8A6C0-39C1-45EE-902D-4DEBD06ADF2D}") JWXFileObjectClass  : public JWXMediaMessage_IMediaObjectClass 
{
	virtual _di_JWXFileObject __cdecl init(void) = 0 /* overload */;
	virtual _di_JWXFileObject __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual _di_JWXFileObject __cdecl init(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{7A299DFA-7BF4-4BD9-9AE5-0F3535848B6E}") JWXFileObject  : public JWXMediaMessage_IMediaObject 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl _GetfileData(void) = 0 ;
	virtual void __cdecl _SetfileData(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * Value) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetfilePath(void) = 0 ;
	HIDESBASE virtual bool __cdecl checkArgs(void) = 0 ;
	HIDESBASE virtual void __cdecl serialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	virtual void __cdecl setFileData(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 ;
	virtual void __cdecl setFilePath(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual int __cdecl type(void) = 0 ;
	HIDESBASE virtual void __cdecl unserialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property Androidapi::Jnibridge::TJavaArray__1<System::Byte> * fileData = {read=_GetfileData, write=_SetfileData};
	__property Androidapi::Jni::Javatypes::_di_JString filePath = {read=_GetfilePath};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJWXFileObject : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXFileObjectClass,_di_JWXFileObject> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXFileObjectClass,_di_JWXFileObject>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJWXFileObject(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXFileObjectClass,_di_JWXFileObject> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJWXFileObject(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{027D5448-0D6C-48C1-A551-516D15DB0107}") JWXImageObjectClass  : public JWXMediaMessage_IMediaObjectClass 
{
	virtual _di_JWXImageObject __cdecl init(void) = 0 /* overload */;
	virtual _di_JWXImageObject __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JBitmap P1) = 0 /* overload */;
	virtual _di_JWXImageObject __cdecl init(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{064D2235-9CA2-485F-952F-2AD6EEDB0829}") JWXImageObject  : public JWXMediaMessage_IMediaObject 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl _GetimageData(void) = 0 ;
	virtual void __cdecl _SetimageData(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * Value) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetimagePath(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetimageUrl(void) = 0 ;
	HIDESBASE virtual bool __cdecl checkArgs(void) = 0 ;
	HIDESBASE virtual void __cdecl serialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	virtual void __cdecl setImagePath(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual int __cdecl type(void) = 0 ;
	HIDESBASE virtual void __cdecl unserialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property Androidapi::Jnibridge::TJavaArray__1<System::Byte> * imageData = {read=_GetimageData, write=_SetimageData};
	__property Androidapi::Jni::Javatypes::_di_JString imagePath = {read=_GetimagePath};
	__property Androidapi::Jni::Javatypes::_di_JString imageUrl = {read=_GetimageUrl};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJWXImageObject : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXImageObjectClass,_di_JWXImageObject> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXImageObjectClass,_di_JWXImageObject>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJWXImageObject(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXImageObjectClass,_di_JWXImageObject> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJWXImageObject(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{71C0C8B5-E2EB-4145-BAE4-9B0C2F1F6C98}") JWXMediaMessageClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_WXAPPMESSAGE(void) = 0 ;
	HIDESBASE virtual _di_JWXMediaMessage __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JWXMediaMessage __cdecl init(_di_JWXMediaMessage_IMediaObject P1) = 0 /* overload */;
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_WXAPPMESSAGE = {read=_GetACTION_WXAPPMESSAGE};
};

__interface  INTERFACE_UUID("{CAEA0F73-46C7-431D-9735-D909DEC9CE2F}") JWXMediaMessage  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getdescription(void) = 0 ;
	virtual _di_JWXMediaMessage_IMediaObject __cdecl _GetmediaObject(void) = 0 ;
	virtual int __cdecl _GetsdkVer(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl _GetthumbData(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Gettitle(void) = 0 ;
	virtual bool __cdecl checkArgs(void) = 0 ;
	virtual int __cdecl getType(void) = 0 ;
	virtual void __cdecl setThumbImage(Androidapi::Jni::Graphicscontentviewtext::_di_JBitmap P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString description = {read=_Getdescription};
	__property _di_JWXMediaMessage_IMediaObject mediaObject = {read=_GetmediaObject};
	__property int sdkVer = {read=_GetsdkVer};
	__property Androidapi::Jnibridge::TJavaArray__1<System::Byte> * thumbData = {read=_GetthumbData};
	__property Androidapi::Jni::Javatypes::_di_JString title = {read=_Gettitle};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJWXMediaMessage : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXMediaMessageClass,_di_JWXMediaMessage> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXMediaMessageClass,_di_JWXMediaMessage>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJWXMediaMessage(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXMediaMessageClass,_di_JWXMediaMessage> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJWXMediaMessage(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E06B6C98-3E01-4709-996F-3CDB569E04E5}") JWXMediaMessage_BuilderClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetKEY_IDENTIFIER(void) = 0 ;
	virtual _di_JWXMediaMessage __cdecl fromBundle(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	HIDESBASE virtual _di_JWXMediaMessage_Builder __cdecl init(void) = 0 ;
	virtual Androidapi::Jni::Os::_di_JBundle __cdecl toBundle(_di_JWXMediaMessage P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString KEY_IDENTIFIER = {read=_GetKEY_IDENTIFIER};
};

__interface  INTERFACE_UUID("{110A5AF3-936C-4409-B09B-0432DE1D9068}") JWXMediaMessage_Builder  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJWXMediaMessage_Builder : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXMediaMessage_BuilderClass,_di_JWXMediaMessage_Builder> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXMediaMessage_BuilderClass,_di_JWXMediaMessage_Builder>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJWXMediaMessage_Builder(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXMediaMessage_BuilderClass,_di_JWXMediaMessage_Builder> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJWXMediaMessage_Builder(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D5C3E4AE-B8D0-497E-8DA3-2C7D7F58CDD8}") JWXMusicObjectClass  : public JWXMediaMessage_IMediaObjectClass 
{
	virtual _di_JWXMusicObject __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{F01C38A3-3906-448C-861C-A258DF89DCB3}") JWXMusicObject  : public JWXMediaMessage_IMediaObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetmusicLowBandUrl(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetmusicUrl(void) = 0 ;
	virtual void __cdecl _SetmusicUrl(Androidapi::Jni::Javatypes::_di_JString Value) = 0 ;
	HIDESBASE virtual bool __cdecl checkArgs(void) = 0 ;
	HIDESBASE virtual void __cdecl serialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	HIDESBASE virtual int __cdecl type(void) = 0 ;
	HIDESBASE virtual void __cdecl unserialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString musicLowBandUrl = {read=_GetmusicLowBandUrl};
	__property Androidapi::Jni::Javatypes::_di_JString musicUrl = {read=_GetmusicUrl, write=_SetmusicUrl};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJWXMusicObject : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXMusicObjectClass,_di_JWXMusicObject> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXMusicObjectClass,_di_JWXMusicObject>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJWXMusicObject(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXMusicObjectClass,_di_JWXMusicObject> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJWXMusicObject(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{058E7620-1F23-408E-87CF-C33C584D8F54}") JWXTextObjectClass  : public JWXMediaMessage_IMediaObjectClass 
{
	virtual _di_JWXTextObject __cdecl init(void) = 0 /* overload */;
	virtual _di_JWXTextObject __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{14423094-1E9E-4889-9CD8-65F479B6ADB0}") JWXTextObject  : public JWXMediaMessage_IMediaObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Gettext(void) = 0 ;
	virtual void __cdecl _Settext(Androidapi::Jni::Javatypes::_di_JString Value) = 0 ;
	HIDESBASE virtual bool __cdecl checkArgs(void) = 0 ;
	HIDESBASE virtual void __cdecl serialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	HIDESBASE virtual int __cdecl type(void) = 0 ;
	HIDESBASE virtual void __cdecl unserialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString text = {read=_Gettext, write=_Settext};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJWXTextObject : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXTextObjectClass,_di_JWXTextObject> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXTextObjectClass,_di_JWXTextObject>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJWXTextObject(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXTextObjectClass,_di_JWXTextObject> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJWXTextObject(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{79F53888-EB21-4904-A3D3-8527FC8258C3}") JWXVideoObjectClass  : public JWXMediaMessage_IMediaObjectClass 
{
	virtual _di_JWXVideoObject __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{1901C181-01D1-4BBE-90EA-240066D19776}") JWXVideoObject  : public JWXMediaMessage_IMediaObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetvideoLowBandUrl(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetvideoUrl(void) = 0 ;
	virtual void __cdecl _SetvideoUrl(Androidapi::Jni::Javatypes::_di_JString Value) = 0 ;
	HIDESBASE virtual bool __cdecl checkArgs(void) = 0 ;
	HIDESBASE virtual void __cdecl serialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	HIDESBASE virtual int __cdecl type(void) = 0 ;
	HIDESBASE virtual void __cdecl unserialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString videoLowBandUrl = {read=_GetvideoLowBandUrl};
	__property Androidapi::Jni::Javatypes::_di_JString videoUrl = {read=_GetvideoUrl, write=_SetvideoUrl};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJWXVideoObject : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXVideoObjectClass,_di_JWXVideoObject> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXVideoObjectClass,_di_JWXVideoObject>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJWXVideoObject(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXVideoObjectClass,_di_JWXVideoObject> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJWXVideoObject(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{42D40E32-6C8B-4DD7-8471-363C9F5E84AA}") JWXWebpageObjectClass  : public JWXMediaMessage_IMediaObjectClass 
{
	virtual _di_JWXWebpageObject __cdecl init(void) = 0 /* overload */;
	virtual _di_JWXWebpageObject __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{680C3E1D-798E-4189-B316-29D98564911F}") JWXWebpageObject  : public JWXMediaMessage_IMediaObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetwebpageUrl(void) = 0 ;
	virtual void __cdecl _SetwebpageUrl(Androidapi::Jni::Javatypes::_di_JString Value) = 0 ;
	HIDESBASE virtual bool __cdecl checkArgs(void) = 0 ;
	HIDESBASE virtual void __cdecl serialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	HIDESBASE virtual int __cdecl type(void) = 0 ;
	HIDESBASE virtual void __cdecl unserialize(Androidapi::Jni::Os::_di_JBundle P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString webpageUrl = {read=_GetwebpageUrl, write=_SetwebpageUrl};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJWXWebpageObject : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXWebpageObjectClass,_di_JWXWebpageObject> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXWebpageObjectClass,_di_JWXWebpageObject>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJWXWebpageObject(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JWXWebpageObjectClass,_di_JWXWebpageObject> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJWXWebpageObject(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{54D6B374-33A9-48C6-BFF6-3840BB9C0823}") Jopenapi_package_infoClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{DC4DBE9E-72EB-47DB-9D31-DDF21B74CEDE}") Jopenapi_package_info  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJopenapi_package_info : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jopenapi_package_infoClass,_di_Jopenapi_package_info> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jopenapi_package_infoClass,_di_Jopenapi_package_info>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJopenapi_package_info(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jopenapi_package_infoClass,_di_Jopenapi_package_info> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJopenapi_package_info(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{38DC6E21-DC08-42EC-823C-08C421DDE1F9}") Jsdk_package_infoClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{E5FB4C50-F907-49D6-8601-291702B11B6E}") Jsdk_package_info  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJsdk_package_info : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jsdk_package_infoClass,_di_Jsdk_package_info> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jsdk_package_infoClass,_di_Jsdk_package_info>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJsdk_package_info(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jsdk_package_infoClass,_di_Jsdk_package_info> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJsdk_package_info(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C28E5592-E4F5-457F-9F16-BA14D0AD0D0A}") JAnimationHelper_IHelperClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{9BFF7224-8B11-4E5F-9A53-F65912537B22}") JAnimationHelper_IHelper  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl cancelAnimation(Androidapi::Jni::Graphicscontentviewtext::_di_JView P1, Androidapi::Jni::Graphicscontentviewtext::_di_JAnimation P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAnimationHelper_IHelper : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimationHelper_IHelperClass,_di_JAnimationHelper_IHelper> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimationHelper_IHelperClass,_di_JAnimationHelper_IHelper>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAnimationHelper_IHelper(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimationHelper_IHelperClass,_di_JAnimationHelper_IHelper> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAnimationHelper_IHelper(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{774C4F25-FBB0-4DAC-B7D9-7C6DE59B6859}") JAnimationHelperImpl21belowClass  : public JAnimationHelper_IHelperClass 
{
	
};

__interface  INTERFACE_UUID("{75F563F1-BA1A-465B-B935-74DE5FB49E42}") JAnimationHelperImpl21below  : public JAnimationHelper_IHelper 
{
	HIDESBASE virtual void __cdecl cancelAnimation(Androidapi::Jni::Graphicscontentviewtext::_di_JView P1, Androidapi::Jni::Graphicscontentviewtext::_di_JAnimation P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAnimationHelperImpl21below : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimationHelperImpl21belowClass,_di_JAnimationHelperImpl21below> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimationHelperImpl21belowClass,_di_JAnimationHelperImpl21below>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAnimationHelperImpl21below(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimationHelperImpl21belowClass,_di_JAnimationHelperImpl21below> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAnimationHelperImpl21below(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{339BA776-40EB-4BAE-BF7F-CF8A15B3738B}") JAnimationHelperImpl22Class  : public JAnimationHelper_IHelperClass 
{
	
};

__interface  INTERFACE_UUID("{C48400C9-605C-483D-8EE3-F1B49E910611}") JAnimationHelperImpl22  : public JAnimationHelper_IHelper 
{
	HIDESBASE virtual void __cdecl cancelAnimation(Androidapi::Jni::Graphicscontentviewtext::_di_JView P1, Androidapi::Jni::Graphicscontentviewtext::_di_JAnimation P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAnimationHelperImpl22 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimationHelperImpl22Class,_di_JAnimationHelperImpl22> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimationHelperImpl22Class,_di_JAnimationHelperImpl22>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAnimationHelperImpl22(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAnimationHelperImpl22Class,_di_JAnimationHelperImpl22> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAnimationHelperImpl22(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{4742935D-E52A-4B1C-80F2-D6B6427FE216}") JBackwardSupportUtilClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JBackwardSupportUtil __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{B4E7F97B-A0D6-4464-B4CA-EA1BDAFB0076}") JBackwardSupportUtil  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJBackwardSupportUtil : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBackwardSupportUtilClass,_di_JBackwardSupportUtil> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBackwardSupportUtilClass,_di_JBackwardSupportUtil>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBackwardSupportUtil(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBackwardSupportUtilClass,_di_JBackwardSupportUtil> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBackwardSupportUtil(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B4B7F8B5-B072-4248-98C9-79CC1A21FDF4}") JBackwardSupportUtil_AnimationHelperClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl cancelAnimation(Androidapi::Jni::Graphicscontentviewtext::_di_JView P1, Androidapi::Jni::Graphicscontentviewtext::_di_JAnimation P2) = 0 ;
	HIDESBASE virtual _di_JBackwardSupportUtil_AnimationHelper __cdecl init(void) = 0 ;
	virtual void __cdecl overridePendingTransition(Androidapi::Jni::App::_di_JActivity P1, int P2, int P3) = 0 ;
};

__interface  INTERFACE_UUID("{E78BB437-B99E-4013-A387-E7AA46AA8B2D}") JBackwardSupportUtil_AnimationHelper  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJBackwardSupportUtil_AnimationHelper : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBackwardSupportUtil_AnimationHelperClass,_di_JBackwardSupportUtil_AnimationHelper> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBackwardSupportUtil_AnimationHelperClass,_di_JBackwardSupportUtil_AnimationHelper>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBackwardSupportUtil_AnimationHelper(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBackwardSupportUtil_AnimationHelperClass,_di_JBackwardSupportUtil_AnimationHelper> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBackwardSupportUtil_AnimationHelper(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1A4A82B4-7358-446E-B5DF-DCB729CF2610}") JBackwardSupportUtil_BitmapFactoryClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JBitmap __cdecl decodeFile(Androidapi::Jni::Javatypes::_di_JString P1, float P2) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JBitmap __cdecl decodeStream(Androidapi::Jni::Javatypes::_di_JInputStream P1) = 0 /* overload */;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JBitmap __cdecl decodeStream(Androidapi::Jni::Javatypes::_di_JInputStream P1, float P2) = 0 /* overload */;
	virtual int __cdecl fromDPToPix(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, float P2) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JBitmap __cdecl getBitmapFromURL(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDisplayDensityType(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	HIDESBASE virtual _di_JBackwardSupportUtil_BitmapFactory __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{B3A74205-F36C-49EA-8847-48F8CFBF278A}") JBackwardSupportUtil_BitmapFactory  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJBackwardSupportUtil_BitmapFactory : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBackwardSupportUtil_BitmapFactoryClass,_di_JBackwardSupportUtil_BitmapFactory> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBackwardSupportUtil_BitmapFactoryClass,_di_JBackwardSupportUtil_BitmapFactory>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBackwardSupportUtil_BitmapFactory(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBackwardSupportUtil_BitmapFactoryClass,_di_JBackwardSupportUtil_BitmapFactory> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBackwardSupportUtil_BitmapFactory(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E77A488C-D0A0-4E8E-8A0B-0A3B1FAED429}") JBackwardSupportUtil_ExifHelperClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl getExifOrientation(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual _di_JBackwardSupportUtil_ExifHelper __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{D1C1AC33-2151-4A85-8BA8-BD3CBE226180}") JBackwardSupportUtil_ExifHelper  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJBackwardSupportUtil_ExifHelper : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBackwardSupportUtil_ExifHelperClass,_di_JBackwardSupportUtil_ExifHelper> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBackwardSupportUtil_ExifHelperClass,_di_JBackwardSupportUtil_ExifHelper>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBackwardSupportUtil_ExifHelper(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBackwardSupportUtil_ExifHelperClass,_di_JBackwardSupportUtil_ExifHelper> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBackwardSupportUtil_ExifHelper(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{8F95CC1E-C73D-4C81-B8F7-4B021C2CB5E8}") JBackwardSupportUtil_SmoothScrollFactoryClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JBackwardSupportUtil_SmoothScrollFactory __cdecl init(void) = 0 ;
	virtual void __cdecl scrollTo(Androidapi::Jni::Widget::_di_JListView P1, int P2) = 0 ;
	virtual void __cdecl scrollToTop(Androidapi::Jni::Widget::_di_JListView P1) = 0 ;
};

__interface  INTERFACE_UUID("{615AD79D-1159-4C3B-AC96-DF001DA68547}") JBackwardSupportUtil_SmoothScrollFactory  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJBackwardSupportUtil_SmoothScrollFactory : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBackwardSupportUtil_SmoothScrollFactoryClass,_di_JBackwardSupportUtil_SmoothScrollFactory> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBackwardSupportUtil_SmoothScrollFactoryClass,_di_JBackwardSupportUtil_SmoothScrollFactory>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBackwardSupportUtil_SmoothScrollFactory(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBackwardSupportUtil_SmoothScrollFactoryClass,_di_JBackwardSupportUtil_SmoothScrollFactory> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBackwardSupportUtil_SmoothScrollFactory(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1E8F367C-69B3-4650-856D-86BD94FD9DBE}") JSmoothScrollFactory_IScrollClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{585D72CC-B365-4A28-B338-DE160948B196}") JSmoothScrollFactory_IScroll  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl doScroll(Androidapi::Jni::Widget::_di_JListView P1) = 0 /* overload */;
	virtual void __cdecl doScroll(Androidapi::Jni::Widget::_di_JListView P1, int P2) = 0 /* overload */;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSmoothScrollFactory_IScroll : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSmoothScrollFactory_IScrollClass,_di_JSmoothScrollFactory_IScroll> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSmoothScrollFactory_IScrollClass,_di_JSmoothScrollFactory_IScroll>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSmoothScrollFactory_IScroll(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSmoothScrollFactory_IScrollClass,_di_JSmoothScrollFactory_IScroll> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSmoothScrollFactory_IScroll(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FDC326B9-5AC3-4A1F-B643-921011FBC069}") JChannelUtilClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl _GetFLAG_NULL(void) = 0 ;
	virtual int __cdecl _GetFLAG_UPDATE_EXTERNAL(void) = 0 ;
	virtual int __cdecl _GetFLAG_UPDATE_NOTIP(void) = 0 ;
	virtual int __cdecl _GetbuildRev(void) = 0 ;
	virtual int __cdecl _GetchannelId(void) = 0 ;
	virtual bool __cdecl _GetfullVersionInfo(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetmarketURL(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetprofileDeviceType(void) = 0 ;
	virtual int __cdecl _GetupdateMode(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl formatVersion(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, int P2) = 0 ;
	virtual void __cdecl loadProfile(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual void __cdecl setupChannelId(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	__property int FLAG_NULL = {read=_GetFLAG_NULL};
	__property int FLAG_UPDATE_EXTERNAL = {read=_GetFLAG_UPDATE_EXTERNAL};
	__property int FLAG_UPDATE_NOTIP = {read=_GetFLAG_UPDATE_NOTIP};
	__property int buildRev = {read=_GetbuildRev};
	__property int channelId = {read=_GetchannelId};
	__property bool fullVersionInfo = {read=_GetfullVersionInfo};
	__property Androidapi::Jni::Javatypes::_di_JString marketURL = {read=_GetmarketURL};
	__property Androidapi::Jni::Javatypes::_di_JString profileDeviceType = {read=_GetprofileDeviceType};
	__property int updateMode = {read=_GetupdateMode};
};

__interface  INTERFACE_UUID("{A17DAE21-1879-47BD-B12C-4AE078D6A193}") JChannelUtil  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJChannelUtil : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JChannelUtilClass,_di_JChannelUtil> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JChannelUtilClass,_di_JChannelUtil>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJChannelUtil(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JChannelUtilClass,_di_JChannelUtil> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJChannelUtil(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{3F22D6C1-F9ED-4A2A-839C-BC2D1AE945AC}") JCharSequencesClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl compareToIgnoreCase(Androidapi::Jni::Javatypes::_di_JCharSequence P1, Androidapi::Jni::Javatypes::_di_JCharSequence P2) = 0 ;
	virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JCharSequence P1, Androidapi::Jni::Javatypes::_di_JCharSequence P2) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JCharSequence __cdecl forAsciiBytes(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JCharSequence __cdecl forAsciiBytes(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2, int P3) = 0 /* overload */;
	HIDESBASE virtual _di_JCharSequences __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{C63C9560-7128-44CB-9EA8-6006758C3E8E}") JCharSequences  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCharSequences : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharSequencesClass,_di_JCharSequences> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharSequencesClass,_di_JCharSequences>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCharSequences(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharSequencesClass,_di_JCharSequences> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCharSequences(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{867A53AE-69E3-4B02-A96D-FEFADB9827CD}") JCharSequences_1Class  : public Androidapi::Jni::Javatypes::JCharSequenceClass 
{
	virtual _di_JCharSequences_1 __cdecl init(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 ;
};

__interface  INTERFACE_UUID("{6C0B550A-3136-4939-88B8-9DD35C879C98}") JCharSequences_1  : public Androidapi::Jni::Javatypes::JCharSequence 
{
	HIDESBASE virtual System::WideChar __cdecl charAt(int P1) = 0 ;
	HIDESBASE virtual int __cdecl length(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JCharSequence __cdecl subSequence(int P1, int P2) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCharSequences_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharSequences_1Class,_di_JCharSequences_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharSequences_1Class,_di_JCharSequences_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCharSequences_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharSequences_1Class,_di_JCharSequences_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCharSequences_1(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{60AD402E-22EB-41AE-BA38-4D360CD02871}") JCharSequences_2Class  : public Androidapi::Jni::Javatypes::JCharSequenceClass 
{
	virtual _di_JCharSequences_2 __cdecl init(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1, int P2, int P3) = 0 ;
};

__interface  INTERFACE_UUID("{6F7F90C3-B269-4025-AFCF-CD3B39593EF8}") JCharSequences_2  : public Androidapi::Jni::Javatypes::JCharSequence 
{
	virtual int __cdecl _GetV(void) = 0 ;
	virtual int __cdecl _GetW(void) = 0 ;
	HIDESBASE virtual System::WideChar __cdecl charAt(int P1) = 0 ;
	HIDESBASE virtual int __cdecl length(void) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JCharSequence __cdecl subSequence(int P1, int P2) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
	__property int V = {read=_GetV};
	__property int W = {read=_GetW};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCharSequences_2 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharSequences_2Class,_di_JCharSequences_2> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharSequences_2Class,_di_JCharSequences_2>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCharSequences_2(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharSequences_2Class,_di_JCharSequences_2> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCharSequences_2(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{50170FEA-FFB3-4B22-9258-A238EE601236}") JInetUtilClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Java::Net::_di_JInetAddress __cdecl getByDottedAddress(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual bool __cdecl isIPv4Address(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual bool __cdecl isIPv6Address(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual bool __cdecl isIPv6HexCompressedAddress(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual bool __cdecl isIPv6StdAddress(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{F5B08C72-5E62-4D3C-9947-E5DDE2F5127F}") JInetUtil  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJInetUtil : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JInetUtilClass,_di_JInetUtil> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JInetUtilClass,_di_JInetUtil>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJInetUtil(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JInetUtilClass,_di_JInetUtil> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJInetUtil(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2568BD3A-223A-49C3-AC33-E13526BE5DF3}") JKVConfigClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JKVConfig __cdecl init(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl parseIni(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl parseXml(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
};

__interface  INTERFACE_UUID("{488C2BE1-C0B2-425D-A0F8-A952F7AE7A8A}") JKVConfig  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJKVConfig : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JKVConfigClass,_di_JKVConfig> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JKVConfigClass,_di_JKVConfig>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJKVConfig(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JKVConfigClass,_di_JKVConfig> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJKVConfig(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C2C5FD79-1BDD-4F4E-B09C-1E8F5C4C35BB}") JLBSManagerClass  : public Androidapi::Jni::Graphicscontentviewtext::JBroadcastReceiverClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetFILTER_GPS(void) = 0 ;
	virtual int __cdecl _GetINVALID_ACC(void) = 0 ;
	virtual float __cdecl _GetINVALID_LAT(void) = 0 ;
	virtual float __cdecl _GetINVALID_LNG(void) = 0 ;
	virtual int __cdecl _GetMM_SOURCE_HARDWARE(void) = 0 ;
	virtual int __cdecl _GetMM_SOURCE_NET(void) = 0 ;
	virtual int __cdecl _GetMM_SOURCE_REPORT_HARWARE(void) = 0 ;
	virtual int __cdecl _GetMM_SOURCE_REPORT_NETWORK(void) = 0 ;
	virtual bool __cdecl a(_di_JLBSManager P1) = 0 ;
	HIDESBASE virtual _di_JLBSManager __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, _di_JLBSManager_OnLocationGotListener P2) = 0 ;
	virtual void __cdecl setLocationCache(float P1, float P2, int P3, int P4) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString FILTER_GPS = {read=_GetFILTER_GPS};
	__property int INVALID_ACC = {read=_GetINVALID_ACC};
	__property float INVALID_LAT = {read=_GetINVALID_LAT};
	__property float INVALID_LNG = {read=_GetINVALID_LNG};
	__property int MM_SOURCE_HARDWARE = {read=_GetMM_SOURCE_HARDWARE};
	__property int MM_SOURCE_NET = {read=_GetMM_SOURCE_NET};
	__property int MM_SOURCE_REPORT_HARWARE = {read=_GetMM_SOURCE_REPORT_HARWARE};
	__property int MM_SOURCE_REPORT_NETWORK = {read=_GetMM_SOURCE_REPORT_NETWORK};
};

__interface  INTERFACE_UUID("{8902A854-C844-42EE-B112-82C82462FCAC}") JLBSManager  : public Androidapi::Jni::Graphicscontentviewtext::JBroadcastReceiver 
{
	virtual bool __cdecl _Getag(void) = 0 ;
	virtual bool __cdecl _Getah(void) = 0 ;
	virtual bool __cdecl _Getai(void) = 0 ;
	virtual int __cdecl _Getaj(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getTelLocation(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getWIFILocation(void) = 0 ;
	virtual bool __cdecl isGpsEnable(void) = 0 ;
	virtual bool __cdecl isNetworkPrividerEnable(void) = 0 ;
	HIDESBASE virtual void __cdecl onReceive(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Graphicscontentviewtext::_di_JIntent P2) = 0 ;
	virtual void __cdecl removeGpsUpdate(void) = 0 ;
	virtual void __cdecl removeListener(void) = 0 ;
	virtual void __cdecl requestGpsUpdate(void) = 0 ;
	virtual void __cdecl start(void) = 0 ;
	__property bool ag = {read=_Getag};
	__property bool ah = {read=_Getah};
	__property bool ai = {read=_Getai};
	__property int aj = {read=_Getaj};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLBSManager : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLBSManagerClass,_di_JLBSManager> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLBSManagerClass,_di_JLBSManager>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLBSManager(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLBSManagerClass,_di_JLBSManager> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLBSManager(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9F689123-CB57-4FBC-BE05-F62320AB08E9}") JMTimerHandler_CallBackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{128E4971-4790-4BA9-B062-B7813A768CF0}") JMTimerHandler_CallBack  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual bool __cdecl onTimerExpired(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMTimerHandler_CallBack : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMTimerHandler_CallBackClass,_di_JMTimerHandler_CallBack> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMTimerHandler_CallBackClass,_di_JMTimerHandler_CallBack>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMTimerHandler_CallBack(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMTimerHandler_CallBackClass,_di_JMTimerHandler_CallBack> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMTimerHandler_CallBack(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D6D439B6-2732-4428-B6EF-C4F0B8B1A566}") JLBSManager_1Class  : public JMTimerHandler_CallBackClass 
{
	virtual _di_JLBSManager_1 __cdecl init(_di_JLBSManager P1) = 0 ;
};

__interface  INTERFACE_UUID("{C60C20C7-A231-4F84-88FA-442999240057}") JLBSManager_1  : public JMTimerHandler_CallBack 
{
	HIDESBASE virtual bool __cdecl onTimerExpired(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLBSManager_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLBSManager_1Class,_di_JLBSManager_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLBSManager_1Class,_di_JLBSManager_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLBSManager_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLBSManager_1Class,_di_JLBSManager_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLBSManager_1(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{0254665A-4734-46C1-BEED-24EED0C94E34}") JLBSManager_LocationCacheClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JLBSManager_LocationCache __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{A21DD6F8-6514-4709-9C85-3F6E86C4B563}") JLBSManager_LocationCache  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl _GetI(void) = 0 ;
	virtual float __cdecl _Getan(void) = 0 ;
	virtual int __cdecl _Getao(void) = 0 ;
	virtual __int64 __cdecl _Gettime(void) = 0 ;
	__property int I = {read=_GetI};
	__property float an = {read=_Getan};
	__property int ao = {read=_Getao};
	__property __int64 time = {read=_Gettime};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLBSManager_LocationCache : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLBSManager_LocationCacheClass,_di_JLBSManager_LocationCache> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLBSManager_LocationCacheClass,_di_JLBSManager_LocationCache>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLBSManager_LocationCache(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLBSManager_LocationCacheClass,_di_JLBSManager_LocationCache> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLBSManager_LocationCache(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6915C624-DE6B-4D88-A02E-C0CBC7681109}") JLBSManager_OnLocationGotListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{FD74E005-9E2D-430F-823E-71B7AB8710BC}") JLBSManager_OnLocationGotListener  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onLocationGot(float P1, float P2, int P3, int P4, Androidapi::Jni::Javatypes::_di_JString P5, Androidapi::Jni::Javatypes::_di_JString P6, bool P7) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLBSManager_OnLocationGotListener : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLBSManager_OnLocationGotListenerClass,_di_JLBSManager_OnLocationGotListener> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLBSManager_OnLocationGotListenerClass,_di_JLBSManager_OnLocationGotListener>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLBSManager_OnLocationGotListener(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLBSManager_OnLocationGotListenerClass,_di_JLBSManager_OnLocationGotListener> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLBSManager_OnLocationGotListener(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{DC5B726B-5F53-4F04-AB55-DA266DC738B3}") JLVBufferClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl _GetLENGTH_ALLOC_PER_NEW(void) = 0 ;
	virtual int __cdecl _GetMAX_STRING_LENGTH(void) = 0 ;
	HIDESBASE virtual _di_JLVBuffer __cdecl init(void) = 0 ;
	__property int LENGTH_ALLOC_PER_NEW = {read=_GetLENGTH_ALLOC_PER_NEW};
	__property int MAX_STRING_LENGTH = {read=_GetMAX_STRING_LENGTH};
};

__interface  INTERFACE_UUID("{1BB8349E-0FF9-47C9-B588-513ED6635C66}") JLVBuffer  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl buildFinish(void) = 0 ;
	virtual bool __cdecl checkGetFinish(void) = 0 ;
	virtual int __cdecl getInt(void) = 0 ;
	virtual __int64 __cdecl getLong(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getString(void) = 0 ;
	virtual int __cdecl initBuild(void) = 0 ;
	virtual int __cdecl initParse(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 ;
	virtual int __cdecl putInt(int P1) = 0 ;
	virtual int __cdecl putLong(__int64 P1) = 0 ;
	virtual int __cdecl putString(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLVBuffer : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLVBufferClass,_di_JLVBuffer> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLVBufferClass,_di_JLVBuffer>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLVBuffer(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLVBufferClass,_di_JLVBuffer> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLVBuffer(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{3532179E-EFDE-4AF9-976D-D9FC63F0F831}") JLocaleUtilClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetARABIC(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCHINA(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetENGLISH(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetHEBREW(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetHINDI(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetHONGKONG(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetINDONESIAN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetITALIAN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetJAPANESE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetKOREAN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetLANGUAGE_DEFAULT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetLANGUAGE_KEY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetMALAY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetPOLISH(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetPORTUGUESE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetRUSSIAN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSPANISH(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetTAIWAN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetTHAI(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetTURKEY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetVIETNAMESE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getApplicationLanguage(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getCurrentCountryCode(void) = 0 ;
	virtual bool __cdecl isLanguageSupported(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl loadApplicationLanguage(Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences P1, Androidapi::Jni::Graphicscontentviewtext::_di_JContext P2) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl loadApplicationLanguageSettings(Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences P1, Androidapi::Jni::Graphicscontentviewtext::_di_JContext P2) = 0 ;
	virtual void __cdecl saveApplicationLanguage(Androidapi::Jni::Graphicscontentviewtext::_di_JSharedPreferences P1, Androidapi::Jni::Graphicscontentviewtext::_di_JContext P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JLocale __cdecl transLanguageToLocale(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl updateApplicationResourceLocale(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JLocale P2) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString ARABIC = {read=_GetARABIC};
	__property Androidapi::Jni::Javatypes::_di_JString CHINA = {read=_GetCHINA};
	__property Androidapi::Jni::Javatypes::_di_JString ENGLISH = {read=_GetENGLISH};
	__property Androidapi::Jni::Javatypes::_di_JString HEBREW = {read=_GetHEBREW};
	__property Androidapi::Jni::Javatypes::_di_JString HINDI = {read=_GetHINDI};
	__property Androidapi::Jni::Javatypes::_di_JString HONGKONG = {read=_GetHONGKONG};
	__property Androidapi::Jni::Javatypes::_di_JString INDONESIAN = {read=_GetINDONESIAN};
	__property Androidapi::Jni::Javatypes::_di_JString ITALIAN = {read=_GetITALIAN};
	__property Androidapi::Jni::Javatypes::_di_JString JAPANESE = {read=_GetJAPANESE};
	__property Androidapi::Jni::Javatypes::_di_JString KOREAN = {read=_GetKOREAN};
	__property Androidapi::Jni::Javatypes::_di_JString LANGUAGE_DEFAULT = {read=_GetLANGUAGE_DEFAULT};
	__property Androidapi::Jni::Javatypes::_di_JString LANGUAGE_KEY = {read=_GetLANGUAGE_KEY};
	__property Androidapi::Jni::Javatypes::_di_JString MALAY = {read=_GetMALAY};
	__property Androidapi::Jni::Javatypes::_di_JString POLISH = {read=_GetPOLISH};
	__property Androidapi::Jni::Javatypes::_di_JString PORTUGUESE = {read=_GetPORTUGUESE};
	__property Androidapi::Jni::Javatypes::_di_JString RUSSIAN = {read=_GetRUSSIAN};
	__property Androidapi::Jni::Javatypes::_di_JString SPANISH = {read=_GetSPANISH};
	__property Androidapi::Jni::Javatypes::_di_JString TAIWAN = {read=_GetTAIWAN};
	__property Androidapi::Jni::Javatypes::_di_JString THAI = {read=_GetTHAI};
	__property Androidapi::Jni::Javatypes::_di_JString TURKEY = {read=_GetTURKEY};
	__property Androidapi::Jni::Javatypes::_di_JString VIETNAMESE = {read=_GetVIETNAMESE};
};

__interface  INTERFACE_UUID("{CBE1BEAF-F08D-4A97-AE5A-041C36E2E0B8}") JLocaleUtil  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLocaleUtil : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLocaleUtilClass,_di_JLocaleUtil> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLocaleUtilClass,_di_JLocaleUtil>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLocaleUtil(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLocaleUtilClass,_di_JLocaleUtil> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLocaleUtil(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{5F5CE963-2AB2-40AF-95C0-041AFF38298B}") Jplatformtools_LogClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl _GetLEVEL_DEBUG(void) = 0 ;
	virtual int __cdecl _GetLEVEL_ERROR(void) = 0 ;
	virtual int __cdecl _GetLEVEL_FATAL(void) = 0 ;
	virtual int __cdecl _GetLEVEL_INFO(void) = 0 ;
	virtual int __cdecl _GetLEVEL_NONE(void) = 0 ;
	virtual int __cdecl _GetLEVEL_VERBOSE(void) = 0 ;
	virtual int __cdecl _GetLEVEL_WARNING(void) = 0 ;
	virtual void __cdecl d(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual void __cdecl e(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual void __cdecl f(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual int __cdecl getLevel(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getSysInfo(void) = 0 ;
	virtual void __cdecl i(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	HIDESBASE virtual _di_Jplatformtools_Log __cdecl init(void) = 0 ;
	virtual void __cdecl reset(void) = 0 ;
	virtual void __cdecl setLevel(int P1, bool P2) = 0 ;
	virtual void __cdecl setOutputPath(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, int P4) = 0 ;
	virtual void __cdecl setOutputStream(Androidapi::Jni::Javatypes::_di_JInputStream P1, Androidapi::Jni::Javatypes::_di_JOutputStream P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4, int P5) = 0 ;
	virtual void __cdecl v(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual void __cdecl w(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	__property int LEVEL_DEBUG = {read=_GetLEVEL_DEBUG};
	__property int LEVEL_ERROR = {read=_GetLEVEL_ERROR};
	__property int LEVEL_FATAL = {read=_GetLEVEL_FATAL};
	__property int LEVEL_INFO = {read=_GetLEVEL_INFO};
	__property int LEVEL_NONE = {read=_GetLEVEL_NONE};
	__property int LEVEL_VERBOSE = {read=_GetLEVEL_VERBOSE};
	__property int LEVEL_WARNING = {read=_GetLEVEL_WARNING};
};

__interface  INTERFACE_UUID("{B95987B4-C064-459D-AC72-608769852FED}") Jplatformtools_Log  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJplatformtools_Log : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jplatformtools_LogClass,_di_Jplatformtools_Log> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jplatformtools_LogClass,_di_Jplatformtools_Log>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJplatformtools_Log(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jplatformtools_LogClass,_di_Jplatformtools_Log> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJplatformtools_Log(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1597408A-2BA5-4898-A75D-8664C5107E4E}") JLogHelperClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual void __cdecl initLogHeader(Androidapi::Jni::Javatypes::_di_JPrintStream P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, __int64 P4, int P5) = 0 ;
	virtual void __cdecl writeToStream(Androidapi::Jni::Javatypes::_di_JPrintStream P1, Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4) = 0 ;
};

__interface  INTERFACE_UUID("{CBA7FB1C-2F3C-4093-A73A-F7DCE1E7A516}") JLogHelper  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLogHelper : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLogHelperClass,_di_JLogHelper> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLogHelperClass,_di_JLogHelper>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLogHelper(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLogHelperClass,_di_JLogHelper> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLogHelper(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{BC87737A-68EF-4C0D-A4A6-EE14296DE531}") JMAlarmHandlerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual __int64 __cdecl _GetNEXT_FIRE_INTERVAL(void) = 0 ;
	virtual __int64 __cdecl fire(void) = 0 ;
	HIDESBASE virtual _di_JMAlarmHandler __cdecl init(_di_JMAlarmHandler_CallBack P1, bool P2) = 0 ;
	virtual void __cdecl initAlarmBumper(_di_JMAlarmHandler_IBumper P1) = 0 ;
	__property __int64 NEXT_FIRE_INTERVAL = {read=_GetNEXT_FIRE_INTERVAL};
};

__interface  INTERFACE_UUID("{A77DD291-07F2-4722-816B-2073E8AA3966}") JMAlarmHandler  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl finalize(void) = 0 ;
	virtual void __cdecl startTimer(__int64 P1) = 0 ;
	virtual void __cdecl stopTimer(void) = 0 ;
	virtual bool __cdecl stopped(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMAlarmHandler : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMAlarmHandlerClass,_di_JMAlarmHandler> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMAlarmHandlerClass,_di_JMAlarmHandler>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMAlarmHandler(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMAlarmHandlerClass,_di_JMAlarmHandler> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMAlarmHandler(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{3C60F2B2-B614-453C-9297-D67C15D7AA6F}") JMAlarmHandler_CallBackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{7A69A17E-CD7E-493A-87A7-12D195796DFF}") JMAlarmHandler_CallBack  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual bool __cdecl onTimerExpired(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMAlarmHandler_CallBack : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMAlarmHandler_CallBackClass,_di_JMAlarmHandler_CallBack> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMAlarmHandler_CallBackClass,_di_JMAlarmHandler_CallBack>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMAlarmHandler_CallBack(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMAlarmHandler_CallBackClass,_di_JMAlarmHandler_CallBack> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMAlarmHandler_CallBack(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{95E034D4-5F5B-4EE5-8B13-D8F51BC71D7A}") JMAlarmHandler_IBumperClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{72BC6919-5D2D-4CBC-8FA9-3FA83C610DAC}") JMAlarmHandler_IBumper  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl cancel(void) = 0 ;
	virtual void __cdecl prepare(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMAlarmHandler_IBumper : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMAlarmHandler_IBumperClass,_di_JMAlarmHandler_IBumper> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMAlarmHandler_IBumperClass,_di_JMAlarmHandler_IBumper>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMAlarmHandler_IBumper(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMAlarmHandler_IBumperClass,_di_JMAlarmHandler_IBumper> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMAlarmHandler_IBumper(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B108DE35-51EA-474F-ADB2-54F09BAD1189}") JMMApplicationContextClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JContext __cdecl getContext(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDefaultPreferencePath(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPackageName(void) = 0 ;
	virtual void __cdecl setContext(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{17F7BB67-69BE-41B0-9381-A407E8EB0CF9}") JMMApplicationContext  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMApplicationContext : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMApplicationContextClass,_di_JMMApplicationContext> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMApplicationContextClass,_di_JMMApplicationContext>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMApplicationContext(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMApplicationContextClass,_di_JMMApplicationContext> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMApplicationContext(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{EFCC0974-5989-4B42-BF41-E50EB879FA20}") JMMEntryLockClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl isLocked(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual bool __cdecl lock(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl unlock(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{05D43147-3A40-441A-9862-49653AF6C4E3}") JMMEntryLock  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMEntryLock : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMEntryLockClass,_di_JMMEntryLock> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMEntryLockClass,_di_JMMEntryLock>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMEntryLock(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMEntryLockClass,_di_JMMEntryLock> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMEntryLock(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{84BEA375-A148-4B0B-A3BD-AD31EBB57D58}") JMTimerHandlerClass  : public Androidapi::Jni::Os::JHandlerClass 
{
	HIDESBASE virtual _di_JMTimerHandler __cdecl init(_di_JMTimerHandler_CallBack P1, bool P2) = 0 /* overload */;
	HIDESBASE virtual _di_JMTimerHandler __cdecl init(Androidapi::Jni::Os::_di_JLooper P1, _di_JMTimerHandler_CallBack P2, bool P3) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{7AEC6E9B-8051-4976-84B8-E69D106E7E1B}") JMTimerHandler  : public Androidapi::Jni::Os::JHandler 
{
	HIDESBASE virtual void __cdecl handleMessage(Androidapi::Jni::Os::_di_JMessage P1) = 0 ;
	virtual void __cdecl startTimer(__int64 P1) = 0 ;
	virtual void __cdecl stopTimer(void) = 0 ;
	virtual bool __cdecl stopped(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMTimerHandler : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMTimerHandlerClass,_di_JMTimerHandler> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMTimerHandlerClass,_di_JMTimerHandler>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMTimerHandler(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMTimerHandlerClass,_di_JMTimerHandler> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMTimerHandler(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{79DD024A-60E4-4944-B7D0-C3D3CE04D997}") JNetStatusUtilClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl _GetCMNET(void) = 0 ;
	virtual int __cdecl _GetCMWAP(void) = 0 ;
	virtual int __cdecl _GetCTNET(void) = 0 ;
	virtual int __cdecl _GetCTWAP(void) = 0 ;
	virtual int __cdecl _GetLTE(void) = 0 ;
	virtual int __cdecl _GetMOBILE(void) = 0 ;
	virtual int __cdecl _GetNET_3G(void) = 0 ;
	virtual int __cdecl _GetNON_NETWORK(void) = 0 ;
	virtual int __cdecl _GetPOLICY_NONE(void) = 0 ;
	virtual int __cdecl _GetPOLICY_REJECT_METERED_BACKGROUND(void) = 0 ;
	virtual int __cdecl _GetTBACKGROUND_DATA_LIMITED(void) = 0 ;
	virtual int __cdecl _GetTBACKGROUND_NOT_LIMITED(void) = 0 ;
	virtual int __cdecl _GetTBACKGROUND_PROCESS_LIMITED(void) = 0 ;
	virtual int __cdecl _GetTBACKGROUND_WIFI_LIMITED(void) = 0 ;
	virtual int __cdecl _GetUNINET(void) = 0 ;
	virtual int __cdecl _GetUNIWAP(void) = 0 ;
	virtual int __cdecl _GetWAP_3G(void) = 0 ;
	virtual int __cdecl _GetWIFI(void) = 0 ;
	virtual bool __cdecl checkFromXml(int P1) = 0 ;
	virtual void __cdecl dumpNetStatus(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual int __cdecl getBackgroundLimitType(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual int __cdecl getNetType(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getNetTypeString(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual int __cdecl getWifiSleeepPolicy(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	HIDESBASE virtual _di_JNetStatusUtil __cdecl init(void) = 0 ;
	virtual bool __cdecl is2G(int P1) = 0 /* overload */;
	virtual bool __cdecl is2G(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual bool __cdecl is3G(int P1) = 0 /* overload */;
	virtual bool __cdecl is3G(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual bool __cdecl is4G(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual bool __cdecl is4G(int P1) = 0 /* overload */;
	virtual bool __cdecl isConnected(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual bool __cdecl isImmediatelyDestroyActivities(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual bool __cdecl isLimited(int P1) = 0 ;
	virtual bool __cdecl isMobile(int P1) = 0 /* overload */;
	virtual bool __cdecl isMobile(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual bool __cdecl isRestrictBacground(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual bool __cdecl isWap(int P1) = 0 /* overload */;
	virtual bool __cdecl isWap(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual bool __cdecl isWifi(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 /* overload */;
	virtual bool __cdecl isWifi(int P1) = 0 /* overload */;
	virtual bool __cdecl runRootCommand(void) = 0 ;
	virtual void __cdecl startSettingItent(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, int P2) = 0 ;
	__property int CMNET = {read=_GetCMNET};
	__property int CMWAP = {read=_GetCMWAP};
	__property int CTNET = {read=_GetCTNET};
	__property int CTWAP = {read=_GetCTWAP};
	__property int LTE = {read=_GetLTE};
	__property int MOBILE = {read=_GetMOBILE};
	__property int NET_3G = {read=_GetNET_3G};
	__property int NON_NETWORK = {read=_GetNON_NETWORK};
	__property int POLICY_NONE = {read=_GetPOLICY_NONE};
	__property int POLICY_REJECT_METERED_BACKGROUND = {read=_GetPOLICY_REJECT_METERED_BACKGROUND};
	__property int TBACKGROUND_DATA_LIMITED = {read=_GetTBACKGROUND_DATA_LIMITED};
	__property int TBACKGROUND_NOT_LIMITED = {read=_GetTBACKGROUND_NOT_LIMITED};
	__property int TBACKGROUND_PROCESS_LIMITED = {read=_GetTBACKGROUND_PROCESS_LIMITED};
	__property int TBACKGROUND_WIFI_LIMITED = {read=_GetTBACKGROUND_WIFI_LIMITED};
	__property int UNINET = {read=_GetUNINET};
	__property int UNIWAP = {read=_GetUNIWAP};
	__property int WAP_3G = {read=_GetWAP_3G};
	__property int WIFI = {read=_GetWIFI};
};

__interface  INTERFACE_UUID("{0DAF1F2C-0343-431D-92A2-054708869C28}") JNetStatusUtil  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJNetStatusUtil : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNetStatusUtilClass,_di_JNetStatusUtil> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNetStatusUtilClass,_di_JNetStatusUtil>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJNetStatusUtil(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNetStatusUtilClass,_di_JNetStatusUtil> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJNetStatusUtil(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{06AB21E8-9D18-4571-A990-783C0BA803FF}") JPhoneUtilClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCELL_CDMA(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCELL_GSM(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getCellInfoList(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getCellXml(Androidapi::Jni::Javatypes::_di_JList P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMacXml(Androidapi::Jni::Javatypes::_di_JList P1) = 0 ;
	virtual void __cdecl getSignalStrength(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString CELL_CDMA = {read=_GetCELL_CDMA};
	__property Androidapi::Jni::Javatypes::_di_JString CELL_GSM = {read=_GetCELL_GSM};
};

__interface  INTERFACE_UUID("{70C0C44B-8CF8-43B3-A416-A2E3CC5AD869}") JPhoneUtil  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJPhoneUtil : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtilClass,_di_JPhoneUtil> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtilClass,_di_JPhoneUtil>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJPhoneUtil(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtilClass,_di_JPhoneUtil> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJPhoneUtil(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C44DE84A-341C-4EBB-8566-17673B7EC3B6}") JPhoneUtil_CellInfoClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl _GetMAX_CID(void) = 0 ;
	virtual int __cdecl _GetMAX_LAC(void) = 0 ;
	HIDESBASE virtual _di_JPhoneUtil_CellInfo __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3, Androidapi::Jni::Javatypes::_di_JString P4, Androidapi::Jni::Javatypes::_di_JString P5, Androidapi::Jni::Javatypes::_di_JString P6, Androidapi::Jni::Javatypes::_di_JString P7, Androidapi::Jni::Javatypes::_di_JString P8, Androidapi::Jni::Javatypes::_di_JString P9) = 0 ;
	__property int MAX_CID = {read=_GetMAX_CID};
	__property int MAX_LAC = {read=_GetMAX_LAC};
};

__interface  INTERFACE_UUID("{AF9C75BD-2702-4869-9814-0708D807DD7F}") JPhoneUtil_CellInfo  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getcellid(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getdbm(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getlac(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getmcc(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getmnc(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetnetworkId(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetstationId(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetsystemId(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Gettype(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString cellid = {read=_Getcellid};
	__property Androidapi::Jni::Javatypes::_di_JString dbm = {read=_Getdbm};
	__property Androidapi::Jni::Javatypes::_di_JString lac = {read=_Getlac};
	__property Androidapi::Jni::Javatypes::_di_JString mcc = {read=_Getmcc};
	__property Androidapi::Jni::Javatypes::_di_JString mnc = {read=_Getmnc};
	__property Androidapi::Jni::Javatypes::_di_JString networkId = {read=_GetnetworkId};
	__property Androidapi::Jni::Javatypes::_di_JString stationId = {read=_GetstationId};
	__property Androidapi::Jni::Javatypes::_di_JString systemId = {read=_GetsystemId};
	__property Androidapi::Jni::Javatypes::_di_JString type = {read=_Gettype};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJPhoneUtil_CellInfo : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil_CellInfoClass,_di_JPhoneUtil_CellInfo> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil_CellInfoClass,_di_JPhoneUtil_CellInfo>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJPhoneUtil_CellInfo(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil_CellInfoClass,_di_JPhoneUtil_CellInfo> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJPhoneUtil_CellInfo(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F9562AF5-5A9B-4087-BA66-9087DB906CFC}") JPhoneUtil_MacInfoClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JPhoneUtil_MacInfo __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

__interface  INTERFACE_UUID("{9AA2479A-3AFD-48ED-B59E-EBD2DB901CBD}") JPhoneUtil_MacInfo  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getdbm(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getmac(void) = 0 ;
	virtual void __cdecl _Setmac(Androidapi::Jni::Javatypes::_di_JString Value) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString dbm = {read=_Getdbm};
	__property Androidapi::Jni::Javatypes::_di_JString mac = {read=_Getmac, write=_Setmac};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJPhoneUtil_MacInfo : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil_MacInfoClass,_di_JPhoneUtil_MacInfo> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil_MacInfoClass,_di_JPhoneUtil_MacInfo>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJPhoneUtil_MacInfo(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil_MacInfoClass,_di_JPhoneUtil_MacInfo> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJPhoneUtil_MacInfo(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F0795EA9-D8C8-4DE6-B1F0-913A8FCAA3C7}") JPhoneUtil16ImplClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{08046439-928E-43C4-B2AF-0FBCE423D366}") JPhoneUtil16Impl  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getCellInfoList(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual void __cdecl getSignalStrength(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJPhoneUtil16Impl : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil16ImplClass,_di_JPhoneUtil16Impl> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil16ImplClass,_di_JPhoneUtil16Impl>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJPhoneUtil16Impl(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil16ImplClass,_di_JPhoneUtil16Impl> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJPhoneUtil16Impl(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{BFCCFE3D-896B-4745-8946-78884FBBC7D2}") JPhoneUtil16Impl_1Class  : public Androidapi::Jni::Telephony::JPhoneStateListenerClass 
{
	HIDESBASE virtual _di_JPhoneUtil16Impl_1 __cdecl init(_di_JPhoneUtil16Impl P1) = 0 ;
};

__interface  INTERFACE_UUID("{401DA405-29A3-45B1-8B4A-179ECCEEFAE6}") JPhoneUtil16Impl_1  : public Androidapi::Jni::Telephony::JPhoneStateListener 
{
	HIDESBASE virtual void __cdecl onSignalStrengthChanged(int P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJPhoneUtil16Impl_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil16Impl_1Class,_di_JPhoneUtil16Impl_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil16Impl_1Class,_di_JPhoneUtil16Impl_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJPhoneUtil16Impl_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil16Impl_1Class,_di_JPhoneUtil16Impl_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJPhoneUtil16Impl_1(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1D74CA0D-3FE5-4DCB-97C2-5B0DBDCFA2F1}") JPhoneUtil20ImplClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{2483D9C4-77EF-4E66-A81E-FAED19079B15}") JPhoneUtil20Impl  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getCellInfoList(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual void __cdecl getSignalStrength(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJPhoneUtil20Impl : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil20ImplClass,_di_JPhoneUtil20Impl> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil20ImplClass,_di_JPhoneUtil20Impl>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJPhoneUtil20Impl(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil20ImplClass,_di_JPhoneUtil20Impl> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJPhoneUtil20Impl(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6F102478-B9D4-42C3-BCE6-EDF5730DD483}") JPhoneUtil20Impl_1Class  : public Androidapi::Jni::Telephony::JPhoneStateListenerClass 
{
	HIDESBASE virtual _di_JPhoneUtil20Impl_1 __cdecl init(_di_JPhoneUtil20Impl P1) = 0 ;
};

__interface  INTERFACE_UUID("{14910E29-2825-4127-8291-27D47AFE37E8}") JPhoneUtil20Impl_1  : public Androidapi::Jni::Telephony::JPhoneStateListener 
{
	HIDESBASE virtual void __cdecl onSignalStrengthsChanged(Androidapi::Jni::Telephony::_di_JSignalStrength P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJPhoneUtil20Impl_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil20Impl_1Class,_di_JPhoneUtil20Impl_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil20Impl_1Class,_di_JPhoneUtil20Impl_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJPhoneUtil20Impl_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPhoneUtil20Impl_1Class,_di_JPhoneUtil20Impl_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJPhoneUtil20Impl_1(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6725D9C2-1F7B-4D45-963E-66D3A862F033}") JSensorControllerClass  : public Androidapi::Jni::Graphicscontentviewtext::JBroadcastReceiverClass 
{
	HIDESBASE virtual _di_JSensorController __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{6B5C45B0-1A4E-4077-A6D8-0455DE1066C8}") JSensorController  : public Androidapi::Jni::Graphicscontentviewtext::JBroadcastReceiver 
{
	virtual bool __cdecl isSensorEnable(void) = 0 ;
	virtual void __cdecl onAccuracyChanged(_di_JSensor P1, int P2) = 0 ;
	HIDESBASE virtual void __cdecl onReceive(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Graphicscontentviewtext::_di_JIntent P2) = 0 ;
	virtual void __cdecl onSensorChanged(_di_JSensorEvent P1) = 0 ;
	virtual void __cdecl removeSensorCallBack(void) = 0 ;
	virtual void __cdecl setSensorCallBack(_di_JSensorController_SensorEventCallBack P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSensorController : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSensorControllerClass,_di_JSensorController> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSensorControllerClass,_di_JSensorController>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSensorController(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSensorControllerClass,_di_JSensorController> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSensorController(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{CB6F9300-ED1D-4860-A6AC-D4E6C32CEE28}") JSensorController_SensorEventCallBackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{469FFEBB-213E-4253-8C29-EE6BAEFC6994}") JSensorController_SensorEventCallBack  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onSensorEvent(bool P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSensorController_SensorEventCallBack : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSensorController_SensorEventCallBackClass,_di_JSensorController_SensorEventCallBack> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSensorController_SensorEventCallBackClass,_di_JSensorController_SensorEventCallBack>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSensorController_SensorEventCallBack(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSensorController_SensorEventCallBackClass,_di_JSensorController_SensorEventCallBack> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSensorController_SensorEventCallBack(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B808A6F7-C682-441F-B922-307EA229841E}") JSmoothScrollToPosition21belowClass  : public JSmoothScrollFactory_IScrollClass 
{
	
};

__interface  INTERFACE_UUID("{B5E2764E-840F-4556-9FA0-33DF62B039D8}") JSmoothScrollToPosition21below  : public JSmoothScrollFactory_IScroll 
{
	HIDESBASE virtual void __cdecl doScroll(Androidapi::Jni::Widget::_di_JListView P1) = 0 /* overload */;
	HIDESBASE virtual void __cdecl doScroll(Androidapi::Jni::Widget::_di_JListView P1, int P2) = 0 /* overload */;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSmoothScrollToPosition21below : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSmoothScrollToPosition21belowClass,_di_JSmoothScrollToPosition21below> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSmoothScrollToPosition21belowClass,_di_JSmoothScrollToPosition21below>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSmoothScrollToPosition21below(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSmoothScrollToPosition21belowClass,_di_JSmoothScrollToPosition21below> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSmoothScrollToPosition21below(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{79830D5B-7BBB-433D-9F4A-843657BB69F6}") JSmoothScrollToPosition22Class  : public JSmoothScrollFactory_IScrollClass 
{
	
};

__interface  INTERFACE_UUID("{B111EE82-D242-46A9-B366-FF64FDEC8C34}") JSmoothScrollToPosition22  : public JSmoothScrollFactory_IScroll 
{
	HIDESBASE virtual void __cdecl doScroll(Androidapi::Jni::Widget::_di_JListView P1) = 0 /* overload */;
	HIDESBASE virtual void __cdecl doScroll(Androidapi::Jni::Widget::_di_JListView P1, int P2) = 0 /* overload */;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSmoothScrollToPosition22 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSmoothScrollToPosition22Class,_di_JSmoothScrollToPosition22> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSmoothScrollToPosition22Class,_di_JSmoothScrollToPosition22>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSmoothScrollToPosition22(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSmoothScrollToPosition22Class,_di_JSmoothScrollToPosition22> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSmoothScrollToPosition22(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{EB0CF858-5EC3-427C-9CE7-182666A1AE4B}") JSyncTaskClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JSyncTask __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JSyncTask __cdecl init(__int64 P1, Androidapi::Jni::Javatypes::_di_JObject P2) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{962C8B43-255A-49C9-85EC-765219EFEE49}") JSyncTask  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl exec(Androidapi::Jni::Os::_di_JHandler P1) = 0 ;
	virtual void __cdecl setResult(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSyncTask : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSyncTaskClass,_di_JSyncTask> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSyncTaskClass,_di_JSyncTask>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSyncTask(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSyncTaskClass,_di_JSyncTask> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSyncTask(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A63783C7-DAA1-4BF0-8963-8AA885DCBDF5}") JSyncTask_1Class  : public Androidapi::Jni::Javatypes::JRunnableClass 
{
	virtual _di_JSyncTask_1 __cdecl init(_di_JSyncTask P1) = 0 ;
};

__interface  INTERFACE_UUID("{99B4DC6A-138E-4D16-9226-59ED4CC8A57F}") JSyncTask_1  : public Androidapi::Jni::Javatypes::JRunnable 
{
	HIDESBASE virtual void __cdecl run(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSyncTask_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSyncTask_1Class,_di_JSyncTask_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSyncTask_1Class,_di_JSyncTask_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSyncTask_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSyncTask_1Class,_di_JSyncTask_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSyncTask_1(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{8406D1B8-4D93-408D-AA35-EB9EC09410ED}") JSystemPropertyClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getProperty(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl setProperty(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

__interface  INTERFACE_UUID("{790E1548-B547-4A47-ADCB-A8F46B304C9F}") JSystemProperty  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSystemProperty : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSystemPropertyClass,_di_JSystemProperty> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSystemPropertyClass,_di_JSystemProperty>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSystemProperty(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSystemPropertyClass,_di_JSystemProperty> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSystemProperty(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{88D92134-835A-4624-B71E-E75A2FA3A512}") JTimeLoggerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JTimeLogger __cdecl init(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

__interface  INTERFACE_UUID("{0BF6336A-5981-46E0-A954-62A5A03D5B71}") JTimeLogger  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JArrayList __cdecl _Getbk(void) = 0 ;
	virtual void __cdecl addSplit(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl dumpToLog(void) = 0 ;
	virtual void __cdecl reset(void) = 0 /* overload */;
	virtual void __cdecl reset(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	__property Androidapi::Jni::Javatypes::_di_JArrayList bk = {read=_Getbk};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTimeLogger : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTimeLoggerClass,_di_JTimeLogger> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTimeLoggerClass,_di_JTimeLogger>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTimeLogger(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTimeLoggerClass,_di_JTimeLogger> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTimeLogger(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{0A734859-B35E-448E-A0D1-E3DAD99BDE8D}") Jplatformtools_TrafficStatsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetDEV_FILE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetGPRSLINE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetWIFILINE(void) = 0 ;
	virtual __int64 __cdecl getMobileRx(__int64 P1) = 0 ;
	virtual __int64 __cdecl getMobileTx(__int64 P1) = 0 ;
	virtual __int64 __cdecl getWifiRx(__int64 P1) = 0 ;
	virtual __int64 __cdecl getWifiTx(__int64 P1) = 0 ;
	virtual void __cdecl reset(void) = 0 ;
	virtual void __cdecl update(void) = 0 ;
	virtual __int64 __cdecl updateMobileRx(__int64 P1) = 0 ;
	virtual __int64 __cdecl updateMobileTx(__int64 P1) = 0 ;
	virtual __int64 __cdecl updateWifiRx(__int64 P1) = 0 ;
	virtual __int64 __cdecl updateWifiTx(__int64 P1) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString DEV_FILE = {read=_GetDEV_FILE};
	__property Androidapi::Jni::Javatypes::_di_JString GPRSLINE = {read=_GetGPRSLINE};
	__property Androidapi::Jni::Javatypes::_di_JString WIFILINE = {read=_GetWIFILINE};
};

__interface  INTERFACE_UUID("{27DA15EA-6349-4ACF-A348-2A032974E113}") Jplatformtools_TrafficStats  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJplatformtools_TrafficStats : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jplatformtools_TrafficStatsClass,_di_Jplatformtools_TrafficStats> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jplatformtools_TrafficStatsClass,_di_Jplatformtools_TrafficStats>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJplatformtools_TrafficStats(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jplatformtools_TrafficStatsClass,_di_Jplatformtools_TrafficStats> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJplatformtools_TrafficStats(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{5F283BB4-CDF3-410E-9AE0-749AE38B631A}") JUtilClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl _GetBEGIN_TIME(void) = 0 ;
	virtual int __cdecl _GetBIT_OF_KB(void) = 0 ;
	virtual int __cdecl _GetBIT_OF_MB(void) = 0 ;
	virtual int __cdecl _GetBYTE_OF_KB(void) = 0 ;
	virtual int __cdecl _GetBYTE_OF_MB(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCHINA(void) = 0 ;
	virtual int __cdecl _GetDAY(void) = 0 ;
	virtual int __cdecl _GetEND_TIME(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetENGLISH(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetHONGKONG(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetLANGUAGE_DEFAULT(void) = 0 ;
	virtual int __cdecl _GetMASK_16BIT(void) = 0 ;
	virtual int __cdecl _GetMASK_32BIT(void) = 0 ;
	virtual int __cdecl _GetMASK_4BIT(void) = 0 ;
	virtual int __cdecl _GetMASK_8BIT(void) = 0 ;
	virtual __int64 __cdecl _GetMAX_32BIT_VALUE(void) = 0 ;
	virtual int __cdecl _GetMAX_ACCOUNT_LENGTH(void) = 0 ;
	virtual int __cdecl _GetMAX_DECODE_PICTURE_SIZE(void) = 0 ;
	virtual int __cdecl _GetMAX_PASSWORD_LENGTH(void) = 0 ;
	virtual __int64 __cdecl _GetMILLSECONDS_OF_DAY(void) = 0 ;
	virtual __int64 __cdecl _GetMILLSECONDS_OF_HOUR(void) = 0 ;
	virtual __int64 __cdecl _GetMILLSECONDS_OF_MINUTE(void) = 0 ;
	virtual __int64 __cdecl _GetMILLSECONDS_OF_SECOND(void) = 0 ;
	virtual __int64 __cdecl _GetMINUTE_OF_HOUR(void) = 0 ;
	virtual int __cdecl _GetMIN_ACCOUNT_LENGTH(void) = 0 ;
	virtual int __cdecl _GetMIN_PASSWORD_LENGTH(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetPHOTO_DEFAULT_EXT(void) = 0 ;
	virtual __int64 __cdecl _GetSECOND_OF_MINUTE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetTAIWAN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl GetHostIp(void) = 0 ;
	virtual int __cdecl UnZipFolder(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl bmpToByteArray(Androidapi::Jni::Graphicscontentviewtext::_di_JBitmap P1, bool P2) = 0 ;
	virtual bool __cdecl checkPermission(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual bool __cdecl checkSDCardFull(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl convertStreamToString(Androidapi::Jni::Javatypes::_di_JInputStream P1) = 0 ;
	virtual __int64 __cdecl currentDayInMills(void) = 0 ;
	virtual __int64 __cdecl currentMonthInMills(void) = 0 ;
	virtual __int64 __cdecl currentTicks(void) = 0 ;
	virtual __int64 __cdecl currentWeekInMills(void) = 0 ;
	virtual __int64 __cdecl currentYearInMills(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte> * __cdecl decodeHexString(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl dumpArray(Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JObject> * P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl dumpHex(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl encodeHexString(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl escapeSqlValue(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl escapeStringForXml(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl expandEntities(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl formatSecToMin(int P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl formatUnixTime(__int64 P1) = 0 ;
	virtual void __cdecl freeBitmapMap(Androidapi::Jni::Javatypes::_di_JMap P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getCutPasswordMD5(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDeviceId(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getFullPasswordMD5(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual int __cdecl getHex(Androidapi::Jni::Javatypes::_di_JString P1, int P2) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JBitmapFactory_Options __cdecl getImageOptions(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JIntent __cdecl getInstallPackIntent(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Graphicscontentviewtext::_di_JContext P2) = 0 ;
	virtual int __cdecl getInt(Androidapi::Jni::Javatypes::_di_JString P1, int P2) = 0 ;
	virtual int __cdecl getIntRandom(int P1, int P2) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getLine1Number(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual __int64 __cdecl getLong(Androidapi::Jni::Javatypes::_di_JString P1, __int64 P2) = 0 ;
	virtual _di_JElement __cdecl getRootElementFromXML(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JBitmap __cdecl getRoundedCornerBitmap(Androidapi::Jni::Graphicscontentviewtext::_di_JBitmap P1, bool P2, float P3) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getSizeKB(__int64 P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getSizeMB(__int64 P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getStack(void) = 0 ;
	virtual int __cdecl getSystemVersion(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, int P2) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getTimeZone(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getTimeZoneDef(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getTimeZoneOffset(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getTopActivityName(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual int __cdecl guessHttpContinueRecvLength(int P1) = 0 ;
	virtual int __cdecl guessHttpRecvLength(int P1) = 0 ;
	virtual int __cdecl guessHttpSendLength(int P1) = 0 ;
	virtual int __cdecl guessTcpConnectLength(void) = 0 ;
	virtual int __cdecl guessTcpDisconnectLength(void) = 0 ;
	virtual int __cdecl guessTcpRecvLength(int P1) = 0 ;
	virtual int __cdecl guessTcpSendLength(int P1) = 0 ;
	virtual void __cdecl installPack(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Graphicscontentviewtext::_di_JContext P2) = 0 ;
	virtual bool __cdecl isAlpha(System::WideChar P1) = 0 ;
	virtual bool __cdecl isChinese(System::WideChar P1) = 0 ;
	virtual bool __cdecl isDayTimeNow(void) = 0 ;
	virtual bool __cdecl isImgFile(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual bool __cdecl isIntentAvailable(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Graphicscontentviewtext::_di_JIntent P2) = 0 ;
	virtual bool __cdecl isLockScreen(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual bool __cdecl isNightTime(int P1, int P2, int P3) = 0 ;
	virtual bool __cdecl isNullOrNil(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * P1) = 0 /* overload */;
	virtual bool __cdecl isNullOrNil(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual bool __cdecl isNum(System::WideChar P1) = 0 ;
	virtual bool __cdecl isProcessRunning(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual bool __cdecl isServiceRunning(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual bool __cdecl isTopActivity(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual bool __cdecl isTopApplication(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
	virtual bool __cdecl isValidAccount(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual bool __cdecl isValidEmail(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual bool __cdecl isValidPassword(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual bool __cdecl isValidQQNum(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual bool __cdecl jump(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl listToString(Androidapi::Jni::Javatypes::_di_JList P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl mapToXml(Androidapi::Jni::Javatypes::_di_JString P1, _di_JLinkedHashMap P2) = 0 ;
	virtual __int64 __cdecl milliSecondsToNow(__int64 P1) = 0 ;
	virtual __int64 __cdecl nowMilliSecond(void) = 0 ;
	virtual __int64 __cdecl nowSecond(void) = 0 ;
	virtual int __cdecl nullAs(Androidapi::Jni::Javatypes::_di_JInteger P1, int P2) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl nullAs(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 /* overload */;
	virtual bool __cdecl nullAs(Androidapi::Jni::Javatypes::_di_JBoolean P1, bool P2) = 0 /* overload */;
	virtual __int64 __cdecl nullAs(Androidapi::Jni::Javatypes::_di_JLong P1, __int64 P2) = 0 /* overload */;
	virtual bool __cdecl nullAsFalse(Androidapi::Jni::Javatypes::_di_JBoolean P1) = 0 ;
	virtual int __cdecl nullAsInt(Androidapi::Jni::Javatypes::_di_JObject P1, int P2) = 0 ;
	virtual int __cdecl nullAsNil(Androidapi::Jni::Javatypes::_di_JInteger P1) = 0 /* overload */;
	virtual __int64 __cdecl nullAsNil(Androidapi::Jni::Javatypes::_di_JLong P1) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl nullAsNil(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual bool __cdecl nullAsTrue(Androidapi::Jni::Javatypes::_di_JBoolean P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl parseIni(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JMap __cdecl parseXml(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	virtual void __cdecl playSound(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, int P2) = 0 /* overload */;
	virtual Androidapi::Jni::Media::_di_JMediaPlayer __cdecl playSound(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, int P2, Androidapi::Jni::Media::_di_JMediaPlayer_OnCompletionListener P3) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl processXml(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl saveBitmapToImage(Androidapi::Jni::Graphicscontentviewtext::_di_JBitmap P1, int P2, Androidapi::Jni::Graphicscontentviewtext::_di_JBitmap_CompressFormat P3, Androidapi::Jni::Javatypes::_di_JString P4, bool P5) = 0 /* overload */;
	virtual void __cdecl saveBitmapToImage(Androidapi::Jni::Graphicscontentviewtext::_di_JBitmap P1, int P2, Androidapi::Jni::Graphicscontentviewtext::_di_JBitmap_CompressFormat P3, Androidapi::Jni::Javatypes::_di_JString P4, Androidapi::Jni::Javatypes::_di_JString P5, bool P6) = 0 /* overload */;
	virtual __int64 __cdecl secondsToNow(__int64 P1) = 0 ;
	virtual void __cdecl selectPicture(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, int P2) = 0 ;
	virtual void __cdecl shake(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, bool P2) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<int> * __cdecl splitToIntArray(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl stringsToList(Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * P1) = 0 ;
	virtual __int64 __cdecl ticksToNow(__int64 P1) = 0 ;
	virtual void __cdecl transClickToSelect(Androidapi::Jni::Graphicscontentviewtext::_di_JView P1, Androidapi::Jni::Graphicscontentviewtext::_di_JView P2) = 0 ;
	__property int BEGIN_TIME = {read=_GetBEGIN_TIME};
	__property int BIT_OF_KB = {read=_GetBIT_OF_KB};
	__property int BIT_OF_MB = {read=_GetBIT_OF_MB};
	__property int BYTE_OF_KB = {read=_GetBYTE_OF_KB};
	__property int BYTE_OF_MB = {read=_GetBYTE_OF_MB};
	__property Androidapi::Jni::Javatypes::_di_JString CHINA = {read=_GetCHINA};
	__property int DAY = {read=_GetDAY};
	__property int END_TIME = {read=_GetEND_TIME};
	__property Androidapi::Jni::Javatypes::_di_JString ENGLISH = {read=_GetENGLISH};
	__property Androidapi::Jni::Javatypes::_di_JString HONGKONG = {read=_GetHONGKONG};
	__property Androidapi::Jni::Javatypes::_di_JString LANGUAGE_DEFAULT = {read=_GetLANGUAGE_DEFAULT};
	__property int MASK_16BIT = {read=_GetMASK_16BIT};
	__property int MASK_32BIT = {read=_GetMASK_32BIT};
	__property int MASK_4BIT = {read=_GetMASK_4BIT};
	__property int MASK_8BIT = {read=_GetMASK_8BIT};
	__property __int64 MAX_32BIT_VALUE = {read=_GetMAX_32BIT_VALUE};
	__property int MAX_ACCOUNT_LENGTH = {read=_GetMAX_ACCOUNT_LENGTH};
	__property int MAX_DECODE_PICTURE_SIZE = {read=_GetMAX_DECODE_PICTURE_SIZE};
	__property int MAX_PASSWORD_LENGTH = {read=_GetMAX_PASSWORD_LENGTH};
	__property __int64 MILLSECONDS_OF_DAY = {read=_GetMILLSECONDS_OF_DAY};
	__property __int64 MILLSECONDS_OF_HOUR = {read=_GetMILLSECONDS_OF_HOUR};
	__property __int64 MILLSECONDS_OF_MINUTE = {read=_GetMILLSECONDS_OF_MINUTE};
	__property __int64 MILLSECONDS_OF_SECOND = {read=_GetMILLSECONDS_OF_SECOND};
	__property __int64 MINUTE_OF_HOUR = {read=_GetMINUTE_OF_HOUR};
	__property int MIN_ACCOUNT_LENGTH = {read=_GetMIN_ACCOUNT_LENGTH};
	__property int MIN_PASSWORD_LENGTH = {read=_GetMIN_PASSWORD_LENGTH};
	__property Androidapi::Jni::Javatypes::_di_JString PHOTO_DEFAULT_EXT = {read=_GetPHOTO_DEFAULT_EXT};
	__property __int64 SECOND_OF_MINUTE = {read=_GetSECOND_OF_MINUTE};
	__property Androidapi::Jni::Javatypes::_di_JString TAIWAN = {read=_GetTAIWAN};
};

__interface  INTERFACE_UUID("{5CF1563B-EFB9-411E-BA2F-390DDEB31D06}") JUtil  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJUtil : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUtilClass,_di_JUtil> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUtilClass,_di_JUtil>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUtil(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUtilClass,_di_JUtil> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUtil(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{BC5B942B-2743-4F92-9A18-F7047141ACA3}") JUtil_1Class  : public Androidapi::Jni::Media::JMediaPlayer_OnCompletionListenerClass 
{
	
};

__interface  INTERFACE_UUID("{97FEA07D-270A-41B2-A264-116CFDE35978}") JUtil_1  : public Androidapi::Jni::Media::JMediaPlayer_OnCompletionListener 
{
	HIDESBASE virtual void __cdecl onCompletion(Androidapi::Jni::Media::_di_JMediaPlayer P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJUtil_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUtil_1Class,_di_JUtil_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUtil_1Class,_di_JUtil_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUtil_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUtil_1Class,_di_JUtil_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUtil_1(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E5D1D763-6A30-4B21-9A03-9CC239A29606}") JUtil_2Class  : public Androidapi::Jni::Graphicscontentviewtext::JView_OnTouchListenerClass 
{
	virtual _di_JUtil_2 __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JView P1, Androidapi::Jni::Graphicscontentviewtext::_di_JView P2) = 0 ;
};

__interface  INTERFACE_UUID("{436B07FB-33CE-4B81-8BCA-2B856FA9C0D6}") JUtil_2  : public Androidapi::Jni::Graphicscontentviewtext::JView_OnTouchListener 
{
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JView __cdecl _Getby(void) = 0 ;
	HIDESBASE virtual bool __cdecl onTouch(Androidapi::Jni::Graphicscontentviewtext::_di_JView P1, Androidapi::Jni::Graphicscontentviewtext::_di_JMotionEvent P2) = 0 ;
	__property Androidapi::Jni::Graphicscontentviewtext::_di_JView by = {read=_Getby};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJUtil_2 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUtil_2Class,_di_JUtil_2> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUtil_2Class,_di_JUtil_2>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUtil_2(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUtil_2Class,_di_JUtil_2> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUtil_2(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{69B5485C-2802-4166-90B8-F76E0A872823}") Jplatformtools_package_infoClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{1F17E307-406E-4098-9918-009E812BC21B}") Jplatformtools_package_info  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJplatformtools_package_info : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jplatformtools_package_infoClass,_di_Jplatformtools_package_info> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jplatformtools_package_infoClass,_di_Jplatformtools_package_info>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJplatformtools_package_info(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jplatformtools_package_infoClass,_di_Jplatformtools_package_info> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJplatformtools_package_info(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{0F97C0F3-D1BB-409A-8DF2-441DAF61622C}") JIMMPluginAPIClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{A0ADCA10-F3EA-4317-A399-2628F8C7EACA}") JIMMPluginAPI  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual bool __cdecl appendNetStat(int P1, int P2, int P3) = 0 ;
	virtual void __cdecl createMsgController(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl createQRCodeController(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	virtual void __cdecl createQRCodeController(Androidapi::Jni::Javatypes::_di_JString P1, _di_JMMessage_CallBack P2) = 0 /* overload */;
	virtual void __cdecl createQRCodeController(Androidapi::Jni::Javatypes::_di_JString P1, _di_JMMessage_CallBack P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 /* overload */;
	virtual _di_JProfile __cdecl getCurrentProfile(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPluginKey(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual bool __cdecl installPlugin(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual bool __cdecl isPluginInstalled(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl jumpToBindEmail(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl jumpToBindMobile(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl jumpToBindQQ(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	virtual void __cdecl jumpToChattingUI(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual void __cdecl jumpToSettingView(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual bool __cdecl registerAutoMsg(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual bool __cdecl registerPattern(Androidapi::Jni::Javatypes::_di_JString P1, _di_JMMessage_CallBack P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	virtual bool __cdecl registerQRCodePattern(Androidapi::Jni::Javatypes::_di_JString P1, _di_JMMessage_CallBack P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	virtual void __cdecl release(void) = 0 ;
	virtual bool __cdecl sendMsgNotify(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, int P3, Androidapi::Jni::Javatypes::_di_JString P4, Androidapi::Jni::Javatypes::_di_Jlang_Class P5) = 0 ;
	virtual bool __cdecl unregisterAutoMsg(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJIMMPluginAPI : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JIMMPluginAPIClass,_di_JIMMPluginAPI> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JIMMPluginAPIClass,_di_JIMMPluginAPI>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJIMMPluginAPI(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JIMMPluginAPIClass,_di_JIMMPluginAPI> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJIMMPluginAPI(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{5B662D06-3C9D-4EE3-8001-4F751979700E}") JMMPluginAPIImplClass  : public JIMMPluginAPIClass 
{
	virtual _di_JMMPluginAPIImpl __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{638BD6DA-8D9E-4E1D-8B09-40638B3CC0C9}") JMMPluginAPIImpl  : public JIMMPluginAPI 
{
	HIDESBASE virtual bool __cdecl appendNetStat(int P1, int P2, int P3) = 0 ;
	HIDESBASE virtual void __cdecl createMsgController(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual void __cdecl createQRCodeController(Androidapi::Jni::Javatypes::_di_JString P1) = 0 /* overload */;
	HIDESBASE virtual void __cdecl createQRCodeController(Androidapi::Jni::Javatypes::_di_JString P1, _di_JMMessage_CallBack P2) = 0 /* overload */;
	HIDESBASE virtual void __cdecl createQRCodeController(Androidapi::Jni::Javatypes::_di_JString P1, _di_JMMessage_CallBack P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 /* overload */;
	HIDESBASE virtual _di_JProfile __cdecl getCurrentProfile(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPluginKey(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual bool __cdecl installPlugin(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual bool __cdecl isPluginInstalled(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual void __cdecl jumpToBindEmail(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual void __cdecl jumpToBindMobile(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual void __cdecl jumpToBindQQ(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
	HIDESBASE virtual void __cdecl jumpToChattingUI(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	HIDESBASE virtual void __cdecl jumpToSettingView(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	HIDESBASE virtual bool __cdecl registerAutoMsg(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	HIDESBASE virtual bool __cdecl registerPattern(Androidapi::Jni::Javatypes::_di_JString P1, _di_JMMessage_CallBack P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	HIDESBASE virtual bool __cdecl registerQRCodePattern(Androidapi::Jni::Javatypes::_di_JString P1, _di_JMMessage_CallBack P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
	HIDESBASE virtual void __cdecl release(void) = 0 ;
	HIDESBASE virtual bool __cdecl sendMsgNotify(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2, int P3, Androidapi::Jni::Javatypes::_di_JString P4, Androidapi::Jni::Javatypes::_di_Jlang_Class P5) = 0 ;
	HIDESBASE virtual bool __cdecl unregisterAutoMsg(Androidapi::Jni::Javatypes::_di_JString P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMPluginAPIImpl : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginAPIImplClass,_di_JMMPluginAPIImpl> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginAPIImplClass,_di_JMMPluginAPIImpl>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMPluginAPIImpl(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginAPIImplClass,_di_JMMPluginAPIImpl> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMPluginAPIImpl(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{52A2E64A-5B99-422A-B54A-7ABAFD6170A0}") JMMPluginMsgClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_AUTO_MSG(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetRECV_MSG(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetRECV_PKG(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetRECV_THUMB(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSEND_ERR_CODE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSEND_ERR_TYPE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSEND_ID(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetTYPE(void) = 0 ;
	virtual int __cdecl _GetTYPE_RECV_MSG(void) = 0 ;
	virtual int __cdecl _GetTYPE_SEND_RET(void) = 0 ;
	virtual _di_JMMPluginMsg __cdecl WXAppExtentObjectToPluginMsg(_di_JWXAppExtendObject P1) = 0 ;
	HIDESBASE virtual _di_JMMPluginMsg __cdecl init(void) = 0 ;
	virtual _di_JWXAppExtendObject __cdecl pluginMsgToWXAppExtendObject(_di_JMMPluginMsg P1) = 0 ;
	virtual __int64 __cdecl sendMessage(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_AUTO_MSG = {read=_GetACTION_AUTO_MSG};
	__property Androidapi::Jni::Javatypes::_di_JString RECV_MSG = {read=_GetRECV_MSG};
	__property Androidapi::Jni::Javatypes::_di_JString RECV_PKG = {read=_GetRECV_PKG};
	__property Androidapi::Jni::Javatypes::_di_JString RECV_THUMB = {read=_GetRECV_THUMB};
	__property Androidapi::Jni::Javatypes::_di_JString SEND_ERR_CODE = {read=_GetSEND_ERR_CODE};
	__property Androidapi::Jni::Javatypes::_di_JString SEND_ERR_TYPE = {read=_GetSEND_ERR_TYPE};
	__property Androidapi::Jni::Javatypes::_di_JString SEND_ID = {read=_GetSEND_ID};
	__property Androidapi::Jni::Javatypes::_di_JString TYPE = {read=_GetTYPE};
	__property int TYPE_RECV_MSG = {read=_GetTYPE_RECV_MSG};
	__property int TYPE_SEND_RET = {read=_GetTYPE_SEND_RET};
};

__interface  INTERFACE_UUID("{807ED65E-67DB-4724-A444-8E446B239CB8}") JMMPluginMsg  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getcontent(void) = 0 ;
	virtual __int64 __cdecl _GetmsgClientId(void) = 0 ;
	virtual void __cdecl _SetmsgClientId(__int64 Value) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString content = {read=_Getcontent};
	__property __int64 msgClientId = {read=_GetmsgClientId, write=_SetmsgClientId};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMPluginMsg : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginMsgClass,_di_JMMPluginMsg> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginMsgClass,_di_JMMPluginMsg>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMPluginMsg(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginMsgClass,_di_JMMPluginMsg> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMPluginMsg(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{7599991B-3581-49C0-8545-CA10C70F0669}") JMMPluginMsg_ReceiverHelperClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JMMPluginMsg_ReceiverHelper __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JIntent P1) = 0 ;
};

__interface  INTERFACE_UUID("{AC8A518B-508F-495B-9160-5789F3DC5306}") JMMPluginMsg_ReceiverHelper  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JIntent __cdecl _Getintent(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getMsgContent(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JInteger __cdecl getSendErrCode(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JInteger __cdecl getSendErrType(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JLong __cdecl getSendMsgId(void) = 0 ;
	virtual bool __cdecl isRecvNew(void) = 0 ;
	virtual bool __cdecl isSendRet(void) = 0 ;
	__property Androidapi::Jni::Graphicscontentviewtext::_di_JIntent intent = {read=_Getintent};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMPluginMsg_ReceiverHelper : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginMsg_ReceiverHelperClass,_di_JMMPluginMsg_ReceiverHelper> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginMsg_ReceiverHelperClass,_di_JMMPluginMsg_ReceiverHelper>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMPluginMsg_ReceiverHelper(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginMsg_ReceiverHelperClass,_di_JMMPluginMsg_ReceiverHelper> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMPluginMsg_ReceiverHelper(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B2E41DD9-FC7F-4867-A2FB-A1BEE3D90BC4}") JMMPluginOAuthClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JMMPluginOAuth __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, _di_JMMPluginOAuth_IResult P2) = 0 ;
};

__interface  INTERFACE_UUID("{8A4A25C5-A720-4F21-8623-D7B36AD6DBC6}") JMMPluginOAuth  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getAccessToken(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getRequestToken(void) = 0 ;
	virtual void __cdecl start(void) = 0 /* overload */;
	virtual bool __cdecl start(Androidapi::Jni::Os::_di_JHandler P1) = 0 /* overload */;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMPluginOAuth : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginOAuthClass,_di_JMMPluginOAuth> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginOAuthClass,_di_JMMPluginOAuth>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMPluginOAuth(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginOAuthClass,_di_JMMPluginOAuth> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMPluginOAuth(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{0598B445-E702-4140-93E0-ABA589E537C5}") JMMPluginOAuth_1Class  : public Androidapi::Jni::Javatypes::JRunnableClass 
{
	virtual _di_JMMPluginOAuth_1 __cdecl init(_di_JMMPluginOAuth P1) = 0 ;
};

__interface  INTERFACE_UUID("{59378792-664E-4FE0-A6E8-26D6B78AA8D8}") JMMPluginOAuth_1  : public Androidapi::Jni::Javatypes::JRunnable 
{
	HIDESBASE virtual void __cdecl run(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMPluginOAuth_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginOAuth_1Class,_di_JMMPluginOAuth_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginOAuth_1Class,_di_JMMPluginOAuth_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMPluginOAuth_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginOAuth_1Class,_di_JMMPluginOAuth_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMPluginOAuth_1(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{5825C440-3FDE-4FC7-92D2-17DA0620CBD6}") JMMPluginOAuth_IResultClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{152E7C2C-CC7B-44F2-9C97-2ACC298596DD}") JMMPluginOAuth_IResult  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onResult(_di_JMMPluginOAuth P1) = 0 ;
	virtual void __cdecl onSessionTimeOut(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMPluginOAuth_IResult : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginOAuth_IResultClass,_di_JMMPluginOAuth_IResult> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginOAuth_IResultClass,_di_JMMPluginOAuth_IResult>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMPluginOAuth_IResult(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginOAuth_IResultClass,_di_JMMPluginOAuth_IResult> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMPluginOAuth_IResult(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{8BBEDF24-1BCD-4812-8518-FC7D189224A9}") JMMPluginOAuth_ReceiverClass  : public Androidapi::Jni::Graphicscontentviewtext::JBroadcastReceiverClass 
{
	HIDESBASE virtual _di_JMMPluginOAuth_Receiver __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JMMPluginOAuth_Receiver __cdecl init(_di_JMMPluginOAuth P1) = 0 /* overload */;
	virtual void __cdecl Register(Androidapi::Jni::Javatypes::_di_JString P1, _di_JMMPluginOAuth P2) = 0 ;
	virtual void __cdecl unregister(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

__interface  INTERFACE_UUID("{344651AD-9A3F-48D9-A36B-A876F5EAD187}") JMMPluginOAuth_Receiver  : public Androidapi::Jni::Graphicscontentviewtext::JBroadcastReceiver 
{
	HIDESBASE virtual void __cdecl onReceive(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1, Androidapi::Jni::Graphicscontentviewtext::_di_JIntent P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMPluginOAuth_Receiver : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginOAuth_ReceiverClass,_di_JMMPluginOAuth_Receiver> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginOAuth_ReceiverClass,_di_JMMPluginOAuth_Receiver>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMPluginOAuth_Receiver(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginOAuth_ReceiverClass,_di_JMMPluginOAuth_Receiver> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMPluginOAuth_Receiver(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{1ED22016-0105-455D-B9B5-5F1F9282265E}") JReceiver_1Class  : public Androidapi::Jni::Javatypes::JRunnableClass 
{
	virtual _di_JReceiver_1 __cdecl init(_di_JMMPluginOAuth_Receiver P1, _di_JMMPluginOAuth P2, Androidapi::Jni::Javatypes::_di_JString P3) = 0 ;
};

__interface  INTERFACE_UUID("{D57690DE-39F4-4EB5-BA23-8B7495D6DEB7}") JReceiver_1  : public Androidapi::Jni::Javatypes::JRunnable 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetbG(void) = 0 ;
	virtual _di_JMMPluginOAuth_Receiver __cdecl _GetbH(void) = 0 ;
	HIDESBASE virtual void __cdecl run(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString bG = {read=_GetbG};
	__property _di_JMMPluginOAuth_Receiver bH = {read=_GetbH};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJReceiver_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JReceiver_1Class,_di_JReceiver_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JReceiver_1Class,_di_JReceiver_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJReceiver_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JReceiver_1Class,_di_JReceiver_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJReceiver_1(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{4A423D30-8955-4A2B-A85C-6BA6FDAF206B}") JMMPluginProviderConstantsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetAUTHORITY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetPLUGIN_PACKAGE_PATTERN(void) = 0 ;
	virtual int __cdecl _GetTYPE_BOOLEAN(void) = 0 ;
	virtual int __cdecl _GetTYPE_DOUBLE(void) = 0 ;
	virtual int __cdecl _GetTYPE_FLOAT(void) = 0 ;
	virtual int __cdecl _GetTYPE_INT(void) = 0 ;
	virtual int __cdecl _GetTYPE_LONG(void) = 0 ;
	virtual int __cdecl _GetTYPE_STRING(void) = 0 ;
	virtual int __cdecl _GetTYPE_UNKNOWN(void) = 0 ;
	HIDESBASE virtual _di_JMMPluginProviderConstants __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString AUTHORITY = {read=_GetAUTHORITY};
	__property Androidapi::Jni::Javatypes::_di_JString PLUGIN_PACKAGE_PATTERN = {read=_GetPLUGIN_PACKAGE_PATTERN};
	__property int TYPE_BOOLEAN = {read=_GetTYPE_BOOLEAN};
	__property int TYPE_DOUBLE = {read=_GetTYPE_DOUBLE};
	__property int TYPE_FLOAT = {read=_GetTYPE_FLOAT};
	__property int TYPE_INT = {read=_GetTYPE_INT};
	__property int TYPE_LONG = {read=_GetTYPE_LONG};
	__property int TYPE_STRING = {read=_GetTYPE_STRING};
	__property int TYPE_UNKNOWN = {read=_GetTYPE_UNKNOWN};
};

__interface  INTERFACE_UUID("{2A8B969B-F58B-4078-976B-A3B666E3B443}") JMMPluginProviderConstants  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMPluginProviderConstants : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstantsClass,_di_JMMPluginProviderConstants> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstantsClass,_di_JMMPluginProviderConstants>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMPluginProviderConstants(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstantsClass,_di_JMMPluginProviderConstants> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMPluginProviderConstants(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{DB3F3F6C-ABB6-4F2C-806F-CAE8F9A10F57}") JMMPluginProviderConstants_OAuthClass  : public Androidapi::Jni::Provider::JBaseColumnsClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACCESS_TOKEN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_REQUEST_TOKEN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetAPI_KEY(void) = 0 ;
	virtual Androidapi::Jni::Net::_di_Jnet_Uri __cdecl _GetCONTENT_URI(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetREQUEST_TOKEN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetSECRET(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString ACCESS_TOKEN = {read=_GetACCESS_TOKEN};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_REQUEST_TOKEN = {read=_GetACTION_REQUEST_TOKEN};
	__property Androidapi::Jni::Javatypes::_di_JString API_KEY = {read=_GetAPI_KEY};
	__property Androidapi::Jni::Net::_di_Jnet_Uri CONTENT_URI = {read=_GetCONTENT_URI};
	__property Androidapi::Jni::Javatypes::_di_JString REQUEST_TOKEN = {read=_GetREQUEST_TOKEN};
	__property Androidapi::Jni::Javatypes::_di_JString SECRET = {read=_GetSECRET};
};

__interface  INTERFACE_UUID("{B27B8E92-43D1-4E7E-AE62-3555DD22E44A}") JMMPluginProviderConstants_OAuth  : public Androidapi::Jni::Provider::JBaseColumns 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMPluginProviderConstants_OAuth : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstants_OAuthClass,_di_JMMPluginProviderConstants_OAuth> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstants_OAuthClass,_di_JMMPluginProviderConstants_OAuth>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMPluginProviderConstants_OAuth(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstants_OAuthClass,_di_JMMPluginProviderConstants_OAuth> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMPluginProviderConstants_OAuth(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{091AB111-1F00-42A6-A358-90C20DB756FC}") JMMPluginProviderConstants_PluginDBClass  : public Androidapi::Jni::Provider::JBaseColumnsClass 
{
	virtual Androidapi::Jni::Net::_di_Jnet_Uri __cdecl _GetCONTENT_URI(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetKEY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetTYPE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetVALUE(void) = 0 ;
	__property Androidapi::Jni::Net::_di_Jnet_Uri CONTENT_URI = {read=_GetCONTENT_URI};
	__property Androidapi::Jni::Javatypes::_di_JString KEY = {read=_GetKEY};
	__property Androidapi::Jni::Javatypes::_di_JString TYPE = {read=_GetTYPE};
	__property Androidapi::Jni::Javatypes::_di_JString VALUE = {read=_GetVALUE};
};

__interface  INTERFACE_UUID("{F22815B0-E226-4517-B397-B4C21561F873}") JMMPluginProviderConstants_PluginDB  : public Androidapi::Jni::Provider::JBaseColumns 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMPluginProviderConstants_PluginDB : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstants_PluginDBClass,_di_JMMPluginProviderConstants_PluginDB> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstants_PluginDBClass,_di_JMMPluginProviderConstants_PluginDB>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMPluginProviderConstants_PluginDB(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstants_PluginDBClass,_di_JMMPluginProviderConstants_PluginDB> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMPluginProviderConstants_PluginDB(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{548EDCC3-89C7-46FA-9B04-DFA704D5FD7F}") JMMPluginProviderConstants_PluginIntentClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACCESS_TOKEN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_QRCODE_SCANNED(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_REQUEST_TOKEN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_RESPONSE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetAPP_PACKAGE_PATTERN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetAUTH_KEY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetNAME(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetPACKAGE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetPERMISSIONS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetPLUGIN_PACKAGE_PATTERN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetREQUEST_TOKEN(void) = 0 ;
	HIDESBASE virtual _di_JMMPluginProviderConstants_PluginIntent __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString ACCESS_TOKEN = {read=_GetACCESS_TOKEN};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_QRCODE_SCANNED = {read=_GetACTION_QRCODE_SCANNED};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_REQUEST_TOKEN = {read=_GetACTION_REQUEST_TOKEN};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_RESPONSE = {read=_GetACTION_RESPONSE};
	__property Androidapi::Jni::Javatypes::_di_JString APP_PACKAGE_PATTERN = {read=_GetAPP_PACKAGE_PATTERN};
	__property Androidapi::Jni::Javatypes::_di_JString AUTH_KEY = {read=_GetAUTH_KEY};
	__property Androidapi::Jni::Javatypes::_di_JString NAME = {read=_GetNAME};
	__property Androidapi::Jni::Javatypes::_di_JString PACKAGE = {read=_GetPACKAGE};
	__property Androidapi::Jni::Javatypes::_di_JString PERMISSIONS = {read=_GetPERMISSIONS};
	__property Androidapi::Jni::Javatypes::_di_JString PLUGIN_PACKAGE_PATTERN = {read=_GetPLUGIN_PACKAGE_PATTERN};
	__property Androidapi::Jni::Javatypes::_di_JString REQUEST_TOKEN = {read=_GetREQUEST_TOKEN};
};

__interface  INTERFACE_UUID("{554F7DE8-63D1-44F8-ACA3-8FC132BC3D06}") JMMPluginProviderConstants_PluginIntent  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMPluginProviderConstants_PluginIntent : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstants_PluginIntentClass,_di_JMMPluginProviderConstants_PluginIntent> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstants_PluginIntentClass,_di_JMMPluginProviderConstants_PluginIntent>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMPluginProviderConstants_PluginIntent(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstants_PluginIntentClass,_di_JMMPluginProviderConstants_PluginIntent> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMPluginProviderConstants_PluginIntent(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FEA10528-E1B5-458F-8624-04C75AC95F75}") JMMPluginProviderConstants_ResolverClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __cdecl getType(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl resolveObj(int P1, Androidapi::Jni::Javatypes::_di_JString P2) = 0 ;
	virtual bool __cdecl unresolveObj(Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P1, Androidapi::Jni::Javatypes::_di_JObject P2) = 0 ;
};

__interface  INTERFACE_UUID("{B40F5F50-BBE6-47E0-AA23-068EB51A58BF}") JMMPluginProviderConstants_Resolver  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMPluginProviderConstants_Resolver : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstants_ResolverClass,_di_JMMPluginProviderConstants_Resolver> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstants_ResolverClass,_di_JMMPluginProviderConstants_Resolver>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMPluginProviderConstants_Resolver(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstants_ResolverClass,_di_JMMPluginProviderConstants_Resolver> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMPluginProviderConstants_Resolver(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{8E03408C-3AA6-4DFA-A301-D8E4741F52B6}") JMMPluginProviderConstants_SharedPrefClass  : public Androidapi::Jni::Provider::JBaseColumnsClass 
{
	virtual Androidapi::Jni::Net::_di_Jnet_Uri __cdecl _GetCONTENT_URI(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetKEY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetTYPE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetVALUE(void) = 0 ;
	__property Androidapi::Jni::Net::_di_Jnet_Uri CONTENT_URI = {read=_GetCONTENT_URI};
	__property Androidapi::Jni::Javatypes::_di_JString KEY = {read=_GetKEY};
	__property Androidapi::Jni::Javatypes::_di_JString TYPE = {read=_GetTYPE};
	__property Androidapi::Jni::Javatypes::_di_JString VALUE = {read=_GetVALUE};
};

__interface  INTERFACE_UUID("{832ED05A-5658-4476-97A8-8B859F87E6F1}") JMMPluginProviderConstants_SharedPref  : public Androidapi::Jni::Provider::JBaseColumns 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMPluginProviderConstants_SharedPref : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstants_SharedPrefClass,_di_JMMPluginProviderConstants_SharedPref> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstants_SharedPrefClass,_di_JMMPluginProviderConstants_SharedPref>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMPluginProviderConstants_SharedPref(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginProviderConstants_SharedPrefClass,_di_JMMPluginProviderConstants_SharedPref> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMPluginProviderConstants_SharedPref(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D52A8EDA-302F-4C5E-8E55-3E39E67AA0EA}") JMMPluginUtilClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JMMPluginUtil __cdecl init(void) = 0 ;
	virtual _di_JIMMPluginAPI __cdecl queryPluginMgr(Androidapi::Jni::Graphicscontentviewtext::_di_JContext P1) = 0 ;
};

__interface  INTERFACE_UUID("{E555F838-2E8F-42AE-BBC9-C99ECAB0ECD0}") JMMPluginUtil  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMMPluginUtil : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginUtilClass,_di_JMMPluginUtil> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginUtilClass,_di_JMMPluginUtil>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMMPluginUtil(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMMPluginUtilClass,_di_JMMPluginUtil> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMMPluginUtil(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B1F59EF2-9446-456E-BE69-CCF0D3F3E648}") JProfileClass  : public JMAutoDBItemClass 
{
	virtual Androidapi::Jni::Net::_di_Jnet_Uri __cdecl _GetCONTENT_URI(void) = 0 ;
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * __cdecl _Getcolumns(void) = 0 ;
	HIDESBASE virtual _di_JProfile __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Net::_di_Jnet_Uri CONTENT_URI = {read=_GetCONTENT_URI};
	__property Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JString> * columns = {read=_Getcolumns};
};

__interface  INTERFACE_UUID("{48DF4A63-7D30-4239-9908-C73C852F2E28}") JProfile  : public JMAutoDBItem 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_alias(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_avatar(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_bindemail(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_bindmobile(void) = 0 ;
	virtual __int64 __cdecl _Getfield_bindqq(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_city(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_nickname(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_province(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_signature(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_username(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _Getfield_weibo(void) = 0 ;
	HIDESBASE virtual Androidapi::Jnibridge::TJavaObjectArray__1<Androidapi::Jni::Javatypes::_di_JField> * __cdecl fields(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString field_alias = {read=_Getfield_alias};
	__property Androidapi::Jni::Javatypes::_di_JString field_avatar = {read=_Getfield_avatar};
	__property Androidapi::Jni::Javatypes::_di_JString field_bindemail = {read=_Getfield_bindemail};
	__property Androidapi::Jni::Javatypes::_di_JString field_bindmobile = {read=_Getfield_bindmobile};
	__property __int64 field_bindqq = {read=_Getfield_bindqq};
	__property Androidapi::Jni::Javatypes::_di_JString field_city = {read=_Getfield_city};
	__property Androidapi::Jni::Javatypes::_di_JString field_nickname = {read=_Getfield_nickname};
	__property Androidapi::Jni::Javatypes::_di_JString field_province = {read=_Getfield_province};
	__property Androidapi::Jni::Javatypes::_di_JString field_signature = {read=_Getfield_signature};
	__property Androidapi::Jni::Javatypes::_di_JString field_username = {read=_Getfield_username};
	__property Androidapi::Jni::Javatypes::_di_JString field_weibo = {read=_Getfield_weibo};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJProfile : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JProfileClass,_di_JProfile> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JProfileClass,_di_JProfile>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJProfile(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JProfileClass,_di_JProfile> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJProfile(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6CA93FA7-FCF3-40DA-89E8-45C670E5C4F9}") Jplugin_package_infoClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{69F642D0-55CF-49B2-94F5-C5D871F00328}") Jplugin_package_info  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJplugin_package_info : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jplugin_package_infoClass,_di_Jplugin_package_info> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jplugin_package_infoClass,_di_Jplugin_package_info>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJplugin_package_info(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jplugin_package_infoClass,_di_Jplugin_package_info> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJplugin_package_info(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{AD1D2032-B3AB-4927-9EB7-882A909CF7AB}") JCursorFieldHelperClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JMethod __cdecl get(Androidapi::Jni::Javatypes::_di_Jlang_Class P1, bool P2) = 0 ;
	virtual void __cdecl keep_getBlob(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P3) = 0 ;
	virtual void __cdecl keep_getBoolean(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P3) = 0 ;
	virtual void __cdecl keep_getDouble(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P3) = 0 ;
	virtual void __cdecl keep_getFloat(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P3) = 0 ;
	virtual void __cdecl keep_getInt(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P3) = 0 ;
	virtual void __cdecl keep_getLong(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P3) = 0 ;
	virtual void __cdecl keep_getShort(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P3) = 0 ;
	virtual void __cdecl keep_getString(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JContentValues P3) = 0 ;
	virtual void __cdecl keep_setBlob(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JCursor P3, int P4) = 0 ;
	virtual void __cdecl keep_setBoolean(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JCursor P3, int P4) = 0 ;
	virtual void __cdecl keep_setDouble(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JCursor P3, int P4) = 0 ;
	virtual void __cdecl keep_setFloat(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JCursor P3, int P4) = 0 ;
	virtual void __cdecl keep_setInt(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JCursor P3, int P4) = 0 ;
	virtual void __cdecl keep_setLong(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JCursor P3, int P4) = 0 ;
	virtual void __cdecl keep_setShort(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JCursor P3, int P4) = 0 ;
	virtual void __cdecl keep_setString(Androidapi::Jni::Javatypes::_di_JField P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Graphicscontentviewtext::_di_JCursor P3, int P4) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl type(Androidapi::Jni::Javatypes::_di_Jlang_Class P1) = 0 ;
};

__interface  INTERFACE_UUID("{590ACBD4-5865-426B-954B-F786D6831710}") JCursorFieldHelper  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCursorFieldHelper : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCursorFieldHelperClass,_di_JCursorFieldHelper> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCursorFieldHelperClass,_di_JCursorFieldHelper>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCursorFieldHelper(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCursorFieldHelperClass,_di_JCursorFieldHelper> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCursorFieldHelper(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A059E8FC-05CA-4DB4-94AF-D10FC62B4C59}") JMStorageEventClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JMStorageEvent __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{E48D50B1-9D7B-43CC-BEDC-5CB83BB29FFE}") JMStorageEvent  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl add(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Os::_di_JLooper P2) = 0 ;
	virtual void __cdecl doNotify(void) = 0 ;
	virtual bool __cdecl event(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual bool __cdecl isLocked(void) = 0 ;
	virtual void __cdecl lock(void) = 0 ;
	virtual void __cdecl remove(Androidapi::Jni::Javatypes::_di_JObject P1) = 0 ;
	virtual void __cdecl removeAll(void) = 0 ;
	virtual void __cdecl unlock(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMStorageEvent : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorageEventClass,_di_JMStorageEvent> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorageEventClass,_di_JMStorageEvent>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMStorageEvent(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorageEventClass,_di_JMStorageEvent> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMStorageEvent(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F01A5804-9FDC-4BCF-84C1-EC1AAFCA1197}") JMStorage_1Class  : public JMStorageEventClass 
{
	HIDESBASE virtual _di_JMStorage_1 __cdecl init(_di_JMStorage P1) = 0 ;
};

__interface  INTERFACE_UUID("{885AE44D-0B0B-47D9-A72C-95FE342D567B}") JMStorage_1  : public JMStorageEvent 
{
	virtual void __cdecl processEvent(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_JObject P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMStorage_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorage_1Class,_di_JMStorage_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorage_1Class,_di_JMStorage_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMStorage_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorage_1Class,_di_JMStorage_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMStorage_1(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F980B31F-5D0B-46B5-81A4-3CE2671CEF8E}") JMStorage_2Class  : public JMStorageEventClass 
{
	HIDESBASE virtual _di_JMStorage_2 __cdecl init(_di_JMStorage P1) = 0 ;
};

__interface  INTERFACE_UUID("{D5BDFD18-F6D5-41AC-BC7A-7346710773E9}") JMStorage_2  : public JMStorageEvent 
{
	virtual void __cdecl processEvent(Androidapi::Jni::Javatypes::_di_JObject P1, Androidapi::Jni::Javatypes::_di_JObject P2) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMStorage_2 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorage_2Class,_di_JMStorage_2> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorage_2Class,_di_JMStorage_2>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMStorage_2(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorage_2Class,_di_JMStorage_2> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMStorage_2(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{60C29B3F-6492-40E5-B7C8-D00ECF8A1142}") JMStorage_IOnStorageChangeClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{E1F612F5-5093-411A-9531-3F7B589A97CF}") JMStorage_IOnStorageChange  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onNotifyChange(Androidapi::Jni::Javatypes::_di_JString P1) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMStorage_IOnStorageChange : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorage_IOnStorageChangeClass,_di_JMStorage_IOnStorageChange> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorage_IOnStorageChangeClass,_di_JMStorage_IOnStorageChange>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMStorage_IOnStorageChange(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorage_IOnStorageChangeClass,_di_JMStorage_IOnStorageChange> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMStorage_IOnStorageChange(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{555D12F5-9514-47D0-9FB6-5BF1883B151C}") JMStorage_IOnStorageLoadedClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{977EEB5E-D633-4D0D-B52B-B37AC6560B87}") JMStorage_IOnStorageLoaded  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onNotifyLoaded(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMStorage_IOnStorageLoaded : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorage_IOnStorageLoadedClass,_di_JMStorage_IOnStorageLoaded> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorage_IOnStorageLoadedClass,_di_JMStorage_IOnStorageLoaded>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMStorage_IOnStorageLoaded(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorage_IOnStorageLoadedClass,_di_JMStorage_IOnStorageLoaded> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMStorage_IOnStorageLoaded(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B074F30B-FDA7-4236-9F4E-63B8C0E66131}") JMStorageEvent_1Class  : public Androidapi::Jni::Javatypes::JRunnableClass 
{
	virtual _di_JMStorageEvent_1 __cdecl init(_di_JMStorageEvent P1, Androidapi::Jni::Javatypes::_di_JObject P2, Androidapi::Jni::Javatypes::_di_JObject P3) = 0 ;
};

__interface  INTERFACE_UUID("{68EA96DA-0EF0-4990-8098-B036FA354CCF}") JMStorageEvent_1  : public Androidapi::Jni::Javatypes::JRunnable 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl _GetbT(void) = 0 ;
	virtual _di_JMStorageEvent __cdecl _GetbU(void) = 0 ;
	HIDESBASE virtual void __cdecl run(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JObject bT = {read=_GetbT};
	__property _di_JMStorageEvent bU = {read=_GetbU};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMStorageEvent_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorageEvent_1Class,_di_JMStorageEvent_1> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorageEvent_1Class,_di_JMStorageEvent_1>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMStorageEvent_1(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMStorageEvent_1Class,_di_JMStorageEvent_1> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMStorageEvent_1(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{92FE538E-1C58-49B3-8A3A-0BDDD407207A}") Jstorage_package_infoClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{3466882D-7F78-4306-BBB2-37161522BFC0}") Jstorage_package_info  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJstorage_package_info : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jstorage_package_infoClass,_di_Jstorage_package_info> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jstorage_package_infoClass,_di_Jstorage_package_info>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJstorage_package_info(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_Jstorage_package_infoClass,_di_Jstorage_package_info> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJstorage_package_info(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{98E7A327-E5F0-4B6E-8F3D-B60233CEC554}") JLinkedHashMapClass  : public Androidapi::Jni::Javatypes::JHashMapClass 
{
	HIDESBASE virtual _di_JLinkedHashMap __cdecl init(void) = 0 /* overload */;
	HIDESBASE virtual _di_JLinkedHashMap __cdecl init(int initialCapacity) = 0 /* overload */;
	HIDESBASE virtual _di_JLinkedHashMap __cdecl init(int initialCapacity, float loadFactor) = 0 /* overload */;
	HIDESBASE virtual _di_JLinkedHashMap __cdecl init(int initialCapacity, float loadFactor, bool accessOrder) = 0 /* overload */;
	HIDESBASE virtual _di_JLinkedHashMap __cdecl init(Androidapi::Jni::Javatypes::_di_JMap map) = 0 /* overload */;
	virtual bool __cdecl containsValue(Androidapi::Jni::Javatypes::_di_JObject value) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl get(Androidapi::Jni::Javatypes::_di_JObject key) = 0 ;
};

__interface  INTERFACE_UUID("{84983501-7304-4442-ACFA-5C3AE1DC2739}") JLinkedHashMap  : public Androidapi::Jni::Javatypes::JHashMap 
{
	HIDESBASE virtual void __cdecl clear(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJLinkedHashMap : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLinkedHashMapClass,_di_JLinkedHashMap> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLinkedHashMapClass,_di_JLinkedHashMap>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJLinkedHashMap(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JLinkedHashMapClass,_di_JLinkedHashMap> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJLinkedHashMap(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{CC37442E-BEA1-4D74-827E-0C89FA654831}") JMap_EntryClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject object_) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getKey(void) = 0 ;
};

__interface  INTERFACE_UUID("{9D6A0684-A3FC-4629-A08A-36EDDA31753D}") JMap_Entry  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getValue(void) = 0 ;
	virtual int __cdecl hashCode(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl setValue(Androidapi::Jni::Javatypes::_di_JObject object_) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJMap_Entry : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMap_EntryClass,_di_JMap_Entry> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMap_EntryClass,_di_JMap_Entry>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJMap_Entry(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JMap_EntryClass,_di_JMap_Entry> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJMap_Entry(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{4FF9B265-CEE8-4AB9-B74A-5F2D9CED8981}") JNodeClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual short __cdecl _GetATTRIBUTE_NODE(void) = 0 ;
	virtual short __cdecl _GetCDATA_SECTION_NODE(void) = 0 ;
	virtual short __cdecl _GetCOMMENT_NODE(void) = 0 ;
	virtual short __cdecl _GetDOCUMENT_FRAGMENT_NODE(void) = 0 ;
	virtual short __cdecl _GetDOCUMENT_NODE(void) = 0 ;
	virtual short __cdecl _GetDOCUMENT_POSITION_CONTAINED_BY(void) = 0 ;
	virtual short __cdecl _GetDOCUMENT_POSITION_CONTAINS(void) = 0 ;
	virtual short __cdecl _GetDOCUMENT_POSITION_DISCONNECTED(void) = 0 ;
	virtual short __cdecl _GetDOCUMENT_POSITION_FOLLOWING(void) = 0 ;
	virtual short __cdecl _GetDOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC(void) = 0 ;
	virtual short __cdecl _GetDOCUMENT_POSITION_PRECEDING(void) = 0 ;
	virtual short __cdecl _GetDOCUMENT_TYPE_NODE(void) = 0 ;
	virtual short __cdecl _GetELEMENT_NODE(void) = 0 ;
	virtual short __cdecl _GetENTITY_NODE(void) = 0 ;
	virtual short __cdecl _GetENTITY_REFERENCE_NODE(void) = 0 ;
	virtual short __cdecl _GetNOTATION_NODE(void) = 0 ;
	virtual short __cdecl _GetPROCESSING_INSTRUCTION_NODE(void) = 0 ;
	virtual short __cdecl _GetTEXT_NODE(void) = 0 ;
	virtual _di_JNamedNodeMap __cdecl getAttributes(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getBaseURI(void) = 0 ;
	virtual _di_JNodeList __cdecl getChildNodes(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getLocalName(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getNamespaceURI(void) = 0 ;
	virtual _di_JNode __cdecl getNextSibling(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getNodeValue(void) = 0 ;
	virtual _di_JDocument __cdecl getOwnerDocument(void) = 0 ;
	virtual _di_JNode __cdecl getParentNode(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getUserData(Androidapi::Jni::Javatypes::_di_JString key) = 0 ;
	virtual bool __cdecl hasAttributes(void) = 0 ;
	virtual bool __cdecl hasChildNodes(void) = 0 ;
	virtual bool __cdecl isSameNode(_di_JNode other) = 0 ;
	virtual bool __cdecl isSupported(Androidapi::Jni::Javatypes::_di_JString feature, Androidapi::Jni::Javatypes::_di_JString version) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl lookupNamespaceURI(Androidapi::Jni::Javatypes::_di_JString prefix) = 0 ;
	virtual _di_JNode __cdecl replaceChild(_di_JNode newChild, _di_JNode oldChild) = 0 ;
	virtual void __cdecl setNodeValue(Androidapi::Jni::Javatypes::_di_JString nodeValue) = 0 ;
	virtual void __cdecl setPrefix(Androidapi::Jni::Javatypes::_di_JString prefix) = 0 ;
	__property short ATTRIBUTE_NODE = {read=_GetATTRIBUTE_NODE};
	__property short CDATA_SECTION_NODE = {read=_GetCDATA_SECTION_NODE};
	__property short COMMENT_NODE = {read=_GetCOMMENT_NODE};
	__property short DOCUMENT_FRAGMENT_NODE = {read=_GetDOCUMENT_FRAGMENT_NODE};
	__property short DOCUMENT_NODE = {read=_GetDOCUMENT_NODE};
	__property short DOCUMENT_POSITION_CONTAINED_BY = {read=_GetDOCUMENT_POSITION_CONTAINED_BY};
	__property short DOCUMENT_POSITION_CONTAINS = {read=_GetDOCUMENT_POSITION_CONTAINS};
	__property short DOCUMENT_POSITION_DISCONNECTED = {read=_GetDOCUMENT_POSITION_DISCONNECTED};
	__property short DOCUMENT_POSITION_FOLLOWING = {read=_GetDOCUMENT_POSITION_FOLLOWING};
	__property short DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC = {read=_GetDOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC};
	__property short DOCUMENT_POSITION_PRECEDING = {read=_GetDOCUMENT_POSITION_PRECEDING};
	__property short DOCUMENT_TYPE_NODE = {read=_GetDOCUMENT_TYPE_NODE};
	__property short ELEMENT_NODE = {read=_GetELEMENT_NODE};
	__property short ENTITY_NODE = {read=_GetENTITY_NODE};
	__property short ENTITY_REFERENCE_NODE = {read=_GetENTITY_REFERENCE_NODE};
	__property short NOTATION_NODE = {read=_GetNOTATION_NODE};
	__property short PROCESSING_INSTRUCTION_NODE = {read=_GetPROCESSING_INSTRUCTION_NODE};
	__property short TEXT_NODE = {read=_GetTEXT_NODE};
};

__interface  INTERFACE_UUID("{35CFF397-04C8-489D-9C62-607EFFA8B051}") JNode  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual _di_JNode __cdecl appendChild(_di_JNode newChild) = 0 ;
	virtual _di_JNode __cdecl cloneNode(bool deep) = 0 ;
	virtual short __cdecl compareDocumentPosition(_di_JNode other) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getFeature(Androidapi::Jni::Javatypes::_di_JString feature, Androidapi::Jni::Javatypes::_di_JString version) = 0 ;
	virtual _di_JNode __cdecl getFirstChild(void) = 0 ;
	virtual _di_JNode __cdecl getLastChild(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getNodeName(void) = 0 ;
	virtual short __cdecl getNodeType(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPrefix(void) = 0 ;
	virtual _di_JNode __cdecl getPreviousSibling(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getTextContent(void) = 0 ;
	virtual _di_JNode __cdecl insertBefore(_di_JNode newChild, _di_JNode refChild) = 0 ;
	virtual bool __cdecl isDefaultNamespace(Androidapi::Jni::Javatypes::_di_JString namespaceURI) = 0 ;
	virtual bool __cdecl isEqualNode(_di_JNode arg) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl lookupPrefix(Androidapi::Jni::Javatypes::_di_JString namespaceURI) = 0 ;
	virtual void __cdecl normalize(void) = 0 ;
	virtual _di_JNode __cdecl removeChild(_di_JNode oldChild) = 0 ;
	virtual void __cdecl setTextContent(Androidapi::Jni::Javatypes::_di_JString textContent) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl setUserData(Androidapi::Jni::Javatypes::_di_JString key, Androidapi::Jni::Javatypes::_di_JObject data, _di_JUserDataHandler handler) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJNode : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNodeClass,_di_JNode> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNodeClass,_di_JNode>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJNode(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNodeClass,_di_JNode> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJNode(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{5FB044B8-0031-4520-B87A-3CDB994277D7}") JAttrClass  : public JNodeClass 
{
	virtual bool __cdecl getSpecified(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getValue(void) = 0 ;
	virtual bool __cdecl isId(void) = 0 ;
};

__interface  INTERFACE_UUID("{F9FC2FA5-CCAD-4D11-8B8D-3958C5F55273}") JAttr  : public JNode 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getName(void) = 0 ;
	virtual _di_JElement __cdecl getOwnerElement(void) = 0 ;
	virtual _di_JTypeInfo __cdecl getSchemaTypeInfo(void) = 0 ;
	virtual void __cdecl setValue(Androidapi::Jni::Javatypes::_di_JString value) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJAttr : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAttrClass,_di_JAttr> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAttrClass,_di_JAttr>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAttr(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAttrClass,_di_JAttr> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAttr(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2C17F389-87C1-444E-957E-9F54C1531B5A}") JCharacterDataClass  : public JNodeClass 
{
	virtual int __cdecl getLength(void) = 0 ;
	virtual void __cdecl insertData(int offset, Androidapi::Jni::Javatypes::_di_JString arg) = 0 ;
	virtual void __cdecl replaceData(int offset, int count, Androidapi::Jni::Javatypes::_di_JString arg) = 0 ;
};

__interface  INTERFACE_UUID("{10B18FAD-C168-4834-9BF9-996C53B31D9E}") JCharacterData  : public JNode 
{
	virtual void __cdecl appendData(Androidapi::Jni::Javatypes::_di_JString arg) = 0 ;
	virtual void __cdecl deleteData(int offset, int count) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getData(void) = 0 ;
	virtual void __cdecl setData(Androidapi::Jni::Javatypes::_di_JString data) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl substringData(int offset, int count) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCharacterData : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharacterDataClass,_di_JCharacterData> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharacterDataClass,_di_JCharacterData>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCharacterData(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCharacterDataClass,_di_JCharacterData> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCharacterData(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A1698F81-D2B1-4131-A464-3E6A6ADD1D56}") JTextClass  : public JCharacterDataClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getWholeText(void) = 0 ;
	virtual bool __cdecl isElementContentWhitespace(void) = 0 ;
	virtual _di_JText __cdecl replaceWholeText(Androidapi::Jni::Javatypes::_di_JString content) = 0 ;
};

__interface  INTERFACE_UUID("{FAE4042A-1DDA-4B7D-BCFC-3C629B2818A4}") JText  : public JCharacterData 
{
	virtual _di_JText __cdecl splitText(int offset) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJText : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextClass,_di_JText> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextClass,_di_JText>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJText(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextClass,_di_JText> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJText(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{7CBFD045-12AF-4D98-A080-469281E3B4DA}") JCDATASectionClass  : public JTextClass 
{
	
};

__interface  INTERFACE_UUID("{58B470DE-13D3-4B4A-A9B7-5F03E4D4CD75}") JCDATASection  : public JText 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJCDATASection : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCDATASectionClass,_di_JCDATASection> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCDATASectionClass,_di_JCDATASection>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCDATASection(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCDATASectionClass,_di_JCDATASection> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCDATASection(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{44667247-E701-4F4A-A4A6-1B2C2249BD0E}") JCommentClass  : public JCharacterDataClass 
{
	
};

__interface  INTERFACE_UUID("{4E3A4920-FC80-4A44-A6A8-DBCC5D94A473}") JComment  : public JCharacterData 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJComment : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCommentClass,_di_JComment> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCommentClass,_di_JComment>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJComment(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCommentClass,_di_JComment> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJComment(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{DECB79BC-0125-4589-A7F9-4515540AE6A2}") JDOMConfigurationClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl canSetParameter(Androidapi::Jni::Javatypes::_di_JString name, Androidapi::Jni::Javatypes::_di_JObject value) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getParameter(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
};

__interface  INTERFACE_UUID("{E8ABF7F9-F6D5-41BB-939D-8012C99B087D}") JDOMConfiguration  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual _di_JDOMStringList __cdecl getParameterNames(void) = 0 ;
	virtual void __cdecl setParameter(Androidapi::Jni::Javatypes::_di_JString name, Androidapi::Jni::Javatypes::_di_JObject value) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDOMConfiguration : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDOMConfigurationClass,_di_JDOMConfiguration> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDOMConfigurationClass,_di_JDOMConfiguration>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDOMConfiguration(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDOMConfigurationClass,_di_JDOMConfiguration> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDOMConfiguration(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B1E4F8D3-F1BD-4F6C-B4ED-0310907DF7A4}") JDOMImplementationClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual bool __cdecl hasFeature(Androidapi::Jni::Javatypes::_di_JString feature, Androidapi::Jni::Javatypes::_di_JString version) = 0 ;
};

__interface  INTERFACE_UUID("{B1DCFB4D-AA66-4B31-A161-7E7D420C0BD4}") JDOMImplementation  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual _di_JDocument __cdecl createDocument(Androidapi::Jni::Javatypes::_di_JString namespaceURI, Androidapi::Jni::Javatypes::_di_JString qualifiedName, _di_JDocumentType doctype) = 0 ;
	virtual _di_JDocumentType __cdecl createDocumentType(Androidapi::Jni::Javatypes::_di_JString qualifiedName, Androidapi::Jni::Javatypes::_di_JString publicId, Androidapi::Jni::Javatypes::_di_JString systemId) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getFeature(Androidapi::Jni::Javatypes::_di_JString feature, Androidapi::Jni::Javatypes::_di_JString version) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDOMImplementation : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDOMImplementationClass,_di_JDOMImplementation> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDOMImplementationClass,_di_JDOMImplementation>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDOMImplementation(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDOMImplementationClass,_di_JDOMImplementation> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDOMImplementation(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{07E16943-A1B1-457E-B687-6BF0DC8A0B2B}") JDOMStringListClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl item(int index) = 0 ;
};

__interface  INTERFACE_UUID("{429D640E-1DB3-442F-9ABF-98965BDEF484}") JDOMStringList  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual bool __cdecl contains(Androidapi::Jni::Javatypes::_di_JString str) = 0 ;
	virtual int __cdecl getLength(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDOMStringList : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDOMStringListClass,_di_JDOMStringList> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDOMStringListClass,_di_JDOMStringList>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDOMStringList(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDOMStringListClass,_di_JDOMStringList> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDOMStringList(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D6F13E91-584B-40E3-98D4-A49B673E1FAA}") JDocumentClass  : public JNodeClass 
{
	virtual _di_JAttr __cdecl createAttributeNS(Androidapi::Jni::Javatypes::_di_JString namespaceURI, Androidapi::Jni::Javatypes::_di_JString qualifiedName) = 0 ;
	virtual _di_JCDATASection __cdecl createCDATASection(Androidapi::Jni::Javatypes::_di_JString data) = 0 ;
	virtual _di_JComment __cdecl createComment(Androidapi::Jni::Javatypes::_di_JString data) = 0 ;
	virtual _di_JEntityReference __cdecl createEntityReference(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual _di_JProcessingInstruction __cdecl createProcessingInstruction(Androidapi::Jni::Javatypes::_di_JString target, Androidapi::Jni::Javatypes::_di_JString data) = 0 ;
	virtual _di_JText __cdecl createTextNode(Androidapi::Jni::Javatypes::_di_JString data) = 0 ;
	virtual _di_JDOMConfiguration __cdecl getDomConfig(void) = 0 ;
	virtual _di_JElement __cdecl getElementById(Androidapi::Jni::Javatypes::_di_JString elementId) = 0 ;
	virtual _di_JNodeList __cdecl getElementsByTagName(Androidapi::Jni::Javatypes::_di_JString tagname) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getInputEncoding(void) = 0 ;
	virtual bool __cdecl getStrictErrorChecking(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getXmlEncoding(void) = 0 ;
	virtual void __cdecl normalizeDocument(void) = 0 ;
	virtual _di_JNode __cdecl renameNode(_di_JNode n, Androidapi::Jni::Javatypes::_di_JString namespaceURI, Androidapi::Jni::Javatypes::_di_JString qualifiedName) = 0 ;
	virtual void __cdecl setDocumentURI(Androidapi::Jni::Javatypes::_di_JString documentURI) = 0 ;
};

__interface  INTERFACE_UUID("{A1A54941-AF47-44E3-9987-16699E7D7AE8}") JDocument  : public JNode 
{
	virtual _di_JNode __cdecl adoptNode(_di_JNode source) = 0 ;
	virtual _di_JAttr __cdecl createAttribute(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual _di_JDocumentFragment __cdecl createDocumentFragment(void) = 0 ;
	virtual _di_JElement __cdecl createElement(Androidapi::Jni::Javatypes::_di_JString tagName) = 0 ;
	virtual _di_JElement __cdecl createElementNS(Androidapi::Jni::Javatypes::_di_JString namespaceURI, Androidapi::Jni::Javatypes::_di_JString qualifiedName) = 0 ;
	virtual _di_JDocumentType __cdecl getDoctype(void) = 0 ;
	virtual _di_JElement __cdecl getDocumentElement(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDocumentURI(void) = 0 ;
	virtual _di_JNodeList __cdecl getElementsByTagNameNS(Androidapi::Jni::Javatypes::_di_JString namespaceURI, Androidapi::Jni::Javatypes::_di_JString localName) = 0 ;
	virtual _di_JDOMImplementation __cdecl getImplementation(void) = 0 ;
	virtual bool __cdecl getXmlStandalone(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getXmlVersion(void) = 0 ;
	virtual _di_JNode __cdecl importNode(_di_JNode importedNode, bool deep) = 0 ;
	virtual void __cdecl setStrictErrorChecking(bool strictErrorChecking) = 0 ;
	virtual void __cdecl setXmlStandalone(bool xmlStandalone) = 0 ;
	virtual void __cdecl setXmlVersion(Androidapi::Jni::Javatypes::_di_JString xmlVersion) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDocument : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDocumentClass,_di_JDocument> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDocumentClass,_di_JDocument>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDocument(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDocumentClass,_di_JDocument> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDocument(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C7329109-13F5-4DAF-9B1D-67C135CA426E}") JDocumentFragmentClass  : public JNodeClass 
{
	
};

__interface  INTERFACE_UUID("{58188EC9-6A2F-4B05-B94E-0DF20D5C2214}") JDocumentFragment  : public JNode 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDocumentFragment : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDocumentFragmentClass,_di_JDocumentFragment> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDocumentFragmentClass,_di_JDocumentFragment>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDocumentFragment(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDocumentFragmentClass,_di_JDocumentFragment> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDocumentFragment(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{0A107FFB-8693-4B27-9422-07B0ACCAD242}") JDocumentTypeClass  : public JNodeClass 
{
	virtual _di_JNamedNodeMap __cdecl getEntities(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getInternalSubset(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getName(void) = 0 ;
};

__interface  INTERFACE_UUID("{CFD608DB-450E-45EA-BEC6-B680E662E816}") JDocumentType  : public JNode 
{
	virtual _di_JNamedNodeMap __cdecl getNotations(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPublicId(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getSystemId(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJDocumentType : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDocumentTypeClass,_di_JDocumentType> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDocumentTypeClass,_di_JDocumentType>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJDocumentType(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JDocumentTypeClass,_di_JDocumentType> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJDocumentType(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{02A52262-29B4-4297-859E-FDCE017479D5}") JElementClass  : public JNodeClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getAttribute(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getAttributeNS(Androidapi::Jni::Javatypes::_di_JString namespaceURI, Androidapi::Jni::Javatypes::_di_JString localName) = 0 ;
	virtual _di_JNodeList __cdecl getElementsByTagName(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual _di_JNodeList __cdecl getElementsByTagNameNS(Androidapi::Jni::Javatypes::_di_JString namespaceURI, Androidapi::Jni::Javatypes::_di_JString localName) = 0 ;
	virtual _di_JTypeInfo __cdecl getSchemaTypeInfo(void) = 0 ;
	virtual void __cdecl removeAttribute(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual void __cdecl removeAttributeNS(Androidapi::Jni::Javatypes::_di_JString namespaceURI, Androidapi::Jni::Javatypes::_di_JString localName) = 0 ;
	virtual _di_JAttr __cdecl removeAttributeNode(_di_JAttr oldAttr) = 0 ;
	virtual _di_JAttr __cdecl setAttributeNodeNS(_di_JAttr newAttr) = 0 ;
	virtual void __cdecl setIdAttribute(Androidapi::Jni::Javatypes::_di_JString name, bool isId) = 0 ;
	virtual void __cdecl setIdAttributeNS(Androidapi::Jni::Javatypes::_di_JString namespaceURI, Androidapi::Jni::Javatypes::_di_JString localName, bool isId) = 0 ;
};

__interface  INTERFACE_UUID("{953C1ADD-28E2-4725-95C9-B2E518AE79F9}") JElement  : public JNode 
{
	virtual _di_JAttr __cdecl getAttributeNode(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual _di_JAttr __cdecl getAttributeNodeNS(Androidapi::Jni::Javatypes::_di_JString namespaceURI, Androidapi::Jni::Javatypes::_di_JString localName) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getTagName(void) = 0 ;
	virtual bool __cdecl hasAttribute(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual bool __cdecl hasAttributeNS(Androidapi::Jni::Javatypes::_di_JString namespaceURI, Androidapi::Jni::Javatypes::_di_JString localName) = 0 ;
	virtual void __cdecl setAttribute(Androidapi::Jni::Javatypes::_di_JString name, Androidapi::Jni::Javatypes::_di_JString value) = 0 ;
	virtual void __cdecl setAttributeNS(Androidapi::Jni::Javatypes::_di_JString namespaceURI, Androidapi::Jni::Javatypes::_di_JString qualifiedName, Androidapi::Jni::Javatypes::_di_JString value) = 0 ;
	virtual _di_JAttr __cdecl setAttributeNode(_di_JAttr newAttr) = 0 ;
	virtual void __cdecl setIdAttributeNode(_di_JAttr idAttr, bool isId) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJElement : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JElementClass,_di_JElement> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JElementClass,_di_JElement>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJElement(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JElementClass,_di_JElement> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJElement(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{EDE635BA-9CEC-473C-BF75-163686CB36BB}") JEntityReferenceClass  : public JNodeClass 
{
	
};

__interface  INTERFACE_UUID("{47BBF06F-638E-47A8-8BE2-1FC93F0A2067}") JEntityReference  : public JNode 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJEntityReference : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JEntityReferenceClass,_di_JEntityReference> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JEntityReferenceClass,_di_JEntityReference>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJEntityReference(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JEntityReferenceClass,_di_JEntityReference> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJEntityReference(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FD563D08-BB75-461A-B13C-8C7DF3E00CC5}") JNamedNodeMapClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual _di_JNode __cdecl getNamedItemNS(Androidapi::Jni::Javatypes::_di_JString namespaceURI, Androidapi::Jni::Javatypes::_di_JString localName) = 0 ;
	virtual _di_JNode __cdecl item(int index) = 0 ;
	virtual _di_JNode __cdecl setNamedItemNS(_di_JNode arg) = 0 ;
};

__interface  INTERFACE_UUID("{92F9509D-82EA-4290-A970-7BB551F08679}") JNamedNodeMap  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual int __cdecl getLength(void) = 0 ;
	virtual _di_JNode __cdecl getNamedItem(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual _di_JNode __cdecl removeNamedItem(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual _di_JNode __cdecl removeNamedItemNS(Androidapi::Jni::Javatypes::_di_JString namespaceURI, Androidapi::Jni::Javatypes::_di_JString localName) = 0 ;
	virtual _di_JNode __cdecl setNamedItem(_di_JNode arg) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJNamedNodeMap : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNamedNodeMapClass,_di_JNamedNodeMap> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNamedNodeMapClass,_di_JNamedNodeMap>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJNamedNodeMap(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNamedNodeMapClass,_di_JNamedNodeMap> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJNamedNodeMap(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6F6D0FED-4199-4F79-ABA2-C93007B65A8C}") JNodeListClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual _di_JNode __cdecl item(int index) = 0 ;
};

__interface  INTERFACE_UUID("{E6AE0711-1F43-4D8B-A153-47286455EFAF}") JNodeList  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual int __cdecl getLength(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJNodeList : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNodeListClass,_di_JNodeList> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNodeListClass,_di_JNodeList>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJNodeList(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JNodeListClass,_di_JNodeList> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJNodeList(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9B71FB69-7682-435D-9031-529E15076309}") JProcessingInstructionClass  : public JNodeClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getData(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getTarget(void) = 0 ;
	virtual void __cdecl setData(Androidapi::Jni::Javatypes::_di_JString data) = 0 ;
};

__interface  INTERFACE_UUID("{50F37F5A-E5A2-4190-B19F-820997AF3D4C}") JProcessingInstruction  : public JNode 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJProcessingInstruction : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JProcessingInstructionClass,_di_JProcessingInstruction> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JProcessingInstructionClass,_di_JProcessingInstruction>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJProcessingInstruction(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JProcessingInstructionClass,_di_JProcessingInstruction> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJProcessingInstruction(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{532BAFC7-6829-43E4-9478-E739B90EE1FC}") JTypeInfoClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual int __cdecl _GetDERIVATION_EXTENSION(void) = 0 ;
	virtual int __cdecl _GetDERIVATION_LIST(void) = 0 ;
	virtual int __cdecl _GetDERIVATION_RESTRICTION(void) = 0 ;
	virtual int __cdecl _GetDERIVATION_UNION(void) = 0 ;
	__property int DERIVATION_EXTENSION = {read=_GetDERIVATION_EXTENSION};
	__property int DERIVATION_LIST = {read=_GetDERIVATION_LIST};
	__property int DERIVATION_RESTRICTION = {read=_GetDERIVATION_RESTRICTION};
	__property int DERIVATION_UNION = {read=_GetDERIVATION_UNION};
};

__interface  INTERFACE_UUID("{876A11F9-8450-45FF-8F4F-F9D68333BDEF}") JTypeInfo  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getTypeName(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getTypeNamespace(void) = 0 ;
	virtual bool __cdecl isDerivedFrom(Androidapi::Jni::Javatypes::_di_JString typeNamespaceArg, Androidapi::Jni::Javatypes::_di_JString typeNameArg, int derivationMethod) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTypeInfo : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTypeInfoClass,_di_JTypeInfo> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTypeInfoClass,_di_JTypeInfo>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJTypeInfo(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTypeInfoClass,_di_JTypeInfo> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJTypeInfo(void) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{AD3B738E-675E-4B2E-869D-6888E7959C0B}") JUserDataHandlerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual short __cdecl _GetNODE_ADOPTED(void) = 0 ;
	virtual short __cdecl _GetNODE_CLONED(void) = 0 ;
	virtual short __cdecl _GetNODE_DELETED(void) = 0 ;
	virtual short __cdecl _GetNODE_IMPORTED(void) = 0 ;
	virtual short __cdecl _GetNODE_RENAMED(void) = 0 ;
	virtual void __cdecl handle(short operation, Androidapi::Jni::Javatypes::_di_JString key, Androidapi::Jni::Javatypes::_di_JObject data, _di_JNode src, _di_JNode dst) = 0 ;
	__property short NODE_ADOPTED = {read=_GetNODE_ADOPTED};
	__property short NODE_CLONED = {read=_GetNODE_CLONED};
	__property short NODE_DELETED = {read=_GetNODE_DELETED};
	__property short NODE_IMPORTED = {read=_GetNODE_IMPORTED};
	__property short NODE_RENAMED = {read=_GetNODE_RENAMED};
};

__interface  INTERFACE_UUID("{F3E555E4-F55C-4228-B9D6-4494A3E32FDF}") JUserDataHandler  : public Androidapi::Jnibridge::IJavaInstance 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJUserDataHandler : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUserDataHandlerClass,_di_JUserDataHandler> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUserDataHandlerClass,_di_JUserDataHandler>  inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUserDataHandler(void) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUserDataHandlerClass,_di_JUserDataHandler> () { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUserDataHandler(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Wechat */
}	/* namespace Jni */
}	/* namespace Android */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ANDROID_JNI_WECHAT)
using namespace Android::Jni::Wechat;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ANDROID_JNI)
using namespace Android::Jni;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ANDROID)
using namespace Android;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Android_Jni_WechatHPP
