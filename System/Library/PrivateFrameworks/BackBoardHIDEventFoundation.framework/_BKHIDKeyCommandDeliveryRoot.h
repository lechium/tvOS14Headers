/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BKSHIDEventKeyCommandsDispatchingRule;

@interface _BKHIDKeyCommandDeliveryRoot : NSObject {

	NSString* _identifier;
	BKSHIDEventKeyCommandsDispatchingRule* _dispatchingRule;

}

@property (nonatomic,copy) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) BKSHIDEventKeyCommandsDispatchingRule * dispatchingRule;              //@synthesize dispatchingRule=_dispatchingRule - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BKSHIDEventKeyCommandsDispatchingRule *)dispatchingRule;
-(void)setDispatchingRule:(BKSHIDEventKeyCommandsDispatchingRule *)arg1 ;
@end
