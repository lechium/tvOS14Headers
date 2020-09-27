/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVLBlockNotificationHandler : NSObject {

	BOOL _listening;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
-(void)dealloc;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)_notification:(id)arg1 ;
-(void)stopObservingAll;
-(void)startObservingNotificationName:(id)arg1 object:(id)arg2 ;
@end
