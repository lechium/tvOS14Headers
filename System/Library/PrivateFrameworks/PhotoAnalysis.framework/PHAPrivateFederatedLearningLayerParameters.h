/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MAFloatVector;

@interface PHAPrivateFederatedLearningLayerParameters : NSObject {

	MAFloatVector* _weights;
	MAFloatVector* _bias;

}

@property (nonatomic,retain) MAFloatVector * weights;              //@synthesize weights=_weights - In the implementation block
@property (nonatomic,retain) MAFloatVector * bias;                 //@synthesize bias=_bias - In the implementation block
-(MAFloatVector *)bias;
-(void)setBias:(MAFloatVector *)arg1 ;
-(MAFloatVector *)weights;
-(void)setWeights:(MAFloatVector *)arg1 ;
-(id)initWithWeights:(id)arg1 bias:(id)arg2 ;
@end

