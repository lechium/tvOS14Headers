/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPSCNNInstanceNormalizationDataSource <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long numberOfFeatureChannels; 
@optional
+(BOOL)supportsSecureCoding;
-(BOOL)load;
-(void)encodeWithCoder:(id)arg1;
-(id)initWithCoder:(id)arg1;
-(void)purge;
-(float)epsilon;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2;
-(id)updateGammaAndBetaWithCommandBuffer:(id)arg1 instanceNormalizationStateBatch:(id)arg2;
-(BOOL)updateGammaAndBetaWithInstanceNormalizationStateBatch:(id)arg1;

@required
-(id)label;
-(float*)gamma;
-(float*)beta;
-(unsigned long long)numberOfFeatureChannels;

@end
