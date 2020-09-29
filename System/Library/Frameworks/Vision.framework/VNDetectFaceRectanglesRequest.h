/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class NSNumber;

@interface VNDetectFaceRectanglesRequest : VNImageBasedRequest {

	BOOL _faceCoreEnhanceEyesAndMouthLocalization;
	BOOL _faceCoreExtractBlink;
	BOOL _faceCoreExtractSmile;
	NSNumber* _faceCoreMinFaceSize;
	NSNumber* _faceCoreNumberOfDetectionAngles;

}

@property (assign,nonatomic) unsigned long long faceCoreType; 
@property (nonatomic,retain) NSNumber * faceCoreMinFaceSize;                            //@synthesize faceCoreMinFaceSize=_faceCoreMinFaceSize - In the implementation block
@property (nonatomic,retain) NSNumber * faceCoreNumberOfDetectionAngles;                //@synthesize faceCoreNumberOfDetectionAngles=_faceCoreNumberOfDetectionAngles - In the implementation block
@property (assign,nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization;              //@synthesize faceCoreEnhanceEyesAndMouthLocalization=_faceCoreEnhanceEyesAndMouthLocalization - In the implementation block
@property (assign,nonatomic) BOOL faceCoreExtractBlink;                                 //@synthesize faceCoreExtractBlink=_faceCoreExtractBlink - In the implementation block
@property (assign,nonatomic) BOOL faceCoreExtractSmile;                                 //@synthesize faceCoreExtractSmile=_faceCoreExtractSmile - In the implementation block
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(long long)dependencyProcessingOrdinality;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(NSNumber *)faceCoreMinFaceSize;
-(void)setFaceCoreMinFaceSize:(NSNumber *)arg1 ;
-(NSNumber *)faceCoreNumberOfDetectionAngles;
-(void)setFaceCoreNumberOfDetectionAngles:(NSNumber *)arg1 ;
-(BOOL)faceCoreEnhanceEyesAndMouthLocalization;
-(void)setFaceCoreEnhanceEyesAndMouthLocalization:(BOOL)arg1 ;
-(BOOL)faceCoreExtractBlink;
-(void)setFaceCoreExtractBlink:(BOOL)arg1 ;
-(BOOL)faceCoreExtractSmile;
-(void)setFaceCoreExtractSmile:(BOOL)arg1 ;
-(unsigned long long)faceCoreType;
-(void)setFaceCoreType:(unsigned long long)arg1 ;
@end

