/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PHAPrivateFederatedLearningTransformersDecoder : NSObject {

	NSDictionary* _transformerNameToClass;

}

@property (nonatomic,readonly) NSDictionary * transformerNameToClass;              //@synthesize transformerNameToClass=_transformerNameToClass - In the implementation block
-(id)init;
-(id)transformersForFeatureExtractorsFromDictionary:(id)arg1 error:(id*)arg2 ;
-(id)instancesForTransformerConfigList:(id)arg1 error:(id*)arg2 ;
-(id)instanceForTransformerConfig:(id)arg1 error:(id*)arg2 ;
-(BOOL)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 ;
-(NSDictionary *)transformerNameToClass;
@end

