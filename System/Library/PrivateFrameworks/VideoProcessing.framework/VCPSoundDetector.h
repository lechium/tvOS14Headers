/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/SNResultsObserving.h>

@class NSMutableArray, NSString;

@interface VCPSoundDetector : NSObject <SNResultsObserving> {

	NSMutableArray* _results;
	SCD_Struct_VC6 _activeStart;
	SCD_Struct_VC6 _activeEnd;
	int _length;
	float _sampleRate;
	SCD_Struct_VC6 _trackStart;
	float _activeConfidence;
	float _threshold;
	int _minDetections;
	NSString* _resultsKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)results;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
-(void)addDetectionFromTime:(const SCD_Struct_VC6*)arg1 toTime:(const SCD_Struct_VC6*)arg2 confidence:(float)arg3 ;
-(void)request:(id)arg1 didProduceResult:(id)arg2 ;
-(id)initWithTrackStart:(SCD_Struct_VC6)arg1 threshold:(float)arg2 resultsKey:(id)arg3 ;
@end
