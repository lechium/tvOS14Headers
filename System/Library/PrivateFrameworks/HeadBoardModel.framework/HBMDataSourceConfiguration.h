/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface HBMDataSourceConfiguration : NSObject {

	BOOL _retailDemoMode;
	NSURL* _storeURL;

}

@property (nonatomic,copy,readonly) NSURL * storeURL;                                    //@synthesize storeURL=_storeURL - In the implementation block
@property (getter=isRetailDemoMode,nonatomic,readonly) BOOL retailDemoMode;              //@synthesize retailDemoMode=_retailDemoMode - In the implementation block
-(NSURL *)storeURL;
-(BOOL)isRetailDemoMode;
-(id)initWithStoreURL:(id)arg1 retailDemoMode:(BOOL)arg2 ;
@end
