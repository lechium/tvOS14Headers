/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorInput.h>

@protocol BWStereoDisparityProcessorInputDelegate;
@interface BWStereoDisparityProcessorInput : BWStillImageProcessorInput {

	id<BWStereoDisparityProcessorInputDelegate> _delegate;
	opaqueCMSampleBufferRef _referenceSbuf;
	opaqueCMSampleBufferRef _auxiliarySbuf;
	BOOL _equalizeTeleGainToMatchReference;
	BOOL _emitAuxiliaryInput;

}

@property (nonatomic,retain) id<BWStereoDisparityProcessorInputDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL equalizeTeleGainToMatchReference;                             //@synthesize equalizeTeleGainToMatchReference=_equalizeTeleGainToMatchReference - In the implementation block
@property (assign,nonatomic) BOOL emitAuxiliaryInput;                                           //@synthesize emitAuxiliaryInput=_emitAuxiliaryInput - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef referenceSbuf;                           //@synthesize referenceSbuf=_referenceSbuf - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef auxiliarySbuf;                           //@synthesize auxiliarySbuf=_auxiliarySbuf - In the implementation block
-(void)dealloc;
-(id<BWStereoDisparityProcessorInputDelegate>)delegate;
-(void)setDelegate:(id<BWStereoDisparityProcessorInputDelegate>)arg1 ;
-(id)initWithSettings:(id)arg1 portType:(id)arg2 ;
-(void)addSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)referenceSbuf;
-(opaqueCMSampleBufferRef)auxiliarySbuf;
-(BOOL)equalizeTeleGainToMatchReference;
-(void)setEqualizeTeleGainToMatchReference:(BOOL)arg1 ;
-(BOOL)emitAuxiliaryInput;
-(void)setEmitAuxiliaryInput:(BOOL)arg1 ;
@end

