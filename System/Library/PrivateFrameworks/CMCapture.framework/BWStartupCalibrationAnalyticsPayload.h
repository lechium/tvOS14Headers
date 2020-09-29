/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:41 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString;

@interface BWStartupCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	NSString* _portType;
	float _accelStandardDeviation;
	float _gyroStandardDeviation;
	float _sessionOffset;
	float _deltaOffset;
	int _apsVoltage;
	float _maxAcceleration;
	float _deltaAcceleration;
	BOOL _headroomErrorOccurred;
	BOOL _convergeErrorOccurred;
	BOOL _motionErrorOccurred;
	BOOL _confidenceErrorOccurred;
	BOOL _largeOffsetErrorOccurred;
	BOOL _saturationErrorOccurred;
	BOOL _success;
	BOOL _gcolEntry;
	BOOL _closedLoopEntry;

}

@property (nonatomic,retain) NSString * portType;                        //@synthesize portType=_portType - In the implementation block
@property (assign,nonatomic) float accelStandardDeviation;               //@synthesize accelStandardDeviation=_accelStandardDeviation - In the implementation block
@property (assign,nonatomic) float gyroStandardDeviation;                //@synthesize gyroStandardDeviation=_gyroStandardDeviation - In the implementation block
@property (assign,nonatomic) float sessionOffset;                        //@synthesize sessionOffset=_sessionOffset - In the implementation block
@property (assign,nonatomic) float deltaOffset;                          //@synthesize deltaOffset=_deltaOffset - In the implementation block
@property (assign,nonatomic) int apsVoltage;                             //@synthesize apsVoltage=_apsVoltage - In the implementation block
@property (assign,nonatomic) float maxAcceleration;                      //@synthesize maxAcceleration=_maxAcceleration - In the implementation block
@property (assign,nonatomic) float deltaAcceleration;                    //@synthesize deltaAcceleration=_deltaAcceleration - In the implementation block
@property (assign,nonatomic) BOOL headroomErrorOccurred;                 //@synthesize headroomErrorOccurred=_headroomErrorOccurred - In the implementation block
@property (assign,nonatomic) BOOL convergeErrorOccurred;                 //@synthesize convergeErrorOccurred=_convergeErrorOccurred - In the implementation block
@property (assign,nonatomic) BOOL motionErrorOccurred;                   //@synthesize motionErrorOccurred=_motionErrorOccurred - In the implementation block
@property (assign,nonatomic) BOOL confidenceErrorOccurred;               //@synthesize confidenceErrorOccurred=_confidenceErrorOccurred - In the implementation block
@property (assign,nonatomic) BOOL largeOffsetErrorOccurred;              //@synthesize largeOffsetErrorOccurred=_largeOffsetErrorOccurred - In the implementation block
@property (assign,nonatomic) BOOL saturationErrorOccurred;               //@synthesize saturationErrorOccurred=_saturationErrorOccurred - In the implementation block
@property (assign,nonatomic) BOOL success;                               //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL gcolEntry;                             //@synthesize gcolEntry=_gcolEntry - In the implementation block
@property (assign,nonatomic) BOOL closedLoopEntry;                       //@synthesize closedLoopEntry=_closedLoopEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)reset;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(NSString *)portType;
-(id)eventName;
-(void)setMaxAcceleration:(float)arg1 ;
-(float)maxAcceleration;
-(id)eventDictionary;
-(void)setPortType:(NSString *)arg1 ;
-(float)accelStandardDeviation;
-(void)setAccelStandardDeviation:(float)arg1 ;
-(float)gyroStandardDeviation;
-(void)setGyroStandardDeviation:(float)arg1 ;
-(float)sessionOffset;
-(void)setSessionOffset:(float)arg1 ;
-(float)deltaOffset;
-(void)setDeltaOffset:(float)arg1 ;
-(int)apsVoltage;
-(void)setApsVoltage:(int)arg1 ;
-(float)deltaAcceleration;
-(void)setDeltaAcceleration:(float)arg1 ;
-(BOOL)headroomErrorOccurred;
-(void)setHeadroomErrorOccurred:(BOOL)arg1 ;
-(BOOL)convergeErrorOccurred;
-(void)setConvergeErrorOccurred:(BOOL)arg1 ;
-(BOOL)motionErrorOccurred;
-(void)setMotionErrorOccurred:(BOOL)arg1 ;
-(BOOL)confidenceErrorOccurred;
-(void)setConfidenceErrorOccurred:(BOOL)arg1 ;
-(BOOL)largeOffsetErrorOccurred;
-(void)setLargeOffsetErrorOccurred:(BOOL)arg1 ;
-(BOOL)saturationErrorOccurred;
-(void)setSaturationErrorOccurred:(BOOL)arg1 ;
-(BOOL)gcolEntry;
-(void)setGcolEntry:(BOOL)arg1 ;
-(BOOL)closedLoopEntry;
-(void)setClosedLoopEntry:(BOOL)arg1 ;
@end

