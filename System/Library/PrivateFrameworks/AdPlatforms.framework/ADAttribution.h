/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AdPlatforms.framework/AdPlatforms
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ADAttribution : NSObject {

	BOOL _hasCompletedResponse;
	unsigned char _numRetries;

}

@property (assign,nonatomic) BOOL hasCompletedResponse;              //@synthesize hasCompletedResponse=_hasCompletedResponse - In the implementation block
@property (assign,nonatomic) unsigned char numRetries;               //@synthesize numRetries=_numRetries - In the implementation block
+(id)sharedInstance;
-(id)init;
-(unsigned char)numRetries;
-(void)setNumRetries:(unsigned char)arg1 ;
-(void)setHasCompletedResponse:(BOOL)arg1 ;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(void)setStocksAdEnabled:(BOOL)arg1 ;
-(BOOL)hasCompletedResponse;
-(void)initiateRequestOnConnection:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

