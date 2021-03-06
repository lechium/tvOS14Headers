/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class CMMotionManager, CLLocationManager, NSTimer;

@interface WebCoreMotionManager : NSObject {

	CMMotionManager* m_motionManager;
	CLLocationManager* m_locationManager;
	WeakHashSet<WebCore::MotionManagerClient, WTF::EmptyCounter>* m_deviceMotionClients;
	WeakHashSet<WebCore::MotionManagerClient, WTF::EmptyCounter>* m_deviceOrientationClients;
	NSTimer* m_updateTimer;
	BOOL m_gyroAvailable;
	BOOL m_headingAvailable;
	BOOL m_initialized;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)update;
-(BOOL)headingAvailable;
-(void)addMotionClient:(MotionManagerClient*)arg1 ;
-(void)removeMotionClient:(MotionManagerClient*)arg1 ;
-(void)addOrientationClient:(MotionManagerClient*)arg1 ;
-(void)removeOrientationClient:(MotionManagerClient*)arg1 ;
-(void)initializeOnMainThread;
-(void)checkClientStatus;
-(void)sendMotionData:(id)arg1 withHeading:(id)arg2 ;
-(void)sendAccelerometerData:(id)arg1 ;
-(BOOL)gyroAvailable;
@end

