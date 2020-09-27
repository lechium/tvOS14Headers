/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureInputInternal, NSArray;

@interface AVCaptureInput : NSObject {

	AVCaptureInputInternal* _inputInternal;

}

@property (nonatomic,readonly) NSArray * ports; 
+(void)initialize;
-(void)dealloc;
-(id)session;
-(void)setSession:(id)arg1 ;
-(OpaqueCMClockRef)clock;
-(NSArray *)ports;
-(id)initSubclass;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(/*^block*/id)arg1 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(id)videoDevice;
@end
