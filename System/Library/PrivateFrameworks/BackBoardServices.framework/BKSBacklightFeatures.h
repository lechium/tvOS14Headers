/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSProtobufSerializable.h>

@class NSString;

@interface BKSBacklightFeatures : NSObject <BSProtobufSerializable> {

	BOOL _disableFeatures;
	float _fixedBrightnessNitsWhileDisabled;
	float _fixedBrightnessLevelWhileDisabled;

}

@property (assign,nonatomic) BOOL disableFeatures;                                 //@synthesize disableFeatures=_disableFeatures - In the implementation block
@property (assign,nonatomic) float fixedBrightnessNitsWhileDisabled;               //@synthesize fixedBrightnessNitsWhileDisabled=_fixedBrightnessNitsWhileDisabled - In the implementation block
@property (assign,nonatomic) float fixedBrightnessLevelWhileDisabled;              //@synthesize fixedBrightnessLevelWhileDisabled=_fixedBrightnessLevelWhileDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)protobufSchema;
-(NSString *)description;
-(id)init;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)didFinishProtobufDecodingWithError:(out id*)arg1 ;
-(void)setFixedBrightnessNitsWhileDisabled:(float)arg1 ;
-(void)setFixedBrightnessLevelWhileDisabled:(float)arg1 ;
-(BOOL)disableFeatures;
-(void)setDisableFeatures:(BOOL)arg1 ;
-(float)fixedBrightnessNitsWhileDisabled;
-(float)fixedBrightnessLevelWhileDisabled;
@end
