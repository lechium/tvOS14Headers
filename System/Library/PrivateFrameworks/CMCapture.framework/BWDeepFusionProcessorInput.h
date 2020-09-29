/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:43 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorInput.h>

@protocol BWDeepFusionProcessorInputDelegate;
@class NSDictionary, NSArray;

@interface BWDeepFusionProcessorInput : BWStillImageProcessorInput {

	id<BWDeepFusionProcessorInputDelegate> _delegate;
	NSDictionary* _evZeroReferenceFrameAttachments;
	SCD_Struct_BW36 _evZeroReferenceFramePTS;
	CVBufferRef _syntheticReference;
	NSDictionary* _syntheticReferenceMetadata;
	CVBufferRef _syntheticReferenceFusionMap;
	NSDictionary* _syntheticReferenceFusionMapMetadata;
	CVBufferRef _syntheticLong;
	NSDictionary* _syntheticLongMetadata;
	CVBufferRef _syntheticLongFusionMap;
	NSDictionary* _syntheticLongFusionMapMetadata;
	CVBufferRef _syntheticRealLongFusionMap;
	NSDictionary* _syntheticRealLongFusionMapMetadata;
	void* _skinMask;
	void* _skyMask;
	void* _personMask;
	id _faceObservations;

}

@property (nonatomic,retain) id<BWDeepFusionProcessorInputDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * evZeroReferenceFrameAttachments; 
@property (assign,nonatomic) SCD_Struct_BW36 evZeroReferenceFramePTS; 
@property (nonatomic,readonly) CVBufferRef syntheticReference;                                  //@synthesize syntheticReference=_syntheticReference - In the implementation block
@property (nonatomic,readonly) NSDictionary * syntheticReferenceMetadata;                       //@synthesize syntheticReferenceMetadata=_syntheticReferenceMetadata - In the implementation block
@property (nonatomic,readonly) CVBufferRef syntheticReferenceFusionMap;                         //@synthesize syntheticReferenceFusionMap=_syntheticReferenceFusionMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * syntheticReferenceFusionMapMetadata;              //@synthesize syntheticReferenceFusionMapMetadata=_syntheticReferenceFusionMapMetadata - In the implementation block
@property (nonatomic,readonly) CVBufferRef syntheticLong;                                       //@synthesize syntheticLong=_syntheticLong - In the implementation block
@property (nonatomic,readonly) NSDictionary * syntheticLongMetadata;                            //@synthesize syntheticLongMetadata=_syntheticLongMetadata - In the implementation block
@property (nonatomic,readonly) CVBufferRef syntheticLongFusionMap;                              //@synthesize syntheticLongFusionMap=_syntheticLongFusionMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * syntheticLongFusionMapMetadata;                   //@synthesize syntheticLongFusionMapMetadata=_syntheticLongFusionMapMetadata - In the implementation block
@property (nonatomic,readonly) CVBufferRef syntheticRealLongFusionMap;                          //@synthesize syntheticRealLongFusionMap=_syntheticRealLongFusionMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * syntheticRealLongFusionMapMetadata;               //@synthesize syntheticRealLongFusionMapMetadata=_syntheticRealLongFusionMapMetadata - In the implementation block
@property (nonatomic,readonly) CVBufferRef skinMask; 
@property (nonatomic,readonly) CVBufferRef skyMask; 
@property (nonatomic,readonly) CVBufferRef personMask; 
@property (nonatomic,readonly) NSArray * faceObservations; 
-(void)dealloc;
-(id<BWDeepFusionProcessorInputDelegate>)delegate;
-(void)setDelegate:(id<BWDeepFusionProcessorInputDelegate>)arg1 ;
-(NSArray *)faceObservations;
-(CVBufferRef)skinMask;
-(CVBufferRef)skyMask;
-(void)setEvZeroReferenceFrameAttachments:(NSDictionary *)arg1 ;
-(void)setEvZeroReferenceFramePTS:(SCD_Struct_BW36)arg1 ;
-(void)addSkinMask:(void*)arg1 skyMask:(void*)arg2 personMask:(void*)arg3 faceObservations:(id)arg4 ;
-(void)addBuffer:(CVBufferRef)arg1 metadata:(id)arg2 type:(unsigned long long)arg3 ;
-(NSDictionary *)evZeroReferenceFrameAttachments;
-(SCD_Struct_BW36)evZeroReferenceFramePTS;
-(BOOL)receivedAllInferences;
-(CVBufferRef)personMask;
-(CVBufferRef)syntheticReference;
-(NSDictionary *)syntheticReferenceMetadata;
-(CVBufferRef)syntheticReferenceFusionMap;
-(NSDictionary *)syntheticReferenceFusionMapMetadata;
-(CVBufferRef)syntheticLong;
-(NSDictionary *)syntheticLongMetadata;
-(CVBufferRef)syntheticLongFusionMap;
-(NSDictionary *)syntheticLongFusionMapMetadata;
-(CVBufferRef)syntheticRealLongFusionMap;
-(NSDictionary *)syntheticRealLongFusionMapMetadata;
@end

