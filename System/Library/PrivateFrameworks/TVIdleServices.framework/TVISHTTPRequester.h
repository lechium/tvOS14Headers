/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVISHTTPRequester : NSObject
+(id)userAgent;
+(id)cachingServerSession;
+(id)_lastETagForURL:(id)arg1 ;
+(void)_updateETagForURLResponse:(id)arg1 ;
+(id)cacheServerDownloadTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)conditionalDataTaskForURL:(id)arg1 localTargetFileURL:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
