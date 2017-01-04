
unit Android.JNI.WeChat;

interface

uses
  Androidapi.JNIBridge,
  Androidapi.JNI.App,
  Androidapi.JNI.GraphicsContentViewText,
  Androidapi.JNI.Java.Net,
  //Androidapi.JNI.Java.Util,
  Androidapi.JNI.JavaTypes,
  Androidapi.JNI.Media,
  Androidapi.JNI.Net,
  Androidapi.JNI.Os,
  Androidapi.JNI.Provider,
  Androidapi.JNI.Telephony,
  Androidapi.JNI.Util,
  Androidapi.JNI.Widget;

type
// ===== Forward declarations =====

  JAccount = interface;//android.accounts.Account
  JAnimator = interface;//android.animation.Animator
  JAnimator_AnimatorListener = interface;//android.animation.Animator$AnimatorListener
  JAnimator_AnimatorPauseListener = interface;//android.animation.Animator$AnimatorPauseListener
  JKeyframe = interface;//android.animation.Keyframe
  JLayoutTransition = interface;//android.animation.LayoutTransition
  JLayoutTransition_TransitionListener = interface;//android.animation.LayoutTransition$TransitionListener
  JPropertyValuesHolder = interface;//android.animation.PropertyValuesHolder
  JStateListAnimator = interface;//android.animation.StateListAnimator
  JTimeInterpolator = interface;//android.animation.TimeInterpolator
  JTypeConverter = interface;//android.animation.TypeConverter
  JTypeEvaluator = interface;//android.animation.TypeEvaluator
  JValueAnimator = interface;//android.animation.ValueAnimator
  JValueAnimator_AnimatorUpdateListener = interface;//android.animation.ValueAnimator$AnimatorUpdateListener
  JSensor = interface;//android.hardware.Sensor
  JSensorEvent = interface;//android.hardware.SensorEvent
  JPathMotion = interface;//android.transition.PathMotion
  JScene = interface;//android.transition.Scene
  JTransition = interface;//android.transition.Transition
  JTransition_EpicenterCallback = interface;//android.transition.Transition$EpicenterCallback
  JTransition_TransitionListener = interface;//android.transition.Transition$TransitionListener
  JTransitionManager = interface;//android.transition.TransitionManager
  JTransitionPropagation = interface;//android.transition.TransitionPropagation
  JTransitionValues = interface;//android.transition.TransitionValues
  JInterpolator = interface;//android.view.animation.Interpolator
  JToolbar_LayoutParams = interface;//android.widget.Toolbar$LayoutParams
  Jalgorithm_Base64 = interface;//com.tencent.mm.algorithm.Base64
  JLRUMap = interface;//com.tencent.mm.algorithm.LRUMap
  JLRUMap_1 = interface;//com.tencent.mm.algorithm.LRUMap$1
  JLRUMap_OnClearListener = interface;//com.tencent.mm.algorithm.LRUMap$OnClearListener
  JLRUMap_PreRemoveCallback = interface;//com.tencent.mm.algorithm.LRUMap$PreRemoveCallback
  JLRUMap_TimeVal = interface;//com.tencent.mm.algorithm.LRUMap$TimeVal
  JMD5 = interface;//com.tencent.mm.algorithm.MD5
  JTypeTransform = interface;//com.tencent.mm.algorithm.TypeTransform
  JUIN = interface;//com.tencent.mm.algorithm.UIN
  Jsdk_Build = interface;//com.tencent.mm.sdk.Build
  Jsdk_BuildConfig = interface;//com.tencent.mm.sdk.BuildConfig
  JConstantsUI = interface;//com.tencent.mm.sdk.ConstantsUI
  JConstantsUI_Contact = interface;//com.tencent.mm.sdk.ConstantsUI$Contact
  JMMAppMgr = interface;//com.tencent.mm.sdk.MMAppMgr
  JMMSharedPreferences = interface;//com.tencent.mm.sdk.MMSharedPreferences
  JMMSharedPreferences_REditor = interface;//com.tencent.mm.sdk.MMSharedPreferences$REditor
  JConstantsMMessage = interface;//com.tencent.mm.sdk.channel.ConstantsMMessage
  JMMessage = interface;//com.tencent.mm.sdk.channel.MMessage
  JMMessage_CallBack = interface;//com.tencent.mm.sdk.channel.MMessage$CallBack
  JMMessage_Receiver = interface;//com.tencent.mm.sdk.channel.MMessage$Receiver
  JMMessageAct = interface;//com.tencent.mm.sdk.channel.MMessageAct
  JMMessageUtil = interface;//com.tencent.mm.sdk.channel.MMessageUtil
  Jpackage_info = interface;//com.tencent.mm.sdk.channel.package-info
  JMDBItem = interface;//com.tencent.mm.sdk.storage.MDBItem
  JMAutoDBItem = interface;//com.tencent.mm.sdk.storage.MAutoDBItem
  JRContact = interface;//com.tencent.mm.sdk.contact.RContact
  JRContactAvatar = interface;//com.tencent.mm.sdk.contact.RContactAvatar
  JISQLiteDatabase = interface;//com.tencent.mm.sdk.storage.ISQLiteDatabase
  JContentProviderDB = interface;//com.tencent.mm.sdk.storage.ContentProviderDB
  JRContactDB = interface;//com.tencent.mm.sdk.contact.RContactDB
  JMStorage = interface;//com.tencent.mm.sdk.storage.MStorage
  JMAutoStorage = interface;//com.tencent.mm.sdk.storage.MAutoStorage
  JRContactStorage = interface;//com.tencent.mm.sdk.contact.RContactStorage
  Jcontact_package_info = interface;//com.tencent.mm.sdk.contact.package-info
  JRConversation = interface;//com.tencent.mm.sdk.conversation.RConversation
  JRConversationDB = interface;//com.tencent.mm.sdk.conversation.RConversationDB
  JRConversationStorage = interface;//com.tencent.mm.sdk.conversation.RConversationStorage
  Jconversation_package_info = interface;//com.tencent.mm.sdk.conversation.package-info
  JRMsgInfo = interface;//com.tencent.mm.sdk.message.RMsgInfo
  JRMsgInfoDB = interface;//com.tencent.mm.sdk.message.RMsgInfoDB
  JRMsgInfoStorage = interface;//com.tencent.mm.sdk.message.RMsgInfoStorage
  JBaseReq = interface;//com.tencent.mm.sdk.openapi.BaseReq
  JBaseResp = interface;//com.tencent.mm.sdk.openapi.BaseResp
  JBaseResp_ErrCode = interface;//com.tencent.mm.sdk.openapi.BaseResp$ErrCode
  JConstantsAPI = interface;//com.tencent.mm.sdk.openapi.ConstantsAPI
  JGetMessageFromWX = interface;//com.tencent.mm.sdk.openapi.GetMessageFromWX
  JGetMessageFromWX_Req = interface;//com.tencent.mm.sdk.openapi.GetMessageFromWX$Req
  JGetMessageFromWX_Resp = interface;//com.tencent.mm.sdk.openapi.GetMessageFromWX$Resp
  JIWXAPI = interface;//com.tencent.mm.sdk.openapi.IWXAPI
  JIWXAPIEventHandler = interface;//com.tencent.mm.sdk.openapi.IWXAPIEventHandler
  JSendAuth = interface;//com.tencent.mm.sdk.openapi.SendAuth
  JSendAuth_Req = interface;//com.tencent.mm.sdk.openapi.SendAuth$Req
  JSendAuth_Resp = interface;//com.tencent.mm.sdk.openapi.SendAuth$Resp
  JSendMessageToWX = interface;//com.tencent.mm.sdk.openapi.SendMessageToWX
  JSendMessageToWX_Req = interface;//com.tencent.mm.sdk.openapi.SendMessageToWX$Req
  JSendMessageToWX_Resp = interface;//com.tencent.mm.sdk.openapi.SendMessageToWX$Resp
  JShowMessageFromWX = interface;//com.tencent.mm.sdk.openapi.ShowMessageFromWX
  JShowMessageFromWX_Req = interface;//com.tencent.mm.sdk.openapi.ShowMessageFromWX$Req
  JShowMessageFromWX_Resp = interface;//com.tencent.mm.sdk.openapi.ShowMessageFromWX$Resp
  JWXAPIFactory = interface;//com.tencent.mm.sdk.openapi.WXAPIFactory
  JWXApiImplV10 = interface;//com.tencent.mm.sdk.openapi.WXApiImplV10
  JWXMediaMessage_IMediaObject = interface;//com.tencent.mm.sdk.openapi.WXMediaMessage$IMediaObject
  JWXAppExtendObject = interface;//com.tencent.mm.sdk.openapi.WXAppExtendObject
  JWXAppLaunchData = interface;//com.tencent.mm.sdk.openapi.WXAppLaunchData
  JWXAppLaunchData_Builder = interface;//com.tencent.mm.sdk.openapi.WXAppLaunchData$Builder
  JWXEmojiObject = interface;//com.tencent.mm.sdk.openapi.WXEmojiObject
  JWXFileObject = interface;//com.tencent.mm.sdk.openapi.WXFileObject
  JWXImageObject = interface;//com.tencent.mm.sdk.openapi.WXImageObject
  JWXMediaMessage = interface;//com.tencent.mm.sdk.openapi.WXMediaMessage
  JWXMediaMessage_Builder = interface;//com.tencent.mm.sdk.openapi.WXMediaMessage$Builder
  JWXMusicObject = interface;//com.tencent.mm.sdk.openapi.WXMusicObject
  JWXTextObject = interface;//com.tencent.mm.sdk.openapi.WXTextObject
  JWXVideoObject = interface;//com.tencent.mm.sdk.openapi.WXVideoObject
  JWXWebpageObject = interface;//com.tencent.mm.sdk.openapi.WXWebpageObject
  Jopenapi_package_info = interface;//com.tencent.mm.sdk.openapi.package-info
  Jsdk_package_info = interface;//com.tencent.mm.sdk.package-info
  JAnimationHelper_IHelper = interface;//com.tencent.mm.sdk.platformtools.BackwardSupportUtil$AnimationHelper$IHelper
  JAnimationHelperImpl21below = interface;//com.tencent.mm.sdk.platformtools.AnimationHelperImpl21below
  JAnimationHelperImpl22 = interface;//com.tencent.mm.sdk.platformtools.AnimationHelperImpl22
  JBackwardSupportUtil = interface;//com.tencent.mm.sdk.platformtools.BackwardSupportUtil
  JBackwardSupportUtil_AnimationHelper = interface;//com.tencent.mm.sdk.platformtools.BackwardSupportUtil$AnimationHelper
  JBackwardSupportUtil_BitmapFactory = interface;//com.tencent.mm.sdk.platformtools.BackwardSupportUtil$BitmapFactory
  JBackwardSupportUtil_ExifHelper = interface;//com.tencent.mm.sdk.platformtools.BackwardSupportUtil$ExifHelper
  JBackwardSupportUtil_SmoothScrollFactory = interface;//com.tencent.mm.sdk.platformtools.BackwardSupportUtil$SmoothScrollFactory
  JSmoothScrollFactory_IScroll = interface;//com.tencent.mm.sdk.platformtools.BackwardSupportUtil$SmoothScrollFactory$IScroll
  JChannelUtil = interface;//com.tencent.mm.sdk.platformtools.ChannelUtil
  JCharSequences = interface;//com.tencent.mm.sdk.platformtools.CharSequences
  JCharSequences_1 = interface;//com.tencent.mm.sdk.platformtools.CharSequences$1
  JCharSequences_2 = interface;//com.tencent.mm.sdk.platformtools.CharSequences$2
  JInetUtil = interface;//com.tencent.mm.sdk.platformtools.InetUtil
  JKVConfig = interface;//com.tencent.mm.sdk.platformtools.KVConfig
  JLBSManager = interface;//com.tencent.mm.sdk.platformtools.LBSManager
  JMTimerHandler_CallBack = interface;//com.tencent.mm.sdk.platformtools.MTimerHandler$CallBack
  JLBSManager_1 = interface;//com.tencent.mm.sdk.platformtools.LBSManager$1
  JLBSManager_LocationCache = interface;//com.tencent.mm.sdk.platformtools.LBSManager$LocationCache
  JLBSManager_OnLocationGotListener = interface;//com.tencent.mm.sdk.platformtools.LBSManager$OnLocationGotListener
  JLVBuffer = interface;//com.tencent.mm.sdk.platformtools.LVBuffer
  JLocaleUtil = interface;//com.tencent.mm.sdk.platformtools.LocaleUtil
  Jplatformtools_Log = interface;//com.tencent.mm.sdk.platformtools.Log
  JLogHelper = interface;//com.tencent.mm.sdk.platformtools.LogHelper
  JMAlarmHandler = interface;//com.tencent.mm.sdk.platformtools.MAlarmHandler
  JMAlarmHandler_CallBack = interface;//com.tencent.mm.sdk.platformtools.MAlarmHandler$CallBack
  JMAlarmHandler_IBumper = interface;//com.tencent.mm.sdk.platformtools.MAlarmHandler$IBumper
  JMMApplicationContext = interface;//com.tencent.mm.sdk.platformtools.MMApplicationContext
  JMMEntryLock = interface;//com.tencent.mm.sdk.platformtools.MMEntryLock
  JMTimerHandler = interface;//com.tencent.mm.sdk.platformtools.MTimerHandler
  JNetStatusUtil = interface;//com.tencent.mm.sdk.platformtools.NetStatusUtil
  JPhoneUtil = interface;//com.tencent.mm.sdk.platformtools.PhoneUtil
  JPhoneUtil_CellInfo = interface;//com.tencent.mm.sdk.platformtools.PhoneUtil$CellInfo
  JPhoneUtil_MacInfo = interface;//com.tencent.mm.sdk.platformtools.PhoneUtil$MacInfo
  JPhoneUtil16Impl = interface;//com.tencent.mm.sdk.platformtools.PhoneUtil16Impl
  JPhoneUtil16Impl_1 = interface;//com.tencent.mm.sdk.platformtools.PhoneUtil16Impl$1
  JPhoneUtil20Impl = interface;//com.tencent.mm.sdk.platformtools.PhoneUtil20Impl
  JPhoneUtil20Impl_1 = interface;//com.tencent.mm.sdk.platformtools.PhoneUtil20Impl$1
  JSensorController = interface;//com.tencent.mm.sdk.platformtools.SensorController
  JSensorController_SensorEventCallBack = interface;//com.tencent.mm.sdk.platformtools.SensorController$SensorEventCallBack
  JSmoothScrollToPosition21below = interface;//com.tencent.mm.sdk.platformtools.SmoothScrollToPosition21below
  JSmoothScrollToPosition22 = interface;//com.tencent.mm.sdk.platformtools.SmoothScrollToPosition22
  JSyncTask = interface;//com.tencent.mm.sdk.platformtools.SyncTask
  JSyncTask_1 = interface;//com.tencent.mm.sdk.platformtools.SyncTask$1
  JSystemProperty = interface;//com.tencent.mm.sdk.platformtools.SystemProperty
  JTimeLogger = interface;//com.tencent.mm.sdk.platformtools.TimeLogger
  Jplatformtools_TrafficStats = interface;//com.tencent.mm.sdk.platformtools.TrafficStats
  JUtil = interface;//com.tencent.mm.sdk.platformtools.Util
  JUtil_1 = interface;//com.tencent.mm.sdk.platformtools.Util$1
  JUtil_2 = interface;//com.tencent.mm.sdk.platformtools.Util$2
  Jplatformtools_package_info = interface;//com.tencent.mm.sdk.platformtools.package-info
  JIMMPluginAPI = interface;//com.tencent.mm.sdk.plugin.IMMPluginAPI
  JMMPluginAPIImpl = interface;//com.tencent.mm.sdk.plugin.MMPluginAPIImpl
  JMMPluginMsg = interface;//com.tencent.mm.sdk.plugin.MMPluginMsg
  JMMPluginMsg_ReceiverHelper = interface;//com.tencent.mm.sdk.plugin.MMPluginMsg$ReceiverHelper
  JMMPluginOAuth = interface;//com.tencent.mm.sdk.plugin.MMPluginOAuth
  JMMPluginOAuth_1 = interface;//com.tencent.mm.sdk.plugin.MMPluginOAuth$1
  JMMPluginOAuth_IResult = interface;//com.tencent.mm.sdk.plugin.MMPluginOAuth$IResult
  JMMPluginOAuth_Receiver = interface;//com.tencent.mm.sdk.plugin.MMPluginOAuth$Receiver
  JReceiver_1 = interface;//com.tencent.mm.sdk.plugin.MMPluginOAuth$Receiver$1
  JMMPluginProviderConstants = interface;//com.tencent.mm.sdk.plugin.MMPluginProviderConstants
  JMMPluginProviderConstants_OAuth = interface;//com.tencent.mm.sdk.plugin.MMPluginProviderConstants$OAuth
  JMMPluginProviderConstants_PluginDB = interface;//com.tencent.mm.sdk.plugin.MMPluginProviderConstants$PluginDB
  JMMPluginProviderConstants_PluginIntent = interface;//com.tencent.mm.sdk.plugin.MMPluginProviderConstants$PluginIntent
  JMMPluginProviderConstants_Resolver = interface;//com.tencent.mm.sdk.plugin.MMPluginProviderConstants$Resolver
  JMMPluginProviderConstants_SharedPref = interface;//com.tencent.mm.sdk.plugin.MMPluginProviderConstants$SharedPref
  JMMPluginUtil = interface;//com.tencent.mm.sdk.plugin.MMPluginUtil
  JProfile = interface;//com.tencent.mm.sdk.plugin.Profile
  Jplugin_package_info = interface;//com.tencent.mm.sdk.plugin.package-info
  JCursorFieldHelper = interface;//com.tencent.mm.sdk.storage.CursorFieldHelper
  JMStorageEvent = interface;//com.tencent.mm.sdk.storage.MStorageEvent
  JMStorage_1 = interface;//com.tencent.mm.sdk.storage.MStorage$1
  JMStorage_2 = interface;//com.tencent.mm.sdk.storage.MStorage$2
  JMStorage_IOnStorageChange = interface;//com.tencent.mm.sdk.storage.MStorage$IOnStorageChange
  JMStorage_IOnStorageLoaded = interface;//com.tencent.mm.sdk.storage.MStorage$IOnStorageLoaded
  JMStorageEvent_1 = interface;//com.tencent.mm.sdk.storage.MStorageEvent$1
  Jstorage_package_info = interface;//com.tencent.mm.sdk.storage.package-info
  //JStringBuffer = interface;//java.lang.StringBuffer
  //JStringBuilder = interface;//java.lang.StringBuilder
  JLinkedHashMap = interface;//java.util.LinkedHashMap
  JMap_Entry = interface;//java.util.Map$Entry
  JNode = interface;//org.w3c.dom.Node
  JAttr = interface;//org.w3c.dom.Attr
  JCharacterData = interface;//org.w3c.dom.CharacterData
  JText = interface;//org.w3c.dom.Text
  JCDATASection = interface;//org.w3c.dom.CDATASection
  JComment = interface;//org.w3c.dom.Comment
  JDOMConfiguration = interface;//org.w3c.dom.DOMConfiguration
  JDOMImplementation = interface;//org.w3c.dom.DOMImplementation
  JDOMStringList = interface;//org.w3c.dom.DOMStringList
  JDocument = interface;//org.w3c.dom.Document
  JDocumentFragment = interface;//org.w3c.dom.DocumentFragment
  JDocumentType = interface;//org.w3c.dom.DocumentType
  JElement = interface;//org.w3c.dom.Element
  JEntityReference = interface;//org.w3c.dom.EntityReference
  JNamedNodeMap = interface;//org.w3c.dom.NamedNodeMap
  JNodeList = interface;//org.w3c.dom.NodeList
  JProcessingInstruction = interface;//org.w3c.dom.ProcessingInstruction
  JTypeInfo = interface;//org.w3c.dom.TypeInfo
  JUserDataHandler = interface;//org.w3c.dom.UserDataHandler

// ===== Interface declarations =====

  JAccountClass = interface(JObjectClass)
    ['{94EE6861-F326-489F-8919-E20B39E3D9C1}']
    {class} function _GetCREATOR: JParcelable_Creator; cdecl;
    {class} function init(name: JString; type_: JString): JAccount; cdecl; overload;//Deprecated
    {class} function init(in_: JParcel): JAccount; cdecl; overload;//Deprecated
    {class} function hashCode: Integer; cdecl;
    {class} function toString: JString; cdecl;
    {class} procedure writeToParcel(dest: JParcel; flags: Integer); cdecl;
    {class} property CREATOR: JParcelable_Creator read _GetCREATOR;
  end;

  [JavaSignature('android/accounts/Account')]
  JAccount = interface(JObject)
    ['{71476381-8B6E-471F-9189-9857ECD7508C}']
    function _Getname: JString; cdecl;
    function _Gettype: JString; cdecl;
    function describeContents: Integer; cdecl;
    function equals(o: JObject): Boolean; cdecl;
    property name: JString read _Getname;
    property &type: JString read _Gettype;
  end;
  TJAccount = class(TJavaGenericImport<JAccountClass, JAccount>) end;

  JAnimatorClass = interface(JObjectClass)
    ['{3F76A5DF-389E-4BD3-9861-04C5B00CEADE}']
    {class} function init: JAnimator; cdecl;//Deprecated
    {class} procedure addListener(listener: JAnimator_AnimatorListener); cdecl;//Deprecated
    {class} procedure addPauseListener(listener: JAnimator_AnimatorPauseListener); cdecl;//Deprecated
    {class} function getDuration: Int64; cdecl;
    {class} function getInterpolator: JTimeInterpolator; cdecl;
    {class} function getListeners: JArrayList; cdecl;
    {class} function isStarted: Boolean; cdecl;
    {class} procedure pause; cdecl;
    {class} procedure removeAllListeners; cdecl;
    {class} function setDuration(duration: Int64): JAnimator; cdecl;
    {class} procedure setInterpolator(value: JTimeInterpolator); cdecl;
    {class} procedure setStartDelay(startDelay: Int64); cdecl;
    {class} procedure setupStartValues; cdecl;
    {class} procedure start; cdecl;
  end;

  [JavaSignature('android/animation/Animator')]
  JAnimator = interface(JObject)
    ['{FA13E56D-1B6D-4A3D-8327-9E5BA785CF21}']
    procedure cancel; cdecl;
    function clone: JAnimator; cdecl;
    procedure &end; cdecl;
    function getStartDelay: Int64; cdecl;
    function isPaused: Boolean; cdecl;
    function isRunning: Boolean; cdecl;
    procedure removeListener(listener: JAnimator_AnimatorListener); cdecl;
    procedure removePauseListener(listener: JAnimator_AnimatorPauseListener); cdecl;
    procedure resume; cdecl;
    procedure setTarget(target: JObject); cdecl;
    procedure setupEndValues; cdecl;
  end;
  TJAnimator = class(TJavaGenericImport<JAnimatorClass, JAnimator>) end;

  JAnimator_AnimatorListenerClass = interface(IJavaClass)
    ['{5ED6075A-B997-469C-B8D9-0AA8FB7E4798}']
    {class} procedure onAnimationCancel(animation: JAnimator); cdecl;//Deprecated
    {class} procedure onAnimationEnd(animation: JAnimator); cdecl;//Deprecated
    {class} procedure onAnimationRepeat(animation: JAnimator); cdecl;//Deprecated
  end;

  [JavaSignature('android/animation/Animator$AnimatorListener')]
  JAnimator_AnimatorListener = interface(IJavaInstance)
    ['{E2DE8DD6-628B-4D84-AA46-8A1E3F00FF13}']
    procedure onAnimationStart(animation: JAnimator); cdecl;//Deprecated
  end;
  TJAnimator_AnimatorListener = class(TJavaGenericImport<JAnimator_AnimatorListenerClass, JAnimator_AnimatorListener>) end;

  JAnimator_AnimatorPauseListenerClass = interface(IJavaClass)
    ['{CB0DC3F0-63BC-4284-ADD0-2ED367AE11E5}']
    {class} procedure onAnimationPause(animation: JAnimator); cdecl;//Deprecated
  end;

  [JavaSignature('android/animation/Animator$AnimatorPauseListener')]
  JAnimator_AnimatorPauseListener = interface(IJavaInstance)
    ['{43C9C106-65EA-4A7D-A958-FAB9E43FA4A6}']
    procedure onAnimationResume(animation: JAnimator); cdecl;//Deprecated
  end;
  TJAnimator_AnimatorPauseListener = class(TJavaGenericImport<JAnimator_AnimatorPauseListenerClass, JAnimator_AnimatorPauseListener>) end;

  JKeyframeClass = interface(JObjectClass)
    ['{D383116E-5CCF-48D8-9EA1-B26FBF24BA39}']
    {class} function init: JKeyframe; cdecl;//Deprecated
    {class} function clone: JKeyframe; cdecl;
    {class} function getFraction: Single; cdecl;
    {class} function hasValue: Boolean; cdecl;
    {class} function ofFloat(fraction: Single; value: Single): JKeyframe; cdecl; overload;
    {class} function ofFloat(fraction: Single): JKeyframe; cdecl; overload;
    {class} function ofInt(fraction: Single; value: Integer): JKeyframe; cdecl; overload;//Deprecated
    {class} function ofInt(fraction: Single): JKeyframe; cdecl; overload;//Deprecated
    {class} function ofObject(fraction: Single; value: JObject): JKeyframe; cdecl; overload;//Deprecated
    {class} function ofObject(fraction: Single): JKeyframe; cdecl; overload;//Deprecated
    {class} procedure setFraction(fraction: Single); cdecl;//Deprecated
    {class} procedure setInterpolator(interpolator: JTimeInterpolator); cdecl;//Deprecated
  end;

  [JavaSignature('android/animation/Keyframe')]
  JKeyframe = interface(JObject)
    ['{9D0687A4-669E-440F-8290-154739405019}']
    function getInterpolator: JTimeInterpolator; cdecl;
    function getType: Jlang_Class; cdecl;
    function getValue: JObject; cdecl;
    procedure setValue(value: JObject); cdecl;//Deprecated
  end;
  TJKeyframe = class(TJavaGenericImport<JKeyframeClass, JKeyframe>) end;

  JLayoutTransitionClass = interface(JObjectClass)
    ['{433C5359-0A96-4796-AD7B-8084EF7EF7C4}']
    {class} function _GetAPPEARING: Integer; cdecl;
    {class} function _GetCHANGE_APPEARING: Integer; cdecl;
    {class} function _GetCHANGE_DISAPPEARING: Integer; cdecl;
    {class} function _GetCHANGING: Integer; cdecl;
    {class} function _GetDISAPPEARING: Integer; cdecl;
    {class} function init: JLayoutTransition; cdecl;//Deprecated
    {class} procedure addChild(parent: JViewGroup; child: JView); cdecl;
    {class} function getAnimator(transitionType: Integer): JAnimator; cdecl;
    {class} function getDuration(transitionType: Integer): Int64; cdecl;
    {class} function getInterpolator(transitionType: Integer): JTimeInterpolator; cdecl;
    {class} procedure hideChild(parent: JViewGroup; child: JView); cdecl; overload;//Deprecated
    {class} procedure hideChild(parent: JViewGroup; child: JView; newVisibility: Integer); cdecl; overload;
    {class} function isChangingLayout: Boolean; cdecl;
    {class} procedure removeTransitionListener(listener: JLayoutTransition_TransitionListener); cdecl;
    {class} procedure setAnimateParentHierarchy(animateParentHierarchy: Boolean); cdecl;
    {class} procedure setAnimator(transitionType: Integer; animator: JAnimator); cdecl;
    {class} procedure setInterpolator(transitionType: Integer; interpolator: JTimeInterpolator); cdecl;//Deprecated
    {class} procedure setStagger(transitionType: Integer; duration: Int64); cdecl;//Deprecated
    {class} procedure setStartDelay(transitionType: Integer; delay: Int64); cdecl;//Deprecated
    {class} property APPEARING: Integer read _GetAPPEARING;
    {class} property CHANGE_APPEARING: Integer read _GetCHANGE_APPEARING;
    {class} property CHANGE_DISAPPEARING: Integer read _GetCHANGE_DISAPPEARING;
    {class} property CHANGING: Integer read _GetCHANGING;
    {class} property DISAPPEARING: Integer read _GetDISAPPEARING;
  end;

  [JavaSignature('android/animation/LayoutTransition')]
  JLayoutTransition = interface(JObject)
    ['{42450BEE-EBF2-4954-B9B7-F8DAE7DF0EC1}']
    procedure addTransitionListener(listener: JLayoutTransition_TransitionListener); cdecl;
    procedure disableTransitionType(transitionType: Integer); cdecl;
    procedure enableTransitionType(transitionType: Integer); cdecl;
    function getStagger(transitionType: Integer): Int64; cdecl;
    function getStartDelay(transitionType: Integer): Int64; cdecl;
    function getTransitionListeners: JList; cdecl;
    function isRunning: Boolean; cdecl;
    function isTransitionTypeEnabled(transitionType: Integer): Boolean; cdecl;
    procedure removeChild(parent: JViewGroup; child: JView); cdecl;
    procedure setDuration(duration: Int64); cdecl; overload;//Deprecated
    procedure setDuration(transitionType: Integer; duration: Int64); cdecl; overload;//Deprecated
    procedure showChild(parent: JViewGroup; child: JView); cdecl; overload;//Deprecated
    procedure showChild(parent: JViewGroup; child: JView; oldVisibility: Integer); cdecl; overload;//Deprecated
  end;
  TJLayoutTransition = class(TJavaGenericImport<JLayoutTransitionClass, JLayoutTransition>) end;

  JLayoutTransition_TransitionListenerClass = interface(IJavaClass)
    ['{9FA6F1EC-8EDB-4A05-AF58-B55A525AE114}']
    {class} procedure endTransition(transition: JLayoutTransition; container: JViewGroup; view: JView; transitionType: Integer); cdecl;//Deprecated
  end;

  [JavaSignature('android/animation/LayoutTransition$TransitionListener')]
  JLayoutTransition_TransitionListener = interface(IJavaInstance)
    ['{0FBE048F-FCDA-4692-B6F1-DE0F07FAE885}']
    procedure startTransition(transition: JLayoutTransition; container: JViewGroup; view: JView; transitionType: Integer); cdecl;//Deprecated
  end;
  TJLayoutTransition_TransitionListener = class(TJavaGenericImport<JLayoutTransition_TransitionListenerClass, JLayoutTransition_TransitionListener>) end;

  JPropertyValuesHolderClass = interface(JObjectClass)
    ['{36C77AFF-9C3F-42B6-88F3-320FE8CF9B25}']
    {class} function ofMultiFloat(propertyName: JString; values: TJavaBiArray<Single>): JPropertyValuesHolder; cdecl; overload;
    {class} function ofMultiFloat(propertyName: JString; path: JPath): JPropertyValuesHolder; cdecl; overload;
    {class} function ofMultiInt(propertyName: JString; values: TJavaBiArray<Integer>): JPropertyValuesHolder; cdecl; overload;
    {class} function ofMultiInt(propertyName: JString; path: JPath): JPropertyValuesHolder; cdecl; overload;
    {class} function ofObject(propertyName: JString; converter: JTypeConverter; path: JPath): JPropertyValuesHolder; cdecl; overload;
    {class} function ofObject(property_: JProperty; converter: JTypeConverter; path: JPath): JPropertyValuesHolder; cdecl; overload;
    {class} procedure setConverter(converter: JTypeConverter); cdecl;
    {class} procedure setEvaluator(evaluator: JTypeEvaluator); cdecl;
    {class} procedure setProperty(property_: JProperty); cdecl;
    {class} procedure setPropertyName(propertyName: JString); cdecl;
  end;

  [JavaSignature('android/animation/PropertyValuesHolder')]
  JPropertyValuesHolder = interface(JObject)
    ['{12B4ABFD-CBCA-4636-AF2D-C386EF895DC3}']
    function clone: JPropertyValuesHolder; cdecl;//Deprecated
    function getPropertyName: JString; cdecl;//Deprecated
    function toString: JString; cdecl;//Deprecated
  end;
  TJPropertyValuesHolder = class(TJavaGenericImport<JPropertyValuesHolderClass, JPropertyValuesHolder>) end;

  JStateListAnimatorClass = interface(JObjectClass)
    ['{109E4067-E218-47B1-93EB-65B8916A98D8}']
    {class} function init: JStateListAnimator; cdecl;//Deprecated
    {class} procedure jumpToCurrentState; cdecl;
  end;

  [JavaSignature('android/animation/StateListAnimator')]
  JStateListAnimator = interface(JObject)
    ['{CA2A9587-26AA-4DC2-8DFF-A1305A37608F}']
    procedure addState(specs: TJavaArray<Integer>; animator: JAnimator); cdecl;
    function clone: JStateListAnimator; cdecl;
  end;
  TJStateListAnimator = class(TJavaGenericImport<JStateListAnimatorClass, JStateListAnimator>) end;

  JTimeInterpolatorClass = interface(IJavaClass)
    ['{1E682A1C-9102-461D-A3CA-5596683F1D66}']
  end;

  [JavaSignature('android/animation/TimeInterpolator')]
  JTimeInterpolator = interface(IJavaInstance)
    ['{639F8A83-7D9B-49AF-A19E-96B27E46D2AB}']
    function getInterpolation(input: Single): Single; cdecl;
  end;
  TJTimeInterpolator = class(TJavaGenericImport<JTimeInterpolatorClass, JTimeInterpolator>) end;

  JTypeConverterClass = interface(JObjectClass)
    ['{BE2DD177-6D79-4B0C-B4F5-4E4CD9D7436D}']
    {class} function init(fromClass: Jlang_Class; toClass: Jlang_Class): JTypeConverter; cdecl;//Deprecated
    {class} function convert(value: JObject): JObject; cdecl;
  end;

  [JavaSignature('android/animation/TypeConverter')]
  JTypeConverter = interface(JObject)
    ['{BFEA4116-0766-4AD9-AA8F-4C15A583EB2E}']
  end;
  TJTypeConverter = class(TJavaGenericImport<JTypeConverterClass, JTypeConverter>) end;

  JTypeEvaluatorClass = interface(IJavaClass)
    ['{15B67CAF-6F50-4AA3-A88F-C5AF78D62FD4}']
  end;

  [JavaSignature('android/animation/TypeEvaluator')]
  JTypeEvaluator = interface(IJavaInstance)
    ['{F436383D-6F44-40D8-ACDD-9057777691FC}']
    function evaluate(fraction: Single; startValue: JObject; endValue: JObject): JObject; cdecl;//Deprecated
  end;
  TJTypeEvaluator = class(TJavaGenericImport<JTypeEvaluatorClass, JTypeEvaluator>) end;

  JValueAnimatorClass = interface(JAnimatorClass)
    ['{FF3B71ED-5A33-45B0-8500-7672B0B98E2C}']
    {class} function _GetINFINITE: Integer; cdecl;
    {class} function _GetRESTART: Integer; cdecl;
    {class} function _GetREVERSE: Integer; cdecl;
    {class} function init: JValueAnimator; cdecl;//Deprecated
    {class} procedure &end; cdecl;//Deprecated
    {class} function getAnimatedFraction: Single; cdecl;//Deprecated
    {class} function getAnimatedValue: JObject; cdecl; overload;//Deprecated
    {class} function getFrameDelay: Int64; cdecl;//Deprecated
    {class} function getInterpolator: JTimeInterpolator; cdecl;//Deprecated
    {class} function getRepeatCount: Integer; cdecl;//Deprecated
    {class} function getValues: TJavaObjectArray<JPropertyValuesHolder>; cdecl;//Deprecated
    {class} function isRunning: Boolean; cdecl;//Deprecated
    {class} function isStarted: Boolean; cdecl;//Deprecated
    {class} procedure pause; cdecl;
    {class} procedure reverse; cdecl;
    {class} procedure setCurrentFraction(fraction: Single); cdecl;
    {class} procedure setCurrentPlayTime(playTime: Int64); cdecl;
    {class} procedure setFrameDelay(frameDelay: Int64); cdecl;
    {class} procedure setInterpolator(value: JTimeInterpolator); cdecl;
    {class} procedure setStartDelay(startDelay: Int64); cdecl;
    {class} procedure start; cdecl;
    {class} property INFINITE: Integer read _GetINFINITE;
    {class} property RESTART: Integer read _GetRESTART;
    {class} property REVERSE: Integer read _GetREVERSE;
  end;

  [JavaSignature('android/animation/ValueAnimator')]
  JValueAnimator = interface(JAnimator)
    ['{70F92B14-EFD4-4DC7-91DE-6617417AE194}']
    procedure addUpdateListener(listener: JValueAnimator_AnimatorUpdateListener); cdecl;//Deprecated
    procedure cancel; cdecl;//Deprecated
    function clone: JValueAnimator; cdecl;//Deprecated
    function getAnimatedValue(propertyName: JString): JObject; cdecl; overload;//Deprecated
    function getCurrentPlayTime: Int64; cdecl;//Deprecated
    function getDuration: Int64; cdecl;//Deprecated
    function getRepeatMode: Integer; cdecl;//Deprecated
    function getStartDelay: Int64; cdecl;//Deprecated
    procedure removeAllUpdateListeners; cdecl;
    procedure removeUpdateListener(listener: JValueAnimator_AnimatorUpdateListener); cdecl;
    procedure resume; cdecl;
    function setDuration(duration: Int64): JValueAnimator; cdecl;
    procedure setEvaluator(value: JTypeEvaluator); cdecl;
    procedure setRepeatCount(value: Integer); cdecl;
    procedure setRepeatMode(value: Integer); cdecl;
    function toString: JString; cdecl;//Deprecated
  end;
  TJValueAnimator = class(TJavaGenericImport<JValueAnimatorClass, JValueAnimator>) end;

  JValueAnimator_AnimatorUpdateListenerClass = interface(IJavaClass)
    ['{9CA50CBF-4462-4445-82CD-13CE985E2DE4}']
    {class} procedure onAnimationUpdate(animation: JValueAnimator); cdecl;
  end;

  [JavaSignature('android/animation/ValueAnimator$AnimatorUpdateListener')]
  JValueAnimator_AnimatorUpdateListener = interface(IJavaInstance)
    ['{0F883491-52EF-4A40-B7D2-FC23E11E46FE}']
  end;
  TJValueAnimator_AnimatorUpdateListener = class(TJavaGenericImport<JValueAnimator_AnimatorUpdateListenerClass, JValueAnimator_AnimatorUpdateListener>) end;

  JSensorClass = interface(JObjectClass)
    ['{9025B1D0-DA48-4D2C-9D19-2E1F23FB7B8E}']
    {class} function _GetREPORTING_MODE_CONTINUOUS: Integer; cdecl;
    {class} function _GetREPORTING_MODE_ONE_SHOT: Integer; cdecl;
    {class} function _GetREPORTING_MODE_ON_CHANGE: Integer; cdecl;
    {class} function _GetREPORTING_MODE_SPECIAL_TRIGGER: Integer; cdecl;
    {class} function _GetSTRING_TYPE_ACCELEROMETER: JString; cdecl;
    {class} function _GetSTRING_TYPE_AMBIENT_TEMPERATURE: JString; cdecl;
    {class} function _GetSTRING_TYPE_GAME_ROTATION_VECTOR: JString; cdecl;
    {class} function _GetSTRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR: JString; cdecl;
    {class} function _GetSTRING_TYPE_GRAVITY: JString; cdecl;
    {class} function _GetSTRING_TYPE_GYROSCOPE: JString; cdecl;
    {class} function _GetSTRING_TYPE_GYROSCOPE_UNCALIBRATED: JString; cdecl;
    {class} function _GetSTRING_TYPE_HEART_RATE: JString; cdecl;
    {class} function _GetSTRING_TYPE_LIGHT: JString; cdecl;
    {class} function _GetSTRING_TYPE_LINEAR_ACCELERATION: JString; cdecl;
    {class} function _GetSTRING_TYPE_MAGNETIC_FIELD: JString; cdecl;
    {class} function _GetSTRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED: JString; cdecl;
    {class} function _GetSTRING_TYPE_ORIENTATION: JString; cdecl;
    {class} function _GetSTRING_TYPE_PRESSURE: JString; cdecl;
    {class} function _GetSTRING_TYPE_PROXIMITY: JString; cdecl;
    {class} function _GetSTRING_TYPE_RELATIVE_HUMIDITY: JString; cdecl;
    {class} function _GetSTRING_TYPE_ROTATION_VECTOR: JString; cdecl;
    {class} function _GetSTRING_TYPE_SIGNIFICANT_MOTION: JString; cdecl;
    {class} function _GetSTRING_TYPE_STEP_COUNTER: JString; cdecl;
    {class} function _GetSTRING_TYPE_STEP_DETECTOR: JString; cdecl;
    {class} function _GetSTRING_TYPE_TEMPERATURE: JString; cdecl;
    {class} function _GetTYPE_ACCELEROMETER: Integer; cdecl;
    {class} function _GetTYPE_ALL: Integer; cdecl;
    {class} function _GetTYPE_AMBIENT_TEMPERATURE: Integer; cdecl;
    {class} function _GetTYPE_GAME_ROTATION_VECTOR: Integer; cdecl;
    {class} function _GetTYPE_GEOMAGNETIC_ROTATION_VECTOR: Integer; cdecl;
    {class} function _GetTYPE_GRAVITY: Integer; cdecl;
    {class} function _GetTYPE_GYROSCOPE: Integer; cdecl;
    {class} function _GetTYPE_GYROSCOPE_UNCALIBRATED: Integer; cdecl;
    {class} function _GetTYPE_HEART_RATE: Integer; cdecl;
    {class} function _GetTYPE_LIGHT: Integer; cdecl;
    {class} function _GetTYPE_LINEAR_ACCELERATION: Integer; cdecl;
    {class} function _GetTYPE_MAGNETIC_FIELD: Integer; cdecl;
    {class} function _GetTYPE_MAGNETIC_FIELD_UNCALIBRATED: Integer; cdecl;
    {class} function _GetTYPE_ORIENTATION: Integer; cdecl;
    {class} function _GetTYPE_PRESSURE: Integer; cdecl;
    {class} function _GetTYPE_PROXIMITY: Integer; cdecl;
    {class} function _GetTYPE_RELATIVE_HUMIDITY: Integer; cdecl;
    {class} function _GetTYPE_ROTATION_VECTOR: Integer; cdecl;
    {class} function _GetTYPE_SIGNIFICANT_MOTION: Integer; cdecl;
    {class} function _GetTYPE_STEP_COUNTER: Integer; cdecl;
    {class} function _GetTYPE_STEP_DETECTOR: Integer; cdecl;
    {class} function _GetTYPE_TEMPERATURE: Integer; cdecl;
    {class} function getMaximumRange: Single; cdecl;
    {class} function getMinDelay: Integer; cdecl;
    {class} function getName: JString; cdecl;
    {class} function getStringType: JString; cdecl;//Deprecated
    {class} function getType: Integer; cdecl;//Deprecated
    {class} function getVendor: JString; cdecl;//Deprecated
    {class} property REPORTING_MODE_CONTINUOUS: Integer read _GetREPORTING_MODE_CONTINUOUS;
    {class} property REPORTING_MODE_ONE_SHOT: Integer read _GetREPORTING_MODE_ONE_SHOT;
    {class} property REPORTING_MODE_ON_CHANGE: Integer read _GetREPORTING_MODE_ON_CHANGE;
    {class} property REPORTING_MODE_SPECIAL_TRIGGER: Integer read _GetREPORTING_MODE_SPECIAL_TRIGGER;
    {class} property STRING_TYPE_ACCELEROMETER: JString read _GetSTRING_TYPE_ACCELEROMETER;
    {class} property STRING_TYPE_AMBIENT_TEMPERATURE: JString read _GetSTRING_TYPE_AMBIENT_TEMPERATURE;
    {class} property STRING_TYPE_GAME_ROTATION_VECTOR: JString read _GetSTRING_TYPE_GAME_ROTATION_VECTOR;
    {class} property STRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR: JString read _GetSTRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR;
    {class} property STRING_TYPE_GRAVITY: JString read _GetSTRING_TYPE_GRAVITY;
    {class} property STRING_TYPE_GYROSCOPE: JString read _GetSTRING_TYPE_GYROSCOPE;
    {class} property STRING_TYPE_GYROSCOPE_UNCALIBRATED: JString read _GetSTRING_TYPE_GYROSCOPE_UNCALIBRATED;
    {class} property STRING_TYPE_HEART_RATE: JString read _GetSTRING_TYPE_HEART_RATE;
    {class} property STRING_TYPE_LIGHT: JString read _GetSTRING_TYPE_LIGHT;
    {class} property STRING_TYPE_LINEAR_ACCELERATION: JString read _GetSTRING_TYPE_LINEAR_ACCELERATION;
    {class} property STRING_TYPE_MAGNETIC_FIELD: JString read _GetSTRING_TYPE_MAGNETIC_FIELD;
    {class} property STRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED: JString read _GetSTRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED;
    {class} property STRING_TYPE_ORIENTATION: JString read _GetSTRING_TYPE_ORIENTATION;
    {class} property STRING_TYPE_PRESSURE: JString read _GetSTRING_TYPE_PRESSURE;
    {class} property STRING_TYPE_PROXIMITY: JString read _GetSTRING_TYPE_PROXIMITY;
    {class} property STRING_TYPE_RELATIVE_HUMIDITY: JString read _GetSTRING_TYPE_RELATIVE_HUMIDITY;
    {class} property STRING_TYPE_ROTATION_VECTOR: JString read _GetSTRING_TYPE_ROTATION_VECTOR;
    {class} property STRING_TYPE_SIGNIFICANT_MOTION: JString read _GetSTRING_TYPE_SIGNIFICANT_MOTION;
    {class} property STRING_TYPE_STEP_COUNTER: JString read _GetSTRING_TYPE_STEP_COUNTER;
    {class} property STRING_TYPE_STEP_DETECTOR: JString read _GetSTRING_TYPE_STEP_DETECTOR;
    {class} property STRING_TYPE_TEMPERATURE: JString read _GetSTRING_TYPE_TEMPERATURE;
    {class} property TYPE_ACCELEROMETER: Integer read _GetTYPE_ACCELEROMETER;
    {class} property TYPE_ALL: Integer read _GetTYPE_ALL;
    {class} property TYPE_AMBIENT_TEMPERATURE: Integer read _GetTYPE_AMBIENT_TEMPERATURE;
    {class} property TYPE_GAME_ROTATION_VECTOR: Integer read _GetTYPE_GAME_ROTATION_VECTOR;
    {class} property TYPE_GEOMAGNETIC_ROTATION_VECTOR: Integer read _GetTYPE_GEOMAGNETIC_ROTATION_VECTOR;
    {class} property TYPE_GRAVITY: Integer read _GetTYPE_GRAVITY;
    {class} property TYPE_GYROSCOPE: Integer read _GetTYPE_GYROSCOPE;
    {class} property TYPE_GYROSCOPE_UNCALIBRATED: Integer read _GetTYPE_GYROSCOPE_UNCALIBRATED;
    {class} property TYPE_HEART_RATE: Integer read _GetTYPE_HEART_RATE;
    {class} property TYPE_LIGHT: Integer read _GetTYPE_LIGHT;
    {class} property TYPE_LINEAR_ACCELERATION: Integer read _GetTYPE_LINEAR_ACCELERATION;
    {class} property TYPE_MAGNETIC_FIELD: Integer read _GetTYPE_MAGNETIC_FIELD;
    {class} property TYPE_MAGNETIC_FIELD_UNCALIBRATED: Integer read _GetTYPE_MAGNETIC_FIELD_UNCALIBRATED;
    {class} property TYPE_ORIENTATION: Integer read _GetTYPE_ORIENTATION;
    {class} property TYPE_PRESSURE: Integer read _GetTYPE_PRESSURE;
    {class} property TYPE_PROXIMITY: Integer read _GetTYPE_PROXIMITY;
    {class} property TYPE_RELATIVE_HUMIDITY: Integer read _GetTYPE_RELATIVE_HUMIDITY;
    {class} property TYPE_ROTATION_VECTOR: Integer read _GetTYPE_ROTATION_VECTOR;
    {class} property TYPE_SIGNIFICANT_MOTION: Integer read _GetTYPE_SIGNIFICANT_MOTION;
    {class} property TYPE_STEP_COUNTER: Integer read _GetTYPE_STEP_COUNTER;
    {class} property TYPE_STEP_DETECTOR: Integer read _GetTYPE_STEP_DETECTOR;
    {class} property TYPE_TEMPERATURE: Integer read _GetTYPE_TEMPERATURE;
  end;

  [JavaSignature('android/hardware/Sensor')]
  JSensor = interface(JObject)
    ['{6A4E470B-F097-434E-B27D-6C771C44F318}']
    function getFifoMaxEventCount: Integer; cdecl;
    function getFifoReservedEventCount: Integer; cdecl;
    function getMaxDelay: Integer; cdecl;
    function getPower: Single; cdecl;//Deprecated
    function getReportingMode: Integer; cdecl;//Deprecated
    function getResolution: Single; cdecl;//Deprecated
    function getVersion: Integer; cdecl;//Deprecated
    function isWakeUpSensor: Boolean; cdecl;//Deprecated
    function toString: JString; cdecl;//Deprecated
  end;
  TJSensor = class(TJavaGenericImport<JSensorClass, JSensor>) end;

  JSensorEventClass = interface(JObjectClass)
    ['{F24352F6-3196-48D5-8512-A337867AB54C}']
    {class} function _Getsensor: JSensor; cdecl;
    {class} function _Gettimestamp: Int64; cdecl;
    {class} function _Getvalues: TJavaArray<Single>; cdecl;
    {class} property sensor: JSensor read _Getsensor;
    {class} property timestamp: Int64 read _Gettimestamp;
    {class} property values: TJavaArray<Single> read _Getvalues;
  end;

  [JavaSignature('android/hardware/SensorEvent')]
  JSensorEvent = interface(JObject)
    ['{583C4821-4D8A-407E-8797-BA1D2853CC36}']
    function _Getaccuracy: Integer; cdecl;
    procedure _Setaccuracy(Value: Integer); cdecl;
    property accuracy: Integer read _Getaccuracy write _Setaccuracy;
  end;
  TJSensorEvent = class(TJavaGenericImport<JSensorEventClass, JSensorEvent>) end;

  JPathMotionClass = interface(JObjectClass)
    ['{E1CD1A94-115C-492C-A490-37F0E72956EB}']
    {class} function init: JPathMotion; cdecl; overload;//Deprecated
    {class} function init(context: JContext; attrs: JAttributeSet): JPathMotion; cdecl; overload;//Deprecated
  end;

  [JavaSignature('android/transition/PathMotion')]
  JPathMotion = interface(JObject)
    ['{BDC08353-C9FB-42D7-97CC-C35837D2F536}']
    function getPath(startX: Single; startY: Single; endX: Single; endY: Single): JPath; cdecl;//Deprecated
  end;
  TJPathMotion = class(TJavaGenericImport<JPathMotionClass, JPathMotion>) end;

  JSceneClass = interface(JObjectClass)
    ['{8B9120CA-AEEA-4DE3-BDC9-15CFD23A7B07}']
    {class} function init(sceneRoot: JViewGroup): JScene; cdecl; overload;//Deprecated
    {class} function init(sceneRoot: JViewGroup; layout: JView): JScene; cdecl; overload;//Deprecated
    {class} function init(sceneRoot: JViewGroup; layout: JViewGroup): JScene; cdecl; overload;//Deprecated
    {class} procedure exit; cdecl;
    {class} function getSceneForLayout(sceneRoot: JViewGroup; layoutId: Integer; context: JContext): JScene; cdecl;
    {class} function getSceneRoot: JViewGroup; cdecl;
  end;

  [JavaSignature('android/transition/Scene')]
  JScene = interface(JObject)
    ['{85A60B99-5837-4F1F-A344-C627DD586B82}']
    procedure enter; cdecl;
    procedure setEnterAction(action: JRunnable); cdecl;
    procedure setExitAction(action: JRunnable); cdecl;
  end;
  TJScene = class(TJavaGenericImport<JSceneClass, JScene>) end;

  JTransitionClass = interface(JObjectClass)
    ['{60EC06BC-8F7A-4416-A04B-5B57987EB18E}']
    {class} function _GetMATCH_ID: Integer; cdecl;
    {class} function _GetMATCH_INSTANCE: Integer; cdecl;
    {class} function _GetMATCH_ITEM_ID: Integer; cdecl;
    {class} function _GetMATCH_NAME: Integer; cdecl;
    {class} function init: JTransition; cdecl; overload;//Deprecated
    {class} function init(context: JContext; attrs: JAttributeSet): JTransition; cdecl; overload;//Deprecated
    {class} function addListener(listener: JTransition_TransitionListener): JTransition; cdecl;
    {class} function addTarget(targetId: Integer): JTransition; cdecl; overload;
    {class} function addTarget(targetName: JString): JTransition; cdecl; overload;
    {class} function canRemoveViews: Boolean; cdecl;//Deprecated
    {class} procedure captureEndValues(transitionValues: JTransitionValues); cdecl;//Deprecated
    {class} procedure captureStartValues(transitionValues: JTransitionValues); cdecl;//Deprecated
    {class} function excludeChildren(target: JView; exclude: Boolean): JTransition; cdecl; overload;//Deprecated
    {class} function excludeChildren(type_: Jlang_Class; exclude: Boolean): JTransition; cdecl; overload;//Deprecated
    {class} function excludeTarget(targetId: Integer; exclude: Boolean): JTransition; cdecl; overload;//Deprecated
    {class} function getDuration: Int64; cdecl;//Deprecated
    {class} function getEpicenter: JRect; cdecl;//Deprecated
    {class} function getEpicenterCallback: JTransition_EpicenterCallback; cdecl;//Deprecated
    {class} function getPropagation: JTransitionPropagation; cdecl;//Deprecated
    {class} function getStartDelay: Int64; cdecl;//Deprecated
    {class} function getTargetIds: JList; cdecl;//Deprecated
    {class} function getTransitionProperties: TJavaObjectArray<JString>; cdecl;
    {class} function getTransitionValues(view: JView; start: Boolean): JTransitionValues; cdecl;
    {class} function isTransitionRequired(startValues: JTransitionValues; endValues: JTransitionValues): Boolean; cdecl;
    {class} function removeTarget(target: JView): JTransition; cdecl; overload;
    {class} function removeTarget(target: Jlang_Class): JTransition; cdecl; overload;
    {class} procedure setPathMotion(pathMotion: JPathMotion); cdecl;
    {class} procedure setPropagation(transitionPropagation: JTransitionPropagation); cdecl;
    {class} property MATCH_ID: Integer read _GetMATCH_ID;
    {class} property MATCH_INSTANCE: Integer read _GetMATCH_INSTANCE;
    {class} property MATCH_ITEM_ID: Integer read _GetMATCH_ITEM_ID;
    {class} property MATCH_NAME: Integer read _GetMATCH_NAME;
  end;

  [JavaSignature('android/transition/Transition')]
  JTransition = interface(JObject)
    ['{C2F8200F-1C83-40AE-8C5B-C0C8BFF17F88}']
    function addTarget(targetType: Jlang_Class): JTransition; cdecl; overload;//Deprecated
    function addTarget(target: JView): JTransition; cdecl; overload;//Deprecated
    function clone: JTransition; cdecl;//Deprecated
    function createAnimator(sceneRoot: JViewGroup; startValues: JTransitionValues; endValues: JTransitionValues): JAnimator; cdecl;//Deprecated
    function excludeChildren(targetId: Integer; exclude: Boolean): JTransition; cdecl; overload;//Deprecated
    function excludeTarget(targetName: JString; exclude: Boolean): JTransition; cdecl; overload;//Deprecated
    function excludeTarget(target: JView; exclude: Boolean): JTransition; cdecl; overload;//Deprecated
    function excludeTarget(type_: Jlang_Class; exclude: Boolean): JTransition; cdecl; overload;//Deprecated
    function getInterpolator: JTimeInterpolator; cdecl;//Deprecated
    function getName: JString; cdecl;//Deprecated
    function getPathMotion: JPathMotion; cdecl;//Deprecated
    function getTargetNames: JList; cdecl;
    function getTargetTypes: JList; cdecl;
    function getTargets: JList; cdecl;
    function removeListener(listener: JTransition_TransitionListener): JTransition; cdecl;
    function removeTarget(targetId: Integer): JTransition; cdecl; overload;
    function removeTarget(targetName: JString): JTransition; cdecl; overload;
    function setDuration(duration: Int64): JTransition; cdecl;
    procedure setEpicenterCallback(epicenterCallback: JTransition_EpicenterCallback); cdecl;
    function setInterpolator(interpolator: JTimeInterpolator): JTransition; cdecl;
    function setStartDelay(startDelay: Int64): JTransition; cdecl;
    function toString: JString; cdecl;
  end;
  TJTransition = class(TJavaGenericImport<JTransitionClass, JTransition>) end;

  JTransition_EpicenterCallbackClass = interface(JObjectClass)
    ['{8141257A-130B-466C-A08D-AA3A00946F4C}']
    {class} function init: JTransition_EpicenterCallback; cdecl;//Deprecated
    {class} function onGetEpicenter(transition: JTransition): JRect; cdecl;//Deprecated
  end;

  [JavaSignature('android/transition/Transition$EpicenterCallback')]
  JTransition_EpicenterCallback = interface(JObject)
    ['{CE004917-266F-4076-8913-F23184824FBA}']
  end;
  TJTransition_EpicenterCallback = class(TJavaGenericImport<JTransition_EpicenterCallbackClass, JTransition_EpicenterCallback>) end;

  JTransition_TransitionListenerClass = interface(IJavaClass)
    ['{D5083752-E8A6-46DF-BE40-AE11073C387E}']
    {class} procedure onTransitionPause(transition: JTransition); cdecl;//Deprecated
    {class} procedure onTransitionResume(transition: JTransition); cdecl;//Deprecated
    {class} procedure onTransitionStart(transition: JTransition); cdecl;//Deprecated
  end;

  [JavaSignature('android/transition/Transition$TransitionListener')]
  JTransition_TransitionListener = interface(IJavaInstance)
    ['{C32BE107-6E05-4898-AF0A-FAD970D66E29}']
    procedure onTransitionCancel(transition: JTransition); cdecl;//Deprecated
    procedure onTransitionEnd(transition: JTransition); cdecl;//Deprecated
  end;
  TJTransition_TransitionListener = class(TJavaGenericImport<JTransition_TransitionListenerClass, JTransition_TransitionListener>) end;

  JTransitionManagerClass = interface(JObjectClass)
    ['{4160EFA0-3499-4964-817E-46497BB5B957}']
    {class} function init: JTransitionManager; cdecl;//Deprecated
    {class} procedure beginDelayedTransition(sceneRoot: JViewGroup); cdecl; overload;
    {class} procedure beginDelayedTransition(sceneRoot: JViewGroup; transition: JTransition); cdecl; overload;
    {class} procedure endTransitions(sceneRoot: JViewGroup); cdecl;
    {class} procedure go(scene: JScene); cdecl; overload;
    {class} procedure go(scene: JScene; transition: JTransition); cdecl; overload;
  end;

  [JavaSignature('android/transition/TransitionManager')]
  JTransitionManager = interface(JObject)
    ['{FF5E1210-1F04-4F81-9CAC-3D7A5C4E972B}']
    procedure setTransition(scene: JScene; transition: JTransition); cdecl; overload;
    procedure setTransition(fromScene: JScene; toScene: JScene; transition: JTransition); cdecl; overload;
    procedure transitionTo(scene: JScene); cdecl;
  end;
  TJTransitionManager = class(TJavaGenericImport<JTransitionManagerClass, JTransitionManager>) end;

  JTransitionPropagationClass = interface(JObjectClass)
    ['{A881388A-C877-4DD9-9BAD-1BA4F56133EE}']
    {class} function init: JTransitionPropagation; cdecl;//Deprecated
  end;

  [JavaSignature('android/transition/TransitionPropagation')]
  JTransitionPropagation = interface(JObject)
    ['{7595B7EF-6BCE-4281-BC67-335E2FB6C091}']
    procedure captureValues(transitionValues: JTransitionValues); cdecl;//Deprecated
    function getPropagationProperties: TJavaObjectArray<JString>; cdecl;//Deprecated
    function getStartDelay(sceneRoot: JViewGroup; transition: JTransition; startValues: JTransitionValues; endValues: JTransitionValues): Int64; cdecl;//Deprecated
  end;
  TJTransitionPropagation = class(TJavaGenericImport<JTransitionPropagationClass, JTransitionPropagation>) end;

  JTransitionValuesClass = interface(JObjectClass)
    ['{3BF98CFA-6A4D-4815-8D42-15E97C916D91}']
    {class} function init: JTransitionValues; cdecl;//Deprecated
    {class} function equals(other: JObject): Boolean; cdecl;//Deprecated
    {class} function hashCode: Integer; cdecl;//Deprecated
  end;

  [JavaSignature('android/transition/TransitionValues')]
  JTransitionValues = interface(JObject)
    ['{178E09E6-D32C-48A9-ADCF-8CCEA804052A}']
    function _Getvalues: JMap; cdecl;
    function _Getview: JView; cdecl;
    procedure _Setview(Value: JView); cdecl;
    function toString: JString; cdecl;//Deprecated
    property values: JMap read _Getvalues;
    property view: JView read _Getview write _Setview;
  end;
  TJTransitionValues = class(TJavaGenericImport<JTransitionValuesClass, JTransitionValues>) end;

  JInterpolatorClass = interface(JTimeInterpolatorClass)
    ['{A575B46A-E489-409C-807A-1B8F2BE092E8}']
  end;

  [JavaSignature('android/view/animation/Interpolator')]
  JInterpolator = interface(JTimeInterpolator)
    ['{F1082403-52DA-4AF0-B017-DAB334325FC7}']
  end;
  TJInterpolator = class(TJavaGenericImport<JInterpolatorClass, JInterpolator>) end;

  JToolbar_LayoutParamsClass = interface(JActionBar_LayoutParamsClass)
    ['{6D43796C-C163-4084-BB30-6FE68AFD7ABB}']
    {class} function init(c: JContext; attrs: JAttributeSet): JToolbar_LayoutParams; cdecl; overload;//Deprecated
    {class} function init(width: Integer; height: Integer): JToolbar_LayoutParams; cdecl; overload;//Deprecated
    {class} function init(width: Integer; height: Integer; gravity: Integer): JToolbar_LayoutParams; cdecl; overload;//Deprecated
    {class} function init(gravity: Integer): JToolbar_LayoutParams; cdecl; overload;//Deprecated
    {class} function init(source: JToolbar_LayoutParams): JToolbar_LayoutParams; cdecl; overload;//Deprecated
    {class} function init(source: JActionBar_LayoutParams): JToolbar_LayoutParams; cdecl; overload;//Deprecated
    {class} function init(source: JViewGroup_MarginLayoutParams): JToolbar_LayoutParams; cdecl; overload;//Deprecated
    {class} function init(source: JViewGroup_LayoutParams): JToolbar_LayoutParams; cdecl; overload;//Deprecated
  end;

  [JavaSignature('android/widget/Toolbar$LayoutParams')]
  JToolbar_LayoutParams = interface(JActionBar_LayoutParams)
    ['{BCD101F9-B7B7-4B2F-9460-056B3EA7B9F0}']
  end;
  TJToolbar_LayoutParams = class(TJavaGenericImport<JToolbar_LayoutParamsClass, JToolbar_LayoutParams>) end;

  Jalgorithm_Base64Class = interface(JObjectClass)
    ['{37A14099-2B62-42A6-A377-D84DC3E07CFC}']
    {class} function decode(P1: TJavaArray<Char>): TJavaArray<Byte>; cdecl; overload;
    {class} function decode(P1: TJavaArray<Byte>): TJavaArray<Byte>; cdecl; overload;
    {class} function decode(P1: JString): TJavaArray<Byte>; cdecl; overload;
    {class} function decodeFast(P1: JString): TJavaArray<Byte>; cdecl; overload;
    {class} function decodeFast(P1: TJavaArray<Byte>): TJavaArray<Byte>; cdecl; overload;
    {class} function decodeFast(P1: TJavaArray<Char>): TJavaArray<Byte>; cdecl; overload;
    {class} function encodeToByte(P1: TJavaArray<Byte>; P2: Boolean): TJavaArray<Byte>; cdecl;
    {class} function encodeToChar(P1: TJavaArray<Byte>; P2: Boolean): TJavaArray<Char>; cdecl;
    {class} function encodeToString(P1: TJavaArray<Byte>; P2: Boolean): JString; cdecl;
    {class} function init: Jalgorithm_Base64; cdecl;
  end;

  [JavaSignature('com/tencent/mm/algorithm/Base64')]
  Jalgorithm_Base64 = interface(JObject)
    ['{627AB58D-41D2-4DAF-AD1A-A9651282E17B}']
  end;
  TJalgorithm_Base64 = class(TJavaGenericImport<Jalgorithm_Base64Class, Jalgorithm_Base64>) end;

  JLRUMapClass = interface(JObjectClass)
    ['{DD1203E7-D7D1-46B6-9A43-0263225C9F87}']
    {class} function init(P1: Integer): JLRUMap; cdecl; overload;
    {class} function init(P1: Integer; P2: JLRUMap_PreRemoveCallback): JLRUMap; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/algorithm/LRUMap')]
  JLRUMap = interface(JObject)
    ['{E69FD8B6-71D9-4F0C-AC7B-0D9CBFECE57F}']
    function check(P1: JObject): Boolean; cdecl;
    function checkAndUpTime(P1: JObject): Boolean; cdecl;
    procedure clear; cdecl; overload;
    procedure clear(P1: JLRUMap_OnClearListener); cdecl; overload;
    function &get(P1: JObject): JObject; cdecl;
    function getAndUptime(P1: JObject): JObject; cdecl;
    procedure remove(P1: JObject); cdecl;
    procedure setMaxSize(P1: Integer); cdecl;
    procedure setPerDeleteSize(P1: Integer); cdecl;
    function size: Integer; cdecl;
    procedure update(P1: JObject; P2: JObject); cdecl;
  end;
  TJLRUMap = class(TJavaGenericImport<JLRUMapClass, JLRUMap>) end;

  JLRUMap_1Class = interface(JComparatorClass)
    ['{E38CB8DA-0220-425F-9713-2D11938F8C64}']
    {class} function init(P1: JLRUMap): JLRUMap_1; cdecl;
  end;

  [JavaSignature('com/tencent/mm/algorithm/LRUMap$1')]
  JLRUMap_1 = interface(JComparator)
    ['{3DB00DE7-6427-4F9F-8235-A633A23CB7E7}']
    function compare(P1: JObject; P2: JObject): Integer; cdecl; overload;
    function compare(P1: JMap_Entry; P2: JMap_Entry): Integer; cdecl; overload;
  end;
  TJLRUMap_1 = class(TJavaGenericImport<JLRUMap_1Class, JLRUMap_1>) end;

  JLRUMap_OnClearListenerClass = interface(IJavaClass)
    ['{515B15F9-143C-4017-A19B-DEFC730E07DC}']
  end;

  [JavaSignature('com/tencent/mm/algorithm/LRUMap$OnClearListener')]
  JLRUMap_OnClearListener = interface(IJavaInstance)
    ['{46D2539B-1AF7-48BE-B28C-2E999A19AD71}']
    procedure onClear(P1: JObject; P2: JObject); cdecl;
  end;
  TJLRUMap_OnClearListener = class(TJavaGenericImport<JLRUMap_OnClearListenerClass, JLRUMap_OnClearListener>) end;

  JLRUMap_PreRemoveCallbackClass = interface(IJavaClass)
    ['{A103F6A8-1B38-4A63-97AD-44AFDB438F71}']
  end;

  [JavaSignature('com/tencent/mm/algorithm/LRUMap$PreRemoveCallback')]
  JLRUMap_PreRemoveCallback = interface(IJavaInstance)
    ['{9D4BCC66-363B-4FA2-8873-16777CA414ED}']
    procedure preRemoveCallback(P1: JObject; P2: JObject); cdecl;
  end;
  TJLRUMap_PreRemoveCallback = class(TJavaGenericImport<JLRUMap_PreRemoveCallbackClass, JLRUMap_PreRemoveCallback>) end;

  JLRUMap_TimeValClass = interface(JObjectClass)
    ['{C8727649-87F4-4390-A04F-4BA0C468518A}']
    {class} //function init(P1: J): JLRUMap_TimeVal; cdecl;
  end;

  [JavaSignature('com/tencent/mm/algorithm/LRUMap$TimeVal')]
  JLRUMap_TimeVal = interface(JObject)
    ['{0FBC5E72-600E-4E71-A780-C4C6A17F2B86}']
    function _Getg: JLRUMap; cdecl;
    //function _Getobj: J; cdecl;
    //procedure _Setobj(Value: J); cdecl;
    function _Gett: JLong; cdecl;
    procedure UpTime; cdecl;
    property g: JLRUMap read _Getg;
    //property obj: J read _Getobj write _Setobj;
    property t: JLong read _Gett;
  end;
  TJLRUMap_TimeVal = class(TJavaGenericImport<JLRUMap_TimeValClass, JLRUMap_TimeVal>) end;

  JMD5Class = interface(JObjectClass)
    ['{434A47C1-ED78-460F-A88A-5503E719EB0C}']
    {class} function getMD5(P1: JString): JString; cdecl; overload;
    {class} function getMD5(P1: JFile): JString; cdecl; overload;
    {class} function getMD5(P1: JFileInputStream; P2: Integer): JString; cdecl; overload;
    {class} function getMD5(P1: JFile; P2: Integer): JString; cdecl; overload;
    {class} function getMD5(P1: JString; P2: Integer; P3: Integer): JString; cdecl; overload;
    {class} function getMD5(P1: JFile; P2: Integer; P3: Integer): JString; cdecl; overload;
    {class} function getMD5(P1: JFileInputStream; P2: Integer; P3: Integer; P4: Integer): JString; cdecl; overload;
    {class} function getMessageDigest(P1: TJavaArray<Byte>): JString; cdecl;
    {class} function getRawDigest(P1: TJavaArray<Byte>): TJavaArray<Byte>; cdecl;
  end;

  [JavaSignature('com/tencent/mm/algorithm/MD5')]
  JMD5 = interface(JObject)
    ['{78B664E7-04FA-48FE-917E-CF523A58BB1D}']
  end;
  TJMD5 = class(TJavaGenericImport<JMD5Class, JMD5>) end;

  JTypeTransformClass = interface(JObjectClass)
    ['{A4BF98A9-D317-403A-ACB1-EBBD416C6077}']
    {class} function byteArrayHLToInt(P1: TJavaArray<Byte>): Integer; cdecl; overload;
    {class} function byteArrayHLToInt(P1: TJavaArray<Byte>; P2: Integer): Integer; cdecl; overload;
    {class} function byteArrayHLToLong(P1: TJavaArray<Byte>): Int64; cdecl; overload;
    {class} function byteArrayHLToLong(P1: TJavaArray<Byte>; P2: Integer): Int64; cdecl; overload;
    {class} function byteArrayLHToInt(P1: TJavaArray<Byte>): Integer; cdecl; overload;
    {class} function byteArrayLHToInt(P1: TJavaArray<Byte>; P2: Integer): Integer; cdecl; overload;
    {class} function byteArrayLHToLong(P1: TJavaArray<Byte>): Int64; cdecl; overload;
    {class} function byteArrayLHToLong(P1: TJavaArray<Byte>; P2: Integer): Int64; cdecl; overload;
    {class} function intToByteArrayHL(P1: Integer): TJavaArray<Byte>; cdecl;
    {class} function intToByteArrayLH(P1: Integer): TJavaArray<Byte>; cdecl;
    {class} function longToByteArrayHL(P1: Int64): TJavaArray<Byte>; cdecl;
    {class} function longToByteArrayLH(P1: Int64): TJavaArray<Byte>; cdecl;
  end;

  [JavaSignature('com/tencent/mm/algorithm/TypeTransform')]
  JTypeTransform = interface(JObject)
    ['{73A23ACB-1C42-4FB8-9071-0174D44C23E2}']
  end;
  TJTypeTransform = class(TJavaGenericImport<JTypeTransformClass, JTypeTransform>) end;

  JUINClass = interface(JNumberClass)
    ['{B093DB33-19C0-4592-9D5A-2991B7293634}']
    {class} function init(P1: Integer): JUIN; cdecl; overload;
    {class} function init(P1: Int64): JUIN; cdecl; overload;
    {class} function valueOf(P1: JString): Integer; cdecl;
  end;

  [JavaSignature('com/tencent/mm/algorithm/UIN')]
  JUIN = interface(JNumber)
    ['{86F6449F-A4CA-45A2-8524-17664F61D211}']
    function doubleValue: Double; cdecl;
    function floatValue: Single; cdecl;
    function intValue: Integer; cdecl;
    function longValue: Int64; cdecl;
    function toString: JString; cdecl;
    function value: Integer; cdecl;
  end;
  TJUIN = class(TJavaGenericImport<JUINClass, JUIN>) end;

  Jsdk_BuildClass = interface(JObjectClass)
    ['{2D234297-0A35-4DA0-AF21-4707D69FCF5C}']
    {class} function _GetEMOJI_SUPPORTED_SDK_INT: Integer; cdecl;
    {class} function _GetSDK_INT: Integer; cdecl;
    {class} function _GetSDK_VERSION_NAME: JString; cdecl;
    {class} function _GetTIMELINE_SUPPORTED_SDK_INT: Integer; cdecl;
    {class} property EMOJI_SUPPORTED_SDK_INT: Integer read _GetEMOJI_SUPPORTED_SDK_INT;
    {class} property SDK_INT: Integer read _GetSDK_INT;
    {class} property SDK_VERSION_NAME: JString read _GetSDK_VERSION_NAME;
    {class} property TIMELINE_SUPPORTED_SDK_INT: Integer read _GetTIMELINE_SUPPORTED_SDK_INT;
  end;

  [JavaSignature('com/tencent/mm/sdk/Build')]
  Jsdk_Build = interface(JObject)
    ['{3DD0BC43-1D97-495A-BFED-D566113B3F23}']
  end;
  TJsdk_Build = class(TJavaGenericImport<Jsdk_BuildClass, Jsdk_Build>) end;

  Jsdk_BuildConfigClass = interface(JObjectClass)
    ['{9430DC2D-C68A-4C30-8C5D-FA4948DDEE94}']
    {class} function _GetDEBUG: Boolean; cdecl;
    {class} function init: Jsdk_BuildConfig; cdecl;
    {class} property DEBUG: Boolean read _GetDEBUG;
  end;

  [JavaSignature('com/tencent/mm/sdk/BuildConfig')]
  Jsdk_BuildConfig = interface(JObject)
    ['{66EE8C2D-B37C-4423-8949-23891AF27093}']
  end;
  TJsdk_BuildConfig = class(TJavaGenericImport<Jsdk_BuildConfigClass, Jsdk_BuildConfig>) end;

  JConstantsUIClass = interface(JObjectClass)
    ['{BA0E547F-98FC-4CCD-8822-202C2C9C5777}']
    {class} function _GetPREF_FILE_PATH: JString; cdecl;
    {class} property PREF_FILE_PATH: JString read _GetPREF_FILE_PATH;
  end;

  [JavaSignature('com/tencent/mm/sdk/ConstantsUI')]
  JConstantsUI = interface(JObject)
    ['{3A6A0634-06C7-4C68-97CC-5BC4587C9903}']
  end;
  TJConstantsUI = class(TJavaGenericImport<JConstantsUIClass, JConstantsUI>) end;

  JConstantsUI_ContactClass = interface(JObjectClass)
    ['{45545E6D-50A3-4B4E-9B8F-FC6F2006A100}']
    {class} function _GetKUser: JString; cdecl;
    {class} property KUser: JString read _GetKUser;
  end;

  [JavaSignature('com/tencent/mm/sdk/ConstantsUI$Contact')]
  JConstantsUI_Contact = interface(JObject)
    ['{349FDE6C-30F1-46BD-AC1E-4D1DC5E7EA2A}']
  end;
  TJConstantsUI_Contact = class(TJavaGenericImport<JConstantsUI_ContactClass, JConstantsUI_Contact>) end;

  JMMAppMgrClass = interface(JObjectClass)
    ['{3E21BE3C-5A73-4715-91EA-D7D8AC159558}']
    {class} procedure activate(P1: Boolean); cdecl;
    {class} function getPluginMgr(P1: JContext): JIMMPluginAPI; cdecl;
    {class} function getSharedPreferences(P1: JContext; P2: Integer): JSharedPreferences; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/MMAppMgr')]
  JMMAppMgr = interface(JObject)
    ['{D1033934-FF90-4D6F-97E5-AE0A96FA7E55}']
  end;
  TJMMAppMgr = class(TJavaGenericImport<JMMAppMgrClass, JMMAppMgr>) end;

  JMMSharedPreferencesClass = interface(JSharedPreferencesClass)
    ['{12E86B64-E980-4616-90F3-67C80AC170C5}']
    {class} function init(P1: JContext): JMMSharedPreferences; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/MMSharedPreferences')]
  JMMSharedPreferences = interface(JSharedPreferences)
    ['{BFCF96ED-7129-4D94-80FC-ABD5DC035BC9}']
    function &contains(P1: JString): Boolean; cdecl;
    function edit: JSharedPreferences_Editor; cdecl;
    function getAll: JMap; cdecl;
    function getBoolean(P1: JString; P2: Boolean): Boolean; cdecl;
    function getFloat(P1: JString; P2: Single): Single; cdecl;
    function getInt(P1: JString; P2: Integer): Integer; cdecl;
    function getLong(P1: JString; P2: Int64): Int64; cdecl;
    function getString(P1: JString; P2: JString): JString; cdecl;
    function getStringSet(P1: JString; P2: JSet): JSet; cdecl;
    procedure registerOnSharedPreferenceChangeListener(P1: JSharedPreferences_OnSharedPreferenceChangeListener); cdecl;
    procedure unregisterOnSharedPreferenceChangeListener(P1: JSharedPreferences_OnSharedPreferenceChangeListener); cdecl;
  end;
  TJMMSharedPreferences = class(TJavaGenericImport<JMMSharedPreferencesClass, JMMSharedPreferences>) end;

  JMMSharedPreferences_REditorClass = interface(JSharedPreferences_EditorClass)
    ['{8DCF9A17-CA51-4FF5-915C-2AABFD7D2251}']
    {class} function init(P1: JContentResolver): JMMSharedPreferences_REditor; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/MMSharedPreferences$REditor')]
  JMMSharedPreferences_REditor = interface(JSharedPreferences_Editor)
    ['{C5C461B9-715D-4A06-85CB-9A364920A1A8}']
    procedure apply; cdecl;
    function clear: JSharedPreferences_Editor; cdecl;
    function commit: Boolean; cdecl;
    function putBoolean(P1: JString; P2: Boolean): JSharedPreferences_Editor; cdecl;
    function putFloat(P1: JString; P2: Single): JSharedPreferences_Editor; cdecl;
    function putInt(P1: JString; P2: Integer): JSharedPreferences_Editor; cdecl;
    function putLong(P1: JString; P2: Int64): JSharedPreferences_Editor; cdecl;
    function putString(P1: JString; P2: JString): JSharedPreferences_Editor; cdecl;
    function putStringSet(P1: JString; P2: JSet): JSharedPreferences_Editor; cdecl;
    function remove(P1: JString): JSharedPreferences_Editor; cdecl;
  end;
  TJMMSharedPreferences_REditor = class(TJavaGenericImport<JMMSharedPreferences_REditorClass, JMMSharedPreferences_REditor>) end;

  JConstantsMMessageClass = interface(JObjectClass)
    ['{CCAFBA9F-A591-42CA-AEFF-6E2D96DE08A5}']
    {class} function _GetACTION_MESSAGE: JString; cdecl;
    {class} function _GetAPP_PACKAGE: JString; cdecl;
    {class} function _GetCHECK_SUM: JString; cdecl;
    {class} function _GetCONTENT: JString; cdecl;
    {class} function _GetSDK_VERSION: JString; cdecl;
    {class} function init: JConstantsMMessage; cdecl;
    {class} property ACTION_MESSAGE: JString read _GetACTION_MESSAGE;
    {class} property APP_PACKAGE: JString read _GetAPP_PACKAGE;
    {class} property CHECK_SUM: JString read _GetCHECK_SUM;
    {class} property CONTENT: JString read _GetCONTENT;
    {class} property SDK_VERSION: JString read _GetSDK_VERSION;
  end;

  [JavaSignature('com/tencent/mm/sdk/channel/ConstantsMMessage')]
  JConstantsMMessage = interface(JObject)
    ['{2DE125B1-D71E-4E2D-B6B2-4DBEB6E0C1CA}']
  end;
  TJConstantsMMessage = class(TJavaGenericImport<JConstantsMMessageClass, JConstantsMMessage>) end;

  JMMessageClass = interface(JObjectClass)
    ['{AAC40733-1725-47D9-AD4C-6EABA0D6FFC6}']
    {class} function init: JMMessage; cdecl;
    {class} procedure send(P1: JContext; P2: JString; P3: JString); cdecl; overload;
    {class} procedure send(P1: JContext; P2: JString; P3: JString; P4: JString); cdecl; overload;
    {class} function send(P1: JContext; P2: JString; P3: JString; P4: JString; P5: JBundle): Boolean; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/channel/MMessage')]
  JMMessage = interface(JObject)
    ['{1EB2423C-E9A6-49C1-9D8F-248927F4F30D}']
  end;
  TJMMessage = class(TJavaGenericImport<JMMessageClass, JMMessage>) end;

  JMMessage_CallBackClass = interface(IJavaClass)
    ['{D4D9A5E6-D309-456D-AD30-12D039298AD1}']
  end;

  [JavaSignature('com/tencent/mm/sdk/channel/MMessage$CallBack')]
  JMMessage_CallBack = interface(IJavaInstance)
    ['{3BA81BF8-0817-4D63-AF1F-51D78A78D836}']
    procedure handleMessage(P1: JIntent); cdecl;
  end;
  TJMMessage_CallBack = class(TJavaGenericImport<JMMessage_CallBackClass, JMMessage_CallBack>) end;

  JMMessage_ReceiverClass = interface(JBroadcastReceiverClass)
    ['{2E2047DF-244B-4BCF-92D3-F6C17E576407}']
    {class} function _Getcallbacks: JMap; cdecl;
    {class} function init: JMMessage_Receiver; cdecl; overload;
    {class} function init(P1: JMMessage_CallBack): JMMessage_Receiver; cdecl; overload;
    {class} procedure registerCallBack(P1: JString; P2: JMMessage_CallBack); cdecl;
    {class} procedure unregisterCallBack(P1: JString); cdecl;
    {class} property callbacks: JMap read _Getcallbacks;
  end;

  [JavaSignature('com/tencent/mm/sdk/channel/MMessage$Receiver')]
  JMMessage_Receiver = interface(JBroadcastReceiver)
    ['{F8308DE1-7DA1-493E-835C-7FAFC3EBA4D0}']
    procedure onReceive(P1: JContext; P2: JIntent); cdecl;
  end;
  TJMMessage_Receiver = class(TJavaGenericImport<JMMessage_ReceiverClass, JMMessage_Receiver>) end;

  JMMessageActClass = interface(JObjectClass)
    ['{1218CD0C-EED1-4812-B047-CFD6F317EB69}']
    {class} function init: JMMessageAct; cdecl;
    {class} function send(P1: JContext; P2: JString; P3: JString): Boolean; cdecl; overload;
    {class} function send(P1: JContext; P2: JString; P3: JString; P4: JBundle): Boolean; cdecl; overload;
    {class} function send(P1: JContext; P2: JString; P3: JString; P4: JString; P5: JBundle): Boolean; cdecl; overload;
    {class} function sendToWx(P1: JContext; P2: JString): Boolean; cdecl; overload;
    {class} function sendToWx(P1: JContext; P2: JString; P3: JBundle): Boolean; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/channel/MMessageAct')]
  JMMessageAct = interface(JObject)
    ['{3962F180-66E8-465B-924B-7EA0F4815DC7}']
  end;
  TJMMessageAct = class(TJavaGenericImport<JMMessageActClass, JMMessageAct>) end;

  JMMessageUtilClass = interface(JObjectClass)
    ['{73B835A6-2A39-460A-BE56-14B3A43B9CEC}']
  end;

  [JavaSignature('com/tencent/mm/sdk/channel/MMessageUtil')]
  JMMessageUtil = interface(JObject)
    ['{DAE32003-6E9E-43A3-97DE-7E35EBC3A8BD}']
  end;
  TJMMessageUtil = class(TJavaGenericImport<JMMessageUtilClass, JMMessageUtil>) end;

  Jpackage_infoClass = interface(IJavaClass)
    ['{7B67FA98-8923-44F3-835F-737170AB6431}']
  end;

  [JavaSignature('com/tencent/mm/sdk/channel/package-info')]
  Jpackage_info = interface(IJavaInstance)
    ['{47A92DB5-A29E-47B4-86AD-86421FC1A304}']
  end;
  TJpackage_info = class(TJavaGenericImport<Jpackage_infoClass, Jpackage_info>) end;

  JMDBItemClass = interface(IJavaClass)
    ['{1C84B877-A3BD-450E-BD47-8DBACA08991E}']
  end;

  [JavaSignature('com/tencent/mm/sdk/storage/MDBItem')]
  JMDBItem = interface(IJavaInstance)
    ['{08A0F32A-7CEA-48BC-BC14-C5F7759A1268}']
    procedure convertFrom(P1: JCursor); cdecl;
    function convertTo: JContentValues; cdecl;
  end;
  TJMDBItem = class(TJavaGenericImport<JMDBItemClass, JMDBItem>) end;

  JMAutoDBItemClass = interface(JMDBItemClass)
    ['{60AB1525-AA4C-422C-B948-8E285D7EBE84}']
    {class} function _GetSYSTEM_ROWID_FIELD: JString; cdecl;
    {class} function checkIOEqual(P1: JContentValues; P2: JCursor): Boolean; cdecl;
    {class} function getCursorForProjection(P1: JContentValues; P2: TJavaObjectArray<JString>): JCursor; cdecl;
    {class} function getFullColumns(P1: TJavaObjectArray<JField>): TJavaObjectArray<JString>; cdecl;
    {class} function getValidFields(P1: Jlang_Class): TJavaObjectArray<JField>; cdecl;
    {class} //function identify(P1: TJavaObjectArray<JField>; P2: JStringBuilder; P3: JString): JMap; cdecl;
    {class} function init: JMAutoDBItem; cdecl;
    {class} property SYSTEM_ROWID_FIELD: JString read _GetSYSTEM_ROWID_FIELD;
  end;

  [JavaSignature('com/tencent/mm/sdk/storage/MAutoDBItem')]
  JMAutoDBItem = interface(JMDBItem)
    ['{D1289611-FC7E-43D6-96A9-60B271119E7D}']
    function _GetsystemRowid: Int64; cdecl;
    procedure convertFrom(P1: JCursor); cdecl;
    function convertTo: JContentValues; cdecl;
    function fields: TJavaObjectArray<JField>; cdecl;
    property systemRowid: Int64 read _GetsystemRowid;
  end;
  TJMAutoDBItem = class(TJavaGenericImport<JMAutoDBItemClass, JMAutoDBItem>) end;

  JRContactClass = interface(JMAutoDBItemClass)
    ['{EC262931-C469-4D9C-A61F-CE7EEA33948C}']
    {class} function _GetCOLUMNS: TJavaObjectArray<JString>; cdecl;
    {class} function _GetCOL_ALIAS: JString; cdecl;
    {class} function _GetCOL_CONREMARK: JString; cdecl;
    {class} function _GetCOL_CONREMARK_PYFULL: JString; cdecl;
    {class} function _GetCOL_CONREMARK_PYSHORT: JString; cdecl;
    {class} function _GetCOL_DOMAINLIST: JString; cdecl;
    {class} function _GetCOL_ID_INVALID_VALUE: Integer; cdecl;
    {class} function _GetCOL_NICKNAME: JString; cdecl;
    {class} function _GetCOL_PYINITIAL: JString; cdecl;
    {class} function _GetCOL_QUANPIN: JString; cdecl;
    {class} function _GetCOL_SHOWHEAD: JString; cdecl;
    {class} function _GetCOL_TYPE: JString; cdecl;
    {class} function _GetCOL_USERNAME: JString; cdecl;
    {class} function _GetCOL_VERIFY_FLAG: JString; cdecl;
    {class} function _GetCOL_WEIBOFLAG: JString; cdecl;
    {class} function _GetCOL_WEIBONICKNAME: JString; cdecl;
    {class} function _GetDEL_CONTACT_MSG: Integer; cdecl;
    {class} function _GetFAVOUR_CONTACT_SHOW_HEAD_CHAR: JString; cdecl;
    {class} function _GetFAVOUR_CONTACT_SHOW_HEAD_CODE: Integer; cdecl;
    {class} function _GetMM_CONTACTFLAG_ALL: Integer; cdecl;
    {class} function _GetMM_CONTACTFLAG_BLACKLISTCONTACT: Integer; cdecl;
    {class} function _GetMM_CONTACTFLAG_CHATCONTACT: Integer; cdecl;
    {class} function _GetMM_CONTACTFLAG_CHATROOMCONTACT: Integer; cdecl;
    {class} function _GetMM_CONTACTFLAG_CONTACT: Integer; cdecl;
    {class} function _GetMM_CONTACTFLAG_DOMAINCONTACT: Integer; cdecl;
    {class} function _GetMM_CONTACTFLAG_FAVOURCONTACT: Integer; cdecl;
    {class} function _GetMM_CONTACTFLAG_HIDECONTACT: Integer; cdecl;
    {class} function _GetMM_CONTACTFLAG_NULL: Integer; cdecl;
    {class} function _GetMM_CONTACTIMGFLAG_HAS_HEADIMG: Integer; cdecl;
    {class} function _GetMM_CONTACTIMGFLAG_HAS_NO_HEADIMG: Integer; cdecl;
    {class} function _GetMM_CONTACTIMGFLAG_LOCAL_EXIST: Integer; cdecl;
    {class} function _GetMM_CONTACTIMGFLAG_MODIFY: Integer; cdecl;
    {class} function _GetMM_CONTACTIMGFLAG_NOTMODIFY: Integer; cdecl;
    {class} function _GetMM_CONTACT_BOTTLE: Integer; cdecl;
    {class} function _GetMM_CONTACT_CHATROOM: Integer; cdecl;
    {class} function _GetMM_CONTACT_EMAIL: Integer; cdecl;
    {class} function _GetMM_CONTACT_QQ: Integer; cdecl;
    {class} function _GetMM_CONTACT_QQMICROBLOG: Integer; cdecl;
    {class} function _GetMM_CONTACT_WEIXIN: Integer; cdecl;
    {class} function _GetMM_SEX_FEMALE: Integer; cdecl;
    {class} function _GetMM_SEX_MALE: Integer; cdecl;
    {class} function _GetMM_SEX_UNKNOWN: Integer; cdecl;
    {class} function _GetNOT_IN_CHAT_LIST: Integer; cdecl;
    {class} function formatDisplayNick(P1: JString): JString; cdecl;
    {class} function getBlackListContactBit: Integer; cdecl;
    {class} function getContactBit: Integer; cdecl;
    {class} function getDomainContactBit: Integer; cdecl;
    {class} function getHiddenContactBit: Integer; cdecl;
    {class} function init: JRContact; cdecl; overload;
    {class} function init(P1: JString): JRContact; cdecl; overload;
    {class} function isContact(P1: Integer): Boolean; cdecl; overload;
    {class} procedure setHardCodeAliasMaps(P1: JMap); cdecl;
    {class} procedure setHardCodeNickMaps(P1: JMap); cdecl;
    {class} property COLUMNS: TJavaObjectArray<JString> read _GetCOLUMNS;
    {class} property COL_ALIAS: JString read _GetCOL_ALIAS;
    {class} property COL_CONREMARK: JString read _GetCOL_CONREMARK;
    {class} property COL_CONREMARK_PYFULL: JString read _GetCOL_CONREMARK_PYFULL;
    {class} property COL_CONREMARK_PYSHORT: JString read _GetCOL_CONREMARK_PYSHORT;
    {class} property COL_DOMAINLIST: JString read _GetCOL_DOMAINLIST;
    {class} property COL_ID_INVALID_VALUE: Integer read _GetCOL_ID_INVALID_VALUE;
    {class} property COL_NICKNAME: JString read _GetCOL_NICKNAME;
    {class} property COL_PYINITIAL: JString read _GetCOL_PYINITIAL;
    {class} property COL_QUANPIN: JString read _GetCOL_QUANPIN;
    {class} property COL_SHOWHEAD: JString read _GetCOL_SHOWHEAD;
    {class} property COL_TYPE: JString read _GetCOL_TYPE;
    {class} property COL_USERNAME: JString read _GetCOL_USERNAME;
    {class} property COL_VERIFY_FLAG: JString read _GetCOL_VERIFY_FLAG;
    {class} property COL_WEIBOFLAG: JString read _GetCOL_WEIBOFLAG;
    {class} property COL_WEIBONICKNAME: JString read _GetCOL_WEIBONICKNAME;
    {class} property DEL_CONTACT_MSG: Integer read _GetDEL_CONTACT_MSG;
    {class} property FAVOUR_CONTACT_SHOW_HEAD_CHAR: JString read _GetFAVOUR_CONTACT_SHOW_HEAD_CHAR;
    {class} property FAVOUR_CONTACT_SHOW_HEAD_CODE: Integer read _GetFAVOUR_CONTACT_SHOW_HEAD_CODE;
    {class} property MM_CONTACTFLAG_ALL: Integer read _GetMM_CONTACTFLAG_ALL;
    {class} property MM_CONTACTFLAG_BLACKLISTCONTACT: Integer read _GetMM_CONTACTFLAG_BLACKLISTCONTACT;
    {class} property MM_CONTACTFLAG_CHATCONTACT: Integer read _GetMM_CONTACTFLAG_CHATCONTACT;
    {class} property MM_CONTACTFLAG_CHATROOMCONTACT: Integer read _GetMM_CONTACTFLAG_CHATROOMCONTACT;
    {class} property MM_CONTACTFLAG_CONTACT: Integer read _GetMM_CONTACTFLAG_CONTACT;
    {class} property MM_CONTACTFLAG_DOMAINCONTACT: Integer read _GetMM_CONTACTFLAG_DOMAINCONTACT;
    {class} property MM_CONTACTFLAG_FAVOURCONTACT: Integer read _GetMM_CONTACTFLAG_FAVOURCONTACT;
    {class} property MM_CONTACTFLAG_HIDECONTACT: Integer read _GetMM_CONTACTFLAG_HIDECONTACT;
    {class} property MM_CONTACTFLAG_NULL: Integer read _GetMM_CONTACTFLAG_NULL;
    {class} property MM_CONTACTIMGFLAG_HAS_HEADIMG: Integer read _GetMM_CONTACTIMGFLAG_HAS_HEADIMG;
    {class} property MM_CONTACTIMGFLAG_HAS_NO_HEADIMG: Integer read _GetMM_CONTACTIMGFLAG_HAS_NO_HEADIMG;
    {class} property MM_CONTACTIMGFLAG_LOCAL_EXIST: Integer read _GetMM_CONTACTIMGFLAG_LOCAL_EXIST;
    {class} property MM_CONTACTIMGFLAG_MODIFY: Integer read _GetMM_CONTACTIMGFLAG_MODIFY;
    {class} property MM_CONTACTIMGFLAG_NOTMODIFY: Integer read _GetMM_CONTACTIMGFLAG_NOTMODIFY;
    {class} property MM_CONTACT_BOTTLE: Integer read _GetMM_CONTACT_BOTTLE;
    {class} property MM_CONTACT_CHATROOM: Integer read _GetMM_CONTACT_CHATROOM;
    {class} property MM_CONTACT_EMAIL: Integer read _GetMM_CONTACT_EMAIL;
    {class} property MM_CONTACT_QQ: Integer read _GetMM_CONTACT_QQ;
    {class} property MM_CONTACT_QQMICROBLOG: Integer read _GetMM_CONTACT_QQMICROBLOG;
    {class} property MM_CONTACT_WEIXIN: Integer read _GetMM_CONTACT_WEIXIN;
    {class} property MM_SEX_FEMALE: Integer read _GetMM_SEX_FEMALE;
    {class} property MM_SEX_MALE: Integer read _GetMM_SEX_MALE;
    {class} property MM_SEX_UNKNOWN: Integer read _GetMM_SEX_UNKNOWN;
    {class} property NOT_IN_CHAT_LIST: Integer read _GetNOT_IN_CHAT_LIST;
  end;

  [JavaSignature('com/tencent/mm/sdk/contact/RContact')]
  JRContact = interface(JMAutoDBItem)
    ['{E1AFB211-43C3-4272-937F-77F17BA66AEF}']
    function _GetcontactId: Int64; cdecl;
    function _Getfield_alias: JString; cdecl;
    function _Getfield_conRemark: JString; cdecl;
    function _Getfield_conRemarkPYFull: JString; cdecl;
    function _Getfield_conRemarkPYShort: JString; cdecl;
    function _Getfield_domainList: JString; cdecl;
    function _Getfield_lvbuff: TJavaArray<Byte>; cdecl;
    function _Getfield_nickname: JString; cdecl;
    function _Getfield_pyInitial: JString; cdecl;
    function _Getfield_quanPin: JString; cdecl;
    function _Getfield_showHead: Integer; cdecl;
    function _Getfield_type: Integer; cdecl;
    function _Getfield_username: JString; cdecl;
    function _Getfield_verifyFlag: Integer; cdecl;
    function _Getfield_weiboFlag: Integer; cdecl;
    function _Getfield_weiboNickname: JString; cdecl;
    function calculateShowHead: Integer; cdecl;
    procedure convertFrom(P1: JCursor); cdecl;
    function convertTo: JContentValues; cdecl;
    function fields: TJavaObjectArray<JField>; cdecl;
    function getAlias: JString; cdecl;
    function getChatroomNotify: Integer; cdecl;
    function getCity: JString; cdecl;
    function getConQQMBlog: JString; cdecl;
    function getConRemark: JString; cdecl;
    function getConRemarkPYFull: JString; cdecl;
    function getConRemarkPYShort: JString; cdecl;
    function getConSMBlog: JString; cdecl;
    function getConType: Integer; cdecl;
    function getContactID: Integer; cdecl;
    function getDisplayNick: JString; cdecl;
    function getDisplayRemark: JString; cdecl;
    function getDisplayUser: JString; cdecl;
    function getDistance: JString; cdecl;
    function getDomainList: JString; cdecl;
    function getEmail: JString; cdecl;
    function getFaceBookId: Int64; cdecl;
    function getFaceBookUsername: JString; cdecl;
    function getFromType: Integer; cdecl;
    function getImgFlag: Integer; cdecl;
    function getMobile: JString; cdecl;
    function getNickname: JString; cdecl;
    function getPersonalCard: Integer; cdecl;
    function getProvince: JString; cdecl;
    function getPyInitial: JString; cdecl;
    function getQuanPin: JString; cdecl;
    function getRegionCode: JString; cdecl;
    function getSex: Integer; cdecl;
    function getShowFlag: Integer; cdecl;
    function getShowHead: Integer; cdecl;
    function getSignature: JString; cdecl;
    function getSource: Integer; cdecl;
    function getType: Integer; cdecl;
    function getUin: Integer; cdecl;
    function getUsername: JString; cdecl;
    function getVerifyFlag: Integer; cdecl;
    function getVerifyInfo: JString; cdecl;
    function getWeibo: JString; cdecl;
    function getWeiboFlag: Integer; cdecl;
    function getWeiboNickName: JString; cdecl;
    function isBlackListContact: Boolean; cdecl;
    function isChatContact: Boolean; cdecl;
    function isChatRoomContact: Boolean; cdecl;
    function isContact: Boolean; cdecl; overload;
    function isDomainContact: Boolean; cdecl;
    function isFavourContact: Boolean; cdecl;
    function isHidden: Boolean; cdecl;
    function isImgLocalExist: Boolean; cdecl;
    procedure reset; cdecl;
    procedure setAlias(P1: JString); cdecl;
    procedure setBlackList; cdecl;
    procedure setChatContact; cdecl;
    procedure setChatroomContact; cdecl;
    procedure setChatroomNotify(P1: Integer); cdecl;
    procedure setCity(P1: JString); cdecl;
    procedure setConQQMBlog(P1: JString); cdecl;
    procedure setConRemark(P1: JString); cdecl;
    procedure setConRemarkPYFull(P1: JString); cdecl;
    procedure setConRemarkPYShort(P1: JString); cdecl;
    procedure setConSMBlog(P1: JString); cdecl;
    procedure setConType(P1: Integer); cdecl;
    procedure setContact; cdecl;
    procedure setDistance(P1: JString); cdecl;
    procedure setDomainList(P1: JString); cdecl;
    procedure setEmail(P1: JString); cdecl;
    procedure setFaceBookId(P1: Int64); cdecl;
    procedure setFaceBookUsername(P1: JString); cdecl;
    procedure setFavour; cdecl;
    procedure setFromType(P1: Integer); cdecl;
    procedure setHidden; cdecl;
    procedure setImgFlag(P1: Integer); cdecl;
    procedure setMobile(P1: JString); cdecl;
    procedure setNickname(P1: JString); cdecl;
    procedure setNullContact; cdecl;
    procedure setPersonalCard(P1: Integer); cdecl;
    procedure setProvince(P1: JString); cdecl;
    procedure setPyInitial(P1: JString); cdecl;
    procedure setQuanPin(P1: JString); cdecl;
    procedure setRegionCode(P1: JString); cdecl;
    procedure setSex(P1: Integer); cdecl;
    procedure setShowFlag(P1: Integer); cdecl;
    procedure setShowHead(P1: Integer); cdecl;
    procedure setSignature(P1: JString); cdecl;
    procedure setSource(P1: Integer); cdecl;
    procedure setType(P1: Integer); cdecl;
    procedure setUin(P1: Integer); cdecl;
    procedure setUsername(P1: JString); cdecl;
    procedure setVerifyFlag(P1: Integer); cdecl;
    procedure setVerifyInfo(P1: JString); cdecl;
    procedure setWeibo(P1: JString); cdecl;
    procedure setWeiboFlag(P1: Integer); cdecl;
    procedure setWeiboNickName(P1: JString); cdecl;
    procedure unSetBlackList; cdecl;
    procedure unSetChatContact; cdecl;
    procedure unSetContact; cdecl;
    procedure unSetFavour; cdecl;
    procedure unSetHidden; cdecl;
    property contactId: Int64 read _GetcontactId;
    property field_alias: JString read _Getfield_alias;
    property field_conRemark: JString read _Getfield_conRemark;
    property field_conRemarkPYFull: JString read _Getfield_conRemarkPYFull;
    property field_conRemarkPYShort: JString read _Getfield_conRemarkPYShort;
    property field_domainList: JString read _Getfield_domainList;
    property field_lvbuff: TJavaArray<Byte> read _Getfield_lvbuff;
    property field_nickname: JString read _Getfield_nickname;
    property field_pyInitial: JString read _Getfield_pyInitial;
    property field_quanPin: JString read _Getfield_quanPin;
    property field_showHead: Integer read _Getfield_showHead;
    property field_type: Integer read _Getfield_type;
    property field_username: JString read _Getfield_username;
    property field_verifyFlag: Integer read _Getfield_verifyFlag;
    property field_weiboFlag: Integer read _Getfield_weiboFlag;
    property field_weiboNickname: JString read _Getfield_weiboNickname;
  end;
  TJRContact = class(TJavaGenericImport<JRContactClass, JRContact>) end;

  JRContactAvatarClass = interface(JObjectClass)
    ['{2E71372C-322C-475B-AB41-5087D1077736}']
    {class} function init: JRContactAvatar; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/contact/RContactAvatar')]
  JRContactAvatar = interface(JObject)
    ['{08A904DE-78DC-4CCE-B935-15FE86B8B64A}']
  end;
  TJRContactAvatar = class(TJavaGenericImport<JRContactAvatarClass, JRContactAvatar>) end;

  JISQLiteDatabaseClass = interface(IJavaClass)
    ['{84F602C0-9F5B-4201-B8B9-4C5A22D421BA}']
  end;

  [JavaSignature('com/tencent/mm/sdk/storage/ISQLiteDatabase')]
  JISQLiteDatabase = interface(IJavaInstance)
    ['{19BE4CA7-195E-4D32-BB8A-27651E51A388}']
    function delete(P1: JString; P2: JString; P3: TJavaObjectArray<JString>): Integer; cdecl;
    function execSQL(P1: JString; P2: JString): Boolean; cdecl;
    function insert(P1: JString; P2: JString; P3: JContentValues): Int64; cdecl;
    function query(P1: JString; P2: TJavaObjectArray<JString>; P3: JString; P4: TJavaObjectArray<JString>; P5: JString; P6: JString; P7: JString): JCursor; cdecl;
    function rawQuery(P1: JString; P2: TJavaObjectArray<JString>): JCursor; cdecl;
    function replace(P1: JString; P2: JString; P3: JContentValues): Int64; cdecl;
    function update(P1: JString; P2: JContentValues; P3: JString; P4: TJavaObjectArray<JString>): Integer; cdecl;
  end;
  TJISQLiteDatabase = class(TJavaGenericImport<JISQLiteDatabaseClass, JISQLiteDatabase>) end;

  JContentProviderDBClass = interface(JISQLiteDatabaseClass)
    ['{32848B93-D552-4514-B4C7-02D6668A8DC7}']
    {class} function init(P1: JContext): JContentProviderDB; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/storage/ContentProviderDB')]
  JContentProviderDB = interface(JISQLiteDatabase)
    ['{A19A379D-025D-46A7-BF50-1BEB44A5CC8B}']
    function delete(P1: JString; P2: JString; P3: TJavaObjectArray<JString>): Integer; cdecl;
    function execSQL(P1: JString; P2: JString): Boolean; cdecl;
    function getUriFromTable(P1: JString): Jnet_Uri; cdecl;
    function insert(P1: JString; P2: JString; P3: JContentValues): Int64; cdecl;
    function query(P1: JString; P2: TJavaObjectArray<JString>; P3: JString; P4: TJavaObjectArray<JString>; P5: JString; P6: JString; P7: JString): JCursor; cdecl;
    function rawQuery(P1: JString; P2: TJavaObjectArray<JString>): JCursor; cdecl;
    function replace(P1: JString; P2: JString; P3: JContentValues): Int64; cdecl;
    function update(P1: JString; P2: JContentValues; P3: JString; P4: TJavaObjectArray<JString>): Integer; cdecl;
  end;
  TJContentProviderDB = class(TJavaGenericImport<JContentProviderDBClass, JContentProviderDB>) end;

  JRContactDBClass = interface(JContentProviderDBClass)
    ['{E271C2F7-EF53-45EF-BC42-4B81450BF886}']
    {class} function init(P1: JContext): JRContactDB; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/contact/RContactDB')]
  JRContactDB = interface(JContentProviderDB)
    ['{10C289D3-8529-4C9B-BC61-7896F9ECDF96}']
    function getUriFromTable(P1: JString): Jnet_Uri; cdecl;
  end;
  TJRContactDB = class(TJavaGenericImport<JRContactDBClass, JRContactDB>) end;

  JMStorageClass = interface(JObjectClass)
    ['{04894A7E-8BDA-4667-8281-CA5FC526B6FC}']
    {class} function init: JMStorage; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/storage/MStorage')]
  JMStorage = interface(JObject)
    ['{1E02057C-2642-4A94-9DF6-7A1ACC4AB8A3}']
    procedure add(P1: JMStorage_IOnStorageChange); cdecl;
    procedure addLoadedListener(P1: JMStorage_IOnStorageLoaded); cdecl;
    procedure doNotify; cdecl; overload;
    procedure doNotify(P1: JString); cdecl; overload;
    procedure lock; cdecl;
    procedure remove(P1: JMStorage_IOnStorageChange); cdecl;
    procedure removeLoadedListener(P1: JMStorage_IOnStorageLoaded); cdecl;
    procedure unlock; cdecl;
  end;
  TJMStorage = class(TJavaGenericImport<JMStorageClass, JMStorage>) end;

  JMAutoStorageClass = interface(JMStorageClass)
    ['{2328E7F1-A579-4F62-AD24-62FE77740122}']
    {class} function getUpdateSQLs(P1: TJavaObjectArray<JField>; P2: JString; P3: JISQLiteDatabase): JList; cdecl;
    {class} function init(P1: JISQLiteDatabase): JMAutoStorage; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/storage/MAutoStorage')]
  JMAutoStorage = interface(JMStorage)
    ['{0A25EBE1-975B-457C-B46A-D0C21AE259B0}']
    function delete(P1: Int64): Boolean; cdecl; overload;
    function &get(P1: Int64; P2: JMAutoDBItem): Boolean; cdecl; overload;
    function getAll: JCursor; cdecl;
    function getColumns: TJavaObjectArray<JString>; cdecl;
    function getCount: Integer; cdecl;
    function getPrimaryKey: JString; cdecl;
    function getTableName: JString; cdecl;
    function insert(P1: JMAutoDBItem): Boolean; cdecl;
    function replace(P1: JMAutoDBItem): Boolean; cdecl;
    function update(P1: Int64; P2: JMAutoDBItem): Boolean; cdecl; overload;
  end;
  TJMAutoStorage = class(TJavaGenericImport<JMAutoStorageClass, JMAutoStorage>) end;

  JRContactStorageClass = interface(JMAutoStorageClass)
    ['{278D12CA-7CBE-414F-905B-890B2267D072}']
    {class} function _GetAUTHORITY: JString; cdecl;
    {class} function _GetPRIMARY_KEY: JString; cdecl;
    {class} function _GetTABLE: JString; cdecl;
    {class} function create(P1: JContext): JRContactStorage; cdecl;
    {class} property AUTHORITY: JString read _GetAUTHORITY;
    {class} property PRIMARY_KEY: JString read _GetPRIMARY_KEY;
    {class} property TABLE: JString read _GetTABLE;
  end;

  [JavaSignature('com/tencent/mm/sdk/contact/RContactStorage')]
  JRContactStorage = interface(JMAutoStorage)
    ['{885A9E67-87B0-4B45-9A89-60950848394D}']
    function &get(P1: JString): JRContact; cdecl;
    function getColumns: TJavaObjectArray<JString>; cdecl;
    function getPrimaryKey: JString; cdecl;
    function getTableName: JString; cdecl;
  end;
  TJRContactStorage = class(TJavaGenericImport<JRContactStorageClass, JRContactStorage>) end;

  Jcontact_package_infoClass = interface(IJavaClass)
    ['{5321413D-9111-4E10-94B7-3C59FF565030}']
  end;

  [JavaSignature('com/tencent/mm/sdk/contact/package-info')]
  Jcontact_package_info = interface(IJavaInstance)
    ['{B13170AC-3AB8-4319-9187-378539050DD8}']
  end;
  TJcontact_package_info = class(TJavaGenericImport<Jcontact_package_infoClass, Jcontact_package_info>) end;

  JRConversationClass = interface(JMAutoDBItemClass)
    ['{41F88A8E-85D2-4D7F-A3CC-2098D347E447}']
    {class} function _GetCOLUMNS: TJavaObjectArray<JString>; cdecl;
    {class} function _GetCOL_CHATMODE: JString; cdecl;
    {class} function _GetCOL_CONTENT: JString; cdecl;
    {class} function _GetCOL_CONVERSATION_TIME: JString; cdecl;
    {class} function _GetCOL_FLAG: JString; cdecl;
    {class} function _GetCOL_IS_SEND: JString; cdecl;
    {class} function _GetCOL_MSGTYPE: JString; cdecl;
    {class} function _GetCOL_STATUS: JString; cdecl;
    {class} function _GetCOL_UNREAD_COUNT: JString; cdecl;
    {class} function _GetCOL_UNREAD_COUNT_INVALID_VALUE: Integer; cdecl;
    {class} function _GetCOL_USERNAME: JString; cdecl;
    {class} function _GetFLAG_NORMAL: Integer; cdecl;
    {class} function _GetHAS_SHOWN_TIPS: Integer; cdecl;
    {class} function _GetINDEX_CONTENT: Integer; cdecl;
    {class} function _GetINDEX_CONVERSATION_TIME: Integer; cdecl;
    {class} function _GetINDEX_FLAG: Integer; cdecl;
    {class} function _GetINDEX_IS_SEND: Integer; cdecl;
    {class} function _GetINDEX_MSGTYPE: Integer; cdecl;
    {class} function _GetINDEX_STATUE: Integer; cdecl;
    {class} function _GetINDEX_UNREAD_COUNT: Integer; cdecl;
    {class} function _GetINDEX_USERNAME: Integer; cdecl;
    {class} function _GetMAX_TIME: Int64; cdecl;
    {class} function _GetNOT_SHOWN_TIPS: Integer; cdecl;
    {class} function _GetOLD_BOTTLE_TABLE: JString; cdecl;
    {class} function _GetOLD_TABLE: JString; cdecl;
    {class} function _GetROOM_MUTE_OFF: Integer; cdecl;
    {class} function _GetROOM_MUTE_ON: Integer; cdecl;
    {class} function getFields: TJavaObjectArray<JField>; cdecl;
    {class} function init: JRConversation; cdecl; overload;
    {class} function init(P1: JString): JRConversation; cdecl; overload;
    {class} property COLUMNS: TJavaObjectArray<JString> read _GetCOLUMNS;
    {class} property COL_CHATMODE: JString read _GetCOL_CHATMODE;
    {class} property COL_CONTENT: JString read _GetCOL_CONTENT;
    {class} property COL_CONVERSATION_TIME: JString read _GetCOL_CONVERSATION_TIME;
    {class} property COL_FLAG: JString read _GetCOL_FLAG;
    {class} property COL_IS_SEND: JString read _GetCOL_IS_SEND;
    {class} property COL_MSGTYPE: JString read _GetCOL_MSGTYPE;
    {class} property COL_STATUS: JString read _GetCOL_STATUS;
    {class} property COL_UNREAD_COUNT: JString read _GetCOL_UNREAD_COUNT;
    {class} property COL_UNREAD_COUNT_INVALID_VALUE: Integer read _GetCOL_UNREAD_COUNT_INVALID_VALUE;
    {class} property COL_USERNAME: JString read _GetCOL_USERNAME;
    {class} property FLAG_NORMAL: Integer read _GetFLAG_NORMAL;
    {class} property HAS_SHOWN_TIPS: Integer read _GetHAS_SHOWN_TIPS;
    {class} property INDEX_CONTENT: Integer read _GetINDEX_CONTENT;
    {class} property INDEX_CONVERSATION_TIME: Integer read _GetINDEX_CONVERSATION_TIME;
    {class} property INDEX_FLAG: Integer read _GetINDEX_FLAG;
    {class} property INDEX_IS_SEND: Integer read _GetINDEX_IS_SEND;
    {class} property INDEX_MSGTYPE: Integer read _GetINDEX_MSGTYPE;
    {class} property INDEX_STATUE: Integer read _GetINDEX_STATUE;
    {class} property INDEX_UNREAD_COUNT: Integer read _GetINDEX_UNREAD_COUNT;
    {class} property INDEX_USERNAME: Integer read _GetINDEX_USERNAME;
    {class} property MAX_TIME: Int64 read _GetMAX_TIME;
    {class} property NOT_SHOWN_TIPS: Integer read _GetNOT_SHOWN_TIPS;
    {class} property OLD_BOTTLE_TABLE: JString read _GetOLD_BOTTLE_TABLE;
    {class} property OLD_TABLE: JString read _GetOLD_TABLE;
    {class} property ROOM_MUTE_OFF: Integer read _GetROOM_MUTE_OFF;
    {class} property ROOM_MUTE_ON: Integer read _GetROOM_MUTE_ON;
  end;

  [JavaSignature('com/tencent/mm/sdk/conversation/RConversation')]
  JRConversation = interface(JMAutoDBItem)
    ['{9DFE298E-002F-4E42-9E60-4137892E4941}']
    function _Getfield_chatmode: Integer; cdecl;
    function _Getfield_content: JString; cdecl;
    function _Getfield_conversationTime: Int64; cdecl;
    function _Getfield_customNotify: JString; cdecl;
    function _Getfield_flag: Int64; cdecl;
    function _Getfield_isSend: Integer; cdecl;
    function _Getfield_msgType: JString; cdecl;
    function _Getfield_showTips: Integer; cdecl;
    function _Getfield_status: Integer; cdecl;
    function _Getfield_unReadCount: Integer; cdecl;
    function _Getfield_username: JString; cdecl;
    function fields: TJavaObjectArray<JField>; cdecl;
    function getChatmode: Integer; cdecl;
    function getContent: JString; cdecl;
    function getConversationTime: Int64; cdecl;
    function getCustomNotify: JString; cdecl;
    function getFlag: Int64; cdecl;
    function getIsSend: Integer; cdecl;
    function getMsgType: JString; cdecl;
    function getShowTips: Integer; cdecl;
    function getStatus: Integer; cdecl;
    function getUnReadCount: Integer; cdecl;
    function getUsername: JString; cdecl;
    procedure setChatmode(P1: Integer); cdecl;
    procedure setContent(P1: JString); cdecl;
    procedure setConversationTime(P1: Int64); cdecl;
    procedure setCustomNotify(P1: JString); cdecl;
    procedure setFlag(P1: Int64); cdecl;
    procedure setIsSend(P1: Integer); cdecl;
    procedure setMsgType(P1: JString); cdecl;
    procedure setShowTips(P1: Integer); cdecl;
    procedure setStatus(P1: Integer); cdecl;
    procedure setUnReadCount(P1: Integer); cdecl;
    procedure setUsername(P1: JString); cdecl;
    property field_chatmode: Integer read _Getfield_chatmode;
    property field_content: JString read _Getfield_content;
    property field_conversationTime: Int64 read _Getfield_conversationTime;
    property field_customNotify: JString read _Getfield_customNotify;
    property field_flag: Int64 read _Getfield_flag;
    property field_isSend: Integer read _Getfield_isSend;
    property field_msgType: JString read _Getfield_msgType;
    property field_showTips: Integer read _Getfield_showTips;
    property field_status: Integer read _Getfield_status;
    property field_unReadCount: Integer read _Getfield_unReadCount;
    property field_username: JString read _Getfield_username;
  end;
  TJRConversation = class(TJavaGenericImport<JRConversationClass, JRConversation>) end;

  JRConversationDBClass = interface(JContentProviderDBClass)
    ['{54F96031-7D00-4759-9A3D-297D1E8A9307}']
    {class} function init(P1: JContext): JRConversationDB; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/conversation/RConversationDB')]
  JRConversationDB = interface(JContentProviderDB)
    ['{AB13D0B8-4458-44F4-98DF-4D0A37BEDED0}']
    function getUriFromTable(P1: JString): Jnet_Uri; cdecl;
  end;
  TJRConversationDB = class(TJavaGenericImport<JRConversationDBClass, JRConversationDB>) end;

  JRConversationStorageClass = interface(JMAutoStorageClass)
    ['{DA3CD1D7-56F3-4F49-9193-D1B7E1AFBC6D}']
    {class} function _GetAUTHORITY: JString; cdecl;
    {class} function _GetPRIMARY_KEY: JString; cdecl;
    {class} function _GetTABLE: JString; cdecl;
    {class} function create(P1: JContext): JRConversationStorage; cdecl;
    {class} property AUTHORITY: JString read _GetAUTHORITY;
    {class} property PRIMARY_KEY: JString read _GetPRIMARY_KEY;
    {class} property TABLE: JString read _GetTABLE;
  end;

  [JavaSignature('com/tencent/mm/sdk/conversation/RConversationStorage')]
  JRConversationStorage = interface(JMAutoStorage)
    ['{A2F2EA8B-3525-410E-A0BD-D081447AE677}']
    function &get(P1: JString): JRConversation; cdecl;
    function getColumns: TJavaObjectArray<JString>; cdecl;
    function getPrimaryKey: JString; cdecl;
    function getTableName: JString; cdecl;
  end;
  TJRConversationStorage = class(TJavaGenericImport<JRConversationStorageClass, JRConversationStorage>) end;

  Jconversation_package_infoClass = interface(IJavaClass)
    ['{1978C908-8546-4132-AB8A-8A4026887ED2}']
  end;

  [JavaSignature('com/tencent/mm/sdk/conversation/package-info')]
  Jconversation_package_info = interface(IJavaInstance)
    ['{A2A42BC0-E77B-41B9-A443-0F32C7F71728}']
  end;
  TJconversation_package_info = class(TJavaGenericImport<Jconversation_package_infoClass, Jconversation_package_info>) end;

  JRMsgInfoClass = interface(JMAutoDBItemClass)
    ['{1FDE0166-65CB-4D82-BAB1-F8EE3F603D8E}']
    {class} function _GetCOLUMNS: TJavaObjectArray<JString>; cdecl;
    {class} function _GetCOL_CONTENT: JString; cdecl;
    {class} function _GetCOL_CREATE_TIME: JString; cdecl;
    {class} function _GetCOL_ID: JString; cdecl;
    {class} function _GetCOL_ID_SVR: JString; cdecl;
    {class} function _GetCOL_IMG_PATH: JString; cdecl;
    {class} function _GetCOL_IS_SEND: JString; cdecl;
    {class} function _GetCOL_IS_SHOWTIMER: JString; cdecl;
    {class} function _GetCOL_LVBUFFER: JString; cdecl;
    {class} function _GetCOL_RESERVED: JString; cdecl;
    {class} function _GetCOL_STATUS: JString; cdecl;
    {class} function _GetCOL_TALKER: JString; cdecl;
    {class} function _GetCOL_TYPE: JString; cdecl;
    {class} function init: JRMsgInfo; cdecl; overload;
    {class} function init(P1: JString): JRMsgInfo; cdecl; overload;
    {class} function init(P1: Int64): JRMsgInfo; cdecl; overload;
    {class} property COLUMNS: TJavaObjectArray<JString> read _GetCOLUMNS;
    {class} property COL_CONTENT: JString read _GetCOL_CONTENT;
    {class} property COL_CREATE_TIME: JString read _GetCOL_CREATE_TIME;
    {class} property COL_ID: JString read _GetCOL_ID;
    {class} property COL_ID_SVR: JString read _GetCOL_ID_SVR;
    {class} property COL_IMG_PATH: JString read _GetCOL_IMG_PATH;
    {class} property COL_IS_SEND: JString read _GetCOL_IS_SEND;
    {class} property COL_IS_SHOWTIMER: JString read _GetCOL_IS_SHOWTIMER;
    {class} property COL_LVBUFFER: JString read _GetCOL_LVBUFFER;
    {class} property COL_RESERVED: JString read _GetCOL_RESERVED;
    {class} property COL_STATUS: JString read _GetCOL_STATUS;
    {class} property COL_TALKER: JString read _GetCOL_TALKER;
    {class} property COL_TYPE: JString read _GetCOL_TYPE;
  end;

  [JavaSignature('com/tencent/mm/sdk/message/RMsgInfo')]
  JRMsgInfo = interface(JMAutoDBItem)
    ['{6653697D-6D68-41D3-8BF5-13B3D58D4226}']
    function _GetcommentUrl: JString; cdecl;
    function _Getfield_content: JString; cdecl;
    function _Getfield_createTime: Int64; cdecl;
    function _Getfield_imgPath: JString; cdecl;
    function _Getfield_isSend: Integer; cdecl;
    function _Getfield_isShowTimer: Integer; cdecl;
    function _Getfield_lvBuffer: TJavaArray<Byte>; cdecl;
    function _Getfield_msgId: Int64; cdecl;
    function _Getfield_msgSvrId: Integer; cdecl;
    function _Getfield_reserved: JString; cdecl;
    function _Getfield_status: Integer; cdecl;
    function _Getfield_talker: JString; cdecl;
    function _Getfield_type: Integer; cdecl;
    function fields: TJavaObjectArray<JField>; cdecl;
    property commentUrl: JString read _GetcommentUrl;
    property field_content: JString read _Getfield_content;
    property field_createTime: Int64 read _Getfield_createTime;
    property field_imgPath: JString read _Getfield_imgPath;
    property field_isSend: Integer read _Getfield_isSend;
    property field_isShowTimer: Integer read _Getfield_isShowTimer;
    property field_lvBuffer: TJavaArray<Byte> read _Getfield_lvBuffer;
    property field_msgId: Int64 read _Getfield_msgId;
    property field_msgSvrId: Integer read _Getfield_msgSvrId;
    property field_reserved: JString read _Getfield_reserved;
    property field_status: Integer read _Getfield_status;
    property field_talker: JString read _Getfield_talker;
    property field_type: Integer read _Getfield_type;
  end;
  TJRMsgInfo = class(TJavaGenericImport<JRMsgInfoClass, JRMsgInfo>) end;

  JRMsgInfoDBClass = interface(JContentProviderDBClass)
    ['{15B0904C-A6A5-4EDE-868F-21300BE6EE2B}']
    {class} function _GetTABLE: JString; cdecl;
    {class} function init(P1: JContext): JRMsgInfoDB; cdecl;
    {class} property TABLE: JString read _GetTABLE;
  end;

  [JavaSignature('com/tencent/mm/sdk/message/RMsgInfoDB')]
  JRMsgInfoDB = interface(JContentProviderDB)
    ['{B3ED898D-2AF9-4DA5-9D02-5C262A0175F3}']
    function getUriFromTable(P1: JString): Jnet_Uri; cdecl;
  end;
  TJRMsgInfoDB = class(TJavaGenericImport<JRMsgInfoDBClass, JRMsgInfoDB>) end;

  JRMsgInfoStorageClass = interface(JMStorageClass)
    ['{0ED6115E-65B2-4E27-93C8-3D37988CD0F4}']
    {class} function _GetAUTHORITY: JString; cdecl;
    {class} function _GetPRIMARY_KEY: JString; cdecl;
    {class} function create(P1: JContext): JRMsgInfoStorage; cdecl;
    {class} property AUTHORITY: JString read _GetAUTHORITY;
    {class} property PRIMARY_KEY: JString read _GetPRIMARY_KEY;
  end;

  [JavaSignature('com/tencent/mm/sdk/message/RMsgInfoStorage')]
  JRMsgInfoStorage = interface(JMStorage)
    ['{3860F28F-6E68-492E-A136-40515ABAEAB9}']
    function _GetP: JISQLiteDatabase; cdecl;
    function doDelete(P1: Int64): Integer; cdecl;
    function doInsert(P1: JRMsgInfo): Int64; cdecl;
    function doUpdate(P1: Int64; P2: JRMsgInfo): Integer; cdecl;
    function getMsgById(P1: Int64): JRMsgInfo; cdecl;
    function getMsgByTalker(P1: JString): JCursor; cdecl;
    property P: JISQLiteDatabase read _GetP;
  end;
  TJRMsgInfoStorage = class(TJavaGenericImport<JRMsgInfoStorageClass, JRMsgInfoStorage>) end;

  JBaseReqClass = interface(JObjectClass)
    ['{10678999-A955-4DC3-BEF2-1BF1F5AE113C}']
    {class} function init: JBaseReq; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/BaseReq')]
  JBaseReq = interface(JObject)
    ['{4D3380B8-0D7F-4EB2-AE5A-B8C11EF2E684}']
    function _Gettransaction: JString; cdecl;
    procedure _Settransaction(Value: JString); cdecl;
    function checkArgs: Boolean; cdecl;
    procedure fromBundle(P1: JBundle); cdecl;
    function getType: Integer; cdecl;
    procedure toBundle(P1: JBundle); cdecl;
    property transaction: JString read _Gettransaction write _Settransaction;
  end;
  TJBaseReq = class(TJavaGenericImport<JBaseReqClass, JBaseReq>) end;

  JBaseRespClass = interface(JObjectClass)
    ['{1E1C9DC6-0732-47B9-94F8-91488E117CD5}']
    {class} function init: JBaseResp; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/BaseResp')]
  JBaseResp = interface(JObject)
    ['{35AE2069-2046-4BA6-A3AA-9EDCFF36CCC3}']
    function _GeterrCode: Integer; cdecl;
    procedure _SeterrCode(Value: Integer); cdecl;
    function _GeterrStr: JString; cdecl;
    function _Gettransaction: JString; cdecl;
    function checkArgs: Boolean; cdecl;
    procedure fromBundle(P1: JBundle); cdecl;
    function getType: Integer; cdecl;
    procedure toBundle(P1: JBundle); cdecl;
    property errCode: Integer read _GeterrCode write _SeterrCode;
    property errStr: JString read _GeterrStr;
    property transaction: JString read _Gettransaction;
  end;
  TJBaseResp = class(TJavaGenericImport<JBaseRespClass, JBaseResp>) end;

  JBaseResp_ErrCodeClass = interface(IJavaClass)
    ['{A5BBBF5E-2E2F-4A96-AA44-0B77A93707D0}']
    {class} function _GetERR_AUTH_DENIED: Integer; cdecl;
    {class} function _GetERR_COMM: Integer; cdecl;
    {class} function _GetERR_OK: Integer; cdecl;
    {class} function _GetERR_SENT_FAILED: Integer; cdecl;
    {class} function _GetERR_UNSUPPORT: Integer; cdecl;
    {class} function _GetERR_USER_CANCEL: Integer; cdecl;
    {class} property ERR_AUTH_DENIED: Integer read _GetERR_AUTH_DENIED;
    {class} property ERR_COMM: Integer read _GetERR_COMM;
    {class} property ERR_OK: Integer read _GetERR_OK;
    {class} property ERR_SENT_FAILED: Integer read _GetERR_SENT_FAILED;
    {class} property ERR_UNSUPPORT: Integer read _GetERR_UNSUPPORT;
    {class} property ERR_USER_CANCEL: Integer read _GetERR_USER_CANCEL;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/BaseResp$ErrCode')]
  JBaseResp_ErrCode = interface(IJavaInstance)
    ['{57F96E4C-6A29-4250-BB65-94B60512BCB1}']
  end;
  TJBaseResp_ErrCode = class(TJavaGenericImport<JBaseResp_ErrCodeClass, JBaseResp_ErrCode>) end;

  JConstantsAPIClass = interface(IJavaClass)
    ['{E7542ED8-984D-4F15-9C72-2B135629F972}']
    {class} function _GetACTION_HANDLE_APP_REGISTER: JString; cdecl;
    {class} function _GetACTION_HANDLE_APP_UNREGISTER: JString; cdecl;
    {class} function _GetACTION_REFRESH_WXAPP: JString; cdecl;
    {class} function _GetCOMMAND_GETMESSAGE_FROM_WX: Integer; cdecl;
    {class} function _GetCOMMAND_SENDAUTH: Integer; cdecl;
    {class} function _GetCOMMAND_SENDMESSAGE_TO_WX: Integer; cdecl;
    {class} function _GetCOMMAND_SHOWMESSAGE_FROM_WX: Integer; cdecl;
    {class} function _GetCOMMAND_UNKNOWN: Integer; cdecl;
    {class} function _GetWX_TOKEN_KEY: JString; cdecl;
    {class} function _GetWX_TOKEN_VALUE: JString; cdecl;
    {class} property ACTION_HANDLE_APP_REGISTER: JString read _GetACTION_HANDLE_APP_REGISTER;
    {class} property ACTION_HANDLE_APP_UNREGISTER: JString read _GetACTION_HANDLE_APP_UNREGISTER;
    {class} property ACTION_REFRESH_WXAPP: JString read _GetACTION_REFRESH_WXAPP;
    {class} property COMMAND_GETMESSAGE_FROM_WX: Integer read _GetCOMMAND_GETMESSAGE_FROM_WX;
    {class} property COMMAND_SENDAUTH: Integer read _GetCOMMAND_SENDAUTH;
    {class} property COMMAND_SENDMESSAGE_TO_WX: Integer read _GetCOMMAND_SENDMESSAGE_TO_WX;
    {class} property COMMAND_SHOWMESSAGE_FROM_WX: Integer read _GetCOMMAND_SHOWMESSAGE_FROM_WX;
    {class} property COMMAND_UNKNOWN: Integer read _GetCOMMAND_UNKNOWN;
    {class} property WX_TOKEN_KEY: JString read _GetWX_TOKEN_KEY;
    {class} property WX_TOKEN_VALUE: JString read _GetWX_TOKEN_VALUE;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/ConstantsAPI')]
  JConstantsAPI = interface(IJavaInstance)
    ['{49CF05AB-5310-4E30-BD7B-E2F6E20FDAE6}']
  end;
  TJConstantsAPI = class(TJavaGenericImport<JConstantsAPIClass, JConstantsAPI>) end;

  JGetMessageFromWXClass = interface(JObjectClass)
    ['{B1B617EE-B29B-42A9-8141-2862F4700C3F}']
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/GetMessageFromWX')]
  JGetMessageFromWX = interface(JObject)
    ['{EFC26640-64D9-46E4-A107-AEB753A4B365}']
  end;
  TJGetMessageFromWX = class(TJavaGenericImport<JGetMessageFromWXClass, JGetMessageFromWX>) end;

  JGetMessageFromWX_ReqClass = interface(JBaseReqClass)
    ['{37B70042-1ADB-4CB4-8FA8-EE0DEF7B1F43}']
    {class} function init: JGetMessageFromWX_Req; cdecl; overload;
    {class} function init(P1: JBundle): JGetMessageFromWX_Req; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/GetMessageFromWX$Req')]
  JGetMessageFromWX_Req = interface(JBaseReq)
    ['{CA66A822-46C5-4C3E-B388-A9661861AEFF}']
    function _Getusername: JString; cdecl;
    procedure _Setusername(Value: JString); cdecl;
    function checkArgs: Boolean; cdecl;
    procedure fromBundle(P1: JBundle); cdecl;
    function getType: Integer; cdecl;
    procedure toBundle(P1: JBundle); cdecl;
    property username: JString read _Getusername write _Setusername;
  end;
  TJGetMessageFromWX_Req = class(TJavaGenericImport<JGetMessageFromWX_ReqClass, JGetMessageFromWX_Req>) end;

  JGetMessageFromWX_RespClass = interface(JBaseRespClass)
    ['{A0758660-1363-46EF-9721-A0601B791AEC}']
    {class} function init: JGetMessageFromWX_Resp; cdecl; overload;
    {class} function init(P1: JBundle): JGetMessageFromWX_Resp; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/GetMessageFromWX$Resp')]
  JGetMessageFromWX_Resp = interface(JBaseResp)
    ['{551AC0B6-7EDA-45E6-915B-D98C4D8E6449}']
    function _Getmessage: JWXMediaMessage; cdecl;
    procedure _Setmessage(Value: JWXMediaMessage); cdecl;
    function checkArgs: Boolean; cdecl;
    procedure fromBundle(P1: JBundle); cdecl;
    function getType: Integer; cdecl;
    procedure toBundle(P1: JBundle); cdecl;
    property message: JWXMediaMessage read _Getmessage write _Setmessage;
  end;
  TJGetMessageFromWX_Resp = class(TJavaGenericImport<JGetMessageFromWX_RespClass, JGetMessageFromWX_Resp>) end;

  JIWXAPIClass = interface(IJavaClass)
    ['{44BECCC9-B44B-4193-9D9E-F725F731F4CD}']
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/IWXAPI')]
  JIWXAPI = interface(IJavaInstance)
    ['{C366D93B-E4F7-44D0-A7E6-BEF155D4CD96}']
    function getWXAppSupportAPI: Integer; cdecl;
    function handleIntent(P1: JIntent; P2: JIWXAPIEventHandler): Boolean; cdecl;
    function isWXAppInstalled: Boolean; cdecl;
    function isWXAppSupportAPI: Boolean; cdecl;
    function openWXApp: Boolean; cdecl;
    function registerApp(P1: JString): Boolean; cdecl;
    function sendReq(P1: JBaseReq): Boolean; cdecl;
    function sendResp(P1: JBaseResp): Boolean; cdecl;
    procedure unregisterApp; cdecl;
  end;
  TJIWXAPI = class(TJavaGenericImport<JIWXAPIClass, JIWXAPI>) end;

  JIWXAPIEventHandlerClass = interface(IJavaClass)
    ['{F36CBD24-2B29-44BF-8F5D-143D1C393D8C}']
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/IWXAPIEventHandler')]
  JIWXAPIEventHandler = interface(IJavaInstance)
    ['{E27AE9BA-CE43-44B7-98F4-45526560E0E4}']
    procedure onReq(P1: JBaseReq); cdecl;
    procedure onResp(P1: JBaseResp); cdecl;
  end;
  TJIWXAPIEventHandler = class(TJavaGenericImport<JIWXAPIEventHandlerClass, JIWXAPIEventHandler>) end;

  JSendAuthClass = interface(JObjectClass)
    ['{3E12CABB-3B8D-49EB-919C-9BD7CC39D99F}']
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/SendAuth')]
  JSendAuth = interface(JObject)
    ['{FBEE600A-AEFB-4119-A2B7-472F86D2B4D4}']
  end;
  TJSendAuth = class(TJavaGenericImport<JSendAuthClass, JSendAuth>) end;

  JSendAuth_ReqClass = interface(JBaseReqClass)
    ['{B8ACD33C-75B7-4D39-B6F9-77537F6DB2BE}']
    {class} function init: JSendAuth_Req; cdecl; overload;
    {class} function init(P1: JBundle): JSendAuth_Req; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/SendAuth$Req')]
  JSendAuth_Req = interface(JBaseReq)
    ['{7B97B314-BA97-4A2E-9546-4D29DD23DB70}']
    function _Getscope: JString; cdecl;
    procedure _Setscope(Value: JString); cdecl;
    function _Getstate: JString; cdecl;
    function checkArgs: Boolean; cdecl;
    procedure fromBundle(P1: JBundle); cdecl;
    function getType: Integer; cdecl;
    procedure toBundle(P1: JBundle); cdecl;
    property scope: JString read _Getscope write _Setscope;
    property state: JString read _Getstate;
  end;
  TJSendAuth_Req = class(TJavaGenericImport<JSendAuth_ReqClass, JSendAuth_Req>) end;

  JSendAuth_RespClass = interface(JBaseRespClass)
    ['{836CB87D-D499-48EF-975C-1015477D7E6F}']
    {class} function init: JSendAuth_Resp; cdecl; overload;
    {class} function init(P1: JBundle): JSendAuth_Resp; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/SendAuth$Resp')]
  JSendAuth_Resp = interface(JBaseResp)
    ['{53FEFF94-7683-4325-A9C5-54744F123A0D}']
    function _GetexpireDate: Integer; cdecl;
    function _GetresultUrl: JString; cdecl;
    function _Getstate: JString; cdecl;
    function _Gettoken: JString; cdecl;
    function _GetuserName: JString; cdecl;
    procedure _SetuserName(Value: JString); cdecl;
    function checkArgs: Boolean; cdecl;
    procedure fromBundle(P1: JBundle); cdecl;
    function getType: Integer; cdecl;
    procedure toBundle(P1: JBundle); cdecl;
    property expireDate: Integer read _GetexpireDate;
    property resultUrl: JString read _GetresultUrl;
    property state: JString read _Getstate;
    property token: JString read _Gettoken;
    property userName: JString read _GetuserName write _SetuserName;
  end;
  TJSendAuth_Resp = class(TJavaGenericImport<JSendAuth_RespClass, JSendAuth_Resp>) end;

  JSendMessageToWXClass = interface(JObjectClass)
    ['{5BA534AA-A863-42B2-B040-E783560F6F98}']
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/SendMessageToWX')]
  JSendMessageToWX = interface(JObject)
    ['{52CC11D6-556A-465A-8682-435D5BBAEBEE}']
  end;
  TJSendMessageToWX = class(TJavaGenericImport<JSendMessageToWXClass, JSendMessageToWX>) end;

  JSendMessageToWX_ReqClass = interface(JBaseReqClass)
    ['{5F834C0A-38AE-48B2-BB76-6F18BC7F3130}']
    {class} function _GetWXSceneSession: Integer; cdecl;
    {class} function _GetWXSceneTimeline: Integer; cdecl;
    {class} function init: JSendMessageToWX_Req; cdecl; overload;
    {class} function init(P1: JBundle): JSendMessageToWX_Req; cdecl; overload;
    {class} property WXSceneSession: Integer read _GetWXSceneSession;
    {class} property WXSceneTimeline: Integer read _GetWXSceneTimeline;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/SendMessageToWX$Req')]
  JSendMessageToWX_Req = interface(JBaseReq)
    ['{FCBEF190-2024-4693-8A20-3A62EC3BDA8A}']
    function _Getmessage: JWXMediaMessage; cdecl;
    function _Getscene: Integer; cdecl;
    function checkArgs: Boolean; cdecl;
    procedure fromBundle(P1: JBundle); cdecl;
    function getType: Integer; cdecl;
    procedure toBundle(P1: JBundle); cdecl;
    property message: JWXMediaMessage read _Getmessage;
    property scene: Integer read _Getscene;
  end;
  TJSendMessageToWX_Req = class(TJavaGenericImport<JSendMessageToWX_ReqClass, JSendMessageToWX_Req>) end;

  JSendMessageToWX_RespClass = interface(JBaseRespClass)
    ['{2A13DEA9-2603-49D2-99BB-A10CC183CBAB}']
    {class} function init: JSendMessageToWX_Resp; cdecl; overload;
    {class} function init(P1: JBundle): JSendMessageToWX_Resp; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/SendMessageToWX$Resp')]
  JSendMessageToWX_Resp = interface(JBaseResp)
    ['{8891200D-4801-4E9F-9783-57700364BC59}']
    procedure fromBundle(P1: JBundle); cdecl;
    function getType: Integer; cdecl;
    procedure toBundle(P1: JBundle); cdecl;
  end;
  TJSendMessageToWX_Resp = class(TJavaGenericImport<JSendMessageToWX_RespClass, JSendMessageToWX_Resp>) end;

  JShowMessageFromWXClass = interface(JObjectClass)
    ['{D5433962-4F66-4218-85B5-198A58064F54}']
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/ShowMessageFromWX')]
  JShowMessageFromWX = interface(JObject)
    ['{1AA97737-7959-4EDF-B0C5-185E2311036B}']
  end;
  TJShowMessageFromWX = class(TJavaGenericImport<JShowMessageFromWXClass, JShowMessageFromWX>) end;

  JShowMessageFromWX_ReqClass = interface(JBaseReqClass)
    ['{EAE46555-E86B-4FEC-A655-7A20655D7C8E}']
    {class} function init: JShowMessageFromWX_Req; cdecl; overload;
    {class} function init(P1: JBundle): JShowMessageFromWX_Req; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/ShowMessageFromWX$Req')]
  JShowMessageFromWX_Req = interface(JBaseReq)
    ['{0C1F76D8-A676-4D32-BD49-5328E6EB2A90}']
    function _Getmessage: JWXMediaMessage; cdecl;
    procedure _Setmessage(Value: JWXMediaMessage); cdecl;
    function checkArgs: Boolean; cdecl;
    procedure fromBundle(P1: JBundle); cdecl;
    function getType: Integer; cdecl;
    procedure toBundle(P1: JBundle); cdecl;
    property message: JWXMediaMessage read _Getmessage write _Setmessage;
  end;
  TJShowMessageFromWX_Req = class(TJavaGenericImport<JShowMessageFromWX_ReqClass, JShowMessageFromWX_Req>) end;

  JShowMessageFromWX_RespClass = interface(JBaseRespClass)
    ['{6DD2C5FE-9EC3-4501-8648-A1A03A573122}']
    {class} function init: JShowMessageFromWX_Resp; cdecl; overload;
    {class} function init(P1: JBundle): JShowMessageFromWX_Resp; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/ShowMessageFromWX$Resp')]
  JShowMessageFromWX_Resp = interface(JBaseResp)
    ['{BA6E73FF-F21D-4325-91AC-7DAC2D8C5C7C}']
    function getType: Integer; cdecl;
  end;
  TJShowMessageFromWX_Resp = class(TJavaGenericImport<JShowMessageFromWX_RespClass, JShowMessageFromWX_Resp>) end;

  JWXAPIFactoryClass = interface(JObjectClass)
    ['{03B4076E-9122-4417-BBAB-537F4F22024B}']
    {class} function createWXAPI(P1: JContext; P2: JString): JIWXAPI; cdecl; overload;
    {class} function createWXAPI(P1: JContext; P2: JString; P3: Boolean): JIWXAPI; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/WXAPIFactory')]
  JWXAPIFactory = interface(JObject)
    ['{3250CFB1-8792-47D5-BABD-0323930E4844}']
  end;
  TJWXAPIFactory = class(TJavaGenericImport<JWXAPIFactoryClass, JWXAPIFactory>) end;

  JWXApiImplV10Class = interface(JIWXAPIClass)
    ['{904BE600-3E6B-4FC4-9C0C-1EB6D282C1E1}']
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/WXApiImplV10')]
  JWXApiImplV10 = interface(JIWXAPI)
    ['{EDF58979-096C-4F53-B6A1-1F9175BD2C69}']
    function getWXAppSupportAPI: Integer; cdecl;
    function handleIntent(P1: JIntent; P2: JIWXAPIEventHandler): Boolean; cdecl;
    function isWXAppInstalled: Boolean; cdecl;
    function isWXAppSupportAPI: Boolean; cdecl;
    function openWXApp: Boolean; cdecl;
    function registerApp(P1: JString): Boolean; cdecl;
    function sendReq(P1: JBaseReq): Boolean; cdecl;
    function sendResp(P1: JBaseResp): Boolean; cdecl;
    procedure unregisterApp; cdecl;
  end;
  TJWXApiImplV10 = class(TJavaGenericImport<JWXApiImplV10Class, JWXApiImplV10>) end;

  JWXMediaMessage_IMediaObjectClass = interface(IJavaClass)
    ['{B8C149B4-86DC-4203-91F3-6A464DB022A3}']
    {class} function _GetTYPE_APPDATA: Integer; cdecl;
    {class} function _GetTYPE_EMOJI: Integer; cdecl;
    {class} function _GetTYPE_FILE: Integer; cdecl;
    {class} function _GetTYPE_IMAGE: Integer; cdecl;
    {class} function _GetTYPE_MUSIC: Integer; cdecl;
    {class} function _GetTYPE_TEXT: Integer; cdecl;
    {class} function _GetTYPE_UNKNOWN: Integer; cdecl;
    {class} function _GetTYPE_URL: Integer; cdecl;
    {class} function _GetTYPE_VIDEO: Integer; cdecl;
    {class} property TYPE_APPDATA: Integer read _GetTYPE_APPDATA;
    {class} property TYPE_EMOJI: Integer read _GetTYPE_EMOJI;
    {class} property TYPE_FILE: Integer read _GetTYPE_FILE;
    {class} property TYPE_IMAGE: Integer read _GetTYPE_IMAGE;
    {class} property TYPE_MUSIC: Integer read _GetTYPE_MUSIC;
    {class} property TYPE_TEXT: Integer read _GetTYPE_TEXT;
    {class} property TYPE_UNKNOWN: Integer read _GetTYPE_UNKNOWN;
    {class} property TYPE_URL: Integer read _GetTYPE_URL;
    {class} property TYPE_VIDEO: Integer read _GetTYPE_VIDEO;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/WXMediaMessage$IMediaObject')]
  JWXMediaMessage_IMediaObject = interface(IJavaInstance)
    ['{CA832E06-7E94-4F7C-8040-6EAFE2BACEE3}']
    function checkArgs: Boolean; cdecl;
    procedure serialize(P1: JBundle); cdecl;
    function &type: Integer; cdecl;
    procedure unserialize(P1: JBundle); cdecl;
  end;
  TJWXMediaMessage_IMediaObject = class(TJavaGenericImport<JWXMediaMessage_IMediaObjectClass, JWXMediaMessage_IMediaObject>) end;

  JWXAppExtendObjectClass = interface(JWXMediaMessage_IMediaObjectClass)
    ['{8FDA1772-50B5-4183-9792-ECC1C85A646F}']
    {class} function init: JWXAppExtendObject; cdecl; overload;
    {class} function init(P1: JString; P2: JString): JWXAppExtendObject; cdecl; overload;
    {class} function init(P1: JString; P2: TJavaArray<Byte>): JWXAppExtendObject; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/WXAppExtendObject')]
  JWXAppExtendObject = interface(JWXMediaMessage_IMediaObject)
    ['{D97CAA04-51AA-408F-A465-5FD07235D784}']
    function _GetextInfo: JString; cdecl;
    procedure _SetextInfo(Value: JString); cdecl;
    function _GetfileData: TJavaArray<Byte>; cdecl;
    function _GetfilePath: JString; cdecl;
    function checkArgs: Boolean; cdecl;
    procedure serialize(P1: JBundle); cdecl;
    function &type: Integer; cdecl;
    procedure unserialize(P1: JBundle); cdecl;
    property extInfo: JString read _GetextInfo write _SetextInfo;
    property fileData: TJavaArray<Byte> read _GetfileData;
    property filePath: JString read _GetfilePath;
  end;
  TJWXAppExtendObject = class(TJavaGenericImport<JWXAppExtendObjectClass, JWXAppExtendObject>) end;

  JWXAppLaunchDataClass = interface(JObjectClass)
    ['{FF565835-06E5-4668-B139-E2320D04E8E5}']
    {class} function _GetACTION_HANDLE_WXAPPLAUNCH: JString; cdecl;
    {class} function _GetACTION_HANDLE_WXAPP_RESULT: JString; cdecl;
    {class} function _GetACTION_HANDLE_WXAPP_SHOW: JString; cdecl;
    {class} function init: JWXAppLaunchData; cdecl;
    {class} property ACTION_HANDLE_WXAPPLAUNCH: JString read _GetACTION_HANDLE_WXAPPLAUNCH;
    {class} property ACTION_HANDLE_WXAPP_RESULT: JString read _GetACTION_HANDLE_WXAPP_RESULT;
    {class} property ACTION_HANDLE_WXAPP_SHOW: JString read _GetACTION_HANDLE_WXAPP_SHOW;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/WXAppLaunchData')]
  JWXAppLaunchData = interface(JObject)
    ['{B12F31F4-A5AF-4AB5-9508-647A54971EBB}']
    function _GetlaunchType: Integer; cdecl;
    function _Getmessage: JString; cdecl;
    property launchType: Integer read _GetlaunchType;
    property message: JString read _Getmessage;
  end;
  TJWXAppLaunchData = class(TJavaGenericImport<JWXAppLaunchDataClass, JWXAppLaunchData>) end;

  JWXAppLaunchData_BuilderClass = interface(JObjectClass)
    ['{EE6871BF-A87D-4792-8DE5-F67401D13267}']
    {class} function fromBundle(P1: JBundle): JWXAppLaunchData; cdecl;
    {class} function init: JWXAppLaunchData_Builder; cdecl;
    {class} function toBundle(P1: JWXAppLaunchData): JBundle; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/WXAppLaunchData$Builder')]
  JWXAppLaunchData_Builder = interface(JObject)
    ['{84B34567-7E39-4F42-9E99-07F32489DDAB}']
  end;
  TJWXAppLaunchData_Builder = class(TJavaGenericImport<JWXAppLaunchData_BuilderClass, JWXAppLaunchData_Builder>) end;

  JWXEmojiObjectClass = interface(JWXMediaMessage_IMediaObjectClass)
    ['{B97B1841-DDB9-4952-89A0-EF812CD24347}']
    {class} function init: JWXEmojiObject; cdecl; overload;
    {class} function init(P1: JString): JWXEmojiObject; cdecl; overload;
    {class} function init(P1: TJavaArray<Byte>): JWXEmojiObject; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/WXEmojiObject')]
  JWXEmojiObject = interface(JWXMediaMessage_IMediaObject)
    ['{25259221-39A2-496D-B328-8EC557545959}']
    function _GetemojiData: TJavaArray<Byte>; cdecl;
    procedure _SetemojiData(Value: TJavaArray<Byte>); cdecl;
    function _GetemojiPath: JString; cdecl;
    function checkArgs: Boolean; cdecl;
    procedure serialize(P1: JBundle); cdecl;
    procedure setEmojiData(P1: TJavaArray<Byte>); cdecl;
    procedure setEmojiPath(P1: JString); cdecl;
    function &type: Integer; cdecl;
    procedure unserialize(P1: JBundle); cdecl;
    property emojiData: TJavaArray<Byte> read _GetemojiData write _SetemojiData;
    property emojiPath: JString read _GetemojiPath;
  end;
  TJWXEmojiObject = class(TJavaGenericImport<JWXEmojiObjectClass, JWXEmojiObject>) end;

  JWXFileObjectClass = interface(JWXMediaMessage_IMediaObjectClass)
    ['{FEF8A6C0-39C1-45EE-902D-4DEBD06ADF2D}']
    {class} function init: JWXFileObject; cdecl; overload;
    {class} function init(P1: JString): JWXFileObject; cdecl; overload;
    {class} function init(P1: TJavaArray<Byte>): JWXFileObject; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/WXFileObject')]
  JWXFileObject = interface(JWXMediaMessage_IMediaObject)
    ['{7A299DFA-7BF4-4BD9-9AE5-0F3535848B6E}']
    function _GetfileData: TJavaArray<Byte>; cdecl;
    procedure _SetfileData(Value: TJavaArray<Byte>); cdecl;
    function _GetfilePath: JString; cdecl;
    function checkArgs: Boolean; cdecl;
    procedure serialize(P1: JBundle); cdecl;
    procedure setFileData(P1: TJavaArray<Byte>); cdecl;
    procedure setFilePath(P1: JString); cdecl;
    function &type: Integer; cdecl;
    procedure unserialize(P1: JBundle); cdecl;
    property fileData: TJavaArray<Byte> read _GetfileData write _SetfileData;
    property filePath: JString read _GetfilePath;
  end;
  TJWXFileObject = class(TJavaGenericImport<JWXFileObjectClass, JWXFileObject>) end;

  JWXImageObjectClass = interface(JWXMediaMessage_IMediaObjectClass)
    ['{027D5448-0D6C-48C1-A551-516D15DB0107}']
    {class} function init: JWXImageObject; cdecl; overload;
    {class} function init(P1: JBitmap): JWXImageObject; cdecl; overload;
    {class} function init(P1: TJavaArray<Byte>): JWXImageObject; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/WXImageObject')]
  JWXImageObject = interface(JWXMediaMessage_IMediaObject)
    ['{064D2235-9CA2-485F-952F-2AD6EEDB0829}']
    function _GetimageData: TJavaArray<Byte>; cdecl;
    procedure _SetimageData(Value: TJavaArray<Byte>); cdecl;
    function _GetimagePath: JString; cdecl;
    function _GetimageUrl: JString; cdecl;
    function checkArgs: Boolean; cdecl;
    procedure serialize(P1: JBundle); cdecl;
    procedure setImagePath(P1: JString); cdecl;
    function &type: Integer; cdecl;
    procedure unserialize(P1: JBundle); cdecl;
    property imageData: TJavaArray<Byte> read _GetimageData write _SetimageData;
    property imagePath: JString read _GetimagePath;
    property imageUrl: JString read _GetimageUrl;
  end;
  TJWXImageObject = class(TJavaGenericImport<JWXImageObjectClass, JWXImageObject>) end;

  JWXMediaMessageClass = interface(JObjectClass)
    ['{71C0C8B5-E2EB-4145-BAE4-9B0C2F1F6C98}']
    {class} function _GetACTION_WXAPPMESSAGE: JString; cdecl;
    {class} function init: JWXMediaMessage; cdecl; overload;
    {class} function init(P1: JWXMediaMessage_IMediaObject): JWXMediaMessage; cdecl; overload;
    {class} property ACTION_WXAPPMESSAGE: JString read _GetACTION_WXAPPMESSAGE;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/WXMediaMessage')]
  JWXMediaMessage = interface(JObject)
    ['{CAEA0F73-46C7-431D-9735-D909DEC9CE2F}']
    function _Getdescription: JString; cdecl;
    function _GetmediaObject: JWXMediaMessage_IMediaObject; cdecl;
    function _GetsdkVer: Integer; cdecl;
    function _GetthumbData: TJavaArray<Byte>; cdecl;
    function _Gettitle: JString; cdecl;
    function checkArgs: Boolean; cdecl;
    function getType: Integer; cdecl;
    procedure setThumbImage(P1: JBitmap); cdecl;
    property description: JString read _Getdescription;
    property mediaObject: JWXMediaMessage_IMediaObject read _GetmediaObject;
    property sdkVer: Integer read _GetsdkVer;
    property thumbData: TJavaArray<Byte> read _GetthumbData;
    property title: JString read _Gettitle;
  end;
  TJWXMediaMessage = class(TJavaGenericImport<JWXMediaMessageClass, JWXMediaMessage>) end;

  JWXMediaMessage_BuilderClass = interface(JObjectClass)
    ['{E06B6C98-3E01-4709-996F-3CDB569E04E5}']
    {class} function _GetKEY_IDENTIFIER: JString; cdecl;
    {class} function fromBundle(P1: JBundle): JWXMediaMessage; cdecl;
    {class} function init: JWXMediaMessage_Builder; cdecl;
    {class} function toBundle(P1: JWXMediaMessage): JBundle; cdecl;
    {class} property KEY_IDENTIFIER: JString read _GetKEY_IDENTIFIER;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/WXMediaMessage$Builder')]
  JWXMediaMessage_Builder = interface(JObject)
    ['{110A5AF3-936C-4409-B09B-0432DE1D9068}']
  end;
  TJWXMediaMessage_Builder = class(TJavaGenericImport<JWXMediaMessage_BuilderClass, JWXMediaMessage_Builder>) end;

  JWXMusicObjectClass = interface(JWXMediaMessage_IMediaObjectClass)
    ['{D5C3E4AE-B8D0-497E-8DA3-2C7D7F58CDD8}']
    {class} function init: JWXMusicObject; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/WXMusicObject')]
  JWXMusicObject = interface(JWXMediaMessage_IMediaObject)
    ['{F01C38A3-3906-448C-861C-A258DF89DCB3}']
    function _GetmusicLowBandUrl: JString; cdecl;
    function _GetmusicUrl: JString; cdecl;
    procedure _SetmusicUrl(Value: JString); cdecl;
    function checkArgs: Boolean; cdecl;
    procedure serialize(P1: JBundle); cdecl;
    function &type: Integer; cdecl;
    procedure unserialize(P1: JBundle); cdecl;
    property musicLowBandUrl: JString read _GetmusicLowBandUrl;
    property musicUrl: JString read _GetmusicUrl write _SetmusicUrl;
  end;
  TJWXMusicObject = class(TJavaGenericImport<JWXMusicObjectClass, JWXMusicObject>) end;

  JWXTextObjectClass = interface(JWXMediaMessage_IMediaObjectClass)
    ['{058E7620-1F23-408E-87CF-C33C584D8F54}']
    {class} function init: JWXTextObject; cdecl; overload;
    {class} function init(P1: JString): JWXTextObject; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/WXTextObject')]
  JWXTextObject = interface(JWXMediaMessage_IMediaObject)
    ['{14423094-1E9E-4889-9CD8-65F479B6ADB0}']
    function _Gettext: JString; cdecl;
    procedure _Settext(Value: JString); cdecl;
    function checkArgs: Boolean; cdecl;
    procedure serialize(P1: JBundle); cdecl;
    function &type: Integer; cdecl;
    procedure unserialize(P1: JBundle); cdecl;
    property text: JString read _Gettext write _Settext;
  end;
  TJWXTextObject = class(TJavaGenericImport<JWXTextObjectClass, JWXTextObject>) end;

  JWXVideoObjectClass = interface(JWXMediaMessage_IMediaObjectClass)
    ['{79F53888-EB21-4904-A3D3-8527FC8258C3}']
    {class} function init: JWXVideoObject; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/WXVideoObject')]
  JWXVideoObject = interface(JWXMediaMessage_IMediaObject)
    ['{1901C181-01D1-4BBE-90EA-240066D19776}']
    function _GetvideoLowBandUrl: JString; cdecl;
    function _GetvideoUrl: JString; cdecl;
    procedure _SetvideoUrl(Value: JString); cdecl;
    function checkArgs: Boolean; cdecl;
    procedure serialize(P1: JBundle); cdecl;
    function &type: Integer; cdecl;
    procedure unserialize(P1: JBundle); cdecl;
    property videoLowBandUrl: JString read _GetvideoLowBandUrl;
    property videoUrl: JString read _GetvideoUrl write _SetvideoUrl;
  end;
  TJWXVideoObject = class(TJavaGenericImport<JWXVideoObjectClass, JWXVideoObject>) end;

  JWXWebpageObjectClass = interface(JWXMediaMessage_IMediaObjectClass)
    ['{42D40E32-6C8B-4DD7-8471-363C9F5E84AA}']
    {class} function init: JWXWebpageObject; cdecl; overload;
    {class} function init(P1: JString): JWXWebpageObject; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/WXWebpageObject')]
  JWXWebpageObject = interface(JWXMediaMessage_IMediaObject)
    ['{680C3E1D-798E-4189-B316-29D98564911F}']
    function _GetwebpageUrl: JString; cdecl;
    procedure _SetwebpageUrl(Value: JString); cdecl;
    function checkArgs: Boolean; cdecl;
    procedure serialize(P1: JBundle); cdecl;
    function &type: Integer; cdecl;
    procedure unserialize(P1: JBundle); cdecl;
    property webpageUrl: JString read _GetwebpageUrl write _SetwebpageUrl;
  end;
  TJWXWebpageObject = class(TJavaGenericImport<JWXWebpageObjectClass, JWXWebpageObject>) end;

  Jopenapi_package_infoClass = interface(IJavaClass)
    ['{54D6B374-33A9-48C6-BFF6-3840BB9C0823}']
  end;

  [JavaSignature('com/tencent/mm/sdk/openapi/package-info')]
  Jopenapi_package_info = interface(IJavaInstance)
    ['{DC4DBE9E-72EB-47DB-9D31-DDF21B74CEDE}']
  end;
  TJopenapi_package_info = class(TJavaGenericImport<Jopenapi_package_infoClass, Jopenapi_package_info>) end;

  Jsdk_package_infoClass = interface(IJavaClass)
    ['{38DC6E21-DC08-42EC-823C-08C421DDE1F9}']
  end;

  [JavaSignature('com/tencent/mm/sdk/package-info')]
  Jsdk_package_info = interface(IJavaInstance)
    ['{E5FB4C50-F907-49D6-8601-291702B11B6E}']
  end;
  TJsdk_package_info = class(TJavaGenericImport<Jsdk_package_infoClass, Jsdk_package_info>) end;

  JAnimationHelper_IHelperClass = interface(IJavaClass)
    ['{C28E5592-E4F5-457F-9F16-BA14D0AD0D0A}']
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/BackwardSupportUtil$AnimationHelper$IHelper')]
  JAnimationHelper_IHelper = interface(IJavaInstance)
    ['{9BFF7224-8B11-4E5F-9A53-F65912537B22}']
    procedure cancelAnimation(P1: JView; P2: JAnimation); cdecl;
  end;
  TJAnimationHelper_IHelper = class(TJavaGenericImport<JAnimationHelper_IHelperClass, JAnimationHelper_IHelper>) end;

  JAnimationHelperImpl21belowClass = interface(JAnimationHelper_IHelperClass)
    ['{774C4F25-FBB0-4DAC-B7D9-7C6DE59B6859}']
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/AnimationHelperImpl21below')]
  JAnimationHelperImpl21below = interface(JAnimationHelper_IHelper)
    ['{75F563F1-BA1A-465B-B935-74DE5FB49E42}']
    procedure cancelAnimation(P1: JView; P2: JAnimation); cdecl;
  end;
  TJAnimationHelperImpl21below = class(TJavaGenericImport<JAnimationHelperImpl21belowClass, JAnimationHelperImpl21below>) end;

  JAnimationHelperImpl22Class = interface(JAnimationHelper_IHelperClass)
    ['{339BA776-40EB-4BAE-BF7F-CF8A15B3738B}']
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/AnimationHelperImpl22')]
  JAnimationHelperImpl22 = interface(JAnimationHelper_IHelper)
    ['{C48400C9-605C-483D-8EE3-F1B49E910611}']
    procedure cancelAnimation(P1: JView; P2: JAnimation); cdecl;
  end;
  TJAnimationHelperImpl22 = class(TJavaGenericImport<JAnimationHelperImpl22Class, JAnimationHelperImpl22>) end;

  JBackwardSupportUtilClass = interface(JObjectClass)
    ['{4742935D-E52A-4B1C-80F2-D6B6427FE216}']
    {class} function init: JBackwardSupportUtil; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/BackwardSupportUtil')]
  JBackwardSupportUtil = interface(JObject)
    ['{B4E7F97B-A0D6-4464-B4CA-EA1BDAFB0076}']
  end;
  TJBackwardSupportUtil = class(TJavaGenericImport<JBackwardSupportUtilClass, JBackwardSupportUtil>) end;

  JBackwardSupportUtil_AnimationHelperClass = interface(JObjectClass)
    ['{B4B7F8B5-B072-4248-98C9-79CC1A21FDF4}']
    {class} procedure cancelAnimation(P1: JView; P2: JAnimation); cdecl;
    {class} function init: JBackwardSupportUtil_AnimationHelper; cdecl;
    {class} procedure overridePendingTransition(P1: JActivity; P2: Integer; P3: Integer); cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/BackwardSupportUtil$AnimationHelper')]
  JBackwardSupportUtil_AnimationHelper = interface(JObject)
    ['{E78BB437-B99E-4013-A387-E7AA46AA8B2D}']
  end;
  TJBackwardSupportUtil_AnimationHelper = class(TJavaGenericImport<JBackwardSupportUtil_AnimationHelperClass, JBackwardSupportUtil_AnimationHelper>) end;

  JBackwardSupportUtil_BitmapFactoryClass = interface(JObjectClass)
    ['{1A4A82B4-7358-446E-B5DF-DCB729CF2610}']
    {class} function decodeFile(P1: JString; P2: Single): JBitmap; cdecl;
    {class} function decodeStream(P1: JInputStream): JBitmap; cdecl; overload;
    {class} function decodeStream(P1: JInputStream; P2: Single): JBitmap; cdecl; overload;
    {class} function fromDPToPix(P1: JContext; P2: Single): Integer; cdecl;
    {class} function getBitmapFromURL(P1: JString): JBitmap; cdecl;
    {class} function getDisplayDensityType(P1: JContext): JString; cdecl;
    {class} function init: JBackwardSupportUtil_BitmapFactory; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/BackwardSupportUtil$BitmapFactory')]
  JBackwardSupportUtil_BitmapFactory = interface(JObject)
    ['{B3A74205-F36C-49EA-8847-48F8CFBF278A}']
  end;
  TJBackwardSupportUtil_BitmapFactory = class(TJavaGenericImport<JBackwardSupportUtil_BitmapFactoryClass, JBackwardSupportUtil_BitmapFactory>) end;

  JBackwardSupportUtil_ExifHelperClass = interface(JObjectClass)
    ['{E77A488C-D0A0-4E8E-8A0B-0A3B1FAED429}']
    {class} function getExifOrientation(P1: JString): Integer; cdecl;
    {class} function init: JBackwardSupportUtil_ExifHelper; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/BackwardSupportUtil$ExifHelper')]
  JBackwardSupportUtil_ExifHelper = interface(JObject)
    ['{D1C1AC33-2151-4A85-8BA8-BD3CBE226180}']
  end;
  TJBackwardSupportUtil_ExifHelper = class(TJavaGenericImport<JBackwardSupportUtil_ExifHelperClass, JBackwardSupportUtil_ExifHelper>) end;

  JBackwardSupportUtil_SmoothScrollFactoryClass = interface(JObjectClass)
    ['{8F95CC1E-C73D-4C81-B8F7-4B021C2CB5E8}']
    {class} function init: JBackwardSupportUtil_SmoothScrollFactory; cdecl;
    {class} procedure scrollTo(P1: JListView; P2: Integer); cdecl;
    {class} procedure scrollToTop(P1: JListView); cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/BackwardSupportUtil$SmoothScrollFactory')]
  JBackwardSupportUtil_SmoothScrollFactory = interface(JObject)
    ['{615AD79D-1159-4C3B-AC96-DF001DA68547}']
  end;
  TJBackwardSupportUtil_SmoothScrollFactory = class(TJavaGenericImport<JBackwardSupportUtil_SmoothScrollFactoryClass, JBackwardSupportUtil_SmoothScrollFactory>) end;

  JSmoothScrollFactory_IScrollClass = interface(IJavaClass)
    ['{1E8F367C-69B3-4650-856D-86BD94FD9DBE}']
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/BackwardSupportUtil$SmoothScrollFactory$IScroll')]
  JSmoothScrollFactory_IScroll = interface(IJavaInstance)
    ['{585D72CC-B365-4A28-B338-DE160948B196}']
    procedure doScroll(P1: JListView); cdecl; overload;
    procedure doScroll(P1: JListView; P2: Integer); cdecl; overload;
  end;
  TJSmoothScrollFactory_IScroll = class(TJavaGenericImport<JSmoothScrollFactory_IScrollClass, JSmoothScrollFactory_IScroll>) end;

  JChannelUtilClass = interface(JObjectClass)
    ['{FDC326B9-5AC3-4A1F-B643-921011FBC069}']
    {class} function _GetFLAG_NULL: Integer; cdecl;
    {class} function _GetFLAG_UPDATE_EXTERNAL: Integer; cdecl;
    {class} function _GetFLAG_UPDATE_NOTIP: Integer; cdecl;
    {class} function _GetbuildRev: Integer; cdecl;
    {class} function _GetchannelId: Integer; cdecl;
    {class} function _GetfullVersionInfo: Boolean; cdecl;
    {class} function _GetmarketURL: JString; cdecl;
    {class} function _GetprofileDeviceType: JString; cdecl;
    {class} function _GetupdateMode: Integer; cdecl;
    {class} function formatVersion(P1: JContext; P2: Integer): JString; cdecl;
    {class} procedure loadProfile(P1: JContext); cdecl;
    {class} procedure setupChannelId(P1: JContext); cdecl;
    {class} property FLAG_NULL: Integer read _GetFLAG_NULL;
    {class} property FLAG_UPDATE_EXTERNAL: Integer read _GetFLAG_UPDATE_EXTERNAL;
    {class} property FLAG_UPDATE_NOTIP: Integer read _GetFLAG_UPDATE_NOTIP;
    {class} property buildRev: Integer read _GetbuildRev;
    {class} property channelId: Integer read _GetchannelId;
    {class} property fullVersionInfo: Boolean read _GetfullVersionInfo;
    {class} property marketURL: JString read _GetmarketURL;
    {class} property profileDeviceType: JString read _GetprofileDeviceType;
    {class} property updateMode: Integer read _GetupdateMode;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/ChannelUtil')]
  JChannelUtil = interface(JObject)
    ['{A17DAE21-1879-47BD-B12C-4AE078D6A193}']
  end;
  TJChannelUtil = class(TJavaGenericImport<JChannelUtilClass, JChannelUtil>) end;

  JCharSequencesClass = interface(JObjectClass)
    ['{3F22D6C1-F9ED-4A2A-839C-BC2D1AE945AC}']
    {class} function compareToIgnoreCase(P1: JCharSequence; P2: JCharSequence): Integer; cdecl;
    {class} function equals(P1: JCharSequence; P2: JCharSequence): Boolean; cdecl;
    {class} function forAsciiBytes(P1: TJavaArray<Byte>): JCharSequence; cdecl; overload;
    {class} function forAsciiBytes(P1: TJavaArray<Byte>; P2: Integer; P3: Integer): JCharSequence; cdecl; overload;
    {class} function init: JCharSequences; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/CharSequences')]
  JCharSequences = interface(JObject)
    ['{C63C9560-7128-44CB-9EA8-6006758C3E8E}']
  end;
  TJCharSequences = class(TJavaGenericImport<JCharSequencesClass, JCharSequences>) end;

  JCharSequences_1Class = interface(JCharSequenceClass)
    ['{867A53AE-69E3-4B02-A96D-FEFADB9827CD}']
    {class} function init(P1: TJavaArray<Byte>): JCharSequences_1; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/CharSequences$1')]
  JCharSequences_1 = interface(JCharSequence)
    ['{6C0B550A-3136-4939-88B8-9DD35C879C98}']
    function charAt(P1: Integer): Char; cdecl;
    function length: Integer; cdecl;
    function subSequence(P1: Integer; P2: Integer): JCharSequence; cdecl;
    function toString: JString; cdecl;
  end;
  TJCharSequences_1 = class(TJavaGenericImport<JCharSequences_1Class, JCharSequences_1>) end;

  JCharSequences_2Class = interface(JCharSequenceClass)
    ['{60AD402E-22EB-41AE-BA38-4D360CD02871}']
    {class} function init(P1: TJavaArray<Byte>; P2: Integer; P3: Integer): JCharSequences_2; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/CharSequences$2')]
  JCharSequences_2 = interface(JCharSequence)
    ['{6F7F90C3-B269-4025-AFCF-CD3B39593EF8}']
    function _GetV: Integer; cdecl;
    function _GetW: Integer; cdecl;
    function charAt(P1: Integer): Char; cdecl;
    function length: Integer; cdecl;
    function subSequence(P1: Integer; P2: Integer): JCharSequence; cdecl;
    function toString: JString; cdecl;
    property V: Integer read _GetV;
    property W: Integer read _GetW;
  end;
  TJCharSequences_2 = class(TJavaGenericImport<JCharSequences_2Class, JCharSequences_2>) end;

  JInetUtilClass = interface(JObjectClass)
    ['{50170FEA-FFB3-4B22-9258-A238EE601236}']
    {class} function getByDottedAddress(P1: JString): JInetAddress; cdecl;
    {class} function isIPv4Address(P1: JString): Boolean; cdecl;
    {class} function isIPv6Address(P1: JString): Boolean; cdecl;
    {class} function isIPv6HexCompressedAddress(P1: JString): Boolean; cdecl;
    {class} function isIPv6StdAddress(P1: JString): Boolean; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/InetUtil')]
  JInetUtil = interface(JObject)
    ['{F5B08C72-5E62-4D3C-9947-E5DDE2F5127F}']
  end;
  TJInetUtil = class(TJavaGenericImport<JInetUtilClass, JInetUtil>) end;

  JKVConfigClass = interface(JObjectClass)
    ['{2568BD3A-223A-49C3-AC33-E13526BE5DF3}']
    {class} function init: JKVConfig; cdecl;
    {class} function parseIni(P1: JString): JMap; cdecl;
    {class} function parseXml(P1: JString; P2: JString; P3: JString): JMap; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/KVConfig')]
  JKVConfig = interface(JObject)
    ['{488C2BE1-C0B2-425D-A0F8-A952F7AE7A8A}']
  end;
  TJKVConfig = class(TJavaGenericImport<JKVConfigClass, JKVConfig>) end;

  JLBSManagerClass = interface(JBroadcastReceiverClass)
    ['{C2C5FD79-1BDD-4F4E-B09C-1E8F5C4C35BB}']
    {class} function _GetFILTER_GPS: JString; cdecl;
    {class} function _GetINVALID_ACC: Integer; cdecl;
    {class} function _GetINVALID_LAT: Single; cdecl;
    {class} function _GetINVALID_LNG: Single; cdecl;
    {class} function _GetMM_SOURCE_HARDWARE: Integer; cdecl;
    {class} function _GetMM_SOURCE_NET: Integer; cdecl;
    {class} function _GetMM_SOURCE_REPORT_HARWARE: Integer; cdecl;
    {class} function _GetMM_SOURCE_REPORT_NETWORK: Integer; cdecl;
    {class} function a(P1: JLBSManager): Boolean; cdecl;
    {class} function init(P1: JContext; P2: JLBSManager_OnLocationGotListener): JLBSManager; cdecl;
    {class} procedure setLocationCache(P1: Single; P2: Single; P3: Integer; P4: Integer); cdecl;
    {class} property FILTER_GPS: JString read _GetFILTER_GPS;
    {class} property INVALID_ACC: Integer read _GetINVALID_ACC;
    {class} property INVALID_LAT: Single read _GetINVALID_LAT;
    {class} property INVALID_LNG: Single read _GetINVALID_LNG;
    {class} property MM_SOURCE_HARDWARE: Integer read _GetMM_SOURCE_HARDWARE;
    {class} property MM_SOURCE_NET: Integer read _GetMM_SOURCE_NET;
    {class} property MM_SOURCE_REPORT_HARWARE: Integer read _GetMM_SOURCE_REPORT_HARWARE;
    {class} property MM_SOURCE_REPORT_NETWORK: Integer read _GetMM_SOURCE_REPORT_NETWORK;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/LBSManager')]
  JLBSManager = interface(JBroadcastReceiver)
    ['{8902A854-C844-42EE-B112-82C82462FCAC}']
    function _Getag: Boolean; cdecl;
    function _Getah: Boolean; cdecl;
    function _Getai: Boolean; cdecl;
    function _Getaj: Integer; cdecl;
    function getTelLocation: JString; cdecl;
    function getWIFILocation: JString; cdecl;
    function isGpsEnable: Boolean; cdecl;
    function isNetworkPrividerEnable: Boolean; cdecl;
    procedure onReceive(P1: JContext; P2: JIntent); cdecl;
    procedure removeGpsUpdate; cdecl;
    procedure removeListener; cdecl;
    procedure requestGpsUpdate; cdecl;
    procedure start; cdecl;
    property ag: Boolean read _Getag;
    property ah: Boolean read _Getah;
    property ai: Boolean read _Getai;
    property aj: Integer read _Getaj;
  end;
  TJLBSManager = class(TJavaGenericImport<JLBSManagerClass, JLBSManager>) end;

  JMTimerHandler_CallBackClass = interface(IJavaClass)
    ['{9F689123-CB57-4FBC-BE05-F62320AB08E9}']
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/MTimerHandler$CallBack')]
  JMTimerHandler_CallBack = interface(IJavaInstance)
    ['{128E4971-4790-4BA9-B062-B7813A768CF0}']
    function onTimerExpired: Boolean; cdecl;
  end;
  TJMTimerHandler_CallBack = class(TJavaGenericImport<JMTimerHandler_CallBackClass, JMTimerHandler_CallBack>) end;

  JLBSManager_1Class = interface(JMTimerHandler_CallBackClass)
    ['{D6D439B6-2732-4428-B6EF-C4F0B8B1A566}']
    {class} function init(P1: JLBSManager): JLBSManager_1; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/LBSManager$1')]
  JLBSManager_1 = interface(JMTimerHandler_CallBack)
    ['{C60C20C7-A231-4F84-88FA-442999240057}']
    function onTimerExpired: Boolean; cdecl;
  end;
  TJLBSManager_1 = class(TJavaGenericImport<JLBSManager_1Class, JLBSManager_1>) end;

  JLBSManager_LocationCacheClass = interface(JObjectClass)
    ['{0254665A-4734-46C1-BEED-24EED0C94E34}']
    {class} function init: JLBSManager_LocationCache; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/LBSManager$LocationCache')]
  JLBSManager_LocationCache = interface(JObject)
    ['{A21DD6F8-6514-4709-9C85-3F6E86C4B563}']
    function _GetI: Integer; cdecl;
    function _Getan: Single; cdecl;
    function _Getao: Integer; cdecl;
    function _Gettime: Int64; cdecl;
    property I: Integer read _GetI;
    property an: Single read _Getan;
    property ao: Integer read _Getao;
    property time: Int64 read _Gettime;
  end;
  TJLBSManager_LocationCache = class(TJavaGenericImport<JLBSManager_LocationCacheClass, JLBSManager_LocationCache>) end;

  JLBSManager_OnLocationGotListenerClass = interface(IJavaClass)
    ['{6915C624-DE6B-4D88-A02E-C0CBC7681109}']
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/LBSManager$OnLocationGotListener')]
  JLBSManager_OnLocationGotListener = interface(IJavaInstance)
    ['{FD74E005-9E2D-430F-823E-71B7AB8710BC}']
    procedure onLocationGot(P1: Single; P2: Single; P3: Integer; P4: Integer; P5: JString; P6: JString; P7: Boolean); cdecl;
  end;
  TJLBSManager_OnLocationGotListener = class(TJavaGenericImport<JLBSManager_OnLocationGotListenerClass, JLBSManager_OnLocationGotListener>) end;

  JLVBufferClass = interface(JObjectClass)
    ['{DC5B726B-5F53-4F04-AB55-DA266DC738B3}']
    {class} function _GetLENGTH_ALLOC_PER_NEW: Integer; cdecl;
    {class} function _GetMAX_STRING_LENGTH: Integer; cdecl;
    {class} function init: JLVBuffer; cdecl;
    {class} property LENGTH_ALLOC_PER_NEW: Integer read _GetLENGTH_ALLOC_PER_NEW;
    {class} property MAX_STRING_LENGTH: Integer read _GetMAX_STRING_LENGTH;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/LVBuffer')]
  JLVBuffer = interface(JObject)
    ['{1BB8349E-0FF9-47C9-B588-513ED6635C66}']
    function buildFinish: TJavaArray<Byte>; cdecl;
    function checkGetFinish: Boolean; cdecl;
    function getInt: Integer; cdecl;
    function getLong: Int64; cdecl;
    function getString: JString; cdecl;
    function initBuild: Integer; cdecl;
    function initParse(P1: TJavaArray<Byte>): Integer; cdecl;
    function putInt(P1: Integer): Integer; cdecl;
    function putLong(P1: Int64): Integer; cdecl;
    function putString(P1: JString): Integer; cdecl;
  end;
  TJLVBuffer = class(TJavaGenericImport<JLVBufferClass, JLVBuffer>) end;

  JLocaleUtilClass = interface(JObjectClass)
    ['{3532179E-EFDE-4AF9-976D-D9FC63F0F831}']
    {class} function _GetARABIC: JString; cdecl;
    {class} function _GetCHINA: JString; cdecl;
    {class} function _GetENGLISH: JString; cdecl;
    {class} function _GetHEBREW: JString; cdecl;
    {class} function _GetHINDI: JString; cdecl;
    {class} function _GetHONGKONG: JString; cdecl;
    {class} function _GetINDONESIAN: JString; cdecl;
    {class} function _GetITALIAN: JString; cdecl;
    {class} function _GetJAPANESE: JString; cdecl;
    {class} function _GetKOREAN: JString; cdecl;
    {class} function _GetLANGUAGE_DEFAULT: JString; cdecl;
    {class} function _GetLANGUAGE_KEY: JString; cdecl;
    {class} function _GetMALAY: JString; cdecl;
    {class} function _GetPOLISH: JString; cdecl;
    {class} function _GetPORTUGUESE: JString; cdecl;
    {class} function _GetRUSSIAN: JString; cdecl;
    {class} function _GetSPANISH: JString; cdecl;
    {class} function _GetTAIWAN: JString; cdecl;
    {class} function _GetTHAI: JString; cdecl;
    {class} function _GetTURKEY: JString; cdecl;
    {class} function _GetVIETNAMESE: JString; cdecl;
    {class} function getApplicationLanguage: JString; cdecl;
    {class} function getCurrentCountryCode: JString; cdecl;
    {class} function isLanguageSupported(P1: JString): Boolean; cdecl;
    {class} function loadApplicationLanguage(P1: JSharedPreferences; P2: JContext): JString; cdecl;
    {class} function loadApplicationLanguageSettings(P1: JSharedPreferences; P2: JContext): JString; cdecl;
    {class} procedure saveApplicationLanguage(P1: JSharedPreferences; P2: JContext; P3: JString); cdecl;
    {class} function transLanguageToLocale(P1: JString): JLocale; cdecl;
    {class} procedure updateApplicationResourceLocale(P1: JContext; P2: JLocale); cdecl;
    {class} property ARABIC: JString read _GetARABIC;
    {class} property CHINA: JString read _GetCHINA;
    {class} property ENGLISH: JString read _GetENGLISH;
    {class} property HEBREW: JString read _GetHEBREW;
    {class} property HINDI: JString read _GetHINDI;
    {class} property HONGKONG: JString read _GetHONGKONG;
    {class} property INDONESIAN: JString read _GetINDONESIAN;
    {class} property ITALIAN: JString read _GetITALIAN;
    {class} property JAPANESE: JString read _GetJAPANESE;
    {class} property KOREAN: JString read _GetKOREAN;
    {class} property LANGUAGE_DEFAULT: JString read _GetLANGUAGE_DEFAULT;
    {class} property LANGUAGE_KEY: JString read _GetLANGUAGE_KEY;
    {class} property MALAY: JString read _GetMALAY;
    {class} property POLISH: JString read _GetPOLISH;
    {class} property PORTUGUESE: JString read _GetPORTUGUESE;
    {class} property RUSSIAN: JString read _GetRUSSIAN;
    {class} property SPANISH: JString read _GetSPANISH;
    {class} property TAIWAN: JString read _GetTAIWAN;
    {class} property THAI: JString read _GetTHAI;
    {class} property TURKEY: JString read _GetTURKEY;
    {class} property VIETNAMESE: JString read _GetVIETNAMESE;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/LocaleUtil')]
  JLocaleUtil = interface(JObject)
    ['{CBE1BEAF-F08D-4A97-AE5A-041C36E2E0B8}']
  end;
  TJLocaleUtil = class(TJavaGenericImport<JLocaleUtilClass, JLocaleUtil>) end;

  Jplatformtools_LogClass = interface(JObjectClass)
    ['{5F5CE963-2AB2-40AF-95C0-041AFF38298B}']
    {class} function _GetLEVEL_DEBUG: Integer; cdecl;
    {class} function _GetLEVEL_ERROR: Integer; cdecl;
    {class} function _GetLEVEL_FATAL: Integer; cdecl;
    {class} function _GetLEVEL_INFO: Integer; cdecl;
    {class} function _GetLEVEL_NONE: Integer; cdecl;
    {class} function _GetLEVEL_VERBOSE: Integer; cdecl;
    {class} function _GetLEVEL_WARNING: Integer; cdecl;
    {class} procedure d(P1: JString; P2: JString); cdecl; overload;
    {class} procedure e(P1: JString; P2: JString); cdecl; overload;
    {class} procedure f(P1: JString; P2: JString); cdecl; overload;
    {class} function getLevel: Integer; cdecl;
    {class} function getSysInfo: JString; cdecl;
    {class} procedure i(P1: JString; P2: JString); cdecl; overload;
    {class} function init: Jplatformtools_Log; cdecl;
    {class} procedure reset; cdecl;
    {class} procedure setLevel(P1: Integer; P2: Boolean); cdecl;
    {class} procedure setOutputPath(P1: JString; P2: JString; P3: JString; P4: Integer); cdecl;
    {class} procedure setOutputStream(P1: JInputStream; P2: JOutputStream; P3: JString; P4: JString; P5: Integer); cdecl;
    {class} procedure v(P1: JString; P2: JString); cdecl; overload;
    {class} procedure w(P1: JString; P2: JString); cdecl; overload;
    {class} property LEVEL_DEBUG: Integer read _GetLEVEL_DEBUG;
    {class} property LEVEL_ERROR: Integer read _GetLEVEL_ERROR;
    {class} property LEVEL_FATAL: Integer read _GetLEVEL_FATAL;
    {class} property LEVEL_INFO: Integer read _GetLEVEL_INFO;
    {class} property LEVEL_NONE: Integer read _GetLEVEL_NONE;
    {class} property LEVEL_VERBOSE: Integer read _GetLEVEL_VERBOSE;
    {class} property LEVEL_WARNING: Integer read _GetLEVEL_WARNING;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/Log')]
  Jplatformtools_Log = interface(JObject)
    ['{B95987B4-C064-459D-AC72-608769852FED}']
  end;
  TJplatformtools_Log = class(TJavaGenericImport<Jplatformtools_LogClass, Jplatformtools_Log>) end;

  JLogHelperClass = interface(JObjectClass)
    ['{1597408A-2BA5-4898-A75D-8664C5107E4E}']
    {class} procedure initLogHeader(P1: JPrintStream; P2: JString; P3: JString; P4: Int64; P5: Integer); cdecl;
    {class} procedure writeToStream(P1: JPrintStream; P2: TJavaArray<Byte>; P3: JString; P4: JString); cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/LogHelper')]
  JLogHelper = interface(JObject)
    ['{CBA7FB1C-2F3C-4093-A73A-F7DCE1E7A516}']
  end;
  TJLogHelper = class(TJavaGenericImport<JLogHelperClass, JLogHelper>) end;

  JMAlarmHandlerClass = interface(JObjectClass)
    ['{BC87737A-68EF-4C0D-A4A6-EE14296DE531}']
    {class} function _GetNEXT_FIRE_INTERVAL: Int64; cdecl;
    {class} function fire: Int64; cdecl;
    {class} function init(P1: JMAlarmHandler_CallBack; P2: Boolean): JMAlarmHandler; cdecl;
    {class} procedure initAlarmBumper(P1: JMAlarmHandler_IBumper); cdecl;
    {class} property NEXT_FIRE_INTERVAL: Int64 read _GetNEXT_FIRE_INTERVAL;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/MAlarmHandler')]
  JMAlarmHandler = interface(JObject)
    ['{A77DD291-07F2-4722-816B-2073E8AA3966}']
    procedure finalize; cdecl;
    procedure startTimer(P1: Int64); cdecl;
    procedure stopTimer; cdecl;
    function stopped: Boolean; cdecl;
  end;
  TJMAlarmHandler = class(TJavaGenericImport<JMAlarmHandlerClass, JMAlarmHandler>) end;

  JMAlarmHandler_CallBackClass = interface(IJavaClass)
    ['{3C60F2B2-B614-453C-9297-D67C15D7AA6F}']
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/MAlarmHandler$CallBack')]
  JMAlarmHandler_CallBack = interface(IJavaInstance)
    ['{7A69A17E-CD7E-493A-87A7-12D195796DFF}']
    function onTimerExpired: Boolean; cdecl;
  end;
  TJMAlarmHandler_CallBack = class(TJavaGenericImport<JMAlarmHandler_CallBackClass, JMAlarmHandler_CallBack>) end;

  JMAlarmHandler_IBumperClass = interface(IJavaClass)
    ['{95E034D4-5F5B-4EE5-8B13-D8F51BC71D7A}']
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/MAlarmHandler$IBumper')]
  JMAlarmHandler_IBumper = interface(IJavaInstance)
    ['{72BC6919-5D2D-4CBC-8FA9-3FA83C610DAC}']
    procedure cancel; cdecl;
    procedure prepare; cdecl;
  end;
  TJMAlarmHandler_IBumper = class(TJavaGenericImport<JMAlarmHandler_IBumperClass, JMAlarmHandler_IBumper>) end;

  JMMApplicationContextClass = interface(JObjectClass)
    ['{B108DE35-51EA-474F-ADB2-54F09BAD1189}']
    {class} function getContext: JContext; cdecl;
    {class} function getDefaultPreferencePath: JString; cdecl;
    {class} function getPackageName: JString; cdecl;
    {class} procedure setContext(P1: JContext); cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/MMApplicationContext')]
  JMMApplicationContext = interface(JObject)
    ['{17F7BB67-69BE-41B0-9381-A407E8EB0CF9}']
  end;
  TJMMApplicationContext = class(TJavaGenericImport<JMMApplicationContextClass, JMMApplicationContext>) end;

  JMMEntryLockClass = interface(JObjectClass)
    ['{EFCC0974-5989-4B42-BF41-E50EB879FA20}']
    {class} function isLocked(P1: JString): Boolean; cdecl;
    {class} function lock(P1: JString): Boolean; cdecl;
    {class} procedure unlock(P1: JString); cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/MMEntryLock')]
  JMMEntryLock = interface(JObject)
    ['{05D43147-3A40-441A-9862-49653AF6C4E3}']
  end;
  TJMMEntryLock = class(TJavaGenericImport<JMMEntryLockClass, JMMEntryLock>) end;

  JMTimerHandlerClass = interface(JHandlerClass)
    ['{84BEA375-A148-4B0B-A3BD-AD31EBB57D58}']
    {class} function init(P1: JMTimerHandler_CallBack; P2: Boolean): JMTimerHandler; cdecl; overload;
    {class} function init(P1: JLooper; P2: JMTimerHandler_CallBack; P3: Boolean): JMTimerHandler; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/MTimerHandler')]
  JMTimerHandler = interface(JHandler)
    ['{7AEC6E9B-8051-4976-84B8-E69D106E7E1B}']
    procedure handleMessage(P1: JMessage); cdecl;
    procedure startTimer(P1: Int64); cdecl;
    procedure stopTimer; cdecl;
    function stopped: Boolean; cdecl;
  end;
  TJMTimerHandler = class(TJavaGenericImport<JMTimerHandlerClass, JMTimerHandler>) end;

  JNetStatusUtilClass = interface(JObjectClass)
    ['{79DD024A-60E4-4944-B7D0-C3D3CE04D997}']
    {class} function _GetCMNET: Integer; cdecl;
    {class} function _GetCMWAP: Integer; cdecl;
    {class} function _GetCTNET: Integer; cdecl;
    {class} function _GetCTWAP: Integer; cdecl;
    {class} function _GetLTE: Integer; cdecl;
    {class} function _GetMOBILE: Integer; cdecl;
    {class} function _GetNET_3G: Integer; cdecl;
    {class} function _GetNON_NETWORK: Integer; cdecl;
    {class} function _GetPOLICY_NONE: Integer; cdecl;
    {class} function _GetPOLICY_REJECT_METERED_BACKGROUND: Integer; cdecl;
    {class} function _GetTBACKGROUND_DATA_LIMITED: Integer; cdecl;
    {class} function _GetTBACKGROUND_NOT_LIMITED: Integer; cdecl;
    {class} function _GetTBACKGROUND_PROCESS_LIMITED: Integer; cdecl;
    {class} function _GetTBACKGROUND_WIFI_LIMITED: Integer; cdecl;
    {class} function _GetUNINET: Integer; cdecl;
    {class} function _GetUNIWAP: Integer; cdecl;
    {class} function _GetWAP_3G: Integer; cdecl;
    {class} function _GetWIFI: Integer; cdecl;
    {class} function checkFromXml(P1: Integer): Boolean; cdecl;
    {class} procedure dumpNetStatus(P1: JContext); cdecl;
    {class} function getBackgroundLimitType(P1: JContext): Integer; cdecl;
    {class} function getNetType(P1: JContext): Integer; cdecl;
    {class} function getNetTypeString(P1: JContext): JString; cdecl;
    {class} function getWifiSleeepPolicy(P1: JContext): Integer; cdecl;
    {class} function init: JNetStatusUtil; cdecl;
    {class} function is2G(P1: Integer): Boolean; cdecl; overload;
    {class} function is2G(P1: JContext): Boolean; cdecl; overload;
    {class} function is3G(P1: Integer): Boolean; cdecl; overload;
    {class} function is3G(P1: JContext): Boolean; cdecl; overload;
    {class} function is4G(P1: JContext): Boolean; cdecl; overload;
    {class} function is4G(P1: Integer): Boolean; cdecl; overload;
    {class} function isConnected(P1: JContext): Boolean; cdecl;
    {class} function isImmediatelyDestroyActivities(P1: JContext): Boolean; cdecl;
    {class} function isLimited(P1: Integer): Boolean; cdecl;
    {class} function isMobile(P1: Integer): Boolean; cdecl; overload;
    {class} function isMobile(P1: JContext): Boolean; cdecl; overload;
    {class} function isRestrictBacground(P1: JContext): Boolean; cdecl;
    {class} function isWap(P1: Integer): Boolean; cdecl; overload;
    {class} function isWap(P1: JContext): Boolean; cdecl; overload;
    {class} function isWifi(P1: JContext): Boolean; cdecl; overload;
    {class} function isWifi(P1: Integer): Boolean; cdecl; overload;
    {class} function runRootCommand: Boolean; cdecl;
    {class} procedure startSettingItent(P1: JContext; P2: Integer); cdecl;
    {class} property CMNET: Integer read _GetCMNET;
    {class} property CMWAP: Integer read _GetCMWAP;
    {class} property CTNET: Integer read _GetCTNET;
    {class} property CTWAP: Integer read _GetCTWAP;
    {class} property LTE: Integer read _GetLTE;
    {class} property MOBILE: Integer read _GetMOBILE;
    {class} property NET_3G: Integer read _GetNET_3G;
    {class} property NON_NETWORK: Integer read _GetNON_NETWORK;
    {class} property POLICY_NONE: Integer read _GetPOLICY_NONE;
    {class} property POLICY_REJECT_METERED_BACKGROUND: Integer read _GetPOLICY_REJECT_METERED_BACKGROUND;
    {class} property TBACKGROUND_DATA_LIMITED: Integer read _GetTBACKGROUND_DATA_LIMITED;
    {class} property TBACKGROUND_NOT_LIMITED: Integer read _GetTBACKGROUND_NOT_LIMITED;
    {class} property TBACKGROUND_PROCESS_LIMITED: Integer read _GetTBACKGROUND_PROCESS_LIMITED;
    {class} property TBACKGROUND_WIFI_LIMITED: Integer read _GetTBACKGROUND_WIFI_LIMITED;
    {class} property UNINET: Integer read _GetUNINET;
    {class} property UNIWAP: Integer read _GetUNIWAP;
    {class} property WAP_3G: Integer read _GetWAP_3G;
    {class} property WIFI: Integer read _GetWIFI;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/NetStatusUtil')]
  JNetStatusUtil = interface(JObject)
    ['{0DAF1F2C-0343-431D-92A2-054708869C28}']
  end;
  TJNetStatusUtil = class(TJavaGenericImport<JNetStatusUtilClass, JNetStatusUtil>) end;

  JPhoneUtilClass = interface(JObjectClass)
    ['{06AB21E8-9D18-4571-A990-783C0BA803FF}']
    {class} function _GetCELL_CDMA: JString; cdecl;
    {class} function _GetCELL_GSM: JString; cdecl;
    {class} function getCellInfoList(P1: JContext): JList; cdecl;
    {class} function getCellXml(P1: JList): JString; cdecl;
    {class} function getMacXml(P1: JList): JString; cdecl;
    {class} procedure getSignalStrength(P1: JContext); cdecl;
    {class} property CELL_CDMA: JString read _GetCELL_CDMA;
    {class} property CELL_GSM: JString read _GetCELL_GSM;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/PhoneUtil')]
  JPhoneUtil = interface(JObject)
    ['{70C0C44B-8CF8-43B3-A416-A2E3CC5AD869}']
  end;
  TJPhoneUtil = class(TJavaGenericImport<JPhoneUtilClass, JPhoneUtil>) end;

  JPhoneUtil_CellInfoClass = interface(JObjectClass)
    ['{C44DE84A-341C-4EBB-8566-17673B7EC3B6}']
    {class} function _GetMAX_CID: Integer; cdecl;
    {class} function _GetMAX_LAC: Integer; cdecl;
    {class} function init(P1: JString; P2: JString; P3: JString; P4: JString; P5: JString; P6: JString; P7: JString; P8: JString; P9: JString): JPhoneUtil_CellInfo; cdecl;
    {class} property MAX_CID: Integer read _GetMAX_CID;
    {class} property MAX_LAC: Integer read _GetMAX_LAC;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/PhoneUtil$CellInfo')]
  JPhoneUtil_CellInfo = interface(JObject)
    ['{AF9C75BD-2702-4869-9814-0708D807DD7F}']
    function _Getcellid: JString; cdecl;
    function _Getdbm: JString; cdecl;
    function _Getlac: JString; cdecl;
    function _Getmcc: JString; cdecl;
    function _Getmnc: JString; cdecl;
    function _GetnetworkId: JString; cdecl;
    function _GetstationId: JString; cdecl;
    function _GetsystemId: JString; cdecl;
    function _Gettype: JString; cdecl;
    property cellid: JString read _Getcellid;
    property dbm: JString read _Getdbm;
    property lac: JString read _Getlac;
    property mcc: JString read _Getmcc;
    property mnc: JString read _Getmnc;
    property networkId: JString read _GetnetworkId;
    property stationId: JString read _GetstationId;
    property systemId: JString read _GetsystemId;
    property &type: JString read _Gettype;
  end;
  TJPhoneUtil_CellInfo = class(TJavaGenericImport<JPhoneUtil_CellInfoClass, JPhoneUtil_CellInfo>) end;

  JPhoneUtil_MacInfoClass = interface(JObjectClass)
    ['{F9562AF5-5A9B-4087-BA66-9087DB906CFC}']
    {class} function init(P1: JString; P2: JString): JPhoneUtil_MacInfo; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/PhoneUtil$MacInfo')]
  JPhoneUtil_MacInfo = interface(JObject)
    ['{9AA2479A-3AFD-48ED-B59E-EBD2DB901CBD}']
    function _Getdbm: JString; cdecl;
    function _Getmac: JString; cdecl;
    procedure _Setmac(Value: JString); cdecl;
    property dbm: JString read _Getdbm;
    property mac: JString read _Getmac write _Setmac;
  end;
  TJPhoneUtil_MacInfo = class(TJavaGenericImport<JPhoneUtil_MacInfoClass, JPhoneUtil_MacInfo>) end;

  JPhoneUtil16ImplClass = interface(JObjectClass)
    ['{F0795EA9-D8C8-4DE6-B1F0-913A8FCAA3C7}']
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/PhoneUtil16Impl')]
  JPhoneUtil16Impl = interface(JObject)
    ['{08046439-928E-43C4-B2AF-0FBCE423D366}']
    function getCellInfoList(P1: JContext): JList; cdecl;
    procedure getSignalStrength(P1: JContext); cdecl;
  end;
  TJPhoneUtil16Impl = class(TJavaGenericImport<JPhoneUtil16ImplClass, JPhoneUtil16Impl>) end;

  JPhoneUtil16Impl_1Class = interface(JPhoneStateListenerClass)
    ['{BFCCFE3D-896B-4745-8946-78884FBBC7D2}']
    {class} function init(P1: JPhoneUtil16Impl): JPhoneUtil16Impl_1; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/PhoneUtil16Impl$1')]
  JPhoneUtil16Impl_1 = interface(JPhoneStateListener)
    ['{401DA405-29A3-45B1-8B4A-179ECCEEFAE6}']
    procedure onSignalStrengthChanged(P1: Integer); cdecl;
  end;
  TJPhoneUtil16Impl_1 = class(TJavaGenericImport<JPhoneUtil16Impl_1Class, JPhoneUtil16Impl_1>) end;

  JPhoneUtil20ImplClass = interface(JObjectClass)
    ['{1D74CA0D-3FE5-4DCB-97C2-5B0DBDCFA2F1}']
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/PhoneUtil20Impl')]
  JPhoneUtil20Impl = interface(JObject)
    ['{2483D9C4-77EF-4E66-A81E-FAED19079B15}']
    function getCellInfoList(P1: JContext): JList; cdecl;
    procedure getSignalStrength(P1: JContext); cdecl;
  end;
  TJPhoneUtil20Impl = class(TJavaGenericImport<JPhoneUtil20ImplClass, JPhoneUtil20Impl>) end;

  JPhoneUtil20Impl_1Class = interface(JPhoneStateListenerClass)
    ['{6F102478-B9D4-42C3-BCE6-EDF5730DD483}']
    {class} function init(P1: JPhoneUtil20Impl): JPhoneUtil20Impl_1; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/PhoneUtil20Impl$1')]
  JPhoneUtil20Impl_1 = interface(JPhoneStateListener)
    ['{14910E29-2825-4127-8291-27D47AFE37E8}']
    procedure onSignalStrengthsChanged(P1: JSignalStrength); cdecl;
  end;
  TJPhoneUtil20Impl_1 = class(TJavaGenericImport<JPhoneUtil20Impl_1Class, JPhoneUtil20Impl_1>) end;

  JSensorControllerClass = interface(JBroadcastReceiverClass)
    ['{6725D9C2-1F7B-4D45-963E-66D3A862F033}']
    {class} function init(P1: JContext): JSensorController; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/SensorController')]
  JSensorController = interface(JBroadcastReceiver)
    ['{6B5C45B0-1A4E-4077-A6D8-0455DE1066C8}']
    function isSensorEnable: Boolean; cdecl;
    procedure onAccuracyChanged(P1: JSensor; P2: Integer); cdecl;
    procedure onReceive(P1: JContext; P2: JIntent); cdecl;
    procedure onSensorChanged(P1: JSensorEvent); cdecl;
    procedure removeSensorCallBack; cdecl;
    procedure setSensorCallBack(P1: JSensorController_SensorEventCallBack); cdecl;
  end;
  TJSensorController = class(TJavaGenericImport<JSensorControllerClass, JSensorController>) end;

  JSensorController_SensorEventCallBackClass = interface(IJavaClass)
    ['{CB6F9300-ED1D-4860-A6AC-D4E6C32CEE28}']
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/SensorController$SensorEventCallBack')]
  JSensorController_SensorEventCallBack = interface(IJavaInstance)
    ['{469FFEBB-213E-4253-8C29-EE6BAEFC6994}']
    procedure onSensorEvent(P1: Boolean); cdecl;
  end;
  TJSensorController_SensorEventCallBack = class(TJavaGenericImport<JSensorController_SensorEventCallBackClass, JSensorController_SensorEventCallBack>) end;

  JSmoothScrollToPosition21belowClass = interface(JSmoothScrollFactory_IScrollClass)
    ['{B808A6F7-C682-441F-B922-307EA229841E}']
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/SmoothScrollToPosition21below')]
  JSmoothScrollToPosition21below = interface(JSmoothScrollFactory_IScroll)
    ['{B5E2764E-840F-4556-9FA0-33DF62B039D8}']
    procedure doScroll(P1: JListView); cdecl; overload;
    procedure doScroll(P1: JListView; P2: Integer); cdecl; overload;
  end;
  TJSmoothScrollToPosition21below = class(TJavaGenericImport<JSmoothScrollToPosition21belowClass, JSmoothScrollToPosition21below>) end;

  JSmoothScrollToPosition22Class = interface(JSmoothScrollFactory_IScrollClass)
    ['{79830D5B-7BBB-433D-9F4A-843657BB69F6}']
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/SmoothScrollToPosition22')]
  JSmoothScrollToPosition22 = interface(JSmoothScrollFactory_IScroll)
    ['{B111EE82-D242-46A9-B366-FF64FDEC8C34}']
    procedure doScroll(P1: JListView); cdecl; overload;
    procedure doScroll(P1: JListView; P2: Integer); cdecl; overload;
  end;
  TJSmoothScrollToPosition22 = class(TJavaGenericImport<JSmoothScrollToPosition22Class, JSmoothScrollToPosition22>) end;

  JSyncTaskClass = interface(JObjectClass)
    ['{EB0CF858-5EC3-427C-9CE7-182666A1AE4B}']
    {class} function init: JSyncTask; cdecl; overload;
    {class} function init(P1: Int64; P2: JObject): JSyncTask; cdecl; overload;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/SyncTask')]
  JSyncTask = interface(JObject)
    ['{962C8B43-255A-49C9-85EC-765219EFEE49}']
    function exec(P1: JHandler): JObject; cdecl;
    procedure setResult(P1: JObject); cdecl;
  end;
  TJSyncTask = class(TJavaGenericImport<JSyncTaskClass, JSyncTask>) end;

  JSyncTask_1Class = interface(JRunnableClass)
    ['{A63783C7-DAA1-4BF0-8963-8AA885DCBDF5}']
    {class} function init(P1: JSyncTask): JSyncTask_1; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/SyncTask$1')]
  JSyncTask_1 = interface(JRunnable)
    ['{99B4DC6A-138E-4D16-9226-59ED4CC8A57F}']
    procedure run; cdecl;
  end;
  TJSyncTask_1 = class(TJavaGenericImport<JSyncTask_1Class, JSyncTask_1>) end;

  JSystemPropertyClass = interface(JObjectClass)
    ['{8406D1B8-4D93-408D-AA35-EB9EC09410ED}']
    {class} function getProperty(P1: JString): JString; cdecl;
    {class} procedure setProperty(P1: JString; P2: JString); cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/SystemProperty')]
  JSystemProperty = interface(JObject)
    ['{790E1548-B547-4A47-ADCB-A8F46B304C9F}']
  end;
  TJSystemProperty = class(TJavaGenericImport<JSystemPropertyClass, JSystemProperty>) end;

  JTimeLoggerClass = interface(JObjectClass)
    ['{88D92134-835A-4624-B71E-E75A2FA3A512}']
    {class} function init(P1: JString; P2: JString): JTimeLogger; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/TimeLogger')]
  JTimeLogger = interface(JObject)
    ['{0BF6336A-5981-46E0-A954-62A5A03D5B71}']
    function _Getbk: JArrayList; cdecl;
    procedure addSplit(P1: JString); cdecl;
    procedure dumpToLog; cdecl;
    procedure reset; cdecl; overload;
    procedure reset(P1: JString; P2: JString); cdecl; overload;
    property bk: JArrayList read _Getbk;
  end;
  TJTimeLogger = class(TJavaGenericImport<JTimeLoggerClass, JTimeLogger>) end;

  Jplatformtools_TrafficStatsClass = interface(JObjectClass)
    ['{0A734859-B35E-448E-A0D1-E3DAD99BDE8D}']
    {class} function _GetDEV_FILE: JString; cdecl;
    {class} function _GetGPRSLINE: JString; cdecl;
    {class} function _GetWIFILINE: JString; cdecl;
    {class} function getMobileRx(P1: Int64): Int64; cdecl;
    {class} function getMobileTx(P1: Int64): Int64; cdecl;
    {class} function getWifiRx(P1: Int64): Int64; cdecl;
    {class} function getWifiTx(P1: Int64): Int64; cdecl;
    {class} procedure reset; cdecl;
    {class} procedure update; cdecl;
    {class} function updateMobileRx(P1: Int64): Int64; cdecl;
    {class} function updateMobileTx(P1: Int64): Int64; cdecl;
    {class} function updateWifiRx(P1: Int64): Int64; cdecl;
    {class} function updateWifiTx(P1: Int64): Int64; cdecl;
    {class} property DEV_FILE: JString read _GetDEV_FILE;
    {class} property GPRSLINE: JString read _GetGPRSLINE;
    {class} property WIFILINE: JString read _GetWIFILINE;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/TrafficStats')]
  Jplatformtools_TrafficStats = interface(JObject)
    ['{27DA15EA-6349-4ACF-A348-2A032974E113}']
  end;
  TJplatformtools_TrafficStats = class(TJavaGenericImport<Jplatformtools_TrafficStatsClass, Jplatformtools_TrafficStats>) end;

  JUtilClass = interface(JObjectClass)
    ['{5F283BB4-CDF3-410E-9AE0-749AE38B631A}']
    {class} function _GetBEGIN_TIME: Integer; cdecl;
    {class} function _GetBIT_OF_KB: Integer; cdecl;
    {class} function _GetBIT_OF_MB: Integer; cdecl;
    {class} function _GetBYTE_OF_KB: Integer; cdecl;
    {class} function _GetBYTE_OF_MB: Integer; cdecl;
    {class} function _GetCHINA: JString; cdecl;
    {class} function _GetDAY: Integer; cdecl;
    {class} function _GetEND_TIME: Integer; cdecl;
    {class} function _GetENGLISH: JString; cdecl;
    {class} function _GetHONGKONG: JString; cdecl;
    {class} function _GetLANGUAGE_DEFAULT: JString; cdecl;
    {class} function _GetMASK_16BIT: Integer; cdecl;
    {class} function _GetMASK_32BIT: Integer; cdecl;
    {class} function _GetMASK_4BIT: Integer; cdecl;
    {class} function _GetMASK_8BIT: Integer; cdecl;
    {class} function _GetMAX_32BIT_VALUE: Int64; cdecl;
    {class} function _GetMAX_ACCOUNT_LENGTH: Integer; cdecl;
    {class} function _GetMAX_DECODE_PICTURE_SIZE: Integer; cdecl;
    {class} function _GetMAX_PASSWORD_LENGTH: Integer; cdecl;
    {class} function _GetMILLSECONDS_OF_DAY: Int64; cdecl;
    {class} function _GetMILLSECONDS_OF_HOUR: Int64; cdecl;
    {class} function _GetMILLSECONDS_OF_MINUTE: Int64; cdecl;
    {class} function _GetMILLSECONDS_OF_SECOND: Int64; cdecl;
    {class} function _GetMINUTE_OF_HOUR: Int64; cdecl;
    {class} function _GetMIN_ACCOUNT_LENGTH: Integer; cdecl;
    {class} function _GetMIN_PASSWORD_LENGTH: Integer; cdecl;
    {class} function _GetPHOTO_DEFAULT_EXT: JString; cdecl;
    {class} function _GetSECOND_OF_MINUTE: Int64; cdecl;
    {class} function _GetTAIWAN: JString; cdecl;
    {class} function GetHostIp: JString; cdecl;
    {class} function UnZipFolder(P1: JString; P2: JString): Integer; cdecl;
    {class} function bmpToByteArray(P1: JBitmap; P2: Boolean): TJavaArray<Byte>; cdecl;
    {class} function checkPermission(P1: JContext; P2: JString): Boolean; cdecl;
    {class} function checkSDCardFull: Boolean; cdecl;
    {class} function convertStreamToString(P1: JInputStream): JString; cdecl;
    {class} function currentDayInMills: Int64; cdecl;
    {class} function currentMonthInMills: Int64; cdecl;
    {class} function currentTicks: Int64; cdecl;
    {class} function currentWeekInMills: Int64; cdecl;
    {class} function currentYearInMills: Int64; cdecl;
    {class} function decodeHexString(P1: JString): TJavaArray<Byte>; cdecl;
    {class} function dumpArray(P1: TJavaObjectArray<JObject>): JString; cdecl;
    {class} function dumpHex(P1: TJavaArray<Byte>): JString; cdecl;
    {class} function encodeHexString(P1: TJavaArray<Byte>): JString; cdecl;
    {class} function escapeSqlValue(P1: JString): JString; cdecl;
    {class} function escapeStringForXml(P1: JString): JString; cdecl;
    {class} function expandEntities(P1: JString): JString; cdecl;
    {class} function formatSecToMin(P1: Integer): JString; cdecl;
    {class} function formatUnixTime(P1: Int64): JString; cdecl;
    {class} procedure freeBitmapMap(P1: JMap); cdecl;
    {class} function getCutPasswordMD5(P1: JString): JString; cdecl;
    {class} function getDeviceId(P1: JContext): JString; cdecl;
    {class} function getFullPasswordMD5(P1: JString): JString; cdecl;
    {class} function getHex(P1: JString; P2: Integer): Integer; cdecl;
    {class} function getImageOptions(P1: JString): JBitmapFactory_Options; cdecl;
    {class} function getInstallPackIntent(P1: JString; P2: JContext): JIntent; cdecl;
    {class} function getInt(P1: JString; P2: Integer): Integer; cdecl;
    {class} function getIntRandom(P1: Integer; P2: Integer): Integer; cdecl;
    {class} function getLine1Number(P1: JContext): JString; cdecl;
    {class} function getLong(P1: JString; P2: Int64): Int64; cdecl;
    {class} function getRootElementFromXML(P1: TJavaArray<Byte>): JElement; cdecl;
    {class} function getRoundedCornerBitmap(P1: JBitmap; P2: Boolean; P3: Single): JBitmap; cdecl;
    {class} function getSizeKB(P1: Int64): JString; cdecl;
    {class} function getSizeMB(P1: Int64): JString; cdecl;
    {class} function getStack: JString; cdecl;
    {class} function getSystemVersion(P1: JContext; P2: Integer): Integer; cdecl;
    {class} function getTimeZone: JString; cdecl;
    {class} function getTimeZoneDef: JString; cdecl;
    {class} function getTimeZoneOffset: JString; cdecl;
    {class} function getTopActivityName(P1: JContext): JString; cdecl;
    {class} function guessHttpContinueRecvLength(P1: Integer): Integer; cdecl;
    {class} function guessHttpRecvLength(P1: Integer): Integer; cdecl;
    {class} function guessHttpSendLength(P1: Integer): Integer; cdecl;
    {class} function guessTcpConnectLength: Integer; cdecl;
    {class} function guessTcpDisconnectLength: Integer; cdecl;
    {class} function guessTcpRecvLength(P1: Integer): Integer; cdecl;
    {class} function guessTcpSendLength(P1: Integer): Integer; cdecl;
    {class} procedure installPack(P1: JString; P2: JContext); cdecl;
    {class} function isAlpha(P1: Char): Boolean; cdecl;
    {class} function isChinese(P1: Char): Boolean; cdecl;
    {class} function isDayTimeNow: Boolean; cdecl;
    {class} function isImgFile(P1: JString): Boolean; cdecl;
    {class} function isIntentAvailable(P1: JContext; P2: JIntent): Boolean; cdecl;
    {class} function isLockScreen(P1: JContext): Boolean; cdecl;
    {class} function isNightTime(P1: Integer; P2: Integer; P3: Integer): Boolean; cdecl;
    {class} function isNullOrNil(P1: TJavaArray<Byte>): Boolean; cdecl; overload;
    {class} function isNullOrNil(P1: JString): Boolean; cdecl; overload;
    {class} function isNum(P1: Char): Boolean; cdecl;
    {class} function isProcessRunning(P1: JContext; P2: JString): Boolean; cdecl;
    {class} function isServiceRunning(P1: JContext; P2: JString): Boolean; cdecl;
    {class} function isTopActivity(P1: JContext): Boolean; cdecl;
    {class} function isTopApplication(P1: JContext): Boolean; cdecl;
    {class} function isValidAccount(P1: JString): Boolean; cdecl;
    {class} function isValidEmail(P1: JString): Boolean; cdecl;
    {class} function isValidPassword(P1: JString): Boolean; cdecl;
    {class} function isValidQQNum(P1: JString): Boolean; cdecl;
    {class} function jump(P1: JContext; P2: JString): Boolean; cdecl;
    {class} function listToString(P1: JList; P2: JString): JString; cdecl;
    {class} function mapToXml(P1: JString; P2: JLinkedHashMap): JString; cdecl;
    {class} function milliSecondsToNow(P1: Int64): Int64; cdecl;
    {class} function nowMilliSecond: Int64; cdecl;
    {class} function nowSecond: Int64; cdecl;
    {class} function nullAs(P1: JInteger; P2: Integer): Integer; cdecl; overload;
    {class} function nullAs(P1: JString; P2: JString): JString; cdecl; overload;
    {class} function nullAs(P1: JBoolean; P2: Boolean): Boolean; cdecl; overload;
    {class} function nullAs(P1: JLong; P2: Int64): Int64; cdecl; overload;
    {class} function nullAsFalse(P1: JBoolean): Boolean; cdecl;
    {class} function nullAsInt(P1: JObject; P2: Integer): Integer; cdecl;
    {class} function nullAsNil(P1: JInteger): Integer; cdecl; overload;
    {class} function nullAsNil(P1: JLong): Int64; cdecl; overload;
    {class} function nullAsNil(P1: JString): JString; cdecl; overload;
    {class} function nullAsTrue(P1: JBoolean): Boolean; cdecl;
    {class} function parseIni(P1: JString): JMap; cdecl;
    {class} function parseXml(P1: JString; P2: JString; P3: JString): JMap; cdecl;
    {class} procedure playSound(P1: JContext; P2: Integer); cdecl; overload;
    {class} function playSound(P1: JContext; P2: Integer; P3: JMediaPlayer_OnCompletionListener): JMediaPlayer; cdecl; overload;
    {class} function processXml(P1: JString): JString; cdecl;
    {class} procedure saveBitmapToImage(P1: JBitmap; P2: Integer; P3: JBitmap_CompressFormat; P4: JString; P5: Boolean); cdecl; overload;
    {class} procedure saveBitmapToImage(P1: JBitmap; P2: Integer; P3: JBitmap_CompressFormat; P4: JString; P5: JString; P6: Boolean); cdecl; overload;
    {class} function secondsToNow(P1: Int64): Int64; cdecl;
    {class} procedure selectPicture(P1: JContext; P2: Integer); cdecl;
    {class} procedure shake(P1: JContext; P2: Boolean); cdecl;
    {class} function splitToIntArray(P1: JString): TJavaArray<Integer>; cdecl;
    {class} function stringsToList(P1: TJavaObjectArray<JString>): JList; cdecl;
    {class} function ticksToNow(P1: Int64): Int64; cdecl;
    {class} procedure transClickToSelect(P1: JView; P2: JView); cdecl;
    {class} property BEGIN_TIME: Integer read _GetBEGIN_TIME;
    {class} property BIT_OF_KB: Integer read _GetBIT_OF_KB;
    {class} property BIT_OF_MB: Integer read _GetBIT_OF_MB;
    {class} property BYTE_OF_KB: Integer read _GetBYTE_OF_KB;
    {class} property BYTE_OF_MB: Integer read _GetBYTE_OF_MB;
    {class} property CHINA: JString read _GetCHINA;
    {class} property DAY: Integer read _GetDAY;
    {class} property END_TIME: Integer read _GetEND_TIME;
    {class} property ENGLISH: JString read _GetENGLISH;
    {class} property HONGKONG: JString read _GetHONGKONG;
    {class} property LANGUAGE_DEFAULT: JString read _GetLANGUAGE_DEFAULT;
    {class} property MASK_16BIT: Integer read _GetMASK_16BIT;
    {class} property MASK_32BIT: Integer read _GetMASK_32BIT;
    {class} property MASK_4BIT: Integer read _GetMASK_4BIT;
    {class} property MASK_8BIT: Integer read _GetMASK_8BIT;
    {class} property MAX_32BIT_VALUE: Int64 read _GetMAX_32BIT_VALUE;
    {class} property MAX_ACCOUNT_LENGTH: Integer read _GetMAX_ACCOUNT_LENGTH;
    {class} property MAX_DECODE_PICTURE_SIZE: Integer read _GetMAX_DECODE_PICTURE_SIZE;
    {class} property MAX_PASSWORD_LENGTH: Integer read _GetMAX_PASSWORD_LENGTH;
    {class} property MILLSECONDS_OF_DAY: Int64 read _GetMILLSECONDS_OF_DAY;
    {class} property MILLSECONDS_OF_HOUR: Int64 read _GetMILLSECONDS_OF_HOUR;
    {class} property MILLSECONDS_OF_MINUTE: Int64 read _GetMILLSECONDS_OF_MINUTE;
    {class} property MILLSECONDS_OF_SECOND: Int64 read _GetMILLSECONDS_OF_SECOND;
    {class} property MINUTE_OF_HOUR: Int64 read _GetMINUTE_OF_HOUR;
    {class} property MIN_ACCOUNT_LENGTH: Integer read _GetMIN_ACCOUNT_LENGTH;
    {class} property MIN_PASSWORD_LENGTH: Integer read _GetMIN_PASSWORD_LENGTH;
    {class} property PHOTO_DEFAULT_EXT: JString read _GetPHOTO_DEFAULT_EXT;
    {class} property SECOND_OF_MINUTE: Int64 read _GetSECOND_OF_MINUTE;
    {class} property TAIWAN: JString read _GetTAIWAN;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/Util')]
  JUtil = interface(JObject)
    ['{5CF1563B-EFB9-411E-BA2F-390DDEB31D06}']
  end;
  TJUtil = class(TJavaGenericImport<JUtilClass, JUtil>) end;

  JUtil_1Class = interface(JMediaPlayer_OnCompletionListenerClass)
    ['{BC5B942B-2743-4F92-9A18-F7047141ACA3}']
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/Util$1')]
  JUtil_1 = interface(JMediaPlayer_OnCompletionListener)
    ['{97FEA07D-270A-41B2-A264-116CFDE35978}']
    procedure onCompletion(P1: JMediaPlayer); cdecl;
  end;
  TJUtil_1 = class(TJavaGenericImport<JUtil_1Class, JUtil_1>) end;

  JUtil_2Class = interface(JView_OnTouchListenerClass)
    ['{E5D1D763-6A30-4B21-9A03-9CC239A29606}']
    {class} function init(P1: JView; P2: JView): JUtil_2; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/Util$2')]
  JUtil_2 = interface(JView_OnTouchListener)
    ['{436B07FB-33CE-4B81-8BCA-2B856FA9C0D6}']
    function _Getby: JView; cdecl;
    function onTouch(P1: JView; P2: JMotionEvent): Boolean; cdecl;
    property by: JView read _Getby;
  end;
  TJUtil_2 = class(TJavaGenericImport<JUtil_2Class, JUtil_2>) end;

  Jplatformtools_package_infoClass = interface(IJavaClass)
    ['{69B5485C-2802-4166-90B8-F76E0A872823}']
  end;

  [JavaSignature('com/tencent/mm/sdk/platformtools/package-info')]
  Jplatformtools_package_info = interface(IJavaInstance)
    ['{1F17E307-406E-4098-9918-009E812BC21B}']
  end;
  TJplatformtools_package_info = class(TJavaGenericImport<Jplatformtools_package_infoClass, Jplatformtools_package_info>) end;

  JIMMPluginAPIClass = interface(IJavaClass)
    ['{0F97C0F3-D1BB-409A-8DF2-441DAF61622C}']
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/IMMPluginAPI')]
  JIMMPluginAPI = interface(IJavaInstance)
    ['{A0ADCA10-F3EA-4317-A399-2628F8C7EACA}']
    function appendNetStat(P1: Integer; P2: Integer; P3: Integer): Boolean; cdecl;
    procedure createMsgController(P1: JString); cdecl;
    procedure createQRCodeController(P1: JString); cdecl; overload;
    procedure createQRCodeController(P1: JString; P2: JMMessage_CallBack); cdecl; overload;
    procedure createQRCodeController(P1: JString; P2: JMMessage_CallBack; P3: JString); cdecl; overload;
    function getCurrentProfile(P1: JString): JProfile; cdecl;
    function getPluginKey(P1: JString): JString; cdecl;
    function installPlugin(P1: JString): Boolean; cdecl;
    function isPluginInstalled(P1: JString): Boolean; cdecl;
    procedure jumpToBindEmail(P1: JString); cdecl;
    procedure jumpToBindMobile(P1: JString); cdecl;
    procedure jumpToBindQQ(P1: JString); cdecl;
    procedure jumpToChattingUI(P1: JString; P2: JString); cdecl;
    procedure jumpToSettingView(P1: JString; P2: JString); cdecl;
    function registerAutoMsg(P1: JString; P2: JString): Boolean; cdecl;
    function registerPattern(P1: JString; P2: JMMessage_CallBack; P3: JString): Boolean; cdecl;
    function registerQRCodePattern(P1: JString; P2: JMMessage_CallBack; P3: JString): Boolean; cdecl;
    procedure release; cdecl;
    function sendMsgNotify(P1: JString; P2: JString; P3: Integer; P4: JString; P5: Jlang_Class): Boolean; cdecl;
    function unregisterAutoMsg(P1: JString; P2: JString): Boolean; cdecl;
  end;
  TJIMMPluginAPI = class(TJavaGenericImport<JIMMPluginAPIClass, JIMMPluginAPI>) end;

  JMMPluginAPIImplClass = interface(JIMMPluginAPIClass)
    ['{5B662D06-3C9D-4EE3-8001-4F751979700E}']
    {class} function init(P1: JContext): JMMPluginAPIImpl; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/MMPluginAPIImpl')]
  JMMPluginAPIImpl = interface(JIMMPluginAPI)
    ['{638BD6DA-8D9E-4E1D-8B09-40638B3CC0C9}']
    function appendNetStat(P1: Integer; P2: Integer; P3: Integer): Boolean; cdecl;
    procedure createMsgController(P1: JString); cdecl;
    procedure createQRCodeController(P1: JString); cdecl; overload;
    procedure createQRCodeController(P1: JString; P2: JMMessage_CallBack); cdecl; overload;
    procedure createQRCodeController(P1: JString; P2: JMMessage_CallBack; P3: JString); cdecl; overload;
    function getCurrentProfile(P1: JString): JProfile; cdecl;
    function getPluginKey(P1: JString): JString; cdecl;
    function installPlugin(P1: JString): Boolean; cdecl;
    function isPluginInstalled(P1: JString): Boolean; cdecl;
    procedure jumpToBindEmail(P1: JString); cdecl;
    procedure jumpToBindMobile(P1: JString); cdecl;
    procedure jumpToBindQQ(P1: JString); cdecl;
    procedure jumpToChattingUI(P1: JString; P2: JString); cdecl;
    procedure jumpToSettingView(P1: JString; P2: JString); cdecl;
    function registerAutoMsg(P1: JString; P2: JString): Boolean; cdecl;
    function registerPattern(P1: JString; P2: JMMessage_CallBack; P3: JString): Boolean; cdecl;
    function registerQRCodePattern(P1: JString; P2: JMMessage_CallBack; P3: JString): Boolean; cdecl;
    procedure release; cdecl;
    function sendMsgNotify(P1: JString; P2: JString; P3: Integer; P4: JString; P5: Jlang_Class): Boolean; cdecl;
    function unregisterAutoMsg(P1: JString; P2: JString): Boolean; cdecl;
  end;
  TJMMPluginAPIImpl = class(TJavaGenericImport<JMMPluginAPIImplClass, JMMPluginAPIImpl>) end;

  JMMPluginMsgClass = interface(JObjectClass)
    ['{52A2E64A-5B99-422A-B54A-7ABAFD6170A0}']
    {class} function _GetACTION_AUTO_MSG: JString; cdecl;
    {class} function _GetRECV_MSG: JString; cdecl;
    {class} function _GetRECV_PKG: JString; cdecl;
    {class} function _GetRECV_THUMB: JString; cdecl;
    {class} function _GetSEND_ERR_CODE: JString; cdecl;
    {class} function _GetSEND_ERR_TYPE: JString; cdecl;
    {class} function _GetSEND_ID: JString; cdecl;
    {class} function _GetTYPE: JString; cdecl;
    {class} function _GetTYPE_RECV_MSG: Integer; cdecl;
    {class} function _GetTYPE_SEND_RET: Integer; cdecl;
    {class} function WXAppExtentObjectToPluginMsg(P1: JWXAppExtendObject): JMMPluginMsg; cdecl;
    {class} function init: JMMPluginMsg; cdecl;
    {class} function pluginMsgToWXAppExtendObject(P1: JMMPluginMsg): JWXAppExtendObject; cdecl;
    {class} function sendMessage(P1: JContext; P2: JString): Int64; cdecl;
    {class} property ACTION_AUTO_MSG: JString read _GetACTION_AUTO_MSG;
    {class} property RECV_MSG: JString read _GetRECV_MSG;
    {class} property RECV_PKG: JString read _GetRECV_PKG;
    {class} property RECV_THUMB: JString read _GetRECV_THUMB;
    {class} property SEND_ERR_CODE: JString read _GetSEND_ERR_CODE;
    {class} property SEND_ERR_TYPE: JString read _GetSEND_ERR_TYPE;
    {class} property SEND_ID: JString read _GetSEND_ID;
    {class} property &TYPE: JString read _GetTYPE;
    {class} property TYPE_RECV_MSG: Integer read _GetTYPE_RECV_MSG;
    {class} property TYPE_SEND_RET: Integer read _GetTYPE_SEND_RET;
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/MMPluginMsg')]
  JMMPluginMsg = interface(JObject)
    ['{807ED65E-67DB-4724-A444-8E446B239CB8}']
    function _Getcontent: JString; cdecl;
    function _GetmsgClientId: Int64; cdecl;
    procedure _SetmsgClientId(Value: Int64); cdecl;
    property content: JString read _Getcontent;
    property msgClientId: Int64 read _GetmsgClientId write _SetmsgClientId;
  end;
  TJMMPluginMsg = class(TJavaGenericImport<JMMPluginMsgClass, JMMPluginMsg>) end;

  JMMPluginMsg_ReceiverHelperClass = interface(JObjectClass)
    ['{7599991B-3581-49C0-8545-CA10C70F0669}']
    {class} function init(P1: JIntent): JMMPluginMsg_ReceiverHelper; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/MMPluginMsg$ReceiverHelper')]
  JMMPluginMsg_ReceiverHelper = interface(JObject)
    ['{AC8A518B-508F-495B-9160-5789F3DC5306}']
    function _Getintent: JIntent; cdecl;
    function getMsgContent: JString; cdecl;
    function getSendErrCode: JInteger; cdecl;
    function getSendErrType: JInteger; cdecl;
    function getSendMsgId: JLong; cdecl;
    function isRecvNew: Boolean; cdecl;
    function isSendRet: Boolean; cdecl;
    property intent: JIntent read _Getintent;
  end;
  TJMMPluginMsg_ReceiverHelper = class(TJavaGenericImport<JMMPluginMsg_ReceiverHelperClass, JMMPluginMsg_ReceiverHelper>) end;

  JMMPluginOAuthClass = interface(JObjectClass)
    ['{B2E41DD9-FC7F-4867-A2FB-A1BEE3D90BC4}']
    {class} function init(P1: JContext; P2: JMMPluginOAuth_IResult): JMMPluginOAuth; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/MMPluginOAuth')]
  JMMPluginOAuth = interface(JObject)
    ['{8A4A25C5-A720-4F21-8623-D7B36AD6DBC6}']
    function getAccessToken: JString; cdecl;
    function getRequestToken: JString; cdecl;
    procedure start; cdecl; overload;
    function start(P1: JHandler): Boolean; cdecl; overload;
  end;
  TJMMPluginOAuth = class(TJavaGenericImport<JMMPluginOAuthClass, JMMPluginOAuth>) end;

  JMMPluginOAuth_1Class = interface(JRunnableClass)
    ['{0598B445-E702-4140-93E0-ABA589E537C5}']
    {class} function init(P1: JMMPluginOAuth): JMMPluginOAuth_1; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/MMPluginOAuth$1')]
  JMMPluginOAuth_1 = interface(JRunnable)
    ['{59378792-664E-4FE0-A6E8-26D6B78AA8D8}']
    procedure run; cdecl;
  end;
  TJMMPluginOAuth_1 = class(TJavaGenericImport<JMMPluginOAuth_1Class, JMMPluginOAuth_1>) end;

  JMMPluginOAuth_IResultClass = interface(IJavaClass)
    ['{5825C440-3FDE-4FC7-92D2-17DA0620CBD6}']
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/MMPluginOAuth$IResult')]
  JMMPluginOAuth_IResult = interface(IJavaInstance)
    ['{152E7C2C-CC7B-44F2-9C97-2ACC298596DD}']
    procedure onResult(P1: JMMPluginOAuth); cdecl;
    procedure onSessionTimeOut; cdecl;
  end;
  TJMMPluginOAuth_IResult = class(TJavaGenericImport<JMMPluginOAuth_IResultClass, JMMPluginOAuth_IResult>) end;

  JMMPluginOAuth_ReceiverClass = interface(JBroadcastReceiverClass)
    ['{8BBEDF24-1BCD-4812-8518-FC7D189224A9}']
    {class} function init: JMMPluginOAuth_Receiver; cdecl; overload;
    {class} function init(P1: JMMPluginOAuth): JMMPluginOAuth_Receiver; cdecl; overload;
    {class} procedure register(P1: JString; P2: JMMPluginOAuth); cdecl;
    {class} procedure unregister(P1: JString); cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/MMPluginOAuth$Receiver')]
  JMMPluginOAuth_Receiver = interface(JBroadcastReceiver)
    ['{344651AD-9A3F-48D9-A36B-A876F5EAD187}']
    procedure onReceive(P1: JContext; P2: JIntent); cdecl;
  end;
  TJMMPluginOAuth_Receiver = class(TJavaGenericImport<JMMPluginOAuth_ReceiverClass, JMMPluginOAuth_Receiver>) end;

  JReceiver_1Class = interface(JRunnableClass)
    ['{1ED22016-0105-455D-B9B5-5F1F9282265E}']
    {class} function init(P1: JMMPluginOAuth_Receiver; P2: JMMPluginOAuth; P3: JString): JReceiver_1; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/MMPluginOAuth$Receiver$1')]
  JReceiver_1 = interface(JRunnable)
    ['{D57690DE-39F4-4EB5-BA23-8B7495D6DEB7}']
    function _GetbG: JString; cdecl;
    function _GetbH: JMMPluginOAuth_Receiver; cdecl;
    procedure run; cdecl;
    property bG: JString read _GetbG;
    property bH: JMMPluginOAuth_Receiver read _GetbH;
  end;
  TJReceiver_1 = class(TJavaGenericImport<JReceiver_1Class, JReceiver_1>) end;

  JMMPluginProviderConstantsClass = interface(JObjectClass)
    ['{4A423D30-8955-4A2B-A85C-6BA6FDAF206B}']
    {class} function _GetAUTHORITY: JString; cdecl;
    {class} function _GetPLUGIN_PACKAGE_PATTERN: JString; cdecl;
    {class} function _GetTYPE_BOOLEAN: Integer; cdecl;
    {class} function _GetTYPE_DOUBLE: Integer; cdecl;
    {class} function _GetTYPE_FLOAT: Integer; cdecl;
    {class} function _GetTYPE_INT: Integer; cdecl;
    {class} function _GetTYPE_LONG: Integer; cdecl;
    {class} function _GetTYPE_STRING: Integer; cdecl;
    {class} function _GetTYPE_UNKNOWN: Integer; cdecl;
    {class} function init: JMMPluginProviderConstants; cdecl;
    {class} property AUTHORITY: JString read _GetAUTHORITY;
    {class} property PLUGIN_PACKAGE_PATTERN: JString read _GetPLUGIN_PACKAGE_PATTERN;
    {class} property TYPE_BOOLEAN: Integer read _GetTYPE_BOOLEAN;
    {class} property TYPE_DOUBLE: Integer read _GetTYPE_DOUBLE;
    {class} property TYPE_FLOAT: Integer read _GetTYPE_FLOAT;
    {class} property TYPE_INT: Integer read _GetTYPE_INT;
    {class} property TYPE_LONG: Integer read _GetTYPE_LONG;
    {class} property TYPE_STRING: Integer read _GetTYPE_STRING;
    {class} property TYPE_UNKNOWN: Integer read _GetTYPE_UNKNOWN;
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/MMPluginProviderConstants')]
  JMMPluginProviderConstants = interface(JObject)
    ['{2A8B969B-F58B-4078-976B-A3B666E3B443}']
  end;
  TJMMPluginProviderConstants = class(TJavaGenericImport<JMMPluginProviderConstantsClass, JMMPluginProviderConstants>) end;

  JMMPluginProviderConstants_OAuthClass = interface(JBaseColumnsClass)
    ['{DB3F3F6C-ABB6-4F2C-806F-CAE8F9A10F57}']
    {class} function _GetACCESS_TOKEN: JString; cdecl;
    {class} function _GetACTION_REQUEST_TOKEN: JString; cdecl;
    {class} function _GetAPI_KEY: JString; cdecl;
    {class} function _GetCONTENT_URI: Jnet_Uri; cdecl;
    {class} function _GetREQUEST_TOKEN: JString; cdecl;
    {class} function _GetSECRET: JString; cdecl;
    {class} property ACCESS_TOKEN: JString read _GetACCESS_TOKEN;
    {class} property ACTION_REQUEST_TOKEN: JString read _GetACTION_REQUEST_TOKEN;
    {class} property API_KEY: JString read _GetAPI_KEY;
    {class} property CONTENT_URI: Jnet_Uri read _GetCONTENT_URI;
    {class} property REQUEST_TOKEN: JString read _GetREQUEST_TOKEN;
    {class} property SECRET: JString read _GetSECRET;
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/MMPluginProviderConstants$OAuth')]
  JMMPluginProviderConstants_OAuth = interface(JBaseColumns)
    ['{B27B8E92-43D1-4E7E-AE62-3555DD22E44A}']
  end;
  TJMMPluginProviderConstants_OAuth = class(TJavaGenericImport<JMMPluginProviderConstants_OAuthClass, JMMPluginProviderConstants_OAuth>) end;

  JMMPluginProviderConstants_PluginDBClass = interface(JBaseColumnsClass)
    ['{091AB111-1F00-42A6-A358-90C20DB756FC}']
    {class} function _GetCONTENT_URI: Jnet_Uri; cdecl;
    {class} function _GetKEY: JString; cdecl;
    {class} function _GetTYPE: JString; cdecl;
    {class} function _GetVALUE: JString; cdecl;
    {class} property CONTENT_URI: Jnet_Uri read _GetCONTENT_URI;
    {class} property KEY: JString read _GetKEY;
    {class} property &TYPE: JString read _GetTYPE;
    {class} property VALUE: JString read _GetVALUE;
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/MMPluginProviderConstants$PluginDB')]
  JMMPluginProviderConstants_PluginDB = interface(JBaseColumns)
    ['{F22815B0-E226-4517-B397-B4C21561F873}']
  end;
  TJMMPluginProviderConstants_PluginDB = class(TJavaGenericImport<JMMPluginProviderConstants_PluginDBClass, JMMPluginProviderConstants_PluginDB>) end;

  JMMPluginProviderConstants_PluginIntentClass = interface(JObjectClass)
    ['{548EDCC3-89C7-46FA-9B04-DFA704D5FD7F}']
    {class} function _GetACCESS_TOKEN: JString; cdecl;
    {class} function _GetACTION_QRCODE_SCANNED: JString; cdecl;
    {class} function _GetACTION_REQUEST_TOKEN: JString; cdecl;
    {class} function _GetACTION_RESPONSE: JString; cdecl;
    {class} function _GetAPP_PACKAGE_PATTERN: JString; cdecl;
    {class} function _GetAUTH_KEY: JString; cdecl;
    {class} function _GetNAME: JString; cdecl;
    {class} function _GetPACKAGE: JString; cdecl;
    {class} function _GetPERMISSIONS: JString; cdecl;
    {class} function _GetPLUGIN_PACKAGE_PATTERN: JString; cdecl;
    {class} function _GetREQUEST_TOKEN: JString; cdecl;
    {class} function init: JMMPluginProviderConstants_PluginIntent; cdecl;
    {class} property ACCESS_TOKEN: JString read _GetACCESS_TOKEN;
    {class} property ACTION_QRCODE_SCANNED: JString read _GetACTION_QRCODE_SCANNED;
    {class} property ACTION_REQUEST_TOKEN: JString read _GetACTION_REQUEST_TOKEN;
    {class} property ACTION_RESPONSE: JString read _GetACTION_RESPONSE;
    {class} property APP_PACKAGE_PATTERN: JString read _GetAPP_PACKAGE_PATTERN;
    {class} property AUTH_KEY: JString read _GetAUTH_KEY;
    {class} property NAME: JString read _GetNAME;
    {class} property PACKAGE: JString read _GetPACKAGE;
    {class} property PERMISSIONS: JString read _GetPERMISSIONS;
    {class} property PLUGIN_PACKAGE_PATTERN: JString read _GetPLUGIN_PACKAGE_PATTERN;
    {class} property REQUEST_TOKEN: JString read _GetREQUEST_TOKEN;
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/MMPluginProviderConstants$PluginIntent')]
  JMMPluginProviderConstants_PluginIntent = interface(JObject)
    ['{554F7DE8-63D1-44F8-ACA3-8FC132BC3D06}']
  end;
  TJMMPluginProviderConstants_PluginIntent = class(TJavaGenericImport<JMMPluginProviderConstants_PluginIntentClass, JMMPluginProviderConstants_PluginIntent>) end;

  JMMPluginProviderConstants_ResolverClass = interface(JObjectClass)
    ['{FEA10528-E1B5-458F-8624-04C75AC95F75}']
    {class} function getType(P1: JObject): Integer; cdecl;
    {class} function resolveObj(P1: Integer; P2: JString): JObject; cdecl;
    {class} function unresolveObj(P1: JContentValues; P2: JObject): Boolean; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/MMPluginProviderConstants$Resolver')]
  JMMPluginProviderConstants_Resolver = interface(JObject)
    ['{B40F5F50-BBE6-47E0-AA23-068EB51A58BF}']
  end;
  TJMMPluginProviderConstants_Resolver = class(TJavaGenericImport<JMMPluginProviderConstants_ResolverClass, JMMPluginProviderConstants_Resolver>) end;

  JMMPluginProviderConstants_SharedPrefClass = interface(JBaseColumnsClass)
    ['{8E03408C-3AA6-4DFA-A301-D8E4741F52B6}']
    {class} function _GetCONTENT_URI: Jnet_Uri; cdecl;
    {class} function _GetKEY: JString; cdecl;
    {class} function _GetTYPE: JString; cdecl;
    {class} function _GetVALUE: JString; cdecl;
    {class} property CONTENT_URI: Jnet_Uri read _GetCONTENT_URI;
    {class} property KEY: JString read _GetKEY;
    {class} property &TYPE: JString read _GetTYPE;
    {class} property VALUE: JString read _GetVALUE;
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/MMPluginProviderConstants$SharedPref')]
  JMMPluginProviderConstants_SharedPref = interface(JBaseColumns)
    ['{832ED05A-5658-4476-97A8-8B859F87E6F1}']
  end;
  TJMMPluginProviderConstants_SharedPref = class(TJavaGenericImport<JMMPluginProviderConstants_SharedPrefClass, JMMPluginProviderConstants_SharedPref>) end;

  JMMPluginUtilClass = interface(JObjectClass)
    ['{D52A8EDA-302F-4C5E-8E55-3E39E67AA0EA}']
    {class} function init: JMMPluginUtil; cdecl;
    {class} function queryPluginMgr(P1: JContext): JIMMPluginAPI; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/MMPluginUtil')]
  JMMPluginUtil = interface(JObject)
    ['{E555F838-2E8F-42AE-BBC9-C99ECAB0ECD0}']
  end;
  TJMMPluginUtil = class(TJavaGenericImport<JMMPluginUtilClass, JMMPluginUtil>) end;

  JProfileClass = interface(JMAutoDBItemClass)
    ['{B1F59EF2-9446-456E-BE69-CCF0D3F3E648}']
    {class} function _GetCONTENT_URI: Jnet_Uri; cdecl;
    {class} function _Getcolumns: TJavaObjectArray<JString>; cdecl;
    {class} function init: JProfile; cdecl;
    {class} property CONTENT_URI: Jnet_Uri read _GetCONTENT_URI;
    {class} property columns: TJavaObjectArray<JString> read _Getcolumns;
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/Profile')]
  JProfile = interface(JMAutoDBItem)
    ['{48DF4A63-7D30-4239-9908-C73C852F2E28}']
    function _Getfield_alias: JString; cdecl;
    function _Getfield_avatar: JString; cdecl;
    function _Getfield_bindemail: JString; cdecl;
    function _Getfield_bindmobile: JString; cdecl;
    function _Getfield_bindqq: Int64; cdecl;
    function _Getfield_city: JString; cdecl;
    function _Getfield_nickname: JString; cdecl;
    function _Getfield_province: JString; cdecl;
    function _Getfield_signature: JString; cdecl;
    function _Getfield_username: JString; cdecl;
    function _Getfield_weibo: JString; cdecl;
    function fields: TJavaObjectArray<JField>; cdecl;
    property field_alias: JString read _Getfield_alias;
    property field_avatar: JString read _Getfield_avatar;
    property field_bindemail: JString read _Getfield_bindemail;
    property field_bindmobile: JString read _Getfield_bindmobile;
    property field_bindqq: Int64 read _Getfield_bindqq;
    property field_city: JString read _Getfield_city;
    property field_nickname: JString read _Getfield_nickname;
    property field_province: JString read _Getfield_province;
    property field_signature: JString read _Getfield_signature;
    property field_username: JString read _Getfield_username;
    property field_weibo: JString read _Getfield_weibo;
  end;
  TJProfile = class(TJavaGenericImport<JProfileClass, JProfile>) end;

  Jplugin_package_infoClass = interface(IJavaClass)
    ['{6CA93FA7-FCF3-40DA-89E8-45C670E5C4F9}']
  end;

  [JavaSignature('com/tencent/mm/sdk/plugin/package-info')]
  Jplugin_package_info = interface(IJavaInstance)
    ['{69F642D0-55CF-49B2-94F5-C5D871F00328}']
  end;
  TJplugin_package_info = class(TJavaGenericImport<Jplugin_package_infoClass, Jplugin_package_info>) end;

  JCursorFieldHelperClass = interface(JObjectClass)
    ['{AD1D2032-B3AB-4927-9EB7-882A909CF7AB}']
    {class} function &get(P1: Jlang_Class; P2: Boolean): JMethod; cdecl;
    {class} procedure keep_getBlob(P1: JField; P2: JObject; P3: JContentValues); cdecl;
    {class} procedure keep_getBoolean(P1: JField; P2: JObject; P3: JContentValues); cdecl;
    {class} procedure keep_getDouble(P1: JField; P2: JObject; P3: JContentValues); cdecl;
    {class} procedure keep_getFloat(P1: JField; P2: JObject; P3: JContentValues); cdecl;
    {class} procedure keep_getInt(P1: JField; P2: JObject; P3: JContentValues); cdecl;
    {class} procedure keep_getLong(P1: JField; P2: JObject; P3: JContentValues); cdecl;
    {class} procedure keep_getShort(P1: JField; P2: JObject; P3: JContentValues); cdecl;
    {class} procedure keep_getString(P1: JField; P2: JObject; P3: JContentValues); cdecl;
    {class} procedure keep_setBlob(P1: JField; P2: JObject; P3: JCursor; P4: Integer); cdecl;
    {class} procedure keep_setBoolean(P1: JField; P2: JObject; P3: JCursor; P4: Integer); cdecl;
    {class} procedure keep_setDouble(P1: JField; P2: JObject; P3: JCursor; P4: Integer); cdecl;
    {class} procedure keep_setFloat(P1: JField; P2: JObject; P3: JCursor; P4: Integer); cdecl;
    {class} procedure keep_setInt(P1: JField; P2: JObject; P3: JCursor; P4: Integer); cdecl;
    {class} procedure keep_setLong(P1: JField; P2: JObject; P3: JCursor; P4: Integer); cdecl;
    {class} procedure keep_setShort(P1: JField; P2: JObject; P3: JCursor; P4: Integer); cdecl;
    {class} procedure keep_setString(P1: JField; P2: JObject; P3: JCursor; P4: Integer); cdecl;
    {class} function &type(P1: Jlang_Class): JString; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/storage/CursorFieldHelper')]
  JCursorFieldHelper = interface(JObject)
    ['{590ACBD4-5865-426B-954B-F786D6831710}']
  end;
  TJCursorFieldHelper = class(TJavaGenericImport<JCursorFieldHelperClass, JCursorFieldHelper>) end;

  JMStorageEventClass = interface(JObjectClass)
    ['{A059E8FC-05CA-4DB4-94AF-D10FC62B4C59}']
    {class} function init: JMStorageEvent; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/storage/MStorageEvent')]
  JMStorageEvent = interface(JObject)
    ['{E48D50B1-9D7B-43CC-BEDC-5CB83BB29FFE}']
    procedure add(P1: JObject; P2: JLooper); cdecl;
    procedure doNotify; cdecl;
    function event(P1: JObject): Boolean; cdecl;
    function isLocked: Boolean; cdecl;
    procedure lock; cdecl;
    procedure remove(P1: JObject); cdecl;
    procedure removeAll; cdecl;
    procedure unlock; cdecl;
  end;
  TJMStorageEvent = class(TJavaGenericImport<JMStorageEventClass, JMStorageEvent>) end;

  JMStorage_1Class = interface(JMStorageEventClass)
    ['{F01A5804-9FDC-4BCF-84C1-EC1AAFCA1197}']
    {class} function init(P1: JMStorage): JMStorage_1; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/storage/MStorage$1')]
  JMStorage_1 = interface(JMStorageEvent)
    ['{885AE44D-0B0B-47D9-A72C-95FE342D567B}']
    procedure processEvent(P1: JObject; P2: JObject); cdecl;
  end;
  TJMStorage_1 = class(TJavaGenericImport<JMStorage_1Class, JMStorage_1>) end;

  JMStorage_2Class = interface(JMStorageEventClass)
    ['{F980B31F-5D0B-46B5-81A4-3CE2671CEF8E}']
    {class} function init(P1: JMStorage): JMStorage_2; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/storage/MStorage$2')]
  JMStorage_2 = interface(JMStorageEvent)
    ['{D5BDFD18-F6D5-41AC-BC7A-7346710773E9}']
    procedure processEvent(P1: JObject; P2: JObject); cdecl;
  end;
  TJMStorage_2 = class(TJavaGenericImport<JMStorage_2Class, JMStorage_2>) end;

  JMStorage_IOnStorageChangeClass = interface(IJavaClass)
    ['{60C29B3F-6492-40E5-B7C8-D00ECF8A1142}']
  end;

  [JavaSignature('com/tencent/mm/sdk/storage/MStorage$IOnStorageChange')]
  JMStorage_IOnStorageChange = interface(IJavaInstance)
    ['{E1F612F5-5093-411A-9531-3F7B589A97CF}']
    procedure onNotifyChange(P1: JString); cdecl;
  end;
  TJMStorage_IOnStorageChange = class(TJavaGenericImport<JMStorage_IOnStorageChangeClass, JMStorage_IOnStorageChange>) end;

  JMStorage_IOnStorageLoadedClass = interface(IJavaClass)
    ['{555D12F5-9514-47D0-9FB6-5BF1883B151C}']
  end;

  [JavaSignature('com/tencent/mm/sdk/storage/MStorage$IOnStorageLoaded')]
  JMStorage_IOnStorageLoaded = interface(IJavaInstance)
    ['{977EEB5E-D633-4D0D-B52B-B37AC6560B87}']
    procedure onNotifyLoaded; cdecl;
  end;
  TJMStorage_IOnStorageLoaded = class(TJavaGenericImport<JMStorage_IOnStorageLoadedClass, JMStorage_IOnStorageLoaded>) end;

  JMStorageEvent_1Class = interface(JRunnableClass)
    ['{B074F30B-FDA7-4236-9F4E-63B8C0E66131}']
    {class} function init(P1: JMStorageEvent; P2: JObject; P3: JObject): JMStorageEvent_1; cdecl;
  end;

  [JavaSignature('com/tencent/mm/sdk/storage/MStorageEvent$1')]
  JMStorageEvent_1 = interface(JRunnable)
    ['{68EA96DA-0EF0-4990-8098-B036FA354CCF}']
    function _GetbT: JObject; cdecl;
    function _GetbU: JMStorageEvent; cdecl;
    procedure run; cdecl;
    property bT: JObject read _GetbT;
    property bU: JMStorageEvent read _GetbU;
  end;
  TJMStorageEvent_1 = class(TJavaGenericImport<JMStorageEvent_1Class, JMStorageEvent_1>) end;

  Jstorage_package_infoClass = interface(IJavaClass)
    ['{92FE538E-1C58-49B3-8A3A-0BDDD407207A}']
  end;

  [JavaSignature('com/tencent/mm/sdk/storage/package-info')]
  Jstorage_package_info = interface(IJavaInstance)
    ['{3466882D-7F78-4306-BBB2-37161522BFC0}']
  end;
  TJstorage_package_info = class(TJavaGenericImport<Jstorage_package_infoClass, Jstorage_package_info>) end;

  // java.lang.StringBuffer
  // java.lang.StringBuilder
  JLinkedHashMapClass = interface(JHashMapClass)
    ['{98E7A327-E5F0-4B6E-8F3D-B60233CEC554}']
    {class} function init: JLinkedHashMap; cdecl; overload;//Deprecated
    {class} function init(initialCapacity: Integer): JLinkedHashMap; cdecl; overload;//Deprecated
    {class} function init(initialCapacity: Integer; loadFactor: Single): JLinkedHashMap; cdecl; overload;//Deprecated
    {class} function init(initialCapacity: Integer; loadFactor: Single; accessOrder: Boolean): JLinkedHashMap; cdecl; overload;//Deprecated
    {class} function init(map: JMap): JLinkedHashMap; cdecl; overload;//Deprecated
    {class} function containsValue(value: JObject): Boolean; cdecl;
    {class} function &get(key: JObject): JObject; cdecl;
  end;

  [JavaSignature('java/util/LinkedHashMap')]
  JLinkedHashMap = interface(JHashMap)
    ['{84983501-7304-4442-ACFA-5C3AE1DC2739}']
    procedure clear; cdecl;
  end;
  TJLinkedHashMap = class(TJavaGenericImport<JLinkedHashMapClass, JLinkedHashMap>) end;

  JMap_EntryClass = interface(IJavaClass)
    ['{CC37442E-BEA1-4D74-827E-0C89FA654831}']
    {class} function equals(object_: JObject): Boolean; cdecl;//Deprecated
    {class} function getKey: JObject; cdecl;//Deprecated
  end;

  [JavaSignature('java/util/Map$Entry')]
  JMap_Entry = interface(IJavaInstance)
    ['{9D6A0684-A3FC-4629-A08A-36EDDA31753D}']
    function getValue: JObject; cdecl;//Deprecated
    function hashCode: Integer; cdecl;//Deprecated
    function setValue(object_: JObject): JObject; cdecl;//Deprecated
  end;
  TJMap_Entry = class(TJavaGenericImport<JMap_EntryClass, JMap_Entry>) end;

  JNodeClass = interface(IJavaClass)
    ['{4FF9B265-CEE8-4AB9-B74A-5F2D9CED8981}']
    {class} function _GetATTRIBUTE_NODE: SmallInt; cdecl;
    {class} function _GetCDATA_SECTION_NODE: SmallInt; cdecl;
    {class} function _GetCOMMENT_NODE: SmallInt; cdecl;
    {class} function _GetDOCUMENT_FRAGMENT_NODE: SmallInt; cdecl;
    {class} function _GetDOCUMENT_NODE: SmallInt; cdecl;
    {class} function _GetDOCUMENT_POSITION_CONTAINED_BY: SmallInt; cdecl;
    {class} function _GetDOCUMENT_POSITION_CONTAINS: SmallInt; cdecl;
    {class} function _GetDOCUMENT_POSITION_DISCONNECTED: SmallInt; cdecl;
    {class} function _GetDOCUMENT_POSITION_FOLLOWING: SmallInt; cdecl;
    {class} function _GetDOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC: SmallInt; cdecl;
    {class} function _GetDOCUMENT_POSITION_PRECEDING: SmallInt; cdecl;
    {class} function _GetDOCUMENT_TYPE_NODE: SmallInt; cdecl;
    {class} function _GetELEMENT_NODE: SmallInt; cdecl;
    {class} function _GetENTITY_NODE: SmallInt; cdecl;
    {class} function _GetENTITY_REFERENCE_NODE: SmallInt; cdecl;
    {class} function _GetNOTATION_NODE: SmallInt; cdecl;
    {class} function _GetPROCESSING_INSTRUCTION_NODE: SmallInt; cdecl;
    {class} function _GetTEXT_NODE: SmallInt; cdecl;
    {class} function getAttributes: JNamedNodeMap; cdecl;
    {class} function getBaseURI: JString; cdecl;
    {class} function getChildNodes: JNodeList; cdecl;
    {class} function getLocalName: JString; cdecl;
    {class} function getNamespaceURI: JString; cdecl;
    {class} function getNextSibling: JNode; cdecl;
    {class} function getNodeValue: JString; cdecl;
    {class} function getOwnerDocument: JDocument; cdecl;
    {class} function getParentNode: JNode; cdecl;
    {class} function getUserData(key: JString): JObject; cdecl;//Deprecated
    {class} function hasAttributes: Boolean; cdecl;//Deprecated
    {class} function hasChildNodes: Boolean; cdecl;//Deprecated
    {class} function isSameNode(other: JNode): Boolean; cdecl;//Deprecated
    {class} function isSupported(feature: JString; version: JString): Boolean; cdecl;//Deprecated
    {class} function lookupNamespaceURI(prefix: JString): JString; cdecl;//Deprecated
    {class} function replaceChild(newChild: JNode; oldChild: JNode): JNode; cdecl;//Deprecated
    {class} procedure setNodeValue(nodeValue: JString); cdecl;//Deprecated
    {class} procedure setPrefix(prefix: JString); cdecl;//Deprecated
    {class} property ATTRIBUTE_NODE: SmallInt read _GetATTRIBUTE_NODE;
    {class} property CDATA_SECTION_NODE: SmallInt read _GetCDATA_SECTION_NODE;
    {class} property COMMENT_NODE: SmallInt read _GetCOMMENT_NODE;
    {class} property DOCUMENT_FRAGMENT_NODE: SmallInt read _GetDOCUMENT_FRAGMENT_NODE;
    {class} property DOCUMENT_NODE: SmallInt read _GetDOCUMENT_NODE;
    {class} property DOCUMENT_POSITION_CONTAINED_BY: SmallInt read _GetDOCUMENT_POSITION_CONTAINED_BY;
    {class} property DOCUMENT_POSITION_CONTAINS: SmallInt read _GetDOCUMENT_POSITION_CONTAINS;
    {class} property DOCUMENT_POSITION_DISCONNECTED: SmallInt read _GetDOCUMENT_POSITION_DISCONNECTED;
    {class} property DOCUMENT_POSITION_FOLLOWING: SmallInt read _GetDOCUMENT_POSITION_FOLLOWING;
    {class} property DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC: SmallInt read _GetDOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC;
    {class} property DOCUMENT_POSITION_PRECEDING: SmallInt read _GetDOCUMENT_POSITION_PRECEDING;
    {class} property DOCUMENT_TYPE_NODE: SmallInt read _GetDOCUMENT_TYPE_NODE;
    {class} property ELEMENT_NODE: SmallInt read _GetELEMENT_NODE;
    {class} property ENTITY_NODE: SmallInt read _GetENTITY_NODE;
    {class} property ENTITY_REFERENCE_NODE: SmallInt read _GetENTITY_REFERENCE_NODE;
    {class} property NOTATION_NODE: SmallInt read _GetNOTATION_NODE;
    {class} property PROCESSING_INSTRUCTION_NODE: SmallInt read _GetPROCESSING_INSTRUCTION_NODE;
    {class} property TEXT_NODE: SmallInt read _GetTEXT_NODE;
  end;

  [JavaSignature('org/w3c/dom/Node')]
  JNode = interface(IJavaInstance)
    ['{35CFF397-04C8-489D-9C62-607EFFA8B051}']
    function appendChild(newChild: JNode): JNode; cdecl;
    function cloneNode(deep: Boolean): JNode; cdecl;
    function compareDocumentPosition(other: JNode): SmallInt; cdecl;
    function getFeature(feature: JString; version: JString): JObject; cdecl;
    function getFirstChild: JNode; cdecl;
    function getLastChild: JNode; cdecl;
    function getNodeName: JString; cdecl;
    function getNodeType: SmallInt; cdecl;
    function getPrefix: JString; cdecl;//Deprecated
    function getPreviousSibling: JNode; cdecl;//Deprecated
    function getTextContent: JString; cdecl;//Deprecated
    function insertBefore(newChild: JNode; refChild: JNode): JNode; cdecl;//Deprecated
    function isDefaultNamespace(namespaceURI: JString): Boolean; cdecl;//Deprecated
    function isEqualNode(arg: JNode): Boolean; cdecl;//Deprecated
    function lookupPrefix(namespaceURI: JString): JString; cdecl;//Deprecated
    procedure normalize; cdecl;//Deprecated
    function removeChild(oldChild: JNode): JNode; cdecl;//Deprecated
    procedure setTextContent(textContent: JString); cdecl;//Deprecated
    function setUserData(key: JString; data: JObject; handler: JUserDataHandler): JObject; cdecl;//Deprecated
  end;
  TJNode = class(TJavaGenericImport<JNodeClass, JNode>) end;

  JAttrClass = interface(JNodeClass)
    ['{5FB044B8-0031-4520-B87A-3CDB994277D7}']
    {class} function getSpecified: Boolean; cdecl;
    {class} function getValue: JString; cdecl;
    {class} function isId: Boolean; cdecl;
  end;

  [JavaSignature('org/w3c/dom/Attr')]
  JAttr = interface(JNode)
    ['{F9FC2FA5-CCAD-4D11-8B8D-3958C5F55273}']
    function getName: JString; cdecl;
    function getOwnerElement: JElement; cdecl;
    function getSchemaTypeInfo: JTypeInfo; cdecl;
    procedure setValue(value: JString); cdecl;
  end;
  TJAttr = class(TJavaGenericImport<JAttrClass, JAttr>) end;

  JCharacterDataClass = interface(JNodeClass)
    ['{2C17F389-87C1-444E-957E-9F54C1531B5A}']
    {class} function getLength: Integer; cdecl;//Deprecated
    {class} procedure insertData(offset: Integer; arg: JString); cdecl;//Deprecated
    {class} procedure replaceData(offset: Integer; count: Integer; arg: JString); cdecl;//Deprecated
  end;

  [JavaSignature('org/w3c/dom/CharacterData')]
  JCharacterData = interface(JNode)
    ['{10B18FAD-C168-4834-9BF9-996C53B31D9E}']
    procedure appendData(arg: JString); cdecl;//Deprecated
    procedure deleteData(offset: Integer; count: Integer); cdecl;//Deprecated
    function getData: JString; cdecl;//Deprecated
    procedure setData(data: JString); cdecl;//Deprecated
    function substringData(offset: Integer; count: Integer): JString; cdecl;//Deprecated
  end;
  TJCharacterData = class(TJavaGenericImport<JCharacterDataClass, JCharacterData>) end;

  JTextClass = interface(JCharacterDataClass)
    ['{A1698F81-D2B1-4131-A464-3E6A6ADD1D56}']
    {class} function getWholeText: JString; cdecl;
    {class} function isElementContentWhitespace: Boolean; cdecl;
    {class} function replaceWholeText(content: JString): JText; cdecl;
  end;

  [JavaSignature('org/w3c/dom/Text')]
  JText = interface(JCharacterData)
    ['{FAE4042A-1DDA-4B7D-BCFC-3C629B2818A4}']
    function splitText(offset: Integer): JText; cdecl;
  end;
  TJText = class(TJavaGenericImport<JTextClass, JText>) end;

  JCDATASectionClass = interface(JTextClass)
    ['{7CBFD045-12AF-4D98-A080-469281E3B4DA}']
  end;

  [JavaSignature('org/w3c/dom/CDATASection')]
  JCDATASection = interface(JText)
    ['{58B470DE-13D3-4B4A-A9B7-5F03E4D4CD75}']
  end;
  TJCDATASection = class(TJavaGenericImport<JCDATASectionClass, JCDATASection>) end;

  JCommentClass = interface(JCharacterDataClass)
    ['{44667247-E701-4F4A-A4A6-1B2C2249BD0E}']
  end;

  [JavaSignature('org/w3c/dom/Comment')]
  JComment = interface(JCharacterData)
    ['{4E3A4920-FC80-4A44-A6A8-DBCC5D94A473}']
  end;
  TJComment = class(TJavaGenericImport<JCommentClass, JComment>) end;

  JDOMConfigurationClass = interface(IJavaClass)
    ['{DECB79BC-0125-4589-A7F9-4515540AE6A2}']
    {class} function canSetParameter(name: JString; value: JObject): Boolean; cdecl;
    {class} function getParameter(name: JString): JObject; cdecl;
  end;

  [JavaSignature('org/w3c/dom/DOMConfiguration')]
  JDOMConfiguration = interface(IJavaInstance)
    ['{E8ABF7F9-F6D5-41BB-939D-8012C99B087D}']
    function getParameterNames: JDOMStringList; cdecl;
    procedure setParameter(name: JString; value: JObject); cdecl;
  end;
  TJDOMConfiguration = class(TJavaGenericImport<JDOMConfigurationClass, JDOMConfiguration>) end;

  JDOMImplementationClass = interface(IJavaClass)
    ['{B1E4F8D3-F1BD-4F6C-B4ED-0310907DF7A4}']
    {class} function hasFeature(feature: JString; version: JString): Boolean; cdecl;
  end;

  [JavaSignature('org/w3c/dom/DOMImplementation')]
  JDOMImplementation = interface(IJavaInstance)
    ['{B1DCFB4D-AA66-4B31-A161-7E7D420C0BD4}']
    function createDocument(namespaceURI: JString; qualifiedName: JString; doctype: JDocumentType): JDocument; cdecl;
    function createDocumentType(qualifiedName: JString; publicId: JString; systemId: JString): JDocumentType; cdecl;
    function getFeature(feature: JString; version: JString): JObject; cdecl;
  end;
  TJDOMImplementation = class(TJavaGenericImport<JDOMImplementationClass, JDOMImplementation>) end;

  JDOMStringListClass = interface(IJavaClass)
    ['{07E16943-A1B1-457E-B687-6BF0DC8A0B2B}']
    {class} function item(index: Integer): JString; cdecl;//Deprecated
  end;

  [JavaSignature('org/w3c/dom/DOMStringList')]
  JDOMStringList = interface(IJavaInstance)
    ['{429D640E-1DB3-442F-9ABF-98965BDEF484}']
    function &contains(str: JString): Boolean; cdecl;//Deprecated
    function getLength: Integer; cdecl;//Deprecated
  end;
  TJDOMStringList = class(TJavaGenericImport<JDOMStringListClass, JDOMStringList>) end;

  JDocumentClass = interface(JNodeClass)
    ['{D6F13E91-584B-40E3-98D4-A49B673E1FAA}']
    {class} function createAttributeNS(namespaceURI: JString; qualifiedName: JString): JAttr; cdecl;//Deprecated
    {class} function createCDATASection(data: JString): JCDATASection; cdecl;//Deprecated
    {class} function createComment(data: JString): JComment; cdecl;//Deprecated
    {class} function createEntityReference(name: JString): JEntityReference; cdecl;//Deprecated
    {class} function createProcessingInstruction(target: JString; data: JString): JProcessingInstruction; cdecl;//Deprecated
    {class} function createTextNode(data: JString): JText; cdecl;//Deprecated
    {class} function getDomConfig: JDOMConfiguration; cdecl;
    {class} function getElementById(elementId: JString): JElement; cdecl;
    {class} function getElementsByTagName(tagname: JString): JNodeList; cdecl;
    {class} function getInputEncoding: JString; cdecl;
    {class} function getStrictErrorChecking: Boolean; cdecl;
    {class} function getXmlEncoding: JString; cdecl;
    {class} procedure normalizeDocument; cdecl;
    {class} function renameNode(n: JNode; namespaceURI: JString; qualifiedName: JString): JNode; cdecl;
    {class} procedure setDocumentURI(documentURI: JString); cdecl;
  end;

  [JavaSignature('org/w3c/dom/Document')]
  JDocument = interface(JNode)
    ['{A1A54941-AF47-44E3-9987-16699E7D7AE8}']
    function adoptNode(source: JNode): JNode; cdecl;//Deprecated
    function createAttribute(name: JString): JAttr; cdecl;//Deprecated
    function createDocumentFragment: JDocumentFragment; cdecl;//Deprecated
    function createElement(tagName: JString): JElement; cdecl;//Deprecated
    function createElementNS(namespaceURI: JString; qualifiedName: JString): JElement; cdecl;//Deprecated
    function getDoctype: JDocumentType; cdecl;
    function getDocumentElement: JElement; cdecl;
    function getDocumentURI: JString; cdecl;
    function getElementsByTagNameNS(namespaceURI: JString; localName: JString): JNodeList; cdecl;
    function getImplementation: JDOMImplementation; cdecl;
    function getXmlStandalone: Boolean; cdecl;
    function getXmlVersion: JString; cdecl;
    function importNode(importedNode: JNode; deep: Boolean): JNode; cdecl;
    procedure setStrictErrorChecking(strictErrorChecking: Boolean); cdecl;
    procedure setXmlStandalone(xmlStandalone: Boolean); cdecl;
    procedure setXmlVersion(xmlVersion: JString); cdecl;
  end;
  TJDocument = class(TJavaGenericImport<JDocumentClass, JDocument>) end;

  JDocumentFragmentClass = interface(JNodeClass)
    ['{C7329109-13F5-4DAF-9B1D-67C135CA426E}']
  end;

  [JavaSignature('org/w3c/dom/DocumentFragment')]
  JDocumentFragment = interface(JNode)
    ['{58188EC9-6A2F-4B05-B94E-0DF20D5C2214}']
  end;
  TJDocumentFragment = class(TJavaGenericImport<JDocumentFragmentClass, JDocumentFragment>) end;

  JDocumentTypeClass = interface(JNodeClass)
    ['{0A107FFB-8693-4B27-9422-07B0ACCAD242}']
    {class} function getEntities: JNamedNodeMap; cdecl;
    {class} function getInternalSubset: JString; cdecl;
    {class} function getName: JString; cdecl;
  end;

  [JavaSignature('org/w3c/dom/DocumentType')]
  JDocumentType = interface(JNode)
    ['{CFD608DB-450E-45EA-BEC6-B680E662E816}']
    function getNotations: JNamedNodeMap; cdecl;
    function getPublicId: JString; cdecl;
    function getSystemId: JString; cdecl;
  end;
  TJDocumentType = class(TJavaGenericImport<JDocumentTypeClass, JDocumentType>) end;

  JElementClass = interface(JNodeClass)
    ['{02A52262-29B4-4297-859E-FDCE017479D5}']
    {class} function getAttribute(name: JString): JString; cdecl;
    {class} function getAttributeNS(namespaceURI: JString; localName: JString): JString; cdecl;
    {class} function getElementsByTagName(name: JString): JNodeList; cdecl;//Deprecated
    {class} function getElementsByTagNameNS(namespaceURI: JString; localName: JString): JNodeList; cdecl;//Deprecated
    {class} function getSchemaTypeInfo: JTypeInfo; cdecl;//Deprecated
    {class} procedure removeAttribute(name: JString); cdecl;//Deprecated
    {class} procedure removeAttributeNS(namespaceURI: JString; localName: JString); cdecl;//Deprecated
    {class} function removeAttributeNode(oldAttr: JAttr): JAttr; cdecl;//Deprecated
    {class} function setAttributeNodeNS(newAttr: JAttr): JAttr; cdecl;//Deprecated
    {class} procedure setIdAttribute(name: JString; isId: Boolean); cdecl;//Deprecated
    {class} procedure setIdAttributeNS(namespaceURI: JString; localName: JString; isId: Boolean); cdecl;//Deprecated
  end;

  [JavaSignature('org/w3c/dom/Element')]
  JElement = interface(JNode)
    ['{953C1ADD-28E2-4725-95C9-B2E518AE79F9}']
    function getAttributeNode(name: JString): JAttr; cdecl;//Deprecated
    function getAttributeNodeNS(namespaceURI: JString; localName: JString): JAttr; cdecl;//Deprecated
    function getTagName: JString; cdecl;//Deprecated
    function hasAttribute(name: JString): Boolean; cdecl;//Deprecated
    function hasAttributeNS(namespaceURI: JString; localName: JString): Boolean; cdecl;//Deprecated
    procedure setAttribute(name: JString; value: JString); cdecl;//Deprecated
    procedure setAttributeNS(namespaceURI: JString; qualifiedName: JString; value: JString); cdecl;//Deprecated
    function setAttributeNode(newAttr: JAttr): JAttr; cdecl;//Deprecated
    procedure setIdAttributeNode(idAttr: JAttr; isId: Boolean); cdecl;//Deprecated
  end;
  TJElement = class(TJavaGenericImport<JElementClass, JElement>) end;

  JEntityReferenceClass = interface(JNodeClass)
    ['{EDE635BA-9CEC-473C-BF75-163686CB36BB}']
  end;

  [JavaSignature('org/w3c/dom/EntityReference')]
  JEntityReference = interface(JNode)
    ['{47BBF06F-638E-47A8-8BE2-1FC93F0A2067}']
  end;
  TJEntityReference = class(TJavaGenericImport<JEntityReferenceClass, JEntityReference>) end;

  JNamedNodeMapClass = interface(IJavaClass)
    ['{FD563D08-BB75-461A-B13C-8C7DF3E00CC5}']
    {class} function getNamedItemNS(namespaceURI: JString; localName: JString): JNode; cdecl;//Deprecated
    {class} function item(index: Integer): JNode; cdecl;//Deprecated
    {class} function setNamedItemNS(arg: JNode): JNode; cdecl;//Deprecated
  end;

  [JavaSignature('org/w3c/dom/NamedNodeMap')]
  JNamedNodeMap = interface(IJavaInstance)
    ['{92F9509D-82EA-4290-A970-7BB551F08679}']
    function getLength: Integer; cdecl;//Deprecated
    function getNamedItem(name: JString): JNode; cdecl;//Deprecated
    function removeNamedItem(name: JString): JNode; cdecl;//Deprecated
    function removeNamedItemNS(namespaceURI: JString; localName: JString): JNode; cdecl;//Deprecated
    function setNamedItem(arg: JNode): JNode; cdecl;//Deprecated
  end;
  TJNamedNodeMap = class(TJavaGenericImport<JNamedNodeMapClass, JNamedNodeMap>) end;

  JNodeListClass = interface(IJavaClass)
    ['{6F6D0FED-4199-4F79-ABA2-C93007B65A8C}']
    {class} function item(index: Integer): JNode; cdecl;
  end;

  [JavaSignature('org/w3c/dom/NodeList')]
  JNodeList = interface(IJavaInstance)
    ['{E6AE0711-1F43-4D8B-A153-47286455EFAF}']
    function getLength: Integer; cdecl;
  end;
  TJNodeList = class(TJavaGenericImport<JNodeListClass, JNodeList>) end;

  JProcessingInstructionClass = interface(JNodeClass)
    ['{9B71FB69-7682-435D-9031-529E15076309}']
    {class} function getData: JString; cdecl;
    {class} function getTarget: JString; cdecl;
    {class} procedure setData(data: JString); cdecl;
  end;

  [JavaSignature('org/w3c/dom/ProcessingInstruction')]
  JProcessingInstruction = interface(JNode)
    ['{50F37F5A-E5A2-4190-B19F-820997AF3D4C}']
  end;
  TJProcessingInstruction = class(TJavaGenericImport<JProcessingInstructionClass, JProcessingInstruction>) end;

  JTypeInfoClass = interface(IJavaClass)
    ['{532BAFC7-6829-43E4-9478-E739B90EE1FC}']
    {class} function _GetDERIVATION_EXTENSION: Integer; cdecl;
    {class} function _GetDERIVATION_LIST: Integer; cdecl;
    {class} function _GetDERIVATION_RESTRICTION: Integer; cdecl;
    {class} function _GetDERIVATION_UNION: Integer; cdecl;
    {class} property DERIVATION_EXTENSION: Integer read _GetDERIVATION_EXTENSION;
    {class} property DERIVATION_LIST: Integer read _GetDERIVATION_LIST;
    {class} property DERIVATION_RESTRICTION: Integer read _GetDERIVATION_RESTRICTION;
    {class} property DERIVATION_UNION: Integer read _GetDERIVATION_UNION;
  end;

  [JavaSignature('org/w3c/dom/TypeInfo')]
  JTypeInfo = interface(IJavaInstance)
    ['{876A11F9-8450-45FF-8F4F-F9D68333BDEF}']
    function getTypeName: JString; cdecl;//Deprecated
    function getTypeNamespace: JString; cdecl;//Deprecated
    function isDerivedFrom(typeNamespaceArg: JString; typeNameArg: JString; derivationMethod: Integer): Boolean; cdecl;//Deprecated
  end;
  TJTypeInfo = class(TJavaGenericImport<JTypeInfoClass, JTypeInfo>) end;

  JUserDataHandlerClass = interface(IJavaClass)
    ['{AD3B738E-675E-4B2E-869D-6888E7959C0B}']
    {class} function _GetNODE_ADOPTED: SmallInt; cdecl;
    {class} function _GetNODE_CLONED: SmallInt; cdecl;
    {class} function _GetNODE_DELETED: SmallInt; cdecl;
    {class} function _GetNODE_IMPORTED: SmallInt; cdecl;
    {class} function _GetNODE_RENAMED: SmallInt; cdecl;
    {class} procedure handle(operation: SmallInt; key: JString; data: JObject; src: JNode; dst: JNode); cdecl;//Deprecated
    {class} property NODE_ADOPTED: SmallInt read _GetNODE_ADOPTED;
    {class} property NODE_CLONED: SmallInt read _GetNODE_CLONED;
    {class} property NODE_DELETED: SmallInt read _GetNODE_DELETED;
    {class} property NODE_IMPORTED: SmallInt read _GetNODE_IMPORTED;
    {class} property NODE_RENAMED: SmallInt read _GetNODE_RENAMED;
  end;

  [JavaSignature('org/w3c/dom/UserDataHandler')]
  JUserDataHandler = interface(IJavaInstance)
    ['{F3E555E4-F55C-4228-B9D6-4494A3E32FDF}']
  end;
  TJUserDataHandler = class(TJavaGenericImport<JUserDataHandlerClass, JUserDataHandler>) end;

implementation

procedure RegisterTypes;
begin
  TRegTypes.RegisterType('Android.JNI.WeChat.JAccount', TypeInfo(Android.JNI.WeChat.JAccount));
  TRegTypes.RegisterType('Android.JNI.WeChat.JAnimator', TypeInfo(Android.JNI.WeChat.JAnimator));
  TRegTypes.RegisterType('Android.JNI.WeChat.JAnimator_AnimatorListener', TypeInfo(Android.JNI.WeChat.JAnimator_AnimatorListener));
  TRegTypes.RegisterType('Android.JNI.WeChat.JAnimator_AnimatorPauseListener', TypeInfo(Android.JNI.WeChat.JAnimator_AnimatorPauseListener));
  TRegTypes.RegisterType('Android.JNI.WeChat.JKeyframe', TypeInfo(Android.JNI.WeChat.JKeyframe));
  TRegTypes.RegisterType('Android.JNI.WeChat.JLayoutTransition', TypeInfo(Android.JNI.WeChat.JLayoutTransition));
  TRegTypes.RegisterType('Android.JNI.WeChat.JLayoutTransition_TransitionListener', TypeInfo(Android.JNI.WeChat.JLayoutTransition_TransitionListener));
  TRegTypes.RegisterType('Android.JNI.WeChat.JPropertyValuesHolder', TypeInfo(Android.JNI.WeChat.JPropertyValuesHolder));
  TRegTypes.RegisterType('Android.JNI.WeChat.JStateListAnimator', TypeInfo(Android.JNI.WeChat.JStateListAnimator));
  TRegTypes.RegisterType('Android.JNI.WeChat.JTimeInterpolator', TypeInfo(Android.JNI.WeChat.JTimeInterpolator));
  TRegTypes.RegisterType('Android.JNI.WeChat.JTypeConverter', TypeInfo(Android.JNI.WeChat.JTypeConverter));
  TRegTypes.RegisterType('Android.JNI.WeChat.JTypeEvaluator', TypeInfo(Android.JNI.WeChat.JTypeEvaluator));
  TRegTypes.RegisterType('Android.JNI.WeChat.JValueAnimator', TypeInfo(Android.JNI.WeChat.JValueAnimator));
  TRegTypes.RegisterType('Android.JNI.WeChat.JValueAnimator_AnimatorUpdateListener', TypeInfo(Android.JNI.WeChat.JValueAnimator_AnimatorUpdateListener));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSensor', TypeInfo(Android.JNI.WeChat.JSensor));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSensorEvent', TypeInfo(Android.JNI.WeChat.JSensorEvent));
  TRegTypes.RegisterType('Android.JNI.WeChat.JPathMotion', TypeInfo(Android.JNI.WeChat.JPathMotion));
  TRegTypes.RegisterType('Android.JNI.WeChat.JScene', TypeInfo(Android.JNI.WeChat.JScene));
  TRegTypes.RegisterType('Android.JNI.WeChat.JTransition', TypeInfo(Android.JNI.WeChat.JTransition));
  TRegTypes.RegisterType('Android.JNI.WeChat.JTransition_EpicenterCallback', TypeInfo(Android.JNI.WeChat.JTransition_EpicenterCallback));
  TRegTypes.RegisterType('Android.JNI.WeChat.JTransition_TransitionListener', TypeInfo(Android.JNI.WeChat.JTransition_TransitionListener));
  TRegTypes.RegisterType('Android.JNI.WeChat.JTransitionManager', TypeInfo(Android.JNI.WeChat.JTransitionManager));
  TRegTypes.RegisterType('Android.JNI.WeChat.JTransitionPropagation', TypeInfo(Android.JNI.WeChat.JTransitionPropagation));
  TRegTypes.RegisterType('Android.JNI.WeChat.JTransitionValues', TypeInfo(Android.JNI.WeChat.JTransitionValues));
  TRegTypes.RegisterType('Android.JNI.WeChat.JInterpolator', TypeInfo(Android.JNI.WeChat.JInterpolator));
  TRegTypes.RegisterType('Android.JNI.WeChat.JToolbar_LayoutParams', TypeInfo(Android.JNI.WeChat.JToolbar_LayoutParams));
  TRegTypes.RegisterType('Android.JNI.WeChat.Jalgorithm_Base64', TypeInfo(Android.JNI.WeChat.Jalgorithm_Base64));
  TRegTypes.RegisterType('Android.JNI.WeChat.JLRUMap', TypeInfo(Android.JNI.WeChat.JLRUMap));
  TRegTypes.RegisterType('Android.JNI.WeChat.JLRUMap_1', TypeInfo(Android.JNI.WeChat.JLRUMap_1));
  TRegTypes.RegisterType('Android.JNI.WeChat.JLRUMap_OnClearListener', TypeInfo(Android.JNI.WeChat.JLRUMap_OnClearListener));
  TRegTypes.RegisterType('Android.JNI.WeChat.JLRUMap_PreRemoveCallback', TypeInfo(Android.JNI.WeChat.JLRUMap_PreRemoveCallback));
  TRegTypes.RegisterType('Android.JNI.WeChat.JLRUMap_TimeVal', TypeInfo(Android.JNI.WeChat.JLRUMap_TimeVal));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMD5', TypeInfo(Android.JNI.WeChat.JMD5));
  TRegTypes.RegisterType('Android.JNI.WeChat.JTypeTransform', TypeInfo(Android.JNI.WeChat.JTypeTransform));
  TRegTypes.RegisterType('Android.JNI.WeChat.JUIN', TypeInfo(Android.JNI.WeChat.JUIN));
  TRegTypes.RegisterType('Android.JNI.WeChat.Jsdk_Build', TypeInfo(Android.JNI.WeChat.Jsdk_Build));
  TRegTypes.RegisterType('Android.JNI.WeChat.Jsdk_BuildConfig', TypeInfo(Android.JNI.WeChat.Jsdk_BuildConfig));
  TRegTypes.RegisterType('Android.JNI.WeChat.JConstantsUI', TypeInfo(Android.JNI.WeChat.JConstantsUI));
  TRegTypes.RegisterType('Android.JNI.WeChat.JConstantsUI_Contact', TypeInfo(Android.JNI.WeChat.JConstantsUI_Contact));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMAppMgr', TypeInfo(Android.JNI.WeChat.JMMAppMgr));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMSharedPreferences', TypeInfo(Android.JNI.WeChat.JMMSharedPreferences));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMSharedPreferences_REditor', TypeInfo(Android.JNI.WeChat.JMMSharedPreferences_REditor));
  TRegTypes.RegisterType('Android.JNI.WeChat.JConstantsMMessage', TypeInfo(Android.JNI.WeChat.JConstantsMMessage));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMessage', TypeInfo(Android.JNI.WeChat.JMMessage));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMessage_CallBack', TypeInfo(Android.JNI.WeChat.JMMessage_CallBack));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMessage_Receiver', TypeInfo(Android.JNI.WeChat.JMMessage_Receiver));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMessageAct', TypeInfo(Android.JNI.WeChat.JMMessageAct));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMessageUtil', TypeInfo(Android.JNI.WeChat.JMMessageUtil));
  TRegTypes.RegisterType('Android.JNI.WeChat.Jpackage_info', TypeInfo(Android.JNI.WeChat.Jpackage_info));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMDBItem', TypeInfo(Android.JNI.WeChat.JMDBItem));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMAutoDBItem', TypeInfo(Android.JNI.WeChat.JMAutoDBItem));
  TRegTypes.RegisterType('Android.JNI.WeChat.JRContact', TypeInfo(Android.JNI.WeChat.JRContact));
  TRegTypes.RegisterType('Android.JNI.WeChat.JRContactAvatar', TypeInfo(Android.JNI.WeChat.JRContactAvatar));
  TRegTypes.RegisterType('Android.JNI.WeChat.JISQLiteDatabase', TypeInfo(Android.JNI.WeChat.JISQLiteDatabase));
  TRegTypes.RegisterType('Android.JNI.WeChat.JContentProviderDB', TypeInfo(Android.JNI.WeChat.JContentProviderDB));
  TRegTypes.RegisterType('Android.JNI.WeChat.JRContactDB', TypeInfo(Android.JNI.WeChat.JRContactDB));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMStorage', TypeInfo(Android.JNI.WeChat.JMStorage));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMAutoStorage', TypeInfo(Android.JNI.WeChat.JMAutoStorage));
  TRegTypes.RegisterType('Android.JNI.WeChat.JRContactStorage', TypeInfo(Android.JNI.WeChat.JRContactStorage));
  TRegTypes.RegisterType('Android.JNI.WeChat.Jcontact_package_info', TypeInfo(Android.JNI.WeChat.Jcontact_package_info));
  TRegTypes.RegisterType('Android.JNI.WeChat.JRConversation', TypeInfo(Android.JNI.WeChat.JRConversation));
  TRegTypes.RegisterType('Android.JNI.WeChat.JRConversationDB', TypeInfo(Android.JNI.WeChat.JRConversationDB));
  TRegTypes.RegisterType('Android.JNI.WeChat.JRConversationStorage', TypeInfo(Android.JNI.WeChat.JRConversationStorage));
  TRegTypes.RegisterType('Android.JNI.WeChat.Jconversation_package_info', TypeInfo(Android.JNI.WeChat.Jconversation_package_info));
  TRegTypes.RegisterType('Android.JNI.WeChat.JRMsgInfo', TypeInfo(Android.JNI.WeChat.JRMsgInfo));
  TRegTypes.RegisterType('Android.JNI.WeChat.JRMsgInfoDB', TypeInfo(Android.JNI.WeChat.JRMsgInfoDB));
  TRegTypes.RegisterType('Android.JNI.WeChat.JRMsgInfoStorage', TypeInfo(Android.JNI.WeChat.JRMsgInfoStorage));
  TRegTypes.RegisterType('Android.JNI.WeChat.JBaseReq', TypeInfo(Android.JNI.WeChat.JBaseReq));
  TRegTypes.RegisterType('Android.JNI.WeChat.JBaseResp', TypeInfo(Android.JNI.WeChat.JBaseResp));
  TRegTypes.RegisterType('Android.JNI.WeChat.JBaseResp_ErrCode', TypeInfo(Android.JNI.WeChat.JBaseResp_ErrCode));
  TRegTypes.RegisterType('Android.JNI.WeChat.JConstantsAPI', TypeInfo(Android.JNI.WeChat.JConstantsAPI));
  TRegTypes.RegisterType('Android.JNI.WeChat.JGetMessageFromWX', TypeInfo(Android.JNI.WeChat.JGetMessageFromWX));
  TRegTypes.RegisterType('Android.JNI.WeChat.JGetMessageFromWX_Req', TypeInfo(Android.JNI.WeChat.JGetMessageFromWX_Req));
  TRegTypes.RegisterType('Android.JNI.WeChat.JGetMessageFromWX_Resp', TypeInfo(Android.JNI.WeChat.JGetMessageFromWX_Resp));
  TRegTypes.RegisterType('Android.JNI.WeChat.JIWXAPI', TypeInfo(Android.JNI.WeChat.JIWXAPI));
  TRegTypes.RegisterType('Android.JNI.WeChat.JIWXAPIEventHandler', TypeInfo(Android.JNI.WeChat.JIWXAPIEventHandler));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSendAuth', TypeInfo(Android.JNI.WeChat.JSendAuth));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSendAuth_Req', TypeInfo(Android.JNI.WeChat.JSendAuth_Req));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSendAuth_Resp', TypeInfo(Android.JNI.WeChat.JSendAuth_Resp));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSendMessageToWX', TypeInfo(Android.JNI.WeChat.JSendMessageToWX));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSendMessageToWX_Req', TypeInfo(Android.JNI.WeChat.JSendMessageToWX_Req));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSendMessageToWX_Resp', TypeInfo(Android.JNI.WeChat.JSendMessageToWX_Resp));
  TRegTypes.RegisterType('Android.JNI.WeChat.JShowMessageFromWX', TypeInfo(Android.JNI.WeChat.JShowMessageFromWX));
  TRegTypes.RegisterType('Android.JNI.WeChat.JShowMessageFromWX_Req', TypeInfo(Android.JNI.WeChat.JShowMessageFromWX_Req));
  TRegTypes.RegisterType('Android.JNI.WeChat.JShowMessageFromWX_Resp', TypeInfo(Android.JNI.WeChat.JShowMessageFromWX_Resp));
  TRegTypes.RegisterType('Android.JNI.WeChat.JWXAPIFactory', TypeInfo(Android.JNI.WeChat.JWXAPIFactory));
  TRegTypes.RegisterType('Android.JNI.WeChat.JWXApiImplV10', TypeInfo(Android.JNI.WeChat.JWXApiImplV10));
  TRegTypes.RegisterType('Android.JNI.WeChat.JWXMediaMessage_IMediaObject', TypeInfo(Android.JNI.WeChat.JWXMediaMessage_IMediaObject));
  TRegTypes.RegisterType('Android.JNI.WeChat.JWXAppExtendObject', TypeInfo(Android.JNI.WeChat.JWXAppExtendObject));
  TRegTypes.RegisterType('Android.JNI.WeChat.JWXAppLaunchData', TypeInfo(Android.JNI.WeChat.JWXAppLaunchData));
  TRegTypes.RegisterType('Android.JNI.WeChat.JWXAppLaunchData_Builder', TypeInfo(Android.JNI.WeChat.JWXAppLaunchData_Builder));
  TRegTypes.RegisterType('Android.JNI.WeChat.JWXEmojiObject', TypeInfo(Android.JNI.WeChat.JWXEmojiObject));
  TRegTypes.RegisterType('Android.JNI.WeChat.JWXFileObject', TypeInfo(Android.JNI.WeChat.JWXFileObject));
  TRegTypes.RegisterType('Android.JNI.WeChat.JWXImageObject', TypeInfo(Android.JNI.WeChat.JWXImageObject));
  TRegTypes.RegisterType('Android.JNI.WeChat.JWXMediaMessage', TypeInfo(Android.JNI.WeChat.JWXMediaMessage));
  TRegTypes.RegisterType('Android.JNI.WeChat.JWXMediaMessage_Builder', TypeInfo(Android.JNI.WeChat.JWXMediaMessage_Builder));
  TRegTypes.RegisterType('Android.JNI.WeChat.JWXMusicObject', TypeInfo(Android.JNI.WeChat.JWXMusicObject));
  TRegTypes.RegisterType('Android.JNI.WeChat.JWXTextObject', TypeInfo(Android.JNI.WeChat.JWXTextObject));
  TRegTypes.RegisterType('Android.JNI.WeChat.JWXVideoObject', TypeInfo(Android.JNI.WeChat.JWXVideoObject));
  TRegTypes.RegisterType('Android.JNI.WeChat.JWXWebpageObject', TypeInfo(Android.JNI.WeChat.JWXWebpageObject));
  TRegTypes.RegisterType('Android.JNI.WeChat.Jopenapi_package_info', TypeInfo(Android.JNI.WeChat.Jopenapi_package_info));
  TRegTypes.RegisterType('Android.JNI.WeChat.Jsdk_package_info', TypeInfo(Android.JNI.WeChat.Jsdk_package_info));
  TRegTypes.RegisterType('Android.JNI.WeChat.JAnimationHelper_IHelper', TypeInfo(Android.JNI.WeChat.JAnimationHelper_IHelper));
  TRegTypes.RegisterType('Android.JNI.WeChat.JAnimationHelperImpl21below', TypeInfo(Android.JNI.WeChat.JAnimationHelperImpl21below));
  TRegTypes.RegisterType('Android.JNI.WeChat.JAnimationHelperImpl22', TypeInfo(Android.JNI.WeChat.JAnimationHelperImpl22));
  TRegTypes.RegisterType('Android.JNI.WeChat.JBackwardSupportUtil', TypeInfo(Android.JNI.WeChat.JBackwardSupportUtil));
  TRegTypes.RegisterType('Android.JNI.WeChat.JBackwardSupportUtil_AnimationHelper', TypeInfo(Android.JNI.WeChat.JBackwardSupportUtil_AnimationHelper));
  TRegTypes.RegisterType('Android.JNI.WeChat.JBackwardSupportUtil_BitmapFactory', TypeInfo(Android.JNI.WeChat.JBackwardSupportUtil_BitmapFactory));
  TRegTypes.RegisterType('Android.JNI.WeChat.JBackwardSupportUtil_ExifHelper', TypeInfo(Android.JNI.WeChat.JBackwardSupportUtil_ExifHelper));
  TRegTypes.RegisterType('Android.JNI.WeChat.JBackwardSupportUtil_SmoothScrollFactory', TypeInfo(Android.JNI.WeChat.JBackwardSupportUtil_SmoothScrollFactory));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSmoothScrollFactory_IScroll', TypeInfo(Android.JNI.WeChat.JSmoothScrollFactory_IScroll));
  TRegTypes.RegisterType('Android.JNI.WeChat.JChannelUtil', TypeInfo(Android.JNI.WeChat.JChannelUtil));
  TRegTypes.RegisterType('Android.JNI.WeChat.JCharSequences', TypeInfo(Android.JNI.WeChat.JCharSequences));
  TRegTypes.RegisterType('Android.JNI.WeChat.JCharSequences_1', TypeInfo(Android.JNI.WeChat.JCharSequences_1));
  TRegTypes.RegisterType('Android.JNI.WeChat.JCharSequences_2', TypeInfo(Android.JNI.WeChat.JCharSequences_2));
  TRegTypes.RegisterType('Android.JNI.WeChat.JInetUtil', TypeInfo(Android.JNI.WeChat.JInetUtil));
  TRegTypes.RegisterType('Android.JNI.WeChat.JKVConfig', TypeInfo(Android.JNI.WeChat.JKVConfig));
  TRegTypes.RegisterType('Android.JNI.WeChat.JLBSManager', TypeInfo(Android.JNI.WeChat.JLBSManager));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMTimerHandler_CallBack', TypeInfo(Android.JNI.WeChat.JMTimerHandler_CallBack));
  TRegTypes.RegisterType('Android.JNI.WeChat.JLBSManager_1', TypeInfo(Android.JNI.WeChat.JLBSManager_1));
  TRegTypes.RegisterType('Android.JNI.WeChat.JLBSManager_LocationCache', TypeInfo(Android.JNI.WeChat.JLBSManager_LocationCache));
  TRegTypes.RegisterType('Android.JNI.WeChat.JLBSManager_OnLocationGotListener', TypeInfo(Android.JNI.WeChat.JLBSManager_OnLocationGotListener));
  TRegTypes.RegisterType('Android.JNI.WeChat.JLVBuffer', TypeInfo(Android.JNI.WeChat.JLVBuffer));
  TRegTypes.RegisterType('Android.JNI.WeChat.JLocaleUtil', TypeInfo(Android.JNI.WeChat.JLocaleUtil));
  TRegTypes.RegisterType('Android.JNI.WeChat.Jplatformtools_Log', TypeInfo(Android.JNI.WeChat.Jplatformtools_Log));
  TRegTypes.RegisterType('Android.JNI.WeChat.JLogHelper', TypeInfo(Android.JNI.WeChat.JLogHelper));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMAlarmHandler', TypeInfo(Android.JNI.WeChat.JMAlarmHandler));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMAlarmHandler_CallBack', TypeInfo(Android.JNI.WeChat.JMAlarmHandler_CallBack));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMAlarmHandler_IBumper', TypeInfo(Android.JNI.WeChat.JMAlarmHandler_IBumper));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMApplicationContext', TypeInfo(Android.JNI.WeChat.JMMApplicationContext));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMEntryLock', TypeInfo(Android.JNI.WeChat.JMMEntryLock));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMTimerHandler', TypeInfo(Android.JNI.WeChat.JMTimerHandler));
  TRegTypes.RegisterType('Android.JNI.WeChat.JNetStatusUtil', TypeInfo(Android.JNI.WeChat.JNetStatusUtil));
  TRegTypes.RegisterType('Android.JNI.WeChat.JPhoneUtil', TypeInfo(Android.JNI.WeChat.JPhoneUtil));
  TRegTypes.RegisterType('Android.JNI.WeChat.JPhoneUtil_CellInfo', TypeInfo(Android.JNI.WeChat.JPhoneUtil_CellInfo));
  TRegTypes.RegisterType('Android.JNI.WeChat.JPhoneUtil_MacInfo', TypeInfo(Android.JNI.WeChat.JPhoneUtil_MacInfo));
  TRegTypes.RegisterType('Android.JNI.WeChat.JPhoneUtil16Impl', TypeInfo(Android.JNI.WeChat.JPhoneUtil16Impl));
  TRegTypes.RegisterType('Android.JNI.WeChat.JPhoneUtil16Impl_1', TypeInfo(Android.JNI.WeChat.JPhoneUtil16Impl_1));
  TRegTypes.RegisterType('Android.JNI.WeChat.JPhoneUtil20Impl', TypeInfo(Android.JNI.WeChat.JPhoneUtil20Impl));
  TRegTypes.RegisterType('Android.JNI.WeChat.JPhoneUtil20Impl_1', TypeInfo(Android.JNI.WeChat.JPhoneUtil20Impl_1));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSensorController', TypeInfo(Android.JNI.WeChat.JSensorController));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSensorController_SensorEventCallBack', TypeInfo(Android.JNI.WeChat.JSensorController_SensorEventCallBack));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSmoothScrollToPosition21below', TypeInfo(Android.JNI.WeChat.JSmoothScrollToPosition21below));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSmoothScrollToPosition22', TypeInfo(Android.JNI.WeChat.JSmoothScrollToPosition22));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSyncTask', TypeInfo(Android.JNI.WeChat.JSyncTask));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSyncTask_1', TypeInfo(Android.JNI.WeChat.JSyncTask_1));
  TRegTypes.RegisterType('Android.JNI.WeChat.JSystemProperty', TypeInfo(Android.JNI.WeChat.JSystemProperty));
  TRegTypes.RegisterType('Android.JNI.WeChat.JTimeLogger', TypeInfo(Android.JNI.WeChat.JTimeLogger));
  TRegTypes.RegisterType('Android.JNI.WeChat.Jplatformtools_TrafficStats', TypeInfo(Android.JNI.WeChat.Jplatformtools_TrafficStats));
  TRegTypes.RegisterType('Android.JNI.WeChat.JUtil', TypeInfo(Android.JNI.WeChat.JUtil));
  TRegTypes.RegisterType('Android.JNI.WeChat.JUtil_1', TypeInfo(Android.JNI.WeChat.JUtil_1));
  TRegTypes.RegisterType('Android.JNI.WeChat.JUtil_2', TypeInfo(Android.JNI.WeChat.JUtil_2));
  TRegTypes.RegisterType('Android.JNI.WeChat.Jplatformtools_package_info', TypeInfo(Android.JNI.WeChat.Jplatformtools_package_info));
  TRegTypes.RegisterType('Android.JNI.WeChat.JIMMPluginAPI', TypeInfo(Android.JNI.WeChat.JIMMPluginAPI));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMPluginAPIImpl', TypeInfo(Android.JNI.WeChat.JMMPluginAPIImpl));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMPluginMsg', TypeInfo(Android.JNI.WeChat.JMMPluginMsg));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMPluginMsg_ReceiverHelper', TypeInfo(Android.JNI.WeChat.JMMPluginMsg_ReceiverHelper));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMPluginOAuth', TypeInfo(Android.JNI.WeChat.JMMPluginOAuth));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMPluginOAuth_1', TypeInfo(Android.JNI.WeChat.JMMPluginOAuth_1));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMPluginOAuth_IResult', TypeInfo(Android.JNI.WeChat.JMMPluginOAuth_IResult));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMPluginOAuth_Receiver', TypeInfo(Android.JNI.WeChat.JMMPluginOAuth_Receiver));
  TRegTypes.RegisterType('Android.JNI.WeChat.JReceiver_1', TypeInfo(Android.JNI.WeChat.JReceiver_1));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMPluginProviderConstants', TypeInfo(Android.JNI.WeChat.JMMPluginProviderConstants));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMPluginProviderConstants_OAuth', TypeInfo(Android.JNI.WeChat.JMMPluginProviderConstants_OAuth));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMPluginProviderConstants_PluginDB', TypeInfo(Android.JNI.WeChat.JMMPluginProviderConstants_PluginDB));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMPluginProviderConstants_PluginIntent', TypeInfo(Android.JNI.WeChat.JMMPluginProviderConstants_PluginIntent));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMPluginProviderConstants_Resolver', TypeInfo(Android.JNI.WeChat.JMMPluginProviderConstants_Resolver));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMPluginProviderConstants_SharedPref', TypeInfo(Android.JNI.WeChat.JMMPluginProviderConstants_SharedPref));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMMPluginUtil', TypeInfo(Android.JNI.WeChat.JMMPluginUtil));
  TRegTypes.RegisterType('Android.JNI.WeChat.JProfile', TypeInfo(Android.JNI.WeChat.JProfile));
  TRegTypes.RegisterType('Android.JNI.WeChat.Jplugin_package_info', TypeInfo(Android.JNI.WeChat.Jplugin_package_info));
  TRegTypes.RegisterType('Android.JNI.WeChat.JCursorFieldHelper', TypeInfo(Android.JNI.WeChat.JCursorFieldHelper));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMStorageEvent', TypeInfo(Android.JNI.WeChat.JMStorageEvent));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMStorage_1', TypeInfo(Android.JNI.WeChat.JMStorage_1));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMStorage_2', TypeInfo(Android.JNI.WeChat.JMStorage_2));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMStorage_IOnStorageChange', TypeInfo(Android.JNI.WeChat.JMStorage_IOnStorageChange));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMStorage_IOnStorageLoaded', TypeInfo(Android.JNI.WeChat.JMStorage_IOnStorageLoaded));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMStorageEvent_1', TypeInfo(Android.JNI.WeChat.JMStorageEvent_1));
  TRegTypes.RegisterType('Android.JNI.WeChat.Jstorage_package_info', TypeInfo(Android.JNI.WeChat.Jstorage_package_info));
  //TRegTypes.RegisterType('Android.JNI.WeChat.JStringBuffer', TypeInfo(Android.JNI.WeChat.JStringBuffer));
  //TRegTypes.RegisterType('Android.JNI.WeChat.JStringBuilder', TypeInfo(Android.JNI.WeChat.JStringBuilder));
  TRegTypes.RegisterType('Android.JNI.WeChat.JLinkedHashMap', TypeInfo(Android.JNI.WeChat.JLinkedHashMap));
  TRegTypes.RegisterType('Android.JNI.WeChat.JMap_Entry', TypeInfo(Android.JNI.WeChat.JMap_Entry));
  TRegTypes.RegisterType('Android.JNI.WeChat.JNode', TypeInfo(Android.JNI.WeChat.JNode));
  TRegTypes.RegisterType('Android.JNI.WeChat.JAttr', TypeInfo(Android.JNI.WeChat.JAttr));
  TRegTypes.RegisterType('Android.JNI.WeChat.JCharacterData', TypeInfo(Android.JNI.WeChat.JCharacterData));
  TRegTypes.RegisterType('Android.JNI.WeChat.JText', TypeInfo(Android.JNI.WeChat.JText));
  TRegTypes.RegisterType('Android.JNI.WeChat.JCDATASection', TypeInfo(Android.JNI.WeChat.JCDATASection));
  TRegTypes.RegisterType('Android.JNI.WeChat.JComment', TypeInfo(Android.JNI.WeChat.JComment));
  TRegTypes.RegisterType('Android.JNI.WeChat.JDOMConfiguration', TypeInfo(Android.JNI.WeChat.JDOMConfiguration));
  TRegTypes.RegisterType('Android.JNI.WeChat.JDOMImplementation', TypeInfo(Android.JNI.WeChat.JDOMImplementation));
  TRegTypes.RegisterType('Android.JNI.WeChat.JDOMStringList', TypeInfo(Android.JNI.WeChat.JDOMStringList));
  TRegTypes.RegisterType('Android.JNI.WeChat.JDocument', TypeInfo(Android.JNI.WeChat.JDocument));
  TRegTypes.RegisterType('Android.JNI.WeChat.JDocumentFragment', TypeInfo(Android.JNI.WeChat.JDocumentFragment));
  TRegTypes.RegisterType('Android.JNI.WeChat.JDocumentType', TypeInfo(Android.JNI.WeChat.JDocumentType));
  TRegTypes.RegisterType('Android.JNI.WeChat.JElement', TypeInfo(Android.JNI.WeChat.JElement));
  TRegTypes.RegisterType('Android.JNI.WeChat.JEntityReference', TypeInfo(Android.JNI.WeChat.JEntityReference));
  TRegTypes.RegisterType('Android.JNI.WeChat.JNamedNodeMap', TypeInfo(Android.JNI.WeChat.JNamedNodeMap));
  TRegTypes.RegisterType('Android.JNI.WeChat.JNodeList', TypeInfo(Android.JNI.WeChat.JNodeList));
  TRegTypes.RegisterType('Android.JNI.WeChat.JProcessingInstruction', TypeInfo(Android.JNI.WeChat.JProcessingInstruction));
  TRegTypes.RegisterType('Android.JNI.WeChat.JTypeInfo', TypeInfo(Android.JNI.WeChat.JTypeInfo));
  TRegTypes.RegisterType('Android.JNI.WeChat.JUserDataHandler', TypeInfo(Android.JNI.WeChat.JUserDataHandler));
end;

initialization
  RegisterTypes;
end.

