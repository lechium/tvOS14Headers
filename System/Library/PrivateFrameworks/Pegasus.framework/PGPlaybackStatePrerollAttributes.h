/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, UIColor;

@interface PGPlaybackStatePrerollAttributes : NSObject {

	NSDictionary* _dictionaryRepresentation;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation;              //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
@property (nonatomic,readonly) long long contentType; 
@property (nonatomic,readonly) double requiredLinearPlaybackEndTime; 
@property (nonatomic,readonly) UIColor * preferredTintColor; 
+(id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:(double)arg1 preferredTintColor:(id)arg2 ;
+(id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:(double)arg1 preferredTintColor:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(long long)contentType;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(double)requiredLinearPlaybackEndTime;
-(id)initWithRequiredLinearPlaybackEndTime:(double)arg1 preferredTintColor:(id)arg2 contentType:(long long)arg3 ;
-(id)preferredTintColorDescription;
-(UIColor *)preferredTintColor;
@end

