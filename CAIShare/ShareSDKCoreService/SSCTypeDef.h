///#begin zh-cn
//
//  Created by ShareSDK.cn on 13-1-14.
//  官网地址:http://www.ShareSDK.cn
//  技术支持邮箱:support@sharesdk.cn
//  官方微信:ShareSDK   （如果发布新版本的话，我们将会第一时间通过微信将版本更新内容推送给您。如果使用过程中有任何问题，也可以通过微信与我们取得联系，我们将会在24小时内给予回复）
//  商务QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
///#end
///#begin en
//
//  Created by ShareSDK.cn on 13-1-14.
//  Website:http://www.ShareSDK.cn
//  Support E-mail:support@sharesdk.cn
//  WeChat ID:ShareSDK   （If publish a new version, we will be push the updates content of version to you. If you have any questions about the ShareSDK, you can get in touch through the WeChat with us, we will respond within 24 hours）
//  Business QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
///#end

#import "ICMErrorInfo.h"

#ifndef ShareSDKCoreService_SSCTypeDef_h
#define ShareSDKCoreService_SSCTypeDef_h

///#begin zh-cn
/**
 *	@brief	授权会话状态
 */
///#end
///#begin en
/**
 *	@brief	Authorized session state.
 */
///#end
typedef enum
{
    SSCAuthSessionStateBegan = 0,  /**< 开始会话 */
	SSCAuthSessionStateSuccess = 1, /**< 会话成功 */
	SSCAuthSessionStateFail = 2, /**< 会话失败 */
    SSCAuthSessionStateCancel = 3 /**< 会话取消 */
}
SSCAuthSessionState;

///#begin zh-cn
/**
 *	@brief	分享会话状态
 */
///#end
///#begin en
/**
 *	@brief	Share session state.
 */
///#end
typedef enum
{
    SSCShareSessionStateBegan = 0, /**< 开始会话 */
	SSCShareSessionStateSuccess = 1, /**< 会话成功 */
	SSCShareSessionStateFail = 2, /**< 会话失败 */
    SSCShareSessionStateCancel = 3 /**< 会话取消 */
}
SSCShareSessionState;

///#begin zh-cn
/**
 *	@brief	分享类型
 */
///#end
///#begin en
/**
 *	@brief	Platform type.
 */
///#end
typedef enum
{
	SSCShareTypeSinaWeibo = 1, /**< 新浪微博 */
	SSCShareTypeTencentWeibo = 2, /**< 腾讯微博 */
	SSCShareTypeSohuWeibo = 3, /**< 搜狐微博 */
	SSCShareType163Weibo = 4, /**< 网易微博 */
	SSCShareTypeDouBan = 5, /**< 豆瓣社区 */
	SSCShareTypeQQSpace = 6, /**< QQ空间 */
	SSCShareTypeRenren = 7, /**< 人人网 */
	SSCShareTypeKaixin = 8, /**< 开心网 */
	SSCShareTypePengyou = 9, /**< 朋友网 */
	SSCShareTypeFacebook = 10, /**< Facebook */
	SSCShareTypeTwitter = 11, /**< Twitter */
	SSCShareTypeEvernote = 12, /**< 印象笔记 */
	SSCShareTypeFoursquare = 13, /**< Foursquare */
	SSCShareTypeGooglePlus = 14, /**< Google＋ */
	SSCShareTypeInstagram = 15, /**< Instagram */
	SSCShareTypeLinkedIn = 16, /**< LinkedIn */
	SSCShareTypeTumbir = 17, /**< Tumbir */
    SSCShareTypeMail = 18, /**< 邮件分享 */
	SSCShareTypeSMS = 19, /**< 短信分享 */
	SSCShareTypeAirPrint = 20, /**< 打印 */
	SSCShareTypeCopy = 21, /**< 拷贝 */
    SSCShareTypeWeixiSession = 22, /**< 微信好友 */
	SSCShareTypeWeixiTimeline = 23, /**< 微信朋友圈 */
    SSCShareTypeQQ = 24, /**< QQ */
    SSCShareTypeInstapaper = 25, /**< Instapaper */
    SSCShareTypePocket = 26, /**< Pocket */
    SSCShareTypeYouDaoNote = 27,     /**< 有道云笔记 */
    SSCShareTypeSohuKan = 28,       /**< 搜狐随身看 */
    SSCShareTYpePinterest = 30,     /**< Pinterest */
    SSCShareTypeAny = 99   /**< 任意平台 */
}
SSCShareType;

///#begin zh-cn
/**
 *	@brief	统计策略
 */
///#end
///#begin en
/**
 *	@brief  Statistics Policy
 */
///#end
typedef enum
{
	SSCStatPolicyRealTime = 0, /**< 实时发送统计数据 */
	SSCStatPolicyActivity = 1, /**< 应用激活时发送统计数据 */
	SSCStatPolicyLimitSize = 2 /**< 达到一定量数据时发送统计数据 */
}
SSCStatPolicy;

///#begin zh-cn
/**
 *	@brief	授权会话返回事件
 */
///#end
///#begin en
/**
 *	@brief	Authorized session result event.
 */
///#end
typedef void(^SSCAuthSessionResultEvent) (SSCAuthSessionState state, id user, id<ICMErrorInfo> error);


#endif
