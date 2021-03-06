/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPTaskProcessingService;

@interface VCPVisualIntelligenceAnalysisService : NSObject {

	VCPTaskProcessingService* _service;

}
+(id)service;
-(id)init;
-(void)requestShareSheetProcessingForPixelBuffer:(CVBufferRef)arg1 withOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(void)requestShareSheetProcessingForAssetURL:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
@end

