/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFActionBuilder.h>

@protocol NSCopying;
@class HMCharacteristic, HMCharacteristicWriteAction;

@interface HFCharacteristicWriteActionBuilder : HFActionBuilder {

	HMCharacteristic* _characteristic;
	id<NSCopying> _targetValue;

}

@property (nonatomic,readonly) HMCharacteristicWriteAction * action; 
@property (nonatomic,retain) HMCharacteristic * characteristic;                   //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,retain) id<NSCopying> targetValue;                           //@synthesize targetValue=_targetValue - In the implementation block
+(Class)homeKitRepresentationClass;
-(id)description;
-(void)setCharacteristic:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)characteristic;
-(id<NSCopying>)targetValue;
-(void)setTargetValue:(id<NSCopying>)arg1 ;
-(BOOL)requiresDeviceUnlock;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)commitItem;
-(id)createNewAction;
-(BOOL)updateWithActionBuilder:(id)arg1 ;
-(id)copyForCreatingNewAction;
-(BOOL)hasSameTargetAsAction:(id)arg1 ;
-(id)performValidation;
@end

