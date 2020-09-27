/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTPlatform.h>

@class NSUserDefaults, RTNanoRegistry;

@interface RTPlatform_MobileGestalt : RTPlatform {

	NSUserDefaults* _userDefaults;
	RTNanoRegistry* _nanoRegistry;

}
-(id)init;
-(id)systemVersion;
-(id)productType;
-(id)deviceClass;
-(BOOL)internalInstall;
-(BOOL)supportsMultiUser;
-(BOOL)supportsCoreRoutineCapability;
-(BOOL)isTinkerPaired;
-(id)userAssignedDeviceName;
-(id)systemModel;
-(BOOL)iPhonePlatform;
-(BOOL)watchPlatform;
-(BOOL)macOSPlatform;
-(BOOL)simulatorPlatform;
-(BOOL)lowEndHardware;
-(BOOL)iPhoneDevice;
-(BOOL)supportsScenarioTriggers;
-(id)initWithNanoRegistry:(id)arg1 userDefaults:(id)arg2 ;
@end
