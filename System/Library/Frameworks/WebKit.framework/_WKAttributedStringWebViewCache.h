/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface _WKAttributedStringWebViewCache : NSObject
+(id)configuration;
+(id)cache;
+(void)resetPurgeDelay;
+(void)purgeSingleWebView;
+(void)clearConfiguration;
+(RetainPtr<WKWebView>*)retrieveOrCreateWebView;
+(void)cacheWebView:(id)arg1 ;
+(void)purgeAllWebViews;
@end
