/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySync.framework/AirPlaySync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AirPlaySync/AirPlaySync-Structs.h>
@interface APSyncMediaRemoteATVVolumeControlListener : NSObject {

	const void* _callbackContext;
	/*function pointer*/void* _volumeControlTypeDidChange;

}
-(void)dealloc;
-(id)initWithContextAndCallback:(/*function pointer*/void*)arg1 callbackContext:(const void*)arg2 ;
-(void)_volumeControlTypeChanged:(CFDictionaryRef)arg1 ;
@end

