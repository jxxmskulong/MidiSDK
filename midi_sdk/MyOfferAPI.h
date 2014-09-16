

#import <UIKit/UIKit.h>
#import "MyOfferAPIDelegate.h"



@interface MyOfferAPI : NSObject

//
// 设置发布应用的应用id, 应用密码信息,必须在应用启动的时候呼叫

// 参数 appID		:开发者应用ID ;     开发者到 www.miidi.net 上提交应用时候,获取id和密码
// 参数 appPassword	:开发者的安全密钥 ;  开发者到 www.miidi.net 上提交应用时候,获取id和密码
//

+(void)       setAppPublisher:(NSString*) appID withAppSecret:(NSString*)appSecret;


// 获取Miidi广告IOS 版本号
+(NSString*)  getSdkVersion;


// 显示积分墙
#pragma mark -
+ (BOOL)      showAppOffers:(UIViewController*)hostViewController withDelegate:(id<MyOfferAPIDelegate>) delegate;



// 用于服务器积分对接,设置自定义参数,参数可以传递给对接服务器
// 参数 paramText				: 需要传递给对接服务器的自定义参数  
+ (void)	  setUserParam:(NSString*)paramText;



@end
