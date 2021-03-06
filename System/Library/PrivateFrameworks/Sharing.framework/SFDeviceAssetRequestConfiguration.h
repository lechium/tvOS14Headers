/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SFDeviceAssetRequestConfiguration : NSObject {

	/*^block*/id _queryResultHandler;
	double _timeout;
	/*^block*/id _downloadCompletionHandler;

}

@property (nonatomic,copy,readonly) id queryResultHandler;              //@synthesize queryResultHandler=_queryResultHandler - In the implementation block
@property (assign,nonatomic) double timeout;                            //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id downloadCompletionHandler;                //@synthesize downloadCompletionHandler=_downloadCompletionHandler - In the implementation block
-(id)description;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(id)queryResultHandler;
-(id)downloadCompletionHandler;
-(id)initWithQueryResultHandler:(/*^block*/id)arg1 ;
-(void)setDownloadCompletionHandler:(id)arg1 ;
@end

