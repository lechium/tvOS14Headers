/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:44 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BurstFaceStat : NSObject <NSCopying> {

	BOOL leftEyeOpen;
	BOOL rightEyeOpen;
	BOOL smiling;
	BOOL foundByFaceCore;
	BOOL hasLeftEye;
	BOOL hasRightEye;
	BOOL hasRollAngle;
	BOOL hasYawAngle;
	BOOL smallFace;
	BOOL _hasPitchAngle;
	BOOL _isSyncedWithImage;
	float normalizedSigma;
	int faceId;
	int hwFaceId;
	int framesSinceLast;
	float focusScore;
	float normalizedFocusScore;
	float faceScore;
	float leftEyeBlinkScore;
	float rightEyeBlinkScore;
	float smileScore;
	int FCRLeftEyeFeaturesOffset;
	int FCRRightEyeFeaturesOffset;
	int FCRSmileFeaturesOffset;
	int FCRBlinkFeaturesSize;
	int FCRSmileFeaturesSize;
	float rollAngle;
	float yawAngle;
	float _pitchAngle;
	NSMutableArray* FCRSmileAndBlinkFeatures;
	double timestamp;
	CGRect faceRect;
	CGRect normalizedFaceRect;
	CGRect leftEyeRect;
	CGRect rightEyeRect;
	CGRect _hwFaceRect;

}

@property (assign) BOOL leftEyeOpen; 
@property (assign) BOOL rightEyeOpen; 
@property (assign) BOOL smiling; 
@property (assign) float leftEyeBlinkScore; 
@property (assign) float rightEyeBlinkScore; 
@property (assign) float smileScore; 
@property (assign) BOOL hasLeftEye; 
@property (assign) BOOL hasRightEye; 
@property (assign) BOOL foundByFaceCore; 
@property (assign) CGRect faceRect; 
@property (assign) CGRect normalizedFaceRect; 
@property (assign) int faceId; 
@property (assign) int framesSinceLast; 
@property (assign) float focusScore; 
@property (assign) float faceScore; 
@property (assign) CGRect leftEyeRect; 
@property (assign) CGRect rightEyeRect; 
@property (assign) int FCRLeftEyeFeaturesOffset; 
@property (assign) int FCRRightEyeFeaturesOffset; 
@property (assign) int FCRSmileFeaturesOffset; 
@property (assign) int FCRBlinkFeaturesSize; 
@property (assign) int FCRSmileFeaturesSize; 
@property (retain) NSMutableArray * FCRSmileAndBlinkFeatures; 
@property (assign) int hwFaceId; 
@property (assign) CGRect hwFaceRect;                                      //@synthesize hwFaceRect=_hwFaceRect - In the implementation block
@property (assign) float normalizedFocusScore; 
@property (assign) float normalizedSigma; 
@property (assign) BOOL hasRollAngle; 
@property (assign) BOOL hasYawAngle; 
@property (assign) BOOL hasPitchAngle;                                     //@synthesize hasPitchAngle=_hasPitchAngle - In the implementation block
@property (assign) float rollAngle; 
@property (assign) float yawAngle; 
@property (assign) float pitchAngle;                                       //@synthesize pitchAngle=_pitchAngle - In the implementation block
@property (assign) double timestamp; 
@property (assign) BOOL isSyncedWithImage;                                 //@synthesize isSyncedWithImage=_isSyncedWithImage - In the implementation block
@property (assign) BOOL smallFace; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(int)faceId;
-(void)setFaceId:(int)arg1 ;
-(CGRect)faceRect;
-(void)setFaceRect:(CGRect)arg1 ;
-(int)framesSinceLast;
-(void)setFramesSinceLast:(int)arg1 ;
-(void)setHwFaceId:(int)arg1 ;
-(int)hwFaceId;
-(CGRect)hwFaceRect;
-(void)setHwFaceRect:(CGRect)arg1 ;
-(BOOL)hasLeftEye;
-(BOOL)hasRightEye;
-(BOOL)isSyncedWithImage;
-(BOOL)hasRollAngle;
-(float)rollAngle;
-(BOOL)hasYawAngle;
-(float)yawAngle;
-(CGRect)leftEyeRect;
-(float)leftEyeBlinkScore;
-(CGRect)rightEyeRect;
-(float)rightEyeBlinkScore;
-(float)smileScore;
-(void)setNormalizedFaceRect:(CGRect)arg1 ;
-(void)setFoundByFaceCore:(BOOL)arg1 ;
-(void)setHasLeftEye:(BOOL)arg1 ;
-(void)setHasRightEye:(BOOL)arg1 ;
-(void)setLeftEyeOpen:(BOOL)arg1 ;
-(void)setRightEyeOpen:(BOOL)arg1 ;
-(void)setSmiling:(BOOL)arg1 ;
-(void)setLeftEyeBlinkScore:(float)arg1 ;
-(void)setRightEyeBlinkScore:(float)arg1 ;
-(void)setSmileScore:(float)arg1 ;
-(void)setLeftEyeRect:(CGRect)arg1 ;
-(void)setRightEyeRect:(CGRect)arg1 ;
-(BOOL)leftEyeOpen;
-(BOOL)rightEyeOpen;
-(BOOL)foundByFaceCore;
-(void)setFocusScore:(float)arg1 ;
-(float)focusScore;
-(void)setNormalizedFocusScore:(float)arg1 ;
-(void)setNormalizedSigma:(float)arg1 ;
-(void)setHasRollAngle:(BOOL)arg1 ;
-(void)setRollAngle:(float)arg1 ;
-(void)setHasYawAngle:(BOOL)arg1 ;
-(void)setYawAngle:(float)arg1 ;
-(void)setIsSyncedWithImage:(BOOL)arg1 ;
-(CGRect)normalizedFaceRect;
-(BOOL)smiling;
-(BOOL)smallFace;
-(int)FCRLeftEyeFeaturesOffset;
-(int)FCRRightEyeFeaturesOffset;
-(int)FCRSmileFeaturesOffset;
-(int)FCRBlinkFeaturesSize;
-(int)FCRSmileFeaturesSize;
-(float)normalizedFocusScore;
-(float)normalizedSigma;
-(float)faceScore;
-(id)initWithFaceStat:(id)arg1 ;
-(void)setFaceScore:(float)arg1 ;
-(void)setFCRLeftEyeFeaturesOffset:(int)arg1 ;
-(void)setFCRRightEyeFeaturesOffset:(int)arg1 ;
-(void)setFCRSmileFeaturesOffset:(int)arg1 ;
-(void)setFCRBlinkFeaturesSize:(int)arg1 ;
-(void)setFCRSmileFeaturesSize:(int)arg1 ;
-(NSMutableArray *)FCRSmileAndBlinkFeatures;
-(void)setFCRSmileAndBlinkFeatures:(NSMutableArray *)arg1 ;
-(void)setSmallFace:(BOOL)arg1 ;
-(BOOL)hasPitchAngle;
-(void)setHasPitchAngle:(BOOL)arg1 ;
-(float)pitchAngle;
-(void)setPitchAngle:(float)arg1 ;
@end

