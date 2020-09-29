/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@interface BWVideoOrientationTimeMachineItem : NSObject {

	short _exifOrientation;
	double _ptsSeconds;

}

@property (assign,nonatomic) double ptsSeconds;                  //@synthesize ptsSeconds=_ptsSeconds - In the implementation block
@property (assign,nonatomic) short exifOrientation;              //@synthesize exifOrientation=_exifOrientation - In the implementation block
-(id)description;
-(short)exifOrientation;
-(void)setExifOrientation:(short)arg1 ;
-(id)initWithPTSSeconds:(double)arg1 exifOrientation:(short)arg2 ;
-(double)ptsSeconds;
-(void)setPtsSeconds:(double)arg1 ;
@end

