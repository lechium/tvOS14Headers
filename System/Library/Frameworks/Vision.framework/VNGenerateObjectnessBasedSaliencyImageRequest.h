/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:49 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class NSArray, NSString;

@interface VNGenerateObjectnessBasedSaliencyImageRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (readonly) NSArray * supportedImageSizeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
+(Class)configurationClass;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(NSArray *)supportedImageSizeSet;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(id)_detectorLoadedInSession:(id)arg1 forRevision:(unsigned long long)arg2 getAppliedDetectorOptions:(id*)arg3 error:(id*)arg4 ;
-(id)_detectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_objectnessObservationsForRevision:(unsigned long long)arg1 performedInContext:(id)arg2 error:(id*)arg3 ;
@end

