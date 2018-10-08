[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external sharedInstanceWithToken: string => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external track: string => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external trackWithProperties: (string, 'a) => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external createAlias: string => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external identify: string => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val] external set: 'a => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external setOnce: 'a => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external timeEvent: string => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external registerSuperProperties: 'a => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external registerSuperPropertiesOnce: 'a => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external trackCharge: float => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external trackChargeWithProperties: float => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external increment: int => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external setPushRegistrationId: string => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external initPushHandling: string => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external clearPushRegistrationId: ([@bs.as {json|true|json}] _) => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external addPushDeviceToken: string => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external reset: ([@bs.as {json|true|json}] _) => unit = "";

[@bs.module "react-native-mixpanel"] [@bs.scope "default"] [@bs.val]
external getDistinctId: ((. string) => unit) => unit = "";