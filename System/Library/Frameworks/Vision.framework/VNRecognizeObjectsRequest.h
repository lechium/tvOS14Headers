/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:45 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class NSArray, NSString;

@interface VNRecognizeObjectsRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (assign) unsigned long long imageCropAndScaleOption; 
@property (assign) BOOL useImageAnalyzerScaling; 
@property (assign) float modelMinimumDetectionConfidence; 
@property (assign) float modelNonMaximumSuppressionThreshold; 
@property (readonly) NSArray * supportedImageSizeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
+(Class)configurationClass;
+(id)knownObjectIdentifiersRecognizedByRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(NSArray *)supportedImageSizeSet;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(/*^block*/id)resultsSortingComparator;
-(BOOL)useImageAnalyzerScaling;
-(void)setUseImageAnalyzerScaling:(BOOL)arg1 ;
-(float)modelMinimumDetectionConfidence;
-(void)setModelMinimumDetectionConfidence:(float)arg1 ;
-(float)modelNonMaximumSuppressionThreshold;
-(void)setModelNonMaximumSuppressionThreshold:(float)arg1 ;
-(id)_applicableDetectorAndGetConfigurationOptions:(id*)arg1 loadedInSession:(id)arg2 error:(id*)arg3 ;
-(id)_recognizedObjectsIdentifiersAndReturnError:(id*)arg1 ;
@end

