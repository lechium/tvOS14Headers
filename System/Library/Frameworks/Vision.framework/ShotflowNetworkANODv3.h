/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/ShotflowNetworkANODBase.h>

@interface ShotflowNetworkANODv3 : ShotflowNetworkANODBase
+(float)inputScale;
+(id)modelName;
+(id)inputLayerName;
+(BOOL)hasPose;
+(const vector<unsigned long, std::__1::allocator<unsigned long> >*)importantClasses;
+(unsigned long long)mumberPosClasses;
+(BOOL)inputBGR;
+(tuple<float, float, float>)inputBiasRGB;
-(id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5 ;
-(void)initializeBuffers;
-(int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)processVImage:(vImage_Buffer*)arg1 inputIsBGR:(BOOL)arg2 ;
@end

