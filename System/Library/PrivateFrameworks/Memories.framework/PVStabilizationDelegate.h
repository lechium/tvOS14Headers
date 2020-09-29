/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:24 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PVStabilizationDelegate <NSObject>
@optional
-(void)loadWithUserContext:(id)arg1;
-(void)unloadWithUserContext:(id)arg1;
-(BOOL)didStabilize:(id)arg1 time:(SCD_Struct_Pr3)arg2 frameData:(CVBufferRef)arg3 inputSize:(CGSize)arg4 cleanAperture:(CGRect)arg5 centeredCleanAperture:(CGRect)arg6 cleanApertureOriginZero:(CGRect)arg7 cropRect:(CGRect)arg8 homography:(/*function pointer*/void*)arg9 homographyMatrix4x4:(/*function pointer*/void*)arg10 userContext:(id)arg11;

@required
-(id)timedStabilizationConfigForTime:(SCD_Struct_Pr3)arg1 frameData:(CVBufferRef)arg2 userContext:(id)arg3;

@end

