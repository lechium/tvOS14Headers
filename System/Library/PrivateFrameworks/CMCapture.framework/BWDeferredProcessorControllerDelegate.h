/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol BWDeferredProcessorControllerDelegate <BWStillImageProcessorControllerDelegate>
@required
-(void)processorController:(id)arg1 didDetermineReferenceFrame:(opaqueCMSampleBufferRef)arg2 processorInput:(id)arg3 err:(int)arg4;
-(void)processorController:(id)arg1 didProcessInferencesForSkinMask:(const void*)arg2 skyMask:(const void*)arg3 personMask:(const void*)arg4 faceObservations:(id)arg5 processorInput:(id)arg6 err:(int)arg7;

@end

