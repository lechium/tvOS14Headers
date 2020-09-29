/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNFaceObservationAccepting.h>

@class NSArray, NSString;

@interface VNCreateFaceTorsoprintRequest : VNImageBasedRequest <VNFaceObservationAccepting> {

	BOOL _forceFaceprintCreation;

}

@property (assign,nonatomic) BOOL forceFaceprintCreation;                //@synthesize forceFaceprintCreation=_forceFaceprintCreation - In the implementation block
@property (nonatomic,copy) NSArray * inputFaceObservations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN20*)dependentRequestCompatability;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(long long)dependencyProcessingOrdinality;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setForceFaceprintCreation:(BOOL)arg1 ;
-(BOOL)forceFaceprintCreation;
@end

