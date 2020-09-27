/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:00 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBProcessingModelResult.h>

@class HMBModel;

@interface HMBProcessingModelUpdate : HMBProcessingModelResult {

	HMBModel* _previousModel;

}

@property (readonly) HMBModel * previousModel;              //@synthesize previousModel=_previousModel - In the implementation block
-(id)attributeDescriptions;
-(HMBModel *)previousModel;
-(id)initWithModel:(id)arg1 previousModel:(id)arg2 options:(id)arg3 mirrorOutputFuture:(id)arg4 ;
@end
